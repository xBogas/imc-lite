// ****************************************************************
// Copyright 2024 Universidade do Porto - Faculdade de Engenharia *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)        *
// Departamento de Engenharia Electrotécnica e de Computadores    *
// ****************************************************************
// Author: João Bogas                                             *
// ****************************************************************

.syntax unified
.cpu cortex-m7

// Initial scheduler jumpstart
.thumb_func
.global sched_jump
.type sched_jump, %function
sched_jump:
    mov         r4, #0x02
    msr         CONTROL, r4
    msr         psp, r0
    pop         {r8-r11}
    pop         {r4-r7}
    pop         {r0-r3}
    pop         {r12, lr}
    pop         {pc}

.extern sched

//TODO implement stack overflow check
.thumb_func
.global PendSV_Handler
.type PendSV_Handler, %function
PendSV_Handler:
    cpsid       i                   // disable interrupts
    ldr         r3,  =sched         // load sched struct
    ldmia       r3!, {r1, r2}       // load thread run, and next

    // Save the context of the current task
    mrs         r0, psp             // get sp
    subs        r0, r0, #32         // add space for R4 ... R11
    str         r0, [r1]            // save sp

    // Save registers
    stmia       r0!, {r4-r7}        // save registers r8 .. r11
    mov         r4, r8              // move registers to be saved
    mov         r5, r9 
    mov         r6, r10
    mov         r7, r11
    stmia       r0!, {r4-r7}        // save registers r4 .. r7

    // Prepate next task
    ldr         r0, [r2]            // load sp
    adds        r0, r0, #16         // adjust addr

    // Loadregisters for the next task
    ldmia       r0!, {r4-r7}        // restore registers r8 .. r11
    mov         r8, r4
    mov         r9, r5
    mov         r10, r6
    mov         r11, r7
    msr         psp, r0             // Update psp
    subs        r0, r0, #32         // adjust addr
    ldmia       r0!, {r4-r7}        // restore registers r4 .. r7

    // Swap running threads
    subs        r3, r3, #8
    str         r1, [r3, #4]        // Update next thread
    str         r2, [r3]            // Update running thread
    cpsie       i                   // enable interrupts
    bx          lr                  // return

// Super Visor Call handler
.thumb_func
.global SVC_Handler
.type SVC_Handler, %function
SVC_Handler:
    mrs         r1, psp             // Get the current value of the PSP
    ldr         r0, [r1, #24]       // Get the stacked PC value from the stack
    ldrb.w      r0, [r0, #-2]       // Load the halfword at address (PC - 2) into R0
    cmp         r0, #2              // Compare SVC number to 2
    bhi         exit_SVC            // If the SVC number is greater than 2, exit
    tbb         [pc, r0]            // Branch table
    .byte       (svc_0-.)/2, (svc_1-.-1)/2  // Address offsets for SVC numbers 0 and 1
svc_0:
    b.w enter_idle
svc_1:
    b.w leave_idle
exit_SVC:
    bx          lr

// Must be in interrupt mode
.thumb_func
.global enter_idle
.type enter_idle, %function
enter_idle:
    ldr         r3,  =sched         // load thread status
    ldmia       r3!, {r1, r2}       // load thread run, and next

    // Save the context of the current task
    mrs         r0, psp             // get sp
    subs        r0, r0, #32         // add space for R4 ... R11
    str         r0, [r1]            // save sp

    // Save registers
    stmia       r0!, {r4-r7}        // save registers r8 .. r11
    mov         r4, r8              // move registers to be saved
    mov         r5, r9 
    mov         r6, r10
    mov         r7, r11
    stmia       r0!, {r4-r7}        // save registers r4 .. r7

    // Swap running threads
    subs        r3, r3, #8
    mov         r2, #0              // Set next thread to idle (null)
    str         r2, [r3]            // Update running thread

    ldr         r0, =idle_frame     // load idle thread
    msr         psp, r0             // Update psp
    bx          lr                  // return

.extern idle_frame

// Must be in interrupt mode
.thumb_func
.global leave_idle
.type leave_idle, %function
leave_idle:
    ldr         r3,  =sched         // load thread status
    ldmia       r3!, {r1, r2}       // load thread run, and next

    // Prepate next task
    ldr         r0, [r2]            // load sp
    adds        r0, r0, #16         // adjust addr

    // Load registers for the next task
    ldmia       r0!, {r4-r7}        // restore registers r8 .. r11
    mov         r8, r4
    mov         r9, r5
    mov         r10, r6
    mov         r11, r7
    msr         psp, r0             // Update psp
    subs        r0, r0, #32         // adjust addr
    ldmia       r0!, {r4-r7}        // restore registers r4 .. r7

    // Swap running threads
    subs        r3, r3, #8          // Set r3 to sched address
    str         r2, [r3]            // Update running thread
    bx          lr                  // return

.thumb_func
.global idle_thread
.type idle_thread, %function
idle_thread:
    wfi
    b           idle_thread