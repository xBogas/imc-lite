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
    ldr         r3, =sched          // load sched struct
    ldm         r3, {r1, r2}        // load thread run, and next

    // Save the context of the current task
    mrs         r0, psp             // get sp
    // Decrements the sp and saves the registers
    stmdb       r0!, {r4-r11}       // save registers r4 .. r11

//#if (FPU_PRESENT != 0)
    tst         lr, #0x10           // check if the FPU is used
    it          eq
    vstmdbeq    r0!, {s16-s31}      // save FPU registers
    strb        lr, [r1, #8]        // save FPU flag //TODO: Export this offset to define
//#endif

    str         r0, [r1]            // save sp

    // Prepate next task
    ldr         r0, [r2]            // load sp
//#if (FPU_PRESENT != 0)
    ldrsb       lr, [r2, #8]        // load FPU flag
    tst         lr, #0x10           // check if the FPU is used
    it          eq
    vldmiaeq    r0!, {s16-s31}      // load FPU registers
//#endif
    ldmia       r0!, {r4-r11}       // load registers r4 .. r11
    msr         psp, r0             // Update psp

    // Swap running threads
    str         r1, [r3, #4]        // Update next thread
    str         r2, [r3]            // Update running thread
    cpsie       i                   // enable interrupts
    bx          lr                  // return

.thumb_func
.global idle_thread
.type idle_thread, %function
idle_thread:
    wfi
    b           idle_thread