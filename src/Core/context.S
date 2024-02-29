.syntax unified
.cpu cortex-m7

//FIXME change to svcall
.thumb_func
.global sched_jump
.type sched_jump, %function
sched_jump:
    mov     r4, #0x02
    msr     CONTROL, r4
    msr     psp, r0
    pop     {r8-r11}
    pop     {r4-r7}
    pop     {r0-r3}
    pop     {r12, lr}
    pop     {pc}

.extern th_status
.extern sp_offset

//TODO implement stack overflow check
.thumb_func
.global PendSV_Handler
.type PendSV_Handler, %function
PendSV_Handler:
    cpsid   i                   // disable interrupts
    push    {lr}                // save lr
    ldr     r3,  =th_status     // load thread status
    ldr     r12, =sp_offset     // load sp offset
    ldr     r12, [r12]          // get sp offset
    ldmia   r3!, {r1, r2}       // load thread run, and next

    // Save the context of the current task
    mrs     r0, psp             // get sp
    subs    r0, r0, #32         // add space for R4 ... R11
    str     r0, [r1, r12]            // save sp

    // Save registers
    stmia   r0!, {r4-r7}        // save registers r8 .. r11
    mov     r4, r8              // move registers to be saved
    mov     r5, r9 
    mov     r6, r10
    mov     r7, r11
    stmia   r0!, {r4-r7}        // save registers r4 .. r7

    // Prepate next task
    ldr     r0, [r2, r12]            // load sp
    adds    r0, r0, #16         // adjust addr

    // Load registers for the next task
    ldmia   r0!, {r4-r7}        // restore registers r8 .. r11
    mov     r8, r4
    mov     r9, r5
    mov     r10, r6
    mov     r11, r7
    msr     psp, r0             // Update psp
    subs    r0, r0, #32         // adjust addr
    ldmia   r0!, {r4-r7}        // restore registers r4 .. r7

    // Swap running threads
    subs    r3, r3, #8
    str     r1, [r3, #4]        // Update next thread
    str     r2, [r3]            // Update running thread
    cpsie   i                   // enable interrupts
    pop     {pc}                // return

.size PendSV_Handler, .-PendSV_Handler
