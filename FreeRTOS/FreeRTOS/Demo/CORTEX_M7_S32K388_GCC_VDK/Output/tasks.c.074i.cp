
IPA constant propagation start:
Determining dynamic type for call: uxArraySize_36 = uxTaskGetSystemState (pxTaskStatusArray_34, uxArraySize_32, 0B);
  Starting walk at: uxArraySize_36 = uxTaskGetSystemState (pxTaskStatusArray_34, uxArraySize_32, 0B);
  instance pointer: pxTaskStatusArray_34  Outer instance pointer: pxTaskStatusArray_34 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:pxTaskStatusArray_34 = pvPortMalloc (_2);
Determining dynamic type for call: uxArraySize_36 = uxTaskGetSystemState (pxTaskStatusArray_34, uxArraySize_32, 0B);
  Starting walk at: uxArraySize_36 = uxTaskGetSystemState (pxTaskStatusArray_34, uxArraySize_32, 0B);
  instance pointer: 0B  Outer instance pointer: 0B offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:pxTaskStatusArray_34 = pvPortMalloc (_2);
Determining dynamic type for call: pcWriteBuffer_39 = prvWriteNameToBuffer (pcWriteBuffer_18, _10);
  Starting walk at: pcWriteBuffer_39 = prvWriteNameToBuffer (pcWriteBuffer_18, _10);
  instance pointer: pcWriteBuffer_18  Outer instance pointer: pcWriteBuffer_18 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:uxArraySize_36 = uxTaskGetSystemState (pxTaskStatusArray_34, uxArraySize_32, 0B);
  Function call may change dynamic type:pxTaskStatusArray_34 = pvPortMalloc (_2);
  Function call may change dynamic type:pcWriteBuffer_39 = prvWriteNameToBuffer (pcWriteBuffer_18, _10);
  Function call may change dynamic type:iSnprintfReturnValue_42 = snprintf (pcWriteBuffer_39, _12, "\t%c\t%u\t%u\t%u\r\n", _13, _14, _15, _16);
Determining dynamic type for call: pcWriteBuffer_39 = prvWriteNameToBuffer (pcWriteBuffer_18, _10);
  Starting walk at: pcWriteBuffer_39 = prvWriteNameToBuffer (pcWriteBuffer_18, _10);
  instance pointer: _10  Outer instance pointer: _10 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:uxArraySize_36 = uxTaskGetSystemState (pxTaskStatusArray_34, uxArraySize_32, 0B);
  Function call may change dynamic type:pxTaskStatusArray_34 = pvPortMalloc (_2);
  Function call may change dynamic type:pcWriteBuffer_39 = prvWriteNameToBuffer (pcWriteBuffer_18, _10);
  Function call may change dynamic type:iSnprintfReturnValue_42 = snprintf (pcWriteBuffer_39, _12, "\t%c\t%u\t%u\t%u\r\n", _13, _14, _15, _16);
Determining dynamic type for call: uxReturn_6 = prvTaskCheckFreeStackSpace (pucEndOfStack_5);
  Starting walk at: uxReturn_6 = prvTaskCheckFreeStackSpace (pucEndOfStack_5);
  instance pointer: pucEndOfStack_5  Outer instance pointer: pucEndOfStack_5 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: vTaskGetInfo (pxTCB_13, _3, 1, eState_15(D));
  Starting walk at: vTaskGetInfo (pxTCB_13, _3, 1, eState_15(D));
  instance pointer: pxTCB_13  Outer instance pointer: pxTCB_13 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:vTaskGetInfo (pxTCB_13, _3, 1, eState_15(D));
Determining dynamic type for call: vTaskGetInfo (pxTCB_13, _3, 1, eState_15(D));
  Starting walk at: vTaskGetInfo (pxTCB_13, _3, 1, eState_15(D));
  instance pointer: _3  Outer instance pointer: _3 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:vTaskGetInfo (pxTCB_13, _3, 1, eState_15(D));
Determining dynamic type for call: _10 = eTaskGetState (iftmp.122_14);
  Starting walk at: _10 = eTaskGetState (iftmp.122_14);
  instance pointer: iftmp.122_14  Outer instance pointer: iftmp.122_14 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _12 = prvTaskCheckFreeStackSpace (_11);
  Starting walk at: _12 = prvTaskCheckFreeStackSpace (_11);
  instance pointer: _11  Outer instance pointer: _11 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:vPortExitCritical ();
  Function call may change dynamic type:vPortEnterCritical ();
  Function call may change dynamic type:xTaskResumeAll ();
  Function call may change dynamic type:vTaskSuspendAll ();
  Function call may change dynamic type:_10 = eTaskGetState (iftmp.122_14);
Determining dynamic type for call: prvDeleteTCB (pxTCB_11);
  Starting walk at: prvDeleteTCB (pxTCB_11);
  instance pointer: pxTCB_11  Outer instance pointer: pxTCB_11 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:vPortExitCritical ();
  Function call may change dynamic type:uxListRemove (_2);
  Function call may change dynamic type:vPortEnterCritical ();
  Function call may change dynamic type:prvDeleteTCB (pxTCB_11);
  Function call may change dynamic type:vPortExitCritical ();
  Function call may change dynamic type:uxListRemove (_2);
  Function call may change dynamic type:vPortEnterCritical ();
Determining dynamic type for call: vTaskInternalSetTimeOutState (pxTimeOut_11(D));
  Starting walk at: vTaskInternalSetTimeOutState (pxTimeOut_11(D));
  instance pointer: pxTimeOut_11(D)  Outer instance pointer: pxTimeOut_11(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:vPortEnterCritical ();
Determining dynamic type for call: _1 = eTaskGetState (xTask_18(D));
  Starting walk at: _1 = eTaskGetState (xTask_18(D));
  instance pointer: xTask_18(D)  Outer instance pointer: xTask_18(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:vTaskSuspendAll ();
Determining dynamic type for call: _5 = prvListTasksWithinSingleList (_3, _4, 1);
  Starting walk at: _5 = prvListTasksWithinSingleList (_3, _4, 1);
  instance pointer: _3  Outer instance pointer: _3 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:vTaskSuspendAll ();
  Function call may change dynamic type:_5 = prvListTasksWithinSingleList (_3, _4, 1);
Determining dynamic type for call: _5 = prvListTasksWithinSingleList (_3, _4, 1);
  Starting walk at: _5 = prvListTasksWithinSingleList (_3, _4, 1);
  instance pointer: _4  Outer instance pointer: &pxReadyTasksLists[uxQueue_29] offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:vTaskSuspendAll ();
  Function call may change dynamic type:_5 = prvListTasksWithinSingleList (_3, _4, 1);
Determining dynamic type for call: _9 = prvListTasksWithinSingleList (_7, pxDelayedTaskList.75_8, 2);
  Starting walk at: _9 = prvListTasksWithinSingleList (_7, pxDelayedTaskList.75_8, 2);
  instance pointer: _7  Outer instance pointer: _7 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_5 = prvListTasksWithinSingleList (_3, _4, 1);
  Function call may change dynamic type:vTaskSuspendAll ();
  Function call may change dynamic type:_5 = prvListTasksWithinSingleList (_3, _4, 1);
Determining dynamic type for call: _9 = prvListTasksWithinSingleList (_7, pxDelayedTaskList.75_8, 2);
  Starting walk at: _9 = prvListTasksWithinSingleList (_7, pxDelayedTaskList.75_8, 2);
  instance pointer: pxDelayedTaskList.75_8  Outer instance pointer: pxDelayedTaskList.75_8 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_5 = prvListTasksWithinSingleList (_3, _4, 1);
  Function call may change dynamic type:vTaskSuspendAll ();
  Function call may change dynamic type:_5 = prvListTasksWithinSingleList (_3, _4, 1);
Determining dynamic type for call: _13 = prvListTasksWithinSingleList (_11, pxOverflowDelayedTaskList.76_12, 2);
  Starting walk at: _13 = prvListTasksWithinSingleList (_11, pxOverflowDelayedTaskList.76_12, 2);
  instance pointer: _11  Outer instance pointer: _11 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_9 = prvListTasksWithinSingleList (_7, pxDelayedTaskList.75_8, 2);
  Function call may change dynamic type:_5 = prvListTasksWithinSingleList (_3, _4, 1);
  Function call may change dynamic type:vTaskSuspendAll ();
  Function call may change dynamic type:_5 = prvListTasksWithinSingleList (_3, _4, 1);
Determining dynamic type for call: _13 = prvListTasksWithinSingleList (_11, pxOverflowDelayedTaskList.76_12, 2);
  Starting walk at: _13 = prvListTasksWithinSingleList (_11, pxOverflowDelayedTaskList.76_12, 2);
  instance pointer: pxOverflowDelayedTaskList.76_12  Outer instance pointer: pxOverflowDelayedTaskList.76_12 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_9 = prvListTasksWithinSingleList (_7, pxDelayedTaskList.75_8, 2);
  Function call may change dynamic type:_5 = prvListTasksWithinSingleList (_3, _4, 1);
  Function call may change dynamic type:vTaskSuspendAll ();
  Function call may change dynamic type:_5 = prvListTasksWithinSingleList (_3, _4, 1);
Determining dynamic type for call: _16 = prvListTasksWithinSingleList (_15, &xTasksWaitingTermination, 4);
  Starting walk at: _16 = prvListTasksWithinSingleList (_15, &xTasksWaitingTermination, 4);
  instance pointer: _15  Outer instance pointer: _15 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_13 = prvListTasksWithinSingleList (_11, pxOverflowDelayedTaskList.76_12, 2);
  Function call may change dynamic type:_9 = prvListTasksWithinSingleList (_7, pxDelayedTaskList.75_8, 2);
  Function call may change dynamic type:_5 = prvListTasksWithinSingleList (_3, _4, 1);
  Function call may change dynamic type:vTaskSuspendAll ();
  Function call may change dynamic type:_5 = prvListTasksWithinSingleList (_3, _4, 1);
Determining dynamic type for call: _16 = prvListTasksWithinSingleList (_15, &xTasksWaitingTermination, 4);
  Starting walk at: _16 = prvListTasksWithinSingleList (_15, &xTasksWaitingTermination, 4);
  instance pointer: &xTasksWaitingTermination  Outer instance pointer: xTasksWaitingTermination offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_13 = prvListTasksWithinSingleList (_11, pxOverflowDelayedTaskList.76_12, 2);
  Function call may change dynamic type:_9 = prvListTasksWithinSingleList (_7, pxDelayedTaskList.75_8, 2);
  Function call may change dynamic type:_5 = prvListTasksWithinSingleList (_3, _4, 1);
  Function call may change dynamic type:vTaskSuspendAll ();
  Function call may change dynamic type:_5 = prvListTasksWithinSingleList (_3, _4, 1);
Determining dynamic type for call: _19 = prvListTasksWithinSingleList (_18, &xSuspendedTaskList, 3);
  Starting walk at: _19 = prvListTasksWithinSingleList (_18, &xSuspendedTaskList, 3);
  instance pointer: _18  Outer instance pointer: _18 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_16 = prvListTasksWithinSingleList (_15, &xTasksWaitingTermination, 4);
  Function call may change dynamic type:_13 = prvListTasksWithinSingleList (_11, pxOverflowDelayedTaskList.76_12, 2);
  Function call may change dynamic type:_9 = prvListTasksWithinSingleList (_7, pxDelayedTaskList.75_8, 2);
  Function call may change dynamic type:_5 = prvListTasksWithinSingleList (_3, _4, 1);
  Function call may change dynamic type:vTaskSuspendAll ();
  Function call may change dynamic type:_5 = prvListTasksWithinSingleList (_3, _4, 1);
Determining dynamic type for call: _19 = prvListTasksWithinSingleList (_18, &xSuspendedTaskList, 3);
  Starting walk at: _19 = prvListTasksWithinSingleList (_18, &xSuspendedTaskList, 3);
  instance pointer: &xSuspendedTaskList  Outer instance pointer: xSuspendedTaskList offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_16 = prvListTasksWithinSingleList (_15, &xTasksWaitingTermination, 4);
  Function call may change dynamic type:_13 = prvListTasksWithinSingleList (_11, pxOverflowDelayedTaskList.76_12, 2);
  Function call may change dynamic type:_9 = prvListTasksWithinSingleList (_7, pxDelayedTaskList.75_8, 2);
  Function call may change dynamic type:_5 = prvListTasksWithinSingleList (_3, _4, 1);
  Function call may change dynamic type:vTaskSuspendAll ();
  Function call may change dynamic type:_5 = prvListTasksWithinSingleList (_3, _4, 1);
Determining dynamic type for call: pxTCB_16 = prvSearchForNameWithinSingleList (_2, pcNameToQuery_13(D));
  Starting walk at: pxTCB_16 = prvSearchForNameWithinSingleList (_2, pcNameToQuery_13(D));
  instance pointer: _2  Outer instance pointer: &pxReadyTasksLists[uxQueue_15] offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:vTaskSuspendAll ();
Determining dynamic type for call: pxTCB_16 = prvSearchForNameWithinSingleList (_2, pcNameToQuery_13(D));
  Starting walk at: pxTCB_16 = prvSearchForNameWithinSingleList (_2, pcNameToQuery_13(D));
  instance pointer: pcNameToQuery_13(D)  Outer instance pointer: pcNameToQuery_13(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:vTaskSuspendAll ();
Determining dynamic type for call: pxTCB_17 = prvSearchForNameWithinSingleList (pxDelayedTaskList.72_3, pcNameToQuery_13(D));
  Starting walk at: pxTCB_17 = prvSearchForNameWithinSingleList (pxDelayedTaskList.72_3, pcNameToQuery_13(D));
  instance pointer: pxDelayedTaskList.72_3  Outer instance pointer: pxDelayedTaskList.72_3 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:vTaskSuspendAll ();
Determining dynamic type for call: pxTCB_17 = prvSearchForNameWithinSingleList (pxDelayedTaskList.72_3, pcNameToQuery_13(D));
  Starting walk at: pxTCB_17 = prvSearchForNameWithinSingleList (pxDelayedTaskList.72_3, pcNameToQuery_13(D));
  instance pointer: pcNameToQuery_13(D)  Outer instance pointer: pcNameToQuery_13(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:vTaskSuspendAll ();
Determining dynamic type for call: pxTCB_18 = prvSearchForNameWithinSingleList (pxOverflowDelayedTaskList.73_4, pcNameToQuery_13(D));
  Starting walk at: pxTCB_18 = prvSearchForNameWithinSingleList (pxOverflowDelayedTaskList.73_4, pcNameToQuery_13(D));
  instance pointer: pxOverflowDelayedTaskList.73_4  Outer instance pointer: pxOverflowDelayedTaskList.73_4 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:vTaskSuspendAll ();
Determining dynamic type for call: pxTCB_18 = prvSearchForNameWithinSingleList (pxOverflowDelayedTaskList.73_4, pcNameToQuery_13(D));
  Starting walk at: pxTCB_18 = prvSearchForNameWithinSingleList (pxOverflowDelayedTaskList.73_4, pcNameToQuery_13(D));
  instance pointer: pcNameToQuery_13(D)  Outer instance pointer: pcNameToQuery_13(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:vTaskSuspendAll ();
Determining dynamic type for call: pxTCB_19 = prvSearchForNameWithinSingleList (&xSuspendedTaskList, pcNameToQuery_13(D));
  Starting walk at: pxTCB_19 = prvSearchForNameWithinSingleList (&xSuspendedTaskList, pcNameToQuery_13(D));
  instance pointer: &xSuspendedTaskList  Outer instance pointer: xSuspendedTaskList offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:vTaskSuspendAll ();
Determining dynamic type for call: pxTCB_19 = prvSearchForNameWithinSingleList (&xSuspendedTaskList, pcNameToQuery_13(D));
  Starting walk at: pxTCB_19 = prvSearchForNameWithinSingleList (&xSuspendedTaskList, pcNameToQuery_13(D));
  instance pointer: pcNameToQuery_13(D)  Outer instance pointer: pcNameToQuery_13(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:vTaskSuspendAll ();
Determining dynamic type for call: pxTCB_20 = prvSearchForNameWithinSingleList (&xTasksWaitingTermination, pcNameToQuery_13(D));
  Starting walk at: pxTCB_20 = prvSearchForNameWithinSingleList (&xTasksWaitingTermination, pcNameToQuery_13(D));
  instance pointer: &xTasksWaitingTermination  Outer instance pointer: xTasksWaitingTermination offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:vTaskSuspendAll ();
Determining dynamic type for call: pxTCB_20 = prvSearchForNameWithinSingleList (&xTasksWaitingTermination, pcNameToQuery_13(D));
  Starting walk at: pxTCB_20 = prvSearchForNameWithinSingleList (&xTasksWaitingTermination, pcNameToQuery_13(D));
  instance pointer: pcNameToQuery_13(D)  Outer instance pointer: pcNameToQuery_13(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:vTaskSuspendAll ();
Determining dynamic type for call: vTaskDelete (_1);
  Starting walk at: vTaskDelete (_1);
  instance pointer: _1  Outer instance pointer: _1 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_1 = xTimerGetTimerDaemonTaskHandle ();
Determining dynamic type for call: vTaskDelete (_2);
  Starting walk at: vTaskDelete (_2);
  instance pointer: _2  Outer instance pointer: _2 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:vTaskDelete (_1);
  Function call may change dynamic type:_1 = xTimerGetTimerDaemonTaskHandle ();
  Function call may change dynamic type:vTaskDelete (_2);
Determining dynamic type for call: xReturn_13 = xTaskCreate (prvIdleTask, &cIdleName, 90, 0B, 0, &MEM <struct tskTaskControlBlock *> [(void *)&xIdleTaskHandles]);
  Starting walk at: xReturn_13 = xTaskCreate (prvIdleTask, &cIdleName, 90, 0B, 0, &MEM <struct tskTaskControlBlock *> [(void *)&xIdleTaskHandles]);
  instance pointer: prvIdleTask  Outer instance pointer: prvIdleTask offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:xReturn_13 = xTaskCreate (prvIdleTask, &cIdleName, 90, 0B, 0, &MEM <struct tskTaskControlBlock *> [(void *)&xIdleTaskHandles]);
Determining dynamic type for call: xReturn_13 = xTaskCreate (prvIdleTask, &cIdleName, 90, 0B, 0, &MEM <struct tskTaskControlBlock *> [(void *)&xIdleTaskHandles]);
  Starting walk at: xReturn_13 = xTaskCreate (prvIdleTask, &cIdleName, 90, 0B, 0, &MEM <struct tskTaskControlBlock *> [(void *)&xIdleTaskHandles]);
  instance pointer: &cIdleName  Outer instance pointer: cIdleName offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:xReturn_13 = xTaskCreate (prvIdleTask, &cIdleName, 90, 0B, 0, &MEM <struct tskTaskControlBlock *> [(void *)&xIdleTaskHandles]);
Determining dynamic type for call: xReturn_13 = xTaskCreate (prvIdleTask, &cIdleName, 90, 0B, 0, &MEM <struct tskTaskControlBlock *> [(void *)&xIdleTaskHandles]);
  Starting walk at: xReturn_13 = xTaskCreate (prvIdleTask, &cIdleName, 90, 0B, 0, &MEM <struct tskTaskControlBlock *> [(void *)&xIdleTaskHandles]);
  instance pointer: 0B  Outer instance pointer: 0B offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:xReturn_13 = xTaskCreate (prvIdleTask, &cIdleName, 90, 0B, 0, &MEM <struct tskTaskControlBlock *> [(void *)&xIdleTaskHandles]);
Determining dynamic type for call: xReturn_13 = xTaskCreate (prvIdleTask, &cIdleName, 90, 0B, 0, &MEM <struct tskTaskControlBlock *> [(void *)&xIdleTaskHandles]);
  Starting walk at: xReturn_13 = xTaskCreate (prvIdleTask, &cIdleName, 90, 0B, 0, &MEM <struct tskTaskControlBlock *> [(void *)&xIdleTaskHandles]);
  instance pointer: &MEM <struct tskTaskControlBlock *> [(void *)&xIdleTaskHandles]  Outer instance pointer: xIdleTaskHandles offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:xReturn_13 = xTaskCreate (prvIdleTask, &cIdleName, 90, 0B, 0, &MEM <struct tskTaskControlBlock *> [(void *)&xIdleTaskHandles]);
Determining dynamic type for call: _1 = prvTaskIsTaskSuspended (xTaskToResume_20(D));
  Starting walk at: _1 = prvTaskIsTaskSuspended (xTaskToResume_20(D));
  instance pointer: xTaskToResume_20(D)  Outer instance pointer: xTaskToResume_20(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:vPortValidateInterruptPriority ();
Determining dynamic type for call: _2 = prvTaskIsTaskSuspended (xTaskToResume_16(D));
  Starting walk at: _2 = prvTaskIsTaskSuspended (xTaskToResume_16(D));
  instance pointer: xTaskToResume_16(D)  Outer instance pointer: xTaskToResume_16(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:vPortEnterCritical ();
Determining dynamic type for call: xReturn_8 = prvTaskIsTaskSuspended.part.0 (xTask_6(D));
  Starting walk at: xReturn_8 = prvTaskIsTaskSuspended.part.0 (xTask_6(D));
  instance pointer: xTask_6(D)  Outer instance pointer: xTask_6(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: eReturn_6 = eTaskGetState.part.0 (xTask_3(D));
  Starting walk at: eReturn_6 = eTaskGetState.part.0 (xTask_3(D));
  instance pointer: xTask_3(D)  Outer instance pointer: xTask_3(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: prvDeleteTCB (iftmp.12_15);
  Starting walk at: prvDeleteTCB (iftmp.12_15);
  instance pointer: iftmp.12_15  Outer instance pointer: iftmp.12_15 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:vPortExitCritical ();
  Function call may change dynamic type:prvResetNextTaskUnblockTime ();
  Function call may change dynamic type:uxListRemove (_1);
  Function call may change dynamic type:vPortEnterCritical ();
  Function call may change dynamic type:uxListRemove (_3);
Determining dynamic type for call: pxNewTCB_11 = prvCreateTask (pxTaskCode_4(D), pcName_5(D), uxStackDepth_6(D), pvParameters_7(D), uxPriority_8(D), pxCreatedTask_9(D));
  Starting walk at: pxNewTCB_11 = prvCreateTask (pxTaskCode_4(D), pcName_5(D), uxStackDepth_6(D), pvParameters_7(D), uxPriority_8(D), pxCreatedTask_9(D));
  instance pointer: pxTaskCode_4(D)  Outer instance pointer: pxTaskCode_4(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: pxNewTCB_11 = prvCreateTask (pxTaskCode_4(D), pcName_5(D), uxStackDepth_6(D), pvParameters_7(D), uxPriority_8(D), pxCreatedTask_9(D));
  Starting walk at: pxNewTCB_11 = prvCreateTask (pxTaskCode_4(D), pcName_5(D), uxStackDepth_6(D), pvParameters_7(D), uxPriority_8(D), pxCreatedTask_9(D));
  instance pointer: pcName_5(D)  Outer instance pointer: pcName_5(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: pxNewTCB_11 = prvCreateTask (pxTaskCode_4(D), pcName_5(D), uxStackDepth_6(D), pvParameters_7(D), uxPriority_8(D), pxCreatedTask_9(D));
  Starting walk at: pxNewTCB_11 = prvCreateTask (pxTaskCode_4(D), pcName_5(D), uxStackDepth_6(D), pvParameters_7(D), uxPriority_8(D), pxCreatedTask_9(D));
  instance pointer: pvParameters_7(D)  Outer instance pointer: pvParameters_7(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: pxNewTCB_11 = prvCreateTask (pxTaskCode_4(D), pcName_5(D), uxStackDepth_6(D), pvParameters_7(D), uxPriority_8(D), pxCreatedTask_9(D));
  Starting walk at: pxNewTCB_11 = prvCreateTask (pxTaskCode_4(D), pcName_5(D), uxStackDepth_6(D), pvParameters_7(D), uxPriority_8(D), pxCreatedTask_9(D));
  instance pointer: pxCreatedTask_9(D)  Outer instance pointer: pxCreatedTask_9(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: prvAddNewTaskToReadyList (pxNewTCB_11);
  Starting walk at: prvAddNewTaskToReadyList (pxNewTCB_11);
  instance pointer: pxNewTCB_11  Outer instance pointer: pxNewTCB_11 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:pxNewTCB_11 = prvCreateTask (pxTaskCode_4(D), pcName_5(D), uxStackDepth_6(D), pvParameters_7(D), uxPriority_8(D), pxCreatedTask_9(D));
Determining dynamic type for call: prvInitialiseNewTask (pxTaskCode_13(D), pcName_14(D), uxStackDepth_4(D), pvParameters_15(D), uxPriority_16(D), pxCreatedTask_17(D), pxNewTCB_9, 0B);
  Starting walk at: prvInitialiseNewTask (pxTaskCode_13(D), pcName_14(D), uxStackDepth_4(D), pvParameters_15(D), uxPriority_16(D), pxCreatedTask_17(D), pxNewTCB_9, 0B);
  instance pointer: pxTaskCode_13(D)  Outer instance pointer: pxTaskCode_13(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:vPortFree (pxStack_7);
  Function call may change dynamic type:pxNewTCB_9 = pvPortMalloc (88);
  Function call may change dynamic type:pxStack_7 = pvPortMalloc (_1);
  Function call may change dynamic type:memset (pxNewTCB_9, 0, 88);
Determining dynamic type for call: prvInitialiseNewTask (pxTaskCode_13(D), pcName_14(D), uxStackDepth_4(D), pvParameters_15(D), uxPriority_16(D), pxCreatedTask_17(D), pxNewTCB_9, 0B);
  Starting walk at: prvInitialiseNewTask (pxTaskCode_13(D), pcName_14(D), uxStackDepth_4(D), pvParameters_15(D), uxPriority_16(D), pxCreatedTask_17(D), pxNewTCB_9, 0B);
  instance pointer: pcName_14(D)  Outer instance pointer: pcName_14(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:vPortFree (pxStack_7);
  Function call may change dynamic type:pxNewTCB_9 = pvPortMalloc (88);
  Function call may change dynamic type:pxStack_7 = pvPortMalloc (_1);
  Function call may change dynamic type:memset (pxNewTCB_9, 0, 88);
Determining dynamic type for call: prvInitialiseNewTask (pxTaskCode_13(D), pcName_14(D), uxStackDepth_4(D), pvParameters_15(D), uxPriority_16(D), pxCreatedTask_17(D), pxNewTCB_9, 0B);
  Starting walk at: prvInitialiseNewTask (pxTaskCode_13(D), pcName_14(D), uxStackDepth_4(D), pvParameters_15(D), uxPriority_16(D), pxCreatedTask_17(D), pxNewTCB_9, 0B);
  instance pointer: pvParameters_15(D)  Outer instance pointer: pvParameters_15(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:vPortFree (pxStack_7);
  Function call may change dynamic type:pxNewTCB_9 = pvPortMalloc (88);
  Function call may change dynamic type:pxStack_7 = pvPortMalloc (_1);
  Function call may change dynamic type:memset (pxNewTCB_9, 0, 88);
Determining dynamic type for call: prvInitialiseNewTask (pxTaskCode_13(D), pcName_14(D), uxStackDepth_4(D), pvParameters_15(D), uxPriority_16(D), pxCreatedTask_17(D), pxNewTCB_9, 0B);
  Starting walk at: prvInitialiseNewTask (pxTaskCode_13(D), pcName_14(D), uxStackDepth_4(D), pvParameters_15(D), uxPriority_16(D), pxCreatedTask_17(D), pxNewTCB_9, 0B);
  instance pointer: pxCreatedTask_17(D)  Outer instance pointer: pxCreatedTask_17(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:vPortFree (pxStack_7);
  Function call may change dynamic type:pxNewTCB_9 = pvPortMalloc (88);
  Function call may change dynamic type:pxStack_7 = pvPortMalloc (_1);
  Function call may change dynamic type:memset (pxNewTCB_9, 0, 88);
Determining dynamic type for call: prvInitialiseNewTask (pxTaskCode_13(D), pcName_14(D), uxStackDepth_4(D), pvParameters_15(D), uxPriority_16(D), pxCreatedTask_17(D), pxNewTCB_9, 0B);
  Starting walk at: prvInitialiseNewTask (pxTaskCode_13(D), pcName_14(D), uxStackDepth_4(D), pvParameters_15(D), uxPriority_16(D), pxCreatedTask_17(D), pxNewTCB_9, 0B);
  instance pointer: pxNewTCB_9  Outer instance pointer: pxNewTCB_9 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:vPortFree (pxStack_7);
  Function call may change dynamic type:pxNewTCB_9 = pvPortMalloc (88);
  Function call may change dynamic type:pxStack_7 = pvPortMalloc (_1);
  Function call may change dynamic type:memset (pxNewTCB_9, 0, 88);
Determining dynamic type for call: prvInitialiseNewTask (pxTaskCode_13(D), pcName_14(D), uxStackDepth_4(D), pvParameters_15(D), uxPriority_16(D), pxCreatedTask_17(D), pxNewTCB_9, 0B);
  Starting walk at: prvInitialiseNewTask (pxTaskCode_13(D), pcName_14(D), uxStackDepth_4(D), pvParameters_15(D), uxPriority_16(D), pxCreatedTask_17(D), pxNewTCB_9, 0B);
  instance pointer: 0B  Outer instance pointer: 0B offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:vPortFree (pxStack_7);
  Function call may change dynamic type:pxNewTCB_9 = pvPortMalloc (88);
  Function call may change dynamic type:pxStack_7 = pvPortMalloc (_1);
  Function call may change dynamic type:memset (pxNewTCB_9, 0, 88);

IPA structures before propagation:

Jump functions:
  Jump functions of caller  vTaskSwitchContext.part.0/134:
  Jump functions of caller  xTaskResumeAll.part.0/133:
    callsite  xTaskResumeAll.part.0/133 -> prvResetNextTaskUnblockTime/82 : 
    callsite  xTaskResumeAll.part.0/133 -> xTaskIncrementTick/61 : 
    callsite  xTaskResumeAll.part.0/133 -> vPortExitCritical/108 : 
       no arg info
  Jump functions of caller  xTaskIncrementTick.part.0/132:
    callsite  xTaskIncrementTick.part.0/132 -> prvResetNextTaskUnblockTime/82 : 
    callsite  xTaskIncrementTick.part.0/132 -> vApplicationTickHook/119 : 
       no arg info
  Jump functions of caller  eTaskGetState.part.0/124:
    callsite  eTaskGetState.part.0/124 -> vPortEnterCritical/107 : 
       no arg info
    callsite  eTaskGetState.part.0/124 -> vPortExitCritical/108 : 
       no arg info
  Jump functions of caller  prvResetNextTaskUnblockTime.part.0/123:
  Jump functions of caller  prvTaskIsTaskSuspended.part.0/122:
  Jump functions of caller  strcpy/121:
  Jump functions of caller  snprintf/120:
  Jump functions of caller  vApplicationTickHook/119:
  Jump functions of caller  strlen/118:
  Jump functions of caller  vPortEndScheduler/117:
  Jump functions of caller  xTimerGetTimerDaemonTaskHandle/116:
  Jump functions of caller  xPortStartScheduler/115:
  Jump functions of caller  xTimerCreateTimerTask/114:
  Jump functions of caller  vPortValidateInterruptPriority/113:
  Jump functions of caller  vListInsert/112:
  Jump functions of caller  vListInsertEnd/111:
  Jump functions of caller  uxListRemove/110:
  Jump functions of caller  vListInitialise/109:
  Jump functions of caller  vPortExitCritical/108:
  Jump functions of caller  vPortEnterCritical/107:
  Jump functions of caller  pxPortInitialiseStack/106:
  Jump functions of caller  vListInitialiseItem/105:
  Jump functions of caller  vPortFree/104:
  Jump functions of caller  memset/103:
  Jump functions of caller  pvPortMalloc/102:
  Jump functions of caller  vTaskResetState/101:
  Jump functions of caller  prvAddCurrentTaskToDelayedList/100:
    callsite  prvAddCurrentTaskToDelayedList/100 -> vListInsert/112 : 
       no arg info
    callsite  prvAddCurrentTaskToDelayedList/100 -> vListInsert/112 : 
       no arg info
    callsite  prvAddCurrentTaskToDelayedList/100 -> uxListRemove/110 : 
       no arg info
  Jump functions of caller  ulTaskGenericNotifyValueClear/99:
    callsite  ulTaskGenericNotifyValueClear/99 -> vPortExitCritical/108 : 
       no arg info
    callsite  ulTaskGenericNotifyValueClear/99 -> vPortEnterCritical/107 : 
       no arg info
  Jump functions of caller  xTaskGenericNotifyStateClear/98:
    callsite  xTaskGenericNotifyStateClear/98 -> vPortExitCritical/108 : 
       no arg info
    callsite  xTaskGenericNotifyStateClear/98 -> vPortEnterCritical/107 : 
       no arg info
  Jump functions of caller  vTaskGenericNotifyGiveFromISR/97:
    callsite  vTaskGenericNotifyGiveFromISR/97 -> vPortValidateInterruptPriority/113 : 
       no arg info
  Jump functions of caller  xTaskGenericNotifyFromISR/96:
    callsite  xTaskGenericNotifyFromISR/96 -> vPortValidateInterruptPriority/113 : 
       no arg info
  Jump functions of caller  xTaskGenericNotify/95:
    callsite  xTaskGenericNotify/95 -> vPortExitCritical/108 : 
       no arg info
    callsite  xTaskGenericNotify/95 -> vPortEnterCritical/107 : 
       no arg info
  Jump functions of caller  xTaskGenericNotifyWait/94:
    callsite  xTaskGenericNotifyWait/94 -> vPortExitCritical/108 : 
       no arg info
    callsite  xTaskGenericNotifyWait/94 -> vPortEnterCritical/107 : 
       no arg info
    callsite  xTaskGenericNotifyWait/94 -> xTaskResumeAll/51 : 
    callsite  xTaskGenericNotifyWait/94 -> prvAddCurrentTaskToDelayedList/100 : 
       param 0: PASS THROUGH: 4, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
    callsite  xTaskGenericNotifyWait/94 -> vPortExitCritical/108 : 
       no arg info
    callsite  xTaskGenericNotifyWait/94 -> vPortExitCritical/108 : 
       no arg info
    callsite  xTaskGenericNotifyWait/94 -> vPortExitCritical/108 : 
       no arg info
    callsite  xTaskGenericNotifyWait/94 -> vPortEnterCritical/107 : 
       no arg info
    callsite  xTaskGenericNotifyWait/94 -> vTaskSuspendAll/50 : 
  Jump functions of caller  ulTaskGenericNotifyTake/93:
    callsite  ulTaskGenericNotifyTake/93 -> vPortExitCritical/108 : 
       no arg info
    callsite  ulTaskGenericNotifyTake/93 -> vPortEnterCritical/107 : 
       no arg info
    callsite  ulTaskGenericNotifyTake/93 -> xTaskResumeAll/51 : 
    callsite  ulTaskGenericNotifyTake/93 -> prvAddCurrentTaskToDelayedList/100 : 
       param 0: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
    callsite  ulTaskGenericNotifyTake/93 -> vPortExitCritical/108 : 
       no arg info
    callsite  ulTaskGenericNotifyTake/93 -> vPortExitCritical/108 : 
       no arg info
    callsite  ulTaskGenericNotifyTake/93 -> vPortExitCritical/108 : 
       no arg info
    callsite  ulTaskGenericNotifyTake/93 -> vPortEnterCritical/107 : 
       no arg info
    callsite  ulTaskGenericNotifyTake/93 -> vTaskSuspendAll/50 : 
  Jump functions of caller  pvTaskIncrementMutexHeldCount/92:
  Jump functions of caller  uxTaskResetEventItemValue/91:
  Jump functions of caller  vTaskListTasks/90:
    callsite  vTaskListTasks/90 -> vPortFree/104 : 
       no arg info
    callsite  vTaskListTasks/90 -> prvSnprintfReturnValueToCharsWritten/33 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  vTaskListTasks/90 -> snprintf/120 : 
       no arg info
    callsite  vTaskListTasks/90 -> prvWriteNameToBuffer/89 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  vTaskListTasks/90 -> uxTaskGetSystemState/58 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: CONST: 0B
         value: 0x0, mask: 0xfffffff8
         Unknown VR
    callsite  vTaskListTasks/90 -> pvPortMalloc/102 : 
       no arg info
  Jump functions of caller  prvWriteNameToBuffer/89:
    callsite  prvWriteNameToBuffer/89 -> strlen/118 : 
       no arg info
    callsite  prvWriteNameToBuffer/89 -> strcpy/121 : 
       no arg info
  Jump functions of caller  vTaskPriorityDisinheritAfterTimeout/88:
    callsite  vTaskPriorityDisinheritAfterTimeout/88 -> uxListRemove/110 : 
       no arg info
  Jump functions of caller  xTaskPriorityDisinherit/87:
    callsite  xTaskPriorityDisinherit/87 -> uxListRemove/110 : 
       no arg info
  Jump functions of caller  xTaskPriorityInherit/86:
    callsite  xTaskPriorityInherit/86 -> uxListRemove/110 : 
       no arg info
  Jump functions of caller  xTaskGetSchedulerState/85:
  Jump functions of caller  xTaskGetCurrentTaskHandleForCore/84:
  Jump functions of caller  xTaskGetCurrentTaskHandle/83:
  Jump functions of caller  prvResetNextTaskUnblockTime/82:
    callsite  prvResetNextTaskUnblockTime/82 -> prvResetNextTaskUnblockTime.part.0/123 : 
  Jump functions of caller  prvDeleteTCB/81:
    callsite  prvDeleteTCB/81 -> vPortFree/104 : 
       no arg info
    callsite  prvDeleteTCB/81 -> vPortFree/104 : 
       no arg info
  Jump functions of caller  uxTaskGetStackHighWaterMark/80:
    callsite  uxTaskGetStackHighWaterMark/80 -> prvTaskCheckFreeStackSpace/79 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  prvTaskCheckFreeStackSpace/79:
  Jump functions of caller  prvListTasksWithinSingleList/78:
    callsite  prvListTasksWithinSingleList/78 -> vTaskGetInfo/77 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
       param 3: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  vTaskGetInfo/77:
    callsite  vTaskGetInfo/77 -> prvTaskCheckFreeStackSpace/79 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  vTaskGetInfo/77 -> eTaskGetState/37 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  vTaskGetInfo/77 -> vPortExitCritical/108 : 
       no arg info
    callsite  vTaskGetInfo/77 -> vPortEnterCritical/107 : 
       no arg info
    callsite  vTaskGetInfo/77 -> xTaskResumeAll/51 : 
    callsite  vTaskGetInfo/77 -> vTaskSuspendAll/50 : 
  Jump functions of caller  prvCheckTasksWaitingTermination/76:
    callsite  prvCheckTasksWaitingTermination/76 -> prvDeleteTCB/81 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  prvCheckTasksWaitingTermination/76 -> vPortExitCritical/108 : 
       no arg info
    callsite  prvCheckTasksWaitingTermination/76 -> uxListRemove/110 : 
       no arg info
    callsite  prvCheckTasksWaitingTermination/76 -> vPortEnterCritical/107 : 
       no arg info
  Jump functions of caller  prvInitialiseTaskLists/75:
    callsite  prvInitialiseTaskLists/75 -> vListInitialise/109 : 
       no arg info
    callsite  prvInitialiseTaskLists/75 -> vListInitialise/109 : 
       no arg info
    callsite  prvInitialiseTaskLists/75 -> vListInitialise/109 : 
       no arg info
    callsite  prvInitialiseTaskLists/75 -> vListInitialise/109 : 
       no arg info
    callsite  prvInitialiseTaskLists/75 -> vListInitialise/109 : 
       no arg info
    callsite  prvInitialiseTaskLists/75 -> vListInitialise/109 : 
       no arg info
  Jump functions of caller  prvIdleTask/74:
    callsite  prvIdleTask/74 -> prvCheckTasksWaitingTermination/76 : 
  Jump functions of caller  vTaskSetTaskNumber/73:
  Jump functions of caller  uxTaskGetTaskNumber/72:
  Jump functions of caller  vTaskMissedYield/71:
  Jump functions of caller  xTaskCheckForTimeOut/70:
    callsite  xTaskCheckForTimeOut/70 -> vPortExitCritical/108 : 
       no arg info
    callsite  xTaskCheckForTimeOut/70 -> vTaskInternalSetTimeOutState/69 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  xTaskCheckForTimeOut/70 -> vPortEnterCritical/107 : 
       no arg info
  Jump functions of caller  vTaskInternalSetTimeOutState/69:
  Jump functions of caller  vTaskSetTimeOutState/68:
    callsite  vTaskSetTimeOutState/68 -> vPortExitCritical/108 : 
       no arg info
    callsite  vTaskSetTimeOutState/68 -> vPortEnterCritical/107 : 
       no arg info
  Jump functions of caller  vTaskRemoveFromUnorderedEventList/67:
  Jump functions of caller  xTaskRemoveFromEventList/66:
  Jump functions of caller  vTaskPlaceOnEventListRestricted/65:
    callsite  vTaskPlaceOnEventListRestricted/65 -> prvAddCurrentTaskToDelayedList/100 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
         Unknown VR
  Jump functions of caller  vTaskPlaceOnUnorderedEventList/64:
    callsite  vTaskPlaceOnUnorderedEventList/64 -> prvAddCurrentTaskToDelayedList/100 : 
       param 0: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
  Jump functions of caller  vTaskPlaceOnEventList/63:
    callsite  vTaskPlaceOnEventList/63 -> prvAddCurrentTaskToDelayedList/100 : 
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
    callsite  vTaskPlaceOnEventList/63 -> vListInsert/112 : 
       no arg info
  Jump functions of caller  vTaskSwitchContext/62:
    callsite  vTaskSwitchContext/62 -> vTaskSwitchContext.part.0/134 : 
  Jump functions of caller  xTaskIncrementTick/61:
    callsite  xTaskIncrementTick/61 -> vApplicationTickHook/119 : 
       no arg info
    callsite  xTaskIncrementTick/61 -> xTaskIncrementTick.part.0/132 : 
  Jump functions of caller  xTaskAbortDelay/60:
    callsite  xTaskAbortDelay/60 -> xTaskResumeAll/51 : 
    callsite  xTaskAbortDelay/60 -> vPortExitCritical/108 : 
       no arg info
    callsite  xTaskAbortDelay/60 -> uxListRemove/110 : 
       no arg info
    callsite  xTaskAbortDelay/60 -> vPortEnterCritical/107 : 
       no arg info
    callsite  xTaskAbortDelay/60 -> uxListRemove/110 : 
       no arg info
    callsite  xTaskAbortDelay/60 -> eTaskGetState/37 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  xTaskAbortDelay/60 -> vTaskSuspendAll/50 : 
  Jump functions of caller  xTaskCatchUpTicks/59:
    callsite  xTaskCatchUpTicks/59 -> xTaskResumeAll/51 : 
    callsite  xTaskCatchUpTicks/59 -> vPortExitCritical/108 : 
       no arg info
    callsite  xTaskCatchUpTicks/59 -> vPortEnterCritical/107 : 
       no arg info
    callsite  xTaskCatchUpTicks/59 -> vTaskSuspendAll/50 : 
  Jump functions of caller  uxTaskGetSystemState/58:
    callsite  uxTaskGetSystemState/58 -> xTaskResumeAll/51 : 
    callsite  uxTaskGetSystemState/58 -> prvListTasksWithinSingleList/78 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: &xSuspendedTaskList
         value: 0x0, mask: 0xfffffffc
         VR  [1, -1]
       param 2: CONST: 3
         value: 0x3, mask: 0x0
         Unknown VR
    callsite  uxTaskGetSystemState/58 -> prvListTasksWithinSingleList/78 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: &xTasksWaitingTermination
         value: 0x0, mask: 0xfffffffc
         VR  [1, -1]
       param 2: CONST: 4
         value: 0x4, mask: 0x0
         Unknown VR
    callsite  uxTaskGetSystemState/58 -> prvListTasksWithinSingleList/78 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: CONST: 2
         value: 0x2, mask: 0x0
         Unknown VR
    callsite  uxTaskGetSystemState/58 -> prvListTasksWithinSingleList/78 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: CONST: 2
         value: 0x2, mask: 0x0
         Unknown VR
    callsite  uxTaskGetSystemState/58 -> prvListTasksWithinSingleList/78 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  [1, -1]
       param 2: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
    callsite  uxTaskGetSystemState/58 -> vTaskSuspendAll/50 : 
  Jump functions of caller  xTaskGetHandle/57:
    callsite  xTaskGetHandle/57 -> xTaskResumeAll/51 : 
    callsite  xTaskGetHandle/57 -> prvSearchForNameWithinSingleList/56 : 
       param 0: CONST: &xTasksWaitingTermination
         value: 0x0, mask: 0xfffffffc
         VR  [1, -1]
       param 1: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  xTaskGetHandle/57 -> prvSearchForNameWithinSingleList/56 : 
       param 0: CONST: &xSuspendedTaskList
         value: 0x0, mask: 0xfffffffc
         VR  [1, -1]
       param 1: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  xTaskGetHandle/57 -> prvSearchForNameWithinSingleList/56 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  xTaskGetHandle/57 -> prvSearchForNameWithinSingleList/56 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  xTaskGetHandle/57 -> prvSearchForNameWithinSingleList/56 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  [1, -1]
       param 1: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  xTaskGetHandle/57 -> vTaskSuspendAll/50 : 
    callsite  xTaskGetHandle/57 -> strlen/118 : 
       no arg info
  Jump functions of caller  prvSearchForNameWithinSingleList/56:
  Jump functions of caller  pcTaskGetName/55:
  Jump functions of caller  uxTaskGetNumberOfTasks/54:
  Jump functions of caller  xTaskGetTickCountFromISR/53:
    callsite  xTaskGetTickCountFromISR/53 -> vPortValidateInterruptPriority/113 : 
       no arg info
  Jump functions of caller  xTaskGetTickCount/52:
  Jump functions of caller  xTaskResumeAll/51:
    callsite  xTaskResumeAll/51 -> xTaskResumeAll.part.0/133 : 
    callsite  xTaskResumeAll/51 -> vPortEnterCritical/107 : 
       no arg info
  Jump functions of caller  vTaskSuspendAll/50:
  Jump functions of caller  vTaskEndScheduler/49:
    callsite  vTaskEndScheduler/49 -> vPortEndScheduler/117 : 
       no arg info
    callsite  vTaskEndScheduler/49 -> prvCheckTasksWaitingTermination/76 : 
    callsite  vTaskEndScheduler/49 -> vTaskDelete/34 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  vTaskEndScheduler/49 -> vTaskDelete/34 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  vTaskEndScheduler/49 -> xTimerGetTimerDaemonTaskHandle/116 : 
       no arg info
  Jump functions of caller  vTaskStartScheduler/48:
    callsite  vTaskStartScheduler/48 -> xPortStartScheduler/115 : 
       no arg info
    callsite  vTaskStartScheduler/48 -> xTimerCreateTimerTask/114 : 
       no arg info
    callsite  vTaskStartScheduler/48 -> prvCreateIdleTasks/47 : 
  Jump functions of caller  prvCreateIdleTasks/47:
    callsite  prvCreateIdleTasks/47 -> xTaskCreate/30 : 
       param 0: CONST: prvIdleTask
         value: 0x0, mask: 0xffffffff
         VR  [1, -1]
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  [1, -1]
       param 2: CONST: 90
         value: 0x5a, mask: 0x0
         Unknown VR
       param 3: CONST: 0B
         value: 0x0, mask: 0xfffffff8
         Unknown VR
       param 4: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
       param 5: CONST: &MEM <struct tskTaskControlBlock *> [(void *)&xIdleTaskHandles]
         value: 0x0, mask: 0xfffffffc
         VR  [1, -1]
  Jump functions of caller  xTaskResumeFromISR/46:
    callsite  xTaskResumeFromISR/46 -> vListInsertEnd/111 : 
       no arg info
    callsite  xTaskResumeFromISR/46 -> uxListRemove/110 : 
       no arg info
    callsite  xTaskResumeFromISR/46 -> prvTaskIsTaskSuspended/44 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  xTaskResumeFromISR/46 -> vPortValidateInterruptPriority/113 : 
       no arg info
  Jump functions of caller  vTaskResume/45:
    callsite  vTaskResume/45 -> vPortExitCritical/108 : 
       no arg info
    callsite  vTaskResume/45 -> uxListRemove/110 : 
       no arg info
    callsite  vTaskResume/45 -> prvTaskIsTaskSuspended/44 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  vTaskResume/45 -> vPortEnterCritical/107 : 
       no arg info
  Jump functions of caller  prvTaskIsTaskSuspended/44:
    callsite  prvTaskIsTaskSuspended/44 -> prvTaskIsTaskSuspended.part.0/122 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  vTaskSuspend/43:
    callsite  vTaskSuspend/43 -> vTaskSwitchContext/62 : 
    callsite  vTaskSuspend/43 -> vPortExitCritical/108 : 
       no arg info
    callsite  vTaskSuspend/43 -> prvResetNextTaskUnblockTime/82 : 
    callsite  vTaskSuspend/43 -> vPortEnterCritical/107 : 
       no arg info
    callsite  vTaskSuspend/43 -> vPortExitCritical/108 : 
       no arg info
    callsite  vTaskSuspend/43 -> vListInsertEnd/111 : 
       no arg info
    callsite  vTaskSuspend/43 -> uxListRemove/110 : 
       no arg info
    callsite  vTaskSuspend/43 -> uxListRemove/110 : 
       no arg info
    callsite  vTaskSuspend/43 -> vPortEnterCritical/107 : 
       no arg info
  Jump functions of caller  vTaskPrioritySet/42:
    callsite  vTaskPrioritySet/42 -> vPortExitCritical/108 : 
       no arg info
    callsite  vTaskPrioritySet/42 -> uxListRemove/110 : 
       no arg info
    callsite  vTaskPrioritySet/42 -> vPortEnterCritical/107 : 
       no arg info
  Jump functions of caller  uxTaskBasePriorityGetFromISR/41:
    callsite  uxTaskBasePriorityGetFromISR/41 -> vPortValidateInterruptPriority/113 : 
       no arg info
  Jump functions of caller  uxTaskBasePriorityGet/40:
    callsite  uxTaskBasePriorityGet/40 -> vPortExitCritical/108 : 
       no arg info
    callsite  uxTaskBasePriorityGet/40 -> vPortEnterCritical/107 : 
       no arg info
  Jump functions of caller  uxTaskPriorityGetFromISR/39:
    callsite  uxTaskPriorityGetFromISR/39 -> vPortValidateInterruptPriority/113 : 
       no arg info
  Jump functions of caller  uxTaskPriorityGet/38:
    callsite  uxTaskPriorityGet/38 -> vPortExitCritical/108 : 
       no arg info
    callsite  uxTaskPriorityGet/38 -> vPortEnterCritical/107 : 
       no arg info
  Jump functions of caller  eTaskGetState/37:
    callsite  eTaskGetState/37 -> eTaskGetState.part.0/124 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  vTaskDelay/36:
    callsite  vTaskDelay/36 -> xTaskResumeAll/51 : 
    callsite  vTaskDelay/36 -> prvAddCurrentTaskToDelayedList/100 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
    callsite  vTaskDelay/36 -> vTaskSuspendAll/50 : 
  Jump functions of caller  xTaskDelayUntil/35:
    callsite  xTaskDelayUntil/35 -> xTaskResumeAll/51 : 
    callsite  xTaskDelayUntil/35 -> prvAddCurrentTaskToDelayedList/100 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
    callsite  xTaskDelayUntil/35 -> vTaskSuspendAll/50 : 
  Jump functions of caller  vTaskDelete/34:
    callsite  vTaskDelete/34 -> prvDeleteTCB/81 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  vTaskDelete/34 -> vPortExitCritical/108 : 
       no arg info
    callsite  vTaskDelete/34 -> prvResetNextTaskUnblockTime/82 : 
    callsite  vTaskDelete/34 -> vPortExitCritical/108 : 
       no arg info
    callsite  vTaskDelete/34 -> vListInsertEnd/111 : 
       no arg info
    callsite  vTaskDelete/34 -> uxListRemove/110 : 
       no arg info
    callsite  vTaskDelete/34 -> uxListRemove/110 : 
       no arg info
    callsite  vTaskDelete/34 -> vPortEnterCritical/107 : 
       no arg info
  Jump functions of caller  prvSnprintfReturnValueToCharsWritten/33:
  Jump functions of caller  prvAddNewTaskToReadyList/32:
    callsite  prvAddNewTaskToReadyList/32 -> vPortExitCritical/108 : 
       no arg info
    callsite  prvAddNewTaskToReadyList/32 -> prvInitialiseTaskLists/75 : 
    callsite  prvAddNewTaskToReadyList/32 -> vPortEnterCritical/107 : 
       no arg info
  Jump functions of caller  prvInitialiseNewTask/31:
    callsite  prvInitialiseNewTask/31 -> pxPortInitialiseStack/106 : 
       no arg info
    callsite  prvInitialiseNewTask/31 -> vListInitialiseItem/105 : 
       no arg info
    callsite  prvInitialiseNewTask/31 -> vListInitialiseItem/105 : 
       no arg info
    callsite  prvInitialiseNewTask/31 -> memset/103 : 
       no arg info
  Jump functions of caller  xTaskCreate/30:
    callsite  xTaskCreate/30 -> prvAddNewTaskToReadyList/32 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  xTaskCreate/30 -> prvCreateTask/29 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 3: PASS THROUGH: 3, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 4: PASS THROUGH: 4, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 5: PASS THROUGH: 5, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  prvCreateTask/29:
    callsite  prvCreateTask/29 -> prvInitialiseNewTask/31 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 3: PASS THROUGH: 3, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 4: PASS THROUGH: 4, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 5: PASS THROUGH: 5, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 6: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 7: CONST: 0B
         value: 0x0, mask: 0xfffffff8
         Unknown VR
    callsite  prvCreateTask/29 -> vPortFree/104 : 
       no arg info
    callsite  prvCreateTask/29 -> memset/103 : 
       no arg info
    callsite  prvCreateTask/29 -> pvPortMalloc/102 : 
       no arg info
    callsite  prvCreateTask/29 -> pvPortMalloc/102 : 
       no arg info

 Propagating constants:

Not considering ulTaskGenericNotifyValueClear/99 for cloning; -fipa-cp-clone disabled.
Not considering xTaskGenericNotifyStateClear/98 for cloning; -fipa-cp-clone disabled.
Not considering vTaskGenericNotifyGiveFromISR/97 for cloning; -fipa-cp-clone disabled.
Not considering xTaskGenericNotifyFromISR/96 for cloning; -fipa-cp-clone disabled.
Not considering xTaskGenericNotify/95 for cloning; -fipa-cp-clone disabled.
Not considering xTaskGenericNotifyWait/94 for cloning; -fipa-cp-clone disabled.
Not considering ulTaskGenericNotifyTake/93 for cloning; -fipa-cp-clone disabled.
Not considering vTaskListTasks/90 for cloning; -fipa-cp-clone disabled.
Not considering vTaskPriorityDisinheritAfterTimeout/88 for cloning; -fipa-cp-clone disabled.
Not considering xTaskPriorityDisinherit/87 for cloning; -fipa-cp-clone disabled.
Not considering xTaskPriorityInherit/86 for cloning; -fipa-cp-clone disabled.
Not considering xTaskGetCurrentTaskHandleForCore/84 for cloning; -fipa-cp-clone disabled.
Not considering uxTaskGetStackHighWaterMark/80 for cloning; -fipa-cp-clone disabled.
Not considering vTaskGetInfo/77 for cloning; -fipa-cp-clone disabled.
Not considering prvIdleTask/74 for cloning; -fipa-cp-clone disabled.
Not considering vTaskSetTaskNumber/73 for cloning; -fipa-cp-clone disabled.
Not considering uxTaskGetTaskNumber/72 for cloning; -fipa-cp-clone disabled.
Not considering xTaskCheckForTimeOut/70 for cloning; -fipa-cp-clone disabled.
Not considering vTaskInternalSetTimeOutState/69 for cloning; -fipa-cp-clone disabled.
Not considering vTaskSetTimeOutState/68 for cloning; -fipa-cp-clone disabled.
Not considering vTaskRemoveFromUnorderedEventList/67 for cloning; -fipa-cp-clone disabled.
Not considering xTaskRemoveFromEventList/66 for cloning; -fipa-cp-clone disabled.
Not considering vTaskPlaceOnEventListRestricted/65 for cloning; -fipa-cp-clone disabled.
Not considering vTaskPlaceOnUnorderedEventList/64 for cloning; -fipa-cp-clone disabled.
Not considering vTaskPlaceOnEventList/63 for cloning; -fipa-cp-clone disabled.
Not considering xTaskAbortDelay/60 for cloning; -fipa-cp-clone disabled.
Not considering xTaskCatchUpTicks/59 for cloning; -fipa-cp-clone disabled.
Not considering uxTaskGetSystemState/58 for cloning; -fipa-cp-clone disabled.
Not considering xTaskGetHandle/57 for cloning; -fipa-cp-clone disabled.
Not considering pcTaskGetName/55 for cloning; -fipa-cp-clone disabled.
Not considering xTaskResumeFromISR/46 for cloning; -fipa-cp-clone disabled.
Not considering vTaskResume/45 for cloning; -fipa-cp-clone disabled.
Not considering vTaskSuspend/43 for cloning; -fipa-cp-clone disabled.
Not considering vTaskPrioritySet/42 for cloning; -fipa-cp-clone disabled.
Not considering uxTaskBasePriorityGetFromISR/41 for cloning; -fipa-cp-clone disabled.
Not considering uxTaskBasePriorityGet/40 for cloning; -fipa-cp-clone disabled.
Not considering uxTaskPriorityGetFromISR/39 for cloning; -fipa-cp-clone disabled.
Not considering uxTaskPriorityGet/38 for cloning; -fipa-cp-clone disabled.
Not considering eTaskGetState/37 for cloning; -fipa-cp-clone disabled.
Not considering vTaskDelay/36 for cloning; -fipa-cp-clone disabled.
Not considering xTaskDelayUntil/35 for cloning; -fipa-cp-clone disabled.
Not considering vTaskDelete/34 for cloning; -fipa-cp-clone disabled.
Not considering xTaskCreate/30 for cloning; -fipa-cp-clone disabled.

overall_size: 2340
 - context independent values, size: 9, time_benefit: 1.000000
 - context independent values, size: 48, time_benefit: 1.000000
     Decided to specialize for all known contexts, code not going to grow.

IPA lattices after all propagation:

Lattices:
  Node: vTaskSwitchContext.part.0/134:
  Node: xTaskResumeAll.part.0/133:
  Node: xTaskIncrementTick.part.0/132:
  Node: eTaskGetState.part.0/124:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         int VARYING
        AGGS VARIABLE
  Node: prvResetNextTaskUnblockTime.part.0/123:
  Node: prvTaskIsTaskSuspended.part.0/122:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         int VARYING
        AGGS VARIABLE
  Node: vTaskResetState/101:
  Node: prvAddCurrentTaskToDelayedList/100:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         int VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
               1 [loc_time: 1, loc_size: 46, prop_time: 0, prop_size: 0]
               0 [loc_time: 1, loc_size: 30, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         int VARYING
        AGGS VARIABLE
  Node: ulTaskGenericNotifyValueClear/99:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
    param [1]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
    param [2]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: xTaskGenericNotifyStateClear/98:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
    param [1]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: vTaskGenericNotifyGiveFromISR/97:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
    param [1]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
    param [2]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: xTaskGenericNotifyFromISR/96:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
    param [1]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
    param [2]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
    param [3]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
    param [4]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
    param [5]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: xTaskGenericNotify/95:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
    param [1]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
    param [2]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
    param [3]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
    param [4]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: xTaskGenericNotifyWait/94:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
    param [1]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
    param [2]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
    param [3]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
    param [4]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: ulTaskGenericNotifyTake/93:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
    param [1]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
    param [2]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: pvTaskIncrementMutexHeldCount/92:
  Node: uxTaskResetEventItemValue/91:
  Node: vTaskListTasks/90:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
    param [1]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: prvWriteNameToBuffer/89:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         int VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         int VARYING
        AGGS VARIABLE
  Node: vTaskPriorityDisinheritAfterTimeout/88:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
    param [1]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: xTaskPriorityDisinherit/87:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: xTaskPriorityInherit/86:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: xTaskGetSchedulerState/85:
  Node: xTaskGetCurrentTaskHandleForCore/84:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: xTaskGetCurrentTaskHandle/83:
  Node: prvResetNextTaskUnblockTime/82:
  Node: prvDeleteTCB/81:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         int VARYING
        AGGS VARIABLE
  Node: uxTaskGetStackHighWaterMark/80:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: prvTaskCheckFreeStackSpace/79:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         int VARYING
        AGGS VARIABLE
  Node: prvListTasksWithinSingleList/78:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         int VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
               &xSuspendedTaskList [loc_time: 1, loc_size: 19, prop_time: 0, prop_size: 0]
               &xTasksWaitingTermination [loc_time: 1, loc_size: 19, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         int VARYING
        AGGS VARIABLE
    param [2]: 3 [loc_time: 1, loc_size: 19, prop_time: 0, prop_size: 0]
               4 [loc_time: 1, loc_size: 19, prop_time: 0, prop_size: 0]
               2 [loc_time: 1, loc_size: 19, prop_time: 0, prop_size: 0]
               1 [loc_time: 1, loc_size: 19, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x3, mask = 0x7
         eTaskState [1, 4]
        AGGS VARIABLE
  Node: vTaskGetInfo/77:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
    param [1]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
    param [2]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
    param [3]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: prvCheckTasksWaitingTermination/76:
  Node: prvInitialiseTaskLists/75:
  Node: prvIdleTask/74:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: vTaskSetTaskNumber/73:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
    param [1]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: uxTaskGetTaskNumber/72:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: vTaskMissedYield/71:
  Node: xTaskCheckForTimeOut/70:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
    param [1]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: vTaskInternalSetTimeOutState/69:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: vTaskSetTimeOutState/68:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: vTaskRemoveFromUnorderedEventList/67:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
    param [1]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: xTaskRemoveFromEventList/66:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: vTaskPlaceOnEventListRestricted/65:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
    param [1]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
    param [2]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: vTaskPlaceOnUnorderedEventList/64:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
    param [1]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
    param [2]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: vTaskPlaceOnEventList/63:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
    param [1]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: vTaskSwitchContext/62:
  Node: xTaskIncrementTick/61:
  Node: xTaskAbortDelay/60:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: xTaskCatchUpTicks/59:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: uxTaskGetSystemState/58:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
    param [1]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
    param [2]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: xTaskGetHandle/57:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: prvSearchForNameWithinSingleList/56:
    param [0]: VARIABLE
               &xTasksWaitingTermination [loc_time: 1, loc_size: 24, prop_time: 0, prop_size: 0]
               &xSuspendedTaskList [loc_time: 1, loc_size: 24, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         int VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         int VARYING
        AGGS VARIABLE
  Node: pcTaskGetName/55:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: uxTaskGetNumberOfTasks/54:
  Node: xTaskGetTickCountFromISR/53:
  Node: xTaskGetTickCount/52:
  Node: xTaskResumeAll/51:
  Node: vTaskSuspendAll/50:
  Node: vTaskEndScheduler/49:
  Node: vTaskStartScheduler/48:
  Node: prvCreateIdleTasks/47:
  Node: xTaskResumeFromISR/46:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: vTaskResume/45:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: prvTaskIsTaskSuspended/44:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         int VARYING
        AGGS VARIABLE
  Node: vTaskSuspend/43:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: vTaskPrioritySet/42:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
    param [1]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: uxTaskBasePriorityGetFromISR/41:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: uxTaskBasePriorityGet/40:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: uxTaskPriorityGetFromISR/39:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: uxTaskPriorityGet/38:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: eTaskGetState/37:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: vTaskDelay/36:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: xTaskDelayUntil/35:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
    param [1]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: vTaskDelete/34:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: prvSnprintfReturnValueToCharsWritten/33:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         int VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         int VARYING
        AGGS VARIABLE
  Node: prvAddNewTaskToReadyList/32:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         int VARYING
        AGGS VARIABLE
  Node: prvInitialiseNewTask/31:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         int VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         int VARYING
        AGGS VARIABLE
    param [2]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         int VARYING
        AGGS VARIABLE
    param [3]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         int VARYING
        AGGS VARIABLE
    param [4]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         int VARYING
        AGGS VARIABLE
    param [5]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         int VARYING
        AGGS VARIABLE
    param [6]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         int VARYING
        AGGS VARIABLE
    param [7]: 0B [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffff8
         const struct MemoryRegion_t * const [0B, 0B]
        AGGS VARIABLE
  Node: xTaskCreate/30:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
    param [1]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
    param [2]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
    param [3]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
    param [4]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
    param [5]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: prvCreateTask/29:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         int VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         int VARYING
        AGGS VARIABLE
    param [2]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         int VARYING
        AGGS VARIABLE
    param [3]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         int VARYING
        AGGS VARIABLE
    param [4]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         int VARYING
        AGGS VARIABLE
    param [5]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         int VARYING
        AGGS VARIABLE

IPA decision stage:

 - Creating a specialized node of prvInitialiseNewTask/31 for all known contexts.
    replacing param #7 xRegions with const 0B
Propagated bits info for function prvInitialiseNewTask.constprop/138:
 param 7: value = 0x0, mask = 0xfffffff8
Propagated bits info for function prvListTasksWithinSingleList/78:
 param 2: value = 0x3, mask = 0x7
Propagated bits info for function prvInitialiseNewTask/31:
 param 7: value = 0x0, mask = 0xfffffff8

IPA constant propagation end

Reclaiming functions: prvInitialiseNewTask/31
Reclaiming variables:
Clearing address taken flags:
Symbol table:

prvInitialiseNewTask.constprop.0/138 (prvInitialiseNewTask.constprop) @06f1c380
  Type: function definition analyzed
  Visibility:
  References: 
  Referring: 
  Clone of prvInitialiseNewTask/31
  Availability: local
  Function flags: count:15867325 (estimated locally) local optimize_size
  Called by: prvCreateTask/29 (423592932 (estimated locally),0.39 per call) 
  Calls: memset/103 (15867325 (estimated locally),1.00 per call) vListInitialiseItem/105 (5236217 (estimated locally),0.33 per call) vListInitialiseItem/105 (5236217 (estimated locally),0.33 per call) pxPortInitialiseStack/106 (5236217 (estimated locally),0.33 per call) 
CSWTCH.233/135 (CSWTCH.233) @06c384c8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: vTaskListTasks/90 (read) 
  Availability: available
  Varpool flags: initialized read-only const-value-known
vTaskSwitchContext.part.0/134 (vTaskSwitchContext.part.0) @06e87620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: xYieldPendings/22 (write) uxTopReadyPriority/19 (read) pxReadyTasksLists/8 (read) pxReadyTasksLists/8 (read) pxReadyTasksLists/8 (write) pxReadyTasksLists/8 (addr) pxReadyTasksLists/8 (read) pxReadyTasksLists/8 (write) pxReadyTasksLists/8 (read) pxCurrentTCB/7 (write) uxTopReadyPriority/19 (write) pxCurrentTCB/7 (read) 
  Referring: 
  Availability: local
  Function flags: count:21880958 (estimated locally) body local split_part optimize_size
  Called by: vTaskSwitchContext/62 (21880958 (estimated locally),0.50 per call) 
  Calls: 
xTaskResumeAll.part.0/133 (xTaskResumeAll.part.0) @06e87c40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: uxSchedulerSuspended/28 (read) uxSchedulerSuspended/28 (write) uxSchedulerSuspended/28 (read) uxCurrentNumberOfTasks/17 (read) xPendingReadyList/13 (read) uxTopReadyPriority/19 (read) uxTopReadyPriority/19 (write) pxReadyTasksLists/8 (read) pxReadyTasksLists/8 (addr) pxReadyTasksLists/8 (read) pxReadyTasksLists/8 (write) pxCurrentTCB/7 (read) xYieldPendings/22 (write) xPendingReadyList/13 (read) xPendedTicks/21 (read) xYieldPendings/22 (write) xPendedTicks/21 (write) xYieldPendings/22 (read) pxCurrentTCB/7 (read) 
  Referring: 
  Availability: local
  Function flags: count:472446393 (estimated locally) body local split_part optimize_size
  Called by: xTaskResumeAll/51 (10631108 (estimated locally),0.50 per call) 
  Calls: prvResetNextTaskUnblockTime/82 (63154273 (estimated locally),0.13 per call) xTaskIncrementTick/61 (536870914 (estimated locally),1.14 per call) vPortExitCritical/108 (472446395 (estimated locally),1.00 per call) 
xTaskIncrementTick.part.0/132 (xTaskIncrementTick.part.0) @064f4b60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: xTickCount/18 (read) xTickCount/18 (write) pxDelayedTaskList/11 (read) pxDelayedTaskList/11 (read) pxOverflowDelayedTaskList/12 (read) pxDelayedTaskList/11 (write) pxOverflowDelayedTaskList/12 (write) xNumOfOverflows/23 (read) xNumOfOverflows/23 (write) xNextTaskUnblockTime/25 (read) pxDelayedTaskList/11 (read) xNextTaskUnblockTime/25 (write) pxDelayedTaskList/11 (read) xNextTaskUnblockTime/25 (write) uxTopReadyPriority/19 (read) uxTopReadyPriority/19 (write) pxReadyTasksLists/8 (read) pxReadyTasksLists/8 (addr) pxReadyTasksLists/8 (read) pxReadyTasksLists/8 (write) pxCurrentTCB/7 (read) pxCurrentTCB/7 (read) pxReadyTasksLists/8 (read) xPendedTicks/21 (read) xYieldPendings/22 (read) 
  Referring: 
  Availability: local
  Function flags: count:31734651 (estimated locally) body local split_part optimize_size
  Called by: xTaskIncrementTick/61 (31734651 (estimated locally),0.67 per call) 
  Calls: prvResetNextTaskUnblockTime/82 (5236217 (estimated locally),0.16 per call) vApplicationTickHook/119 (6964169 (estimated locally),0.22 per call) 
eTaskGetState.part.0/124 (eTaskGetState.part.0) @06d201c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: pxDelayedTaskList/11 (read) pxOverflowDelayedTaskList/12 (read) xPendingReadyList/13 (addr) xSuspendedTaskList/16 (addr) xTasksWaitingTermination/14 (addr) 
  Referring: 
  Availability: local
  Function flags: count:1073741823 (estimated locally) body local split_part optimize_size
  Called by: eTaskGetState/37 (13263725 (estimated locally),0.37 per call) 
  Calls: vPortEnterCritical/107 (1073741823 (estimated locally),1.00 per call) vPortExitCritical/108 (1073741823 (estimated locally),1.00 per call) 
prvResetNextTaskUnblockTime.part.0/123 (prvResetNextTaskUnblockTime.part.0) @06b27700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: pxDelayedTaskList/11 (read) xNextTaskUnblockTime/25 (write) 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local split_part optimize_size
  Called by: prvResetNextTaskUnblockTime/82 (536870912 (estimated locally),0.50 per call) 
  Calls: 
prvTaskIsTaskSuspended.part.0/122 (prvTaskIsTaskSuspended.part.0) @06c35d20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:566398813 (estimated locally) body local split_part optimize_size
  Called by: prvTaskIsTaskSuspended/44 (1562773 (estimated locally),0.04 per call) 
  Calls: 
strcpy/121 (strcpy) @06c35460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: prvWriteNameToBuffer/89 (118111600 (estimated locally),1.00 per call) 
  Calls: 
snprintf/120 (snprintf) @06c352a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: vTaskListTasks/90 (455492559 (estimated locally),2.12 per call) 
  Calls: 
vApplicationTickHook/119 (vApplicationTickHook) @06b3d700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: xTaskIncrementTick/61 (15630499 (estimated locally),0.33 per call) xTaskIncrementTick.part.0/132 (6964169 (estimated locally),0.22 per call) 
  Calls: 
strlen/118 (strlen) @06b27c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: xTaskGetHandle/57 (15867325 (estimated locally),1.00 per call) prvWriteNameToBuffer/89 (118111600 (estimated locally),1.00 per call) 
  Calls: 
vPortEndScheduler/117 (vPortEndScheduler) @06b272a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: vTaskEndScheduler/49 (536870913 (estimated locally),1.00 per call) 
  Calls: 
xTimerGetTimerDaemonTaskHandle/116 (xTimerGetTimerDaemonTaskHandle) @06b271c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: vTaskEndScheduler/49 (536870913 (estimated locally),1.00 per call) 
  Calls: 
xPortStartScheduler/115 (xPortStartScheduler) @064f4ee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: vTaskStartScheduler/48 (7934599 (estimated locally),0.20 per call) 
  Calls: 
xTimerCreateTimerTask/114 (xTimerCreateTimerTask) @064f4e00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: vTaskStartScheduler/48 (7934599 (estimated locally),0.20 per call) 
  Calls: 
vPortValidateInterruptPriority/113 (vPortValidateInterruptPriority) @064dfee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: vTaskGenericNotifyGiveFromISR/97 (5236217 (estimated locally),0.23 per call) xTaskGenericNotifyFromISR/96 (5236217 (estimated locally),0.23 per call) xTaskGetTickCountFromISR/53 (1073741824 (estimated locally),1.00 per call) xTaskResumeFromISR/46 (12216749 (estimated locally),0.53 per call) uxTaskBasePriorityGetFromISR/41 (1073741824 (estimated locally),1.00 per call) uxTaskPriorityGetFromISR/39 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
vListInsert/112 (vListInsert) @064df7e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: vTaskPlaceOnEventList/63 (12216749 (estimated locally),0.53 per call) prvAddCurrentTaskToDelayedList/100 (445602856 (estimated locally),0.41 per call) prvAddCurrentTaskToDelayedList/100 (445602856 (estimated locally),0.41 per call) 
  Calls: 
vListInsertEnd/111 (vListInsertEnd) @064df1c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: vTaskSuspend/43 (59055800 (estimated locally),1.00 per call) xTaskResumeFromISR/46 (2015764 (estimated locally),0.09 per call) vTaskDelete/34 (31340507 (estimated locally),0.22 per call) 
  Calls: 
uxListRemove/110 (uxListRemove) @064df000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: vTaskPriorityDisinheritAfterTimeout/88 (291070 (estimated locally),0.01 per call) xTaskPriorityDisinherit/87 (496169 (estimated locally),0.02 per call) xTaskPriorityInherit/86 (65503620 (estimated locally),0.06 per call) vTaskSuspend/43 (31577136 (estimated locally),0.53 per call) vTaskSuspend/43 (59055800 (estimated locally),1.00 per call) xTaskAbortDelay/60 (1322137 (estimated locally),0.06 per call) xTaskAbortDelay/60 (2472670 (estimated locally),0.11 per call) xTaskResumeFromISR/46 (4092611 (estimated locally),0.18 per call) vTaskResume/45 (4377029 (estimated locally),0.12 per call) vTaskPrioritySet/42 (602364 (estimated locally),0.04 per call) vTaskDelete/34 (75792713 (estimated locally),0.53 per call) vTaskDelete/34 (141748108 (estimated locally),1.00 per call) prvAddCurrentTaskToDelayedList/100 (1073741824 (estimated locally),1.00 per call) prvCheckTasksWaitingTermination/76 (955630225 (estimated locally),8.09 per call) 
  Calls: 
vListInitialise/109 (vListInitialise) @06b0ee00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: prvInitialiseTaskLists/75 (97603128 (estimated locally),1.00 per call) prvInitialiseTaskLists/75 (97603128 (estimated locally),1.00 per call) prvInitialiseTaskLists/75 (97603128 (estimated locally),1.00 per call) prvInitialiseTaskLists/75 (97603128 (estimated locally),1.00 per call) prvInitialiseTaskLists/75 (97603128 (estimated locally),1.00 per call) prvInitialiseTaskLists/75 (976138697 (estimated locally),10.00 per call) 
  Calls: 
vPortExitCritical/108 (vPortExitCritical) @06b0ec40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: ulTaskGenericNotifyValueClear/99 (10631108 (estimated locally),0.50 per call) xTaskGenericNotifyStateClear/98 (10631108 (estimated locally),0.50 per call) xTaskGenericNotify/95 (3346135 (estimated locally),0.16 per call) xTaskGenericNotifyWait/94 (5236217 (estimated locally),0.33 per call) xTaskGenericNotifyWait/94 (2088203 (estimated locally),0.13 per call) xTaskGenericNotifyWait/94 (2088203 (estimated locally),0.13 per call) xTaskGenericNotifyWait/94 (1059810 (estimated locally),0.07 per call) ulTaskGenericNotifyTake/93 (5236217 (estimated locally),0.33 per call) ulTaskGenericNotifyTake/93 (1754133 (estimated locally),0.11 per call) ulTaskGenericNotifyTake/93 (1754133 (estimated locally),0.11 per call) ulTaskGenericNotifyTake/93 (1727952 (estimated locally),0.11 per call) vTaskGetInfo/77 (599491539 (estimated locally),0.56 per call) xTaskCheckForTimeOut/70 (12216749 (estimated locally),0.37 per call) vTaskSetTimeOutState/68 (12216749 (estimated locally),0.53 per call) vTaskSuspend/43 (19488414 (estimated locally),0.33 per call) vTaskSuspend/43 (59055800 (estimated locally),1.00 per call) xTaskAbortDelay/60 (2472670 (estimated locally),0.11 per call) xTaskCatchUpTicks/59 (5236217 (estimated locally),0.33 per call) xTaskResumeAll.part.0/133 (472446395 (estimated locally),1.00 per call) vTaskResume/45 (13263725 (estimated locally),0.37 per call) vTaskPrioritySet/42 (5236217 (estimated locally),0.33 per call) uxTaskBasePriorityGet/40 (1073741824 (estimated locally),1.00 per call) uxTaskPriorityGet/38 (1073741824 (estimated locally),1.00 per call) eTaskGetState.part.0/124 (1073741823 (estimated locally),1.00 per call) vTaskDelete/34 (110407601 (estimated locally),0.78 per call) vTaskDelete/34 (31340507 (estimated locally),0.22 per call) prvCheckTasksWaitingTermination/76 (955630225 (estimated locally),8.09 per call) prvAddNewTaskToReadyList/32 (1073741823 (estimated locally),1.00 per call) 
  Calls: 
vPortEnterCritical/107 (vPortEnterCritical) @06b0ea80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: ulTaskGenericNotifyValueClear/99 (10631108 (estimated locally),0.50 per call) xTaskGenericNotifyStateClear/98 (10631108 (estimated locally),0.50 per call) xTaskGenericNotify/95 (5684453 (estimated locally),0.27 per call) xTaskGenericNotifyWait/94 (5236217 (estimated locally),0.33 per call) xTaskGenericNotifyWait/94 (5236217 (estimated locally),0.33 per call) ulTaskGenericNotifyTake/93 (5236217 (estimated locally),0.33 per call) ulTaskGenericNotifyTake/93 (5236217 (estimated locally),0.33 per call) vTaskGetInfo/77 (599491539 (estimated locally),0.56 per call) xTaskCheckForTimeOut/70 (12216749 (estimated locally),0.37 per call) vTaskSetTimeOutState/68 (12216749 (estimated locally),0.53 per call) vTaskSuspend/43 (19488414 (estimated locally),0.33 per call) vTaskSuspend/43 (59055800 (estimated locally),1.00 per call) xTaskAbortDelay/60 (2472670 (estimated locally),0.11 per call) xTaskCatchUpTicks/59 (5236217 (estimated locally),0.33 per call) xTaskResumeAll/51 (21262216 (estimated locally),1.00 per call) vTaskResume/45 (13263725 (estimated locally),0.37 per call) vTaskPrioritySet/42 (5236217 (estimated locally),0.33 per call) uxTaskBasePriorityGet/40 (1073741824 (estimated locally),1.00 per call) uxTaskPriorityGet/38 (1073741824 (estimated locally),1.00 per call) eTaskGetState.part.0/124 (1073741823 (estimated locally),1.00 per call) vTaskDelete/34 (141748108 (estimated locally),1.00 per call) prvCheckTasksWaitingTermination/76 (955630225 (estimated locally),8.09 per call) prvAddNewTaskToReadyList/32 (1073741821 (estimated locally),1.00 per call) 
  Calls: 
pxPortInitialiseStack/106 (pxPortInitialiseStack) @06b0e8c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: prvInitialiseNewTask.constprop.0/138 (5236217 (estimated locally),0.33 per call) 
  Calls: 
vListInitialiseItem/105 (vListInitialiseItem) @06b0e7e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: prvInitialiseNewTask.constprop.0/138 (5236217 (estimated locally),0.33 per call) prvInitialiseNewTask.constprop.0/138 (5236217 (estimated locally),0.33 per call) 
  Calls: 
vPortFree/104 (vPortFree) @06b0e620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: vTaskListTasks/90 (114863531 (estimated locally),0.53 per call) prvCreateTask/29 (237662014 (estimated locally),0.22 per call) prvDeleteTCB/81 (1073741824 (estimated locally),1.00 per call) prvDeleteTCB/81 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
memset/103 (memset) @06b0e540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: prvInitialiseNewTask.constprop.0/138 (15867325 (estimated locally),1.00 per call) prvCreateTask/29 (554544707 (estimated locally),0.52 per call) 
  Calls: 
pvPortMalloc/102 (pvPortMalloc) @06b0e460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: vTaskListTasks/90 (214818646 (estimated locally),1.00 per call) prvCreateTask/29 (792206721 (estimated locally),0.74 per call) prvCreateTask/29 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
vTaskResetState/101 (vTaskResetState) @06af5ee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: pxCurrentTCB/7 (write) uxDeletedTasksWaitingCleanUp/15 (write) uxCurrentNumberOfTasks/17 (write) xTickCount/18 (write) uxTopReadyPriority/19 (write) xSchedulerRunning/20 (write) xPendedTicks/21 (write) xYieldPendings/22 (write) xNumOfOverflows/23 (write) uxTaskNumber/24 (write) xNextTaskUnblockTime/25 (write) uxSchedulerSuspended/28 (write) 
  Referring: 
  Availability: available
  Function flags: count:536870913 (estimated locally) body optimize_size
  Called by: 
  Calls: 
prvAddCurrentTaskToDelayedList/100 (prvAddCurrentTaskToDelayedList) @06af57e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: xTickCount/18 (read) pxDelayedTaskList/11 (read) pxOverflowDelayedTaskList/12 (read) pxCurrentTCB/7 (read) pxCurrentTCB/7 (read) xSuspendedTaskList/16 (read) pxCurrentTCB/7 (read) pxCurrentTCB/7 (read) pxCurrentTCB/7 (read) pxCurrentTCB/7 (read) pxCurrentTCB/7 (read) xSuspendedTaskList/16 (addr) xSuspendedTaskList/16 (read) xSuspendedTaskList/16 (write) pxCurrentTCB/7 (read) pxCurrentTCB/7 (read) pxCurrentTCB/7 (read) xNextTaskUnblockTime/25 (read) xNextTaskUnblockTime/25 (write) 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: xTaskGenericNotifyWait/94 (2088203 (estimated locally),0.13 per call) ulTaskGenericNotifyTake/93 (1754133 (estimated locally),0.11 per call) vTaskPlaceOnEventListRestricted/65 (24805919 (estimated locally),0.70 per call) vTaskPlaceOnUnorderedEventList/64 (5236217 (estimated locally),0.23 per call) vTaskPlaceOnEventList/63 (12216749 (estimated locally),0.53 per call) vTaskDelay/36 (2697764 (estimated locally),0.07 per call) xTaskDelayUntil/35 (890157 (estimated locally),0.04 per call) 
  Calls: vListInsert/112 (445602856 (estimated locally),0.41 per call) vListInsert/112 (445602856 (estimated locally),0.41 per call) uxListRemove/110 (1073741824 (estimated locally),1.00 per call) 
ulTaskGenericNotifyValueClear/99 (ulTaskGenericNotifyValueClear) @06af5e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: pxCurrentTCB/7 (read) 
  Referring: 
  Availability: available
  Function flags: count:21262216 (estimated locally) body optimize_size
  Called by: 
  Calls: vPortExitCritical/108 (10631108 (estimated locally),0.50 per call) vPortEnterCritical/107 (10631108 (estimated locally),0.50 per call) 
xTaskGenericNotifyStateClear/98 (xTaskGenericNotifyStateClear) @06af5a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: pxCurrentTCB/7 (read) 
  Referring: 
  Availability: available
  Function flags: count:21262216 (estimated locally) body optimize_size
  Called by: 
  Calls: vPortExitCritical/108 (10631108 (estimated locally),0.50 per call) vPortEnterCritical/107 (10631108 (estimated locally),0.50 per call) 
vTaskGenericNotifyGiveFromISR/97 (vTaskGenericNotifyGiveFromISR) @06af5700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: uxSchedulerSuspended/28 (read) uxTopReadyPriority/19 (read) uxTopReadyPriority/19 (write) pxReadyTasksLists/8 (read) pxReadyTasksLists/8 (addr) pxReadyTasksLists/8 (read) pxReadyTasksLists/8 (write) xPendingReadyList/13 (read) xPendingReadyList/13 (addr) xPendingReadyList/13 (read) xPendingReadyList/13 (write) pxCurrentTCB/7 (read) xYieldPendings/22 (write) 
  Referring: 
  Availability: available
  Function flags: count:22667608 (estimated locally) body optimize_size
  Called by: 
  Calls: vPortValidateInterruptPriority/113 (5236217 (estimated locally),0.23 per call) 
xTaskGenericNotifyFromISR/96 (xTaskGenericNotifyFromISR) @06af5380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: xTickCount/18 (read) uxSchedulerSuspended/28 (read) uxTopReadyPriority/19 (read) uxTopReadyPriority/19 (write) pxReadyTasksLists/8 (read) pxReadyTasksLists/8 (addr) pxReadyTasksLists/8 (read) pxReadyTasksLists/8 (write) xPendingReadyList/13 (read) xPendingReadyList/13 (addr) xPendingReadyList/13 (read) xPendingReadyList/13 (write) pxCurrentTCB/7 (read) xYieldPendings/22 (write) 
  Referring: 
  Availability: available
  Function flags: count:22667608 (estimated locally) body optimize_size
  Called by: 
  Calls: vPortValidateInterruptPriority/113 (5236217 (estimated locally),0.23 per call) 
xTaskGenericNotify/95 (xTaskGenericNotify) @06af5000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: xTickCount/18 (read) uxTopReadyPriority/19 (read) uxTopReadyPriority/19 (write) pxReadyTasksLists/8 (read) pxReadyTasksLists/8 (addr) pxReadyTasksLists/8 (read) pxReadyTasksLists/8 (write) pxCurrentTCB/7 (read) 
  Referring: 
  Availability: available
  Function flags: count:21262216 (estimated locally) body optimize_size
  Called by: 
  Calls: vPortExitCritical/108 (3346135 (estimated locally),0.16 per call) vPortEnterCritical/107 (5684453 (estimated locally),0.27 per call) 
xTaskGenericNotifyWait/94 (xTaskGenericNotifyWait) @06abe620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: pxCurrentTCB/7 (read) pxCurrentTCB/7 (read) pxCurrentTCB/7 (read) pxCurrentTCB/7 (read) pxCurrentTCB/7 (read) pxCurrentTCB/7 (read) pxCurrentTCB/7 (read) 
  Referring: 
  Availability: available
  Function flags: count:15867325 (estimated locally) body optimize_size
  Called by: 
  Calls: vPortExitCritical/108 (5236217 (estimated locally),0.33 per call) vPortEnterCritical/107 (5236217 (estimated locally),0.33 per call) xTaskResumeAll/51 (5236217 (estimated locally),0.33 per call) prvAddCurrentTaskToDelayedList/100 (2088203 (estimated locally),0.13 per call) vPortExitCritical/108 (2088203 (estimated locally),0.13 per call) vPortExitCritical/108 (2088203 (estimated locally),0.13 per call) vPortExitCritical/108 (1059810 (estimated locally),0.07 per call) vPortEnterCritical/107 (5236217 (estimated locally),0.33 per call) vTaskSuspendAll/50 (5236217 (estimated locally),0.33 per call) 
ulTaskGenericNotifyTake/93 (ulTaskGenericNotifyTake) @06abee00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: pxCurrentTCB/7 (read) pxCurrentTCB/7 (read) pxCurrentTCB/7 (read) pxCurrentTCB/7 (read) pxCurrentTCB/7 (read) pxCurrentTCB/7 (read) 
  Referring: 
  Availability: available
  Function flags: count:15867325 (estimated locally) body optimize_size
  Called by: 
  Calls: vPortExitCritical/108 (5236217 (estimated locally),0.33 per call) vPortEnterCritical/107 (5236217 (estimated locally),0.33 per call) xTaskResumeAll/51 (5236217 (estimated locally),0.33 per call) prvAddCurrentTaskToDelayedList/100 (1754133 (estimated locally),0.11 per call) vPortExitCritical/108 (1754133 (estimated locally),0.11 per call) vPortExitCritical/108 (1754133 (estimated locally),0.11 per call) vPortExitCritical/108 (1727952 (estimated locally),0.11 per call) vPortEnterCritical/107 (5236217 (estimated locally),0.33 per call) vTaskSuspendAll/50 (5236217 (estimated locally),0.33 per call) 
pvTaskIncrementMutexHeldCount/92 (pvTaskIncrementMutexHeldCount) @06abea80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: pxCurrentTCB/7 (read) 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
uxTaskResetEventItemValue/91 (uxTaskResetEventItemValue) @06abe7e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: pxCurrentTCB/7 (read) pxCurrentTCB/7 (read) pxCurrentTCB/7 (read) 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
vTaskListTasks/90 (vTaskListTasks) @06abe540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: uxCurrentNumberOfTasks/17 (read) uxCurrentNumberOfTasks/17 (read) CSWTCH.233/135 (read) 
  Referring: 
  Availability: available
  Function flags: count:214818646 (estimated locally) body optimize_size
  Called by: 
  Calls: vPortFree/104 (114863531 (estimated locally),0.53 per call) prvSnprintfReturnValueToCharsWritten/33 (455492559 (estimated locally),2.12 per call) snprintf/120 (455492559 (estimated locally),2.12 per call) prvWriteNameToBuffer/89 (679839639 (estimated locally),3.16 per call) uxTaskGetSystemState/58 (114863530 (estimated locally),0.53 per call) pvPortMalloc/102 (214818646 (estimated locally),1.00 per call) 
prvWriteNameToBuffer/89 (prvWriteNameToBuffer) @06abe2a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:118111600 (estimated locally) body local optimize_size
  Called by: vTaskListTasks/90 (679839639 (estimated locally),3.16 per call) 
  Calls: strlen/118 (118111600 (estimated locally),1.00 per call) strcpy/121 (118111600 (estimated locally),1.00 per call) 
vTaskPriorityDisinheritAfterTimeout/88 (vTaskPriorityDisinheritAfterTimeout) @06abe000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: pxCurrentTCB/7 (read) pxReadyTasksLists/8 (addr) uxTopReadyPriority/19 (read) uxTopReadyPriority/19 (write) pxReadyTasksLists/8 (read) pxReadyTasksLists/8 (addr) pxReadyTasksLists/8 (read) pxReadyTasksLists/8 (write) 
  Referring: 
  Availability: available
  Function flags: count:30374594 (estimated locally) body optimize_size
  Called by: 
  Calls: uxListRemove/110 (291070 (estimated locally),0.01 per call) 
xTaskPriorityDisinherit/87 (xTaskPriorityDisinherit) @06aaaa80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: pxCurrentTCB/7 (read) uxTopReadyPriority/19 (read) uxTopReadyPriority/19 (write) pxReadyTasksLists/8 (read) pxReadyTasksLists/8 (addr) pxReadyTasksLists/8 (read) pxReadyTasksLists/8 (write) 
  Referring: 
  Availability: available
  Function flags: count:21696139 (estimated locally) body optimize_size
  Called by: 
  Calls: uxListRemove/110 (496169 (estimated locally),0.02 per call) 
xTaskPriorityInherit/86 (xTaskPriorityInherit) @06aaa460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: pxCurrentTCB/7 (read) pxCurrentTCB/7 (read) pxReadyTasksLists/8 (addr) pxCurrentTCB/7 (read) uxTopReadyPriority/19 (read) uxTopReadyPriority/19 (write) pxReadyTasksLists/8 (read) pxReadyTasksLists/8 (addr) pxReadyTasksLists/8 (read) pxReadyTasksLists/8 (write) pxCurrentTCB/7 (read) pxCurrentTCB/7 (read) 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: uxListRemove/110 (65503620 (estimated locally),0.06 per call) 
xTaskGetSchedulerState/85 (xTaskGetSchedulerState) @06aaaee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: xSchedulerRunning/20 (read) uxSchedulerSuspended/28 (read) 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
xTaskGetCurrentTaskHandleForCore/84 (xTaskGetCurrentTaskHandleForCore) @06aaac40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: pxCurrentTCB/7 (read) 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
xTaskGetCurrentTaskHandle/83 (xTaskGetCurrentTaskHandle) @06aaa9a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: pxCurrentTCB/7 (read) 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
prvResetNextTaskUnblockTime/82 (prvResetNextTaskUnblockTime) @06aaa700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: pxDelayedTaskList/11 (read) xNextTaskUnblockTime/25 (write) 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: vTaskSuspend/43 (19488414 (estimated locally),0.33 per call) xTaskResumeAll.part.0/133 (63154273 (estimated locally),0.13 per call) xTaskIncrementTick.part.0/132 (5236217 (estimated locally),0.16 per call) vTaskDelete/34 (110407601 (estimated locally),0.78 per call) 
  Calls: prvResetNextTaskUnblockTime.part.0/123 (536870912 (estimated locally),0.50 per call) 
prvDeleteTCB/81 (prvDeleteTCB) @06aaa380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: vTaskDelete/34 (110407601 (estimated locally),0.78 per call) prvCheckTasksWaitingTermination/76 (955630225 (estimated locally),8.09 per call) 
  Calls: vPortFree/104 (1073741824 (estimated locally),1.00 per call) vPortFree/104 (1073741824 (estimated locally),1.00 per call) 
uxTaskGetStackHighWaterMark/80 (uxTaskGetStackHighWaterMark) @06aaa0e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: pxCurrentTCB/7 (read) 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: prvTaskCheckFreeStackSpace/79 (1073741824 (estimated locally),1.00 per call) 
prvTaskCheckFreeStackSpace/79 (prvTaskCheckFreeStackSpace) @06aa18c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:118111600 (estimated locally) body local optimize_size
  Called by: uxTaskGetStackHighWaterMark/80 (1073741824 (estimated locally),1.00 per call) vTaskGetInfo/77 (354334800 (estimated locally),0.33 per call) 
  Calls: 
prvListTasksWithinSingleList/78 (prvListTasksWithinSingleList) @06aa12a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:236223200 (estimated locally) body local optimize_size
  Called by: uxTaskGetSystemState/58 (107374184 (estimated locally),0.50 per call) uxTaskGetSystemState/58 (107374184 (estimated locally),0.50 per call) uxTaskGetSystemState/58 (107374184 (estimated locally),0.50 per call) uxTaskGetSystemState/58 (107374184 (estimated locally),0.50 per call) uxTaskGetSystemState/58 (1073741824 (estimated locally),5.00 per call) 
  Calls: vTaskGetInfo/77 (955630225 (estimated locally),4.05 per call) 
vTaskGetInfo/77 (vTaskGetInfo) @06aa1c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: pxCurrentTCB/7 (read) pxCurrentTCB/7 (read) xPendingReadyList/13 (addr) 
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: prvListTasksWithinSingleList/78 (955630225 (estimated locally),4.05 per call) 
  Calls: prvTaskCheckFreeStackSpace/79 (354334800 (estimated locally),0.33 per call) eTaskGetState/37 (217325344 (estimated locally),0.20 per call) vPortExitCritical/108 (599491539 (estimated locally),0.56 per call) vPortEnterCritical/107 (599491539 (estimated locally),0.56 per call) xTaskResumeAll/51 (121337087 (estimated locally),0.11 per call) vTaskSuspendAll/50 (121337087 (estimated locally),0.11 per call) 
prvCheckTasksWaitingTermination/76 (prvCheckTasksWaitingTermination) @06aa17e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: xTasksWaitingTermination/14 (read) uxCurrentNumberOfTasks/17 (read) uxCurrentNumberOfTasks/17 (write) uxDeletedTasksWaitingCleanUp/15 (read) uxDeletedTasksWaitingCleanUp/15 (write) uxDeletedTasksWaitingCleanUp/15 (read) 
  Referring: 
  Availability: local
  Function flags: count:118111600 (estimated locally) body local optimize_size
  Called by: vTaskEndScheduler/49 (536870913 (estimated locally),1.00 per call) prvIdleTask/74 (1073741824 (estimated locally),171.19 per call) 
  Calls: prvDeleteTCB/81 (955630225 (estimated locally),8.09 per call) vPortExitCritical/108 (955630225 (estimated locally),8.09 per call) uxListRemove/110 (955630225 (estimated locally),8.09 per call) vPortEnterCritical/107 (955630225 (estimated locally),8.09 per call) 
prvInitialiseTaskLists/75 (prvInitialiseTaskLists) @06aa1460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: pxReadyTasksLists/8 (addr) xDelayedTaskList1/9 (addr) xDelayedTaskList2/10 (addr) xPendingReadyList/13 (addr) xTasksWaitingTermination/14 (addr) xSuspendedTaskList/16 (addr) pxDelayedTaskList/11 (write) xDelayedTaskList1/9 (addr) pxOverflowDelayedTaskList/12 (write) xDelayedTaskList2/10 (addr) 
  Referring: 
  Availability: local
  Function flags: count:97603128 (estimated locally) body local optimize_size
  Called by: prvAddNewTaskToReadyList/32 (65197602 (estimated locally),0.06 per call) 
  Calls: vListInitialise/109 (97603128 (estimated locally),1.00 per call) vListInitialise/109 (97603128 (estimated locally),1.00 per call) vListInitialise/109 (97603128 (estimated locally),1.00 per call) vListInitialise/109 (97603128 (estimated locally),1.00 per call) vListInitialise/109 (97603128 (estimated locally),1.00 per call) vListInitialise/109 (976138697 (estimated locally),10.00 per call) 
prvIdleTask/74 (prvIdleTask) @06aa11c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: pxReadyTasksLists/8 (read) 
  Referring: prvCreateIdleTasks/47 (addr) 
  Availability: available
  Function flags: count:6272354 (estimated locally) body executed_once optimize_size
  Called by: 
  Calls: prvCheckTasksWaitingTermination/76 (1073741824 (estimated locally),171.19 per call) 
vTaskSetTaskNumber/73 (vTaskSetTaskNumber) @06a96c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
uxTaskGetTaskNumber/72 (uxTaskGetTaskNumber) @06a96540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
vTaskMissedYield/71 (vTaskMissedYield) @06a96e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: xYieldPendings/22 (write) 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
xTaskCheckForTimeOut/70 (xTaskCheckForTimeOut) @06a96b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: xTickCount/18 (read) pxCurrentTCB/7 (read) pxCurrentTCB/7 (read) xNumOfOverflows/23 (read) 
  Referring: 
  Availability: available
  Function flags: count:32639796 (estimated locally) body optimize_size
  Called by: 
  Calls: vPortExitCritical/108 (12216749 (estimated locally),0.37 per call) vTaskInternalSetTimeOutState/69 (891371 (estimated locally),0.03 per call) vPortEnterCritical/107 (12216749 (estimated locally),0.37 per call) 
vTaskInternalSetTimeOutState/69 (vTaskInternalSetTimeOutState) @06a96700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: xNumOfOverflows/23 (read) xTickCount/18 (read) 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: xTaskCheckForTimeOut/70 (891371 (estimated locally),0.03 per call) 
  Calls: 
vTaskSetTimeOutState/68 (vTaskSetTimeOutState) @06a96460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: xNumOfOverflows/23 (read) xTickCount/18 (read) 
  Referring: 
  Availability: available
  Function flags: count:22847857 (estimated locally) body optimize_size
  Called by: 
  Calls: vPortExitCritical/108 (12216749 (estimated locally),0.53 per call) vPortEnterCritical/107 (12216749 (estimated locally),0.53 per call) 
vTaskRemoveFromUnorderedEventList/67 (vTaskRemoveFromUnorderedEventList) @06a960e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: uxSchedulerSuspended/28 (read) uxTopReadyPriority/19 (read) uxTopReadyPriority/19 (write) pxReadyTasksLists/8 (read) pxReadyTasksLists/8 (addr) pxReadyTasksLists/8 (read) pxReadyTasksLists/8 (write) pxCurrentTCB/7 (read) xYieldPendings/22 (write) 
  Referring: 
  Availability: available
  Function flags: count:21262216 (estimated locally) body optimize_size
  Called by: 
  Calls: 
xTaskRemoveFromEventList/66 (xTaskRemoveFromEventList) @06a81620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: uxSchedulerSuspended/28 (read) uxTopReadyPriority/19 (read) uxTopReadyPriority/19 (write) pxReadyTasksLists/8 (read) pxReadyTasksLists/8 (addr) pxReadyTasksLists/8 (read) pxReadyTasksLists/8 (write) xPendingReadyList/13 (read) xPendingReadyList/13 (addr) xPendingReadyList/13 (read) xPendingReadyList/13 (write) pxCurrentTCB/7 (read) xYieldPendings/22 (write) 
  Referring: 
  Availability: available
  Function flags: count:35437027 (estimated locally) body optimize_size
  Called by: 
  Calls: 
vTaskPlaceOnEventListRestricted/65 (vTaskPlaceOnEventListRestricted) @06a81c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: pxCurrentTCB/7 (read) pxCurrentTCB/7 (read) pxCurrentTCB/7 (read) pxCurrentTCB/7 (read) pxCurrentTCB/7 (read) 
  Referring: 
  Availability: available
  Function flags: count:35437027 (estimated locally) body optimize_size
  Called by: 
  Calls: prvAddCurrentTaskToDelayedList/100 (24805919 (estimated locally),0.70 per call) 
vTaskPlaceOnUnorderedEventList/64 (vTaskPlaceOnUnorderedEventList) @06a818c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: uxSchedulerSuspended/28 (read) pxCurrentTCB/7 (read) pxCurrentTCB/7 (read) pxCurrentTCB/7 (read) pxCurrentTCB/7 (read) pxCurrentTCB/7 (read) pxCurrentTCB/7 (read) 
  Referring: 
  Availability: available
  Function flags: count:22667608 (estimated locally) body optimize_size
  Called by: 
  Calls: prvAddCurrentTaskToDelayedList/100 (5236217 (estimated locally),0.23 per call) 
vTaskPlaceOnEventList/63 (vTaskPlaceOnEventList) @06a81540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: pxCurrentTCB/7 (read) 
  Referring: 
  Availability: available
  Function flags: count:22847857 (estimated locally) body optimize_size
  Called by: 
  Calls: prvAddCurrentTaskToDelayedList/100 (12216749 (estimated locally),0.53 per call) vListInsert/112 (12216749 (estimated locally),0.53 per call) 
vTaskSwitchContext/62 (vTaskSwitchContext) @06a811c0
  Type: function definition analyzed
  Visibility: force_output externally_visible public
  References: uxSchedulerSuspended/28 (read) xYieldPendings/22 (write) 
  Referring: 
  Availability: available
  Function flags: count:43761915 (estimated locally) body optimize_size
  Called by: vTaskSuspend/43 (4329971 (estimated locally),0.07 per call) 
  Calls: vTaskSwitchContext.part.0/134 (21880958 (estimated locally),0.50 per call) 
xTaskIncrementTick/61 (xTaskIncrementTick) @06a6c9a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: uxSchedulerSuspended/28 (read) xPendedTicks/21 (read) xPendedTicks/21 (write) 
  Referring: 
  Availability: available
  Function flags: count:47365150 (estimated locally) body optimize_size
  Called by: xTaskResumeAll.part.0/133 (536870914 (estimated locally),1.14 per call) 
  Calls: vApplicationTickHook/119 (15630499 (estimated locally),0.33 per call) xTaskIncrementTick.part.0/132 (31734651 (estimated locally),0.67 per call) 
xTaskAbortDelay/60 (xTaskAbortDelay) @06a6cc40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: uxTopReadyPriority/19 (read) uxTopReadyPriority/19 (write) pxReadyTasksLists/8 (read) pxReadyTasksLists/8 (addr) pxReadyTasksLists/8 (read) pxReadyTasksLists/8 (write) pxCurrentTCB/7 (read) xYieldPendings/22 (write) 
  Referring: 
  Availability: available
  Function flags: count:22847857 (estimated locally) body optimize_size
  Called by: 
  Calls: xTaskResumeAll/51 (12216749 (estimated locally),0.53 per call) vPortExitCritical/108 (2472670 (estimated locally),0.11 per call) uxListRemove/110 (1322137 (estimated locally),0.06 per call) vPortEnterCritical/107 (2472670 (estimated locally),0.11 per call) uxListRemove/110 (2472670 (estimated locally),0.11 per call) eTaskGetState/37 (12216749 (estimated locally),0.53 per call) vTaskSuspendAll/50 (12216749 (estimated locally),0.53 per call) 
xTaskCatchUpTicks/59 (xTaskCatchUpTicks) @06a6c8c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: uxSchedulerSuspended/28 (read) xPendedTicks/21 (read) xPendedTicks/21 (write) 
  Referring: 
  Availability: available
  Function flags: count:15867325 (estimated locally) body optimize_size
  Called by: 
  Calls: xTaskResumeAll/51 (5236217 (estimated locally),0.33 per call) vPortExitCritical/108 (5236217 (estimated locally),0.33 per call) vPortEnterCritical/107 (5236217 (estimated locally),0.33 per call) vTaskSuspendAll/50 (5236217 (estimated locally),0.33 per call) 
uxTaskGetSystemState/58 (uxTaskGetSystemState) @06a6c620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: uxCurrentNumberOfTasks/17 (read) pxReadyTasksLists/8 (addr) pxDelayedTaskList/11 (read) pxOverflowDelayedTaskList/12 (read) xTasksWaitingTermination/14 (addr) xSuspendedTaskList/16 (addr) 
  Referring: 
  Availability: available
  Function flags: count:214748368 (estimated locally) body optimize_size
  Called by: vTaskListTasks/90 (114863530 (estimated locally),0.53 per call) 
  Calls: xTaskResumeAll/51 (214748368 (estimated locally),1.00 per call) prvListTasksWithinSingleList/78 (107374184 (estimated locally),0.50 per call) prvListTasksWithinSingleList/78 (107374184 (estimated locally),0.50 per call) prvListTasksWithinSingleList/78 (107374184 (estimated locally),0.50 per call) prvListTasksWithinSingleList/78 (107374184 (estimated locally),0.50 per call) prvListTasksWithinSingleList/78 (1073741824 (estimated locally),5.00 per call) vTaskSuspendAll/50 (214748368 (estimated locally),1.00 per call) 
xTaskGetHandle/57 (xTaskGetHandle) @06a6c380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: pxReadyTasksLists/8 (addr) pxDelayedTaskList/11 (read) pxOverflowDelayedTaskList/12 (read) xSuspendedTaskList/16 (addr) xTasksWaitingTermination/14 (addr) 
  Referring: 
  Availability: available
  Function flags: count:15867325 (estimated locally) body optimize_size
  Called by: 
  Calls: xTaskResumeAll/51 (5236217 (estimated locally),0.33 per call) prvSearchForNameWithinSingleList/56 (912673 (estimated locally),0.06 per call) prvSearchForNameWithinSingleList/56 (912673 (estimated locally),0.06 per call) prvSearchForNameWithinSingleList/56 (912673 (estimated locally),0.06 per call) prvSearchForNameWithinSingleList/56 (912673 (estimated locally),0.06 per call) prvSearchForNameWithinSingleList/56 (35024865 (estimated locally),2.21 per call) vTaskSuspendAll/50 (5236217 (estimated locally),0.33 per call) strlen/118 (15867325 (estimated locally),1.00 per call) 
prvSearchForNameWithinSingleList/56 (prvSearchForNameWithinSingleList) @06a6c0e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:26745564 (estimated locally) body local optimize_size
  Called by: xTaskGetHandle/57 (912673 (estimated locally),0.06 per call) xTaskGetHandle/57 (912673 (estimated locally),0.06 per call) xTaskGetHandle/57 (912673 (estimated locally),0.06 per call) xTaskGetHandle/57 (912673 (estimated locally),0.06 per call) xTaskGetHandle/57 (35024865 (estimated locally),2.21 per call) 
  Calls: 
pcTaskGetName/55 (pcTaskGetName) @06a1cc40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: pxCurrentTCB/7 (read) 
  Referring: 
  Availability: available
  Function flags: count:35437027 (estimated locally) body optimize_size
  Called by: 
  Calls: 
uxTaskGetNumberOfTasks/54 (uxTaskGetNumberOfTasks) @06a1ce00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: uxCurrentNumberOfTasks/17 (read) 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
xTaskGetTickCountFromISR/53 (xTaskGetTickCountFromISR) @06a1cb60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: xTickCount/18 (read) 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: vPortValidateInterruptPriority/113 (1073741824 (estimated locally),1.00 per call) 
xTaskGetTickCount/52 (xTaskGetTickCount) @06a1c8c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: xTickCount/18 (read) 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
xTaskResumeAll/51 (xTaskResumeAll) @06a1c620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: uxSchedulerSuspended/28 (read) 
  Referring: 
  Availability: available
  Function flags: count:21262216 (estimated locally) body optimize_size
  Called by: xTaskGenericNotifyWait/94 (5236217 (estimated locally),0.33 per call) ulTaskGenericNotifyTake/93 (5236217 (estimated locally),0.33 per call) uxTaskGetSystemState/58 (214748368 (estimated locally),1.00 per call) vTaskGetInfo/77 (121337087 (estimated locally),0.11 per call) xTaskAbortDelay/60 (12216749 (estimated locally),0.53 per call) xTaskCatchUpTicks/59 (5236217 (estimated locally),0.33 per call) xTaskGetHandle/57 (5236217 (estimated locally),0.33 per call) vTaskDelay/36 (2697764 (estimated locally),0.07 per call) xTaskDelayUntil/35 (1780314 (estimated locally),0.08 per call) 
  Calls: xTaskResumeAll.part.0/133 (10631108 (estimated locally),0.50 per call) vPortEnterCritical/107 (21262216 (estimated locally),1.00 per call) 
vTaskSuspendAll/50 (vTaskSuspendAll) @06a1c000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: uxSchedulerSuspended/28 (read) uxSchedulerSuspended/28 (write) 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: xTaskGenericNotifyWait/94 (5236217 (estimated locally),0.33 per call) ulTaskGenericNotifyTake/93 (5236217 (estimated locally),0.33 per call) uxTaskGetSystemState/58 (214748368 (estimated locally),1.00 per call) vTaskGetInfo/77 (121337087 (estimated locally),0.11 per call) xTaskAbortDelay/60 (12216749 (estimated locally),0.53 per call) xTaskCatchUpTicks/59 (5236217 (estimated locally),0.33 per call) xTaskGetHandle/57 (5236217 (estimated locally),0.33 per call) vTaskDelay/36 (13328872 (estimated locally),0.33 per call) xTaskDelayUntil/35 (5236217 (estimated locally),0.23 per call) 
  Calls: 
vTaskEndScheduler/49 (vTaskEndScheduler) @06a0bc40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: xIdleTaskHandles/26 (read) xSchedulerRunning/20 (write) 
  Referring: 
  Availability: available
  Function flags: count:536870913 (estimated locally) body optimize_size
  Called by: 
  Calls: vPortEndScheduler/117 (536870913 (estimated locally),1.00 per call) prvCheckTasksWaitingTermination/76 (536870913 (estimated locally),1.00 per call) vTaskDelete/34 (536870913 (estimated locally),1.00 per call) vTaskDelete/34 (536870913 (estimated locally),1.00 per call) xTimerGetTimerDaemonTaskHandle/116 (536870913 (estimated locally),1.00 per call) 
vTaskStartScheduler/48 (vTaskStartScheduler) @06a0b460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: xNextTaskUnblockTime/25 (write) xSchedulerRunning/20 (write) xTickCount/18 (write) uxTopUsedPriority/27 (read) 
  Referring: 
  Availability: available
  Function flags: count:39202563 (estimated locally) body optimize_size
  Called by: 
  Calls: xPortStartScheduler/115 (7934599 (estimated locally),0.20 per call) xTimerCreateTimerTask/114 (7934599 (estimated locally),0.20 per call) prvCreateIdleTasks/47 (39202563 (estimated locally),1.00 per call) 
prvCreateIdleTasks/47 (prvCreateIdleTasks) @06a0be00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: prvIdleTask/74 (addr) xIdleTaskHandles/26 (addr) 
  Referring: 
  Availability: local
  Function flags: count:214748368 (estimated locally) body local optimize_size
  Called by: vTaskStartScheduler/48 (39202563 (estimated locally),1.00 per call) 
  Calls: xTaskCreate/30 (203552956 (estimated locally),0.95 per call) 
xTaskResumeFromISR/46 (xTaskResumeFromISR) @06a0bb60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: uxSchedulerSuspended/28 (read) pxCurrentTCB/7 (read) xYieldPendings/22 (write) uxTopReadyPriority/19 (read) uxTopReadyPriority/19 (write) pxReadyTasksLists/8 (read) pxReadyTasksLists/8 (addr) pxReadyTasksLists/8 (read) pxReadyTasksLists/8 (write) xPendingReadyList/13 (addr) 
  Referring: 
  Availability: available
  Function flags: count:22847857 (estimated locally) body optimize_size
  Called by: 
  Calls: vListInsertEnd/111 (2015764 (estimated locally),0.09 per call) uxListRemove/110 (4092611 (estimated locally),0.18 per call) prvTaskIsTaskSuspended/44 (12216749 (estimated locally),0.53 per call) vPortValidateInterruptPriority/113 (12216749 (estimated locally),0.53 per call) 
vTaskResume/45 (vTaskResume) @06a0b7e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: pxCurrentTCB/7 (read) uxTopReadyPriority/19 (read) uxTopReadyPriority/19 (write) pxReadyTasksLists/8 (read) pxReadyTasksLists/8 (addr) pxReadyTasksLists/8 (read) pxReadyTasksLists/8 (write) pxCurrentTCB/7 (read) 
  Referring: 
  Availability: available
  Function flags: count:35437027 (estimated locally) body optimize_size
  Called by: 
  Calls: vPortExitCritical/108 (13263725 (estimated locally),0.37 per call) uxListRemove/110 (4377029 (estimated locally),0.12 per call) prvTaskIsTaskSuspended/44 (13263725 (estimated locally),0.37 per call) vPortEnterCritical/107 (13263725 (estimated locally),0.37 per call) 
prvTaskIsTaskSuspended/44 (prvTaskIsTaskSuspended) @06a0b380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: xSuspendedTaskList/16 (addr) xPendingReadyList/13 (addr) 
  Referring: 
  Availability: local
  Function flags: count:35437027 (estimated locally) body local optimize_size
  Called by: xTaskResumeFromISR/46 (12216749 (estimated locally),0.53 per call) vTaskResume/45 (13263725 (estimated locally),0.37 per call) 
  Calls: prvTaskIsTaskSuspended.part.0/122 (1562773 (estimated locally),0.04 per call) 
vTaskSuspend/43 (vTaskSuspend) @06a0b000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: pxCurrentTCB/7 (read) xSuspendedTaskList/16 (addr) xSchedulerRunning/20 (read) pxCurrentTCB/7 (read) xSchedulerRunning/20 (read) uxSchedulerSuspended/28 (read) xSuspendedTaskList/16 (read) uxCurrentNumberOfTasks/17 (read) pxCurrentTCB/7 (write) 
  Referring: 
  Availability: available
  Function flags: count:59055800 (estimated locally) body optimize_size
  Called by: 
  Calls: vTaskSwitchContext/62 (4329971 (estimated locally),0.07 per call) vPortExitCritical/108 (19488414 (estimated locally),0.33 per call) prvResetNextTaskUnblockTime/82 (19488414 (estimated locally),0.33 per call) vPortEnterCritical/107 (19488414 (estimated locally),0.33 per call) vPortExitCritical/108 (59055800 (estimated locally),1.00 per call) vListInsertEnd/111 (59055800 (estimated locally),1.00 per call) uxListRemove/110 (31577136 (estimated locally),0.53 per call) uxListRemove/110 (59055800 (estimated locally),1.00 per call) vPortEnterCritical/107 (59055800 (estimated locally),1.00 per call) 
vTaskPrioritySet/42 (vTaskPrioritySet) @069fd000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: pxCurrentTCB/7 (read) pxCurrentTCB/7 (read) pxCurrentTCB/7 (read) pxCurrentTCB/7 (read) pxReadyTasksLists/8 (addr) uxTopReadyPriority/19 (read) uxTopReadyPriority/19 (write) pxReadyTasksLists/8 (read) pxReadyTasksLists/8 (addr) pxReadyTasksLists/8 (read) pxReadyTasksLists/8 (write) 
  Referring: 
  Availability: available
  Function flags: count:15867325 (estimated locally) body optimize_size
  Called by: 
  Calls: vPortExitCritical/108 (5236217 (estimated locally),0.33 per call) uxListRemove/110 (602364 (estimated locally),0.04 per call) vPortEnterCritical/107 (5236217 (estimated locally),0.33 per call) 
uxTaskBasePriorityGetFromISR/41 (uxTaskBasePriorityGetFromISR) @069fd9a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: pxCurrentTCB/7 (read) 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: vPortValidateInterruptPriority/113 (1073741824 (estimated locally),1.00 per call) 
uxTaskBasePriorityGet/40 (uxTaskBasePriorityGet) @069fd620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: pxCurrentTCB/7 (read) 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: vPortExitCritical/108 (1073741824 (estimated locally),1.00 per call) vPortEnterCritical/107 (1073741824 (estimated locally),1.00 per call) 
uxTaskPriorityGetFromISR/39 (uxTaskPriorityGetFromISR) @069fd2a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: pxCurrentTCB/7 (read) 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: vPortValidateInterruptPriority/113 (1073741824 (estimated locally),1.00 per call) 
uxTaskPriorityGet/38 (uxTaskPriorityGet) @069ecd20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: pxCurrentTCB/7 (read) 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: vPortExitCritical/108 (1073741824 (estimated locally),1.00 per call) vPortEnterCritical/107 (1073741824 (estimated locally),1.00 per call) 
eTaskGetState/37 (eTaskGetState) @069ec000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: pxCurrentTCB/7 (read) 
  Referring: 
  Availability: available
  Function flags: count:35437027 (estimated locally) body optimize_size
  Called by: vTaskGetInfo/77 (217325344 (estimated locally),0.20 per call) xTaskAbortDelay/60 (12216749 (estimated locally),0.53 per call) 
  Calls: eTaskGetState.part.0/124 (13263725 (estimated locally),0.37 per call) 
vTaskDelay/36 (vTaskDelay) @069ecc40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: uxSchedulerSuspended/28 (read) 
  Referring: 
  Availability: available
  Function flags: count:40390520 (estimated locally) body optimize_size
  Called by: 
  Calls: xTaskResumeAll/51 (2697764 (estimated locally),0.07 per call) prvAddCurrentTaskToDelayedList/100 (2697764 (estimated locally),0.07 per call) vTaskSuspendAll/50 (13328872 (estimated locally),0.33 per call) 
xTaskDelayUntil/35 (xTaskDelayUntil) @069ec8c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: xTickCount/18 (read) uxSchedulerSuspended/28 (read) 
  Referring: 
  Availability: available
  Function flags: count:22667608 (estimated locally) body optimize_size
  Called by: 
  Calls: xTaskResumeAll/51 (1780314 (estimated locally),0.08 per call) prvAddCurrentTaskToDelayedList/100 (890157 (estimated locally),0.04 per call) vTaskSuspendAll/50 (5236217 (estimated locally),0.23 per call) 
vTaskDelete/34 (vTaskDelete) @069ec460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: pxCurrentTCB/7 (read) uxTaskNumber/24 (read) uxTaskNumber/24 (write) pxCurrentTCB/7 (read) xSchedulerRunning/20 (read) xTasksWaitingTermination/14 (addr) uxDeletedTasksWaitingCleanUp/15 (read) uxDeletedTasksWaitingCleanUp/15 (write) uxCurrentNumberOfTasks/17 (read) uxCurrentNumberOfTasks/17 (write) xSchedulerRunning/20 (read) pxCurrentTCB/7 (read) uxSchedulerSuspended/28 (read) 
  Referring: 
  Availability: available
  Function flags: count:141748108 (estimated locally) body optimize_size
  Called by: vTaskEndScheduler/49 (536870913 (estimated locally),1.00 per call) vTaskEndScheduler/49 (536870913 (estimated locally),1.00 per call) 
  Calls: prvDeleteTCB/81 (110407601 (estimated locally),0.78 per call) vPortExitCritical/108 (110407601 (estimated locally),0.78 per call) prvResetNextTaskUnblockTime/82 (110407601 (estimated locally),0.78 per call) vPortExitCritical/108 (31340507 (estimated locally),0.22 per call) vListInsertEnd/111 (31340507 (estimated locally),0.22 per call) uxListRemove/110 (75792713 (estimated locally),0.53 per call) uxListRemove/110 (141748108 (estimated locally),1.00 per call) vPortEnterCritical/107 (141748108 (estimated locally),1.00 per call) 
prvSnprintfReturnValueToCharsWritten/33 (prvSnprintfReturnValueToCharsWritten) @069dbe00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: vTaskListTasks/90 (455492559 (estimated locally),2.12 per call) 
  Calls: 
prvAddNewTaskToReadyList/32 (prvAddNewTaskToReadyList) @069db700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: uxCurrentNumberOfTasks/17 (read) uxCurrentNumberOfTasks/17 (write) pxCurrentTCB/7 (read) pxCurrentTCB/7 (write) uxCurrentNumberOfTasks/17 (read) xSchedulerRunning/20 (read) pxCurrentTCB/7 (read) pxCurrentTCB/7 (write) uxTaskNumber/24 (read) uxTaskNumber/24 (write) uxTopReadyPriority/19 (read) uxTopReadyPriority/19 (write) pxReadyTasksLists/8 (read) pxReadyTasksLists/8 (addr) pxReadyTasksLists/8 (read) pxReadyTasksLists/8 (write) xSchedulerRunning/20 (read) pxCurrentTCB/7 (read) 
  Referring: 
  Availability: local
  Function flags: count:1073741821 (estimated locally) body local optimize_size
  Called by: xTaskCreate/30 (574129753 (estimated locally),0.53 per call) 
  Calls: vPortExitCritical/108 (1073741823 (estimated locally),1.00 per call) prvInitialiseTaskLists/75 (65197602 (estimated locally),0.06 per call) vPortEnterCritical/107 (1073741821 (estimated locally),1.00 per call) 
prvInitialiseNewTask/31 (prvInitialiseNewTask) @069dbd20
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:15867325 (estimated locally) body optimize_size
  Called by: 
  Calls: 
xTaskCreate/30 (xTaskCreate) @069db8c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: prvCreateIdleTasks/47 (203552956 (estimated locally),0.95 per call) 
  Calls: prvAddNewTaskToReadyList/32 (574129753 (estimated locally),0.53 per call) prvCreateTask/29 (1073741824 (estimated locally),1.00 per call) 
prvCreateTask/29 (prvCreateTask) @069db620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: xTaskCreate/30 (1073741824 (estimated locally),1.00 per call) 
  Calls: prvInitialiseNewTask.constprop.0/138 (423592932 (estimated locally),0.39 per call) vPortFree/104 (237662014 (estimated locally),0.22 per call) memset/103 (554544707 (estimated locally),0.52 per call) pvPortMalloc/102 (792206721 (estimated locally),0.74 per call) pvPortMalloc/102 (1073741824 (estimated locally),1.00 per call) 
uxSchedulerSuspended/28 (uxSchedulerSuspended) @069d5948
  Type: variable definition analyzed
  Visibility: force_output prevailing_def_ironly
  References: 
  Referring: xTaskGenericNotifyFromISR/96 (read) xTaskIncrementTick/61 (read) xTaskResumeAll/51 (read) xTaskCatchUpTicks/59 (read) vTaskGenericNotifyGiveFromISR/97 (read) xTaskGetSchedulerState/85 (read) vTaskDelete/34 (read) xTaskRemoveFromEventList/66 (read) vTaskRemoveFromUnorderedEventList/67 (read) vTaskSuspendAll/50 (read) vTaskSuspendAll/50 (write) xTaskDelayUntil/35 (read) xTaskResumeFromISR/46 (read) vTaskDelay/36 (read) vTaskSwitchContext/62 (read) vTaskSuspend/43 (read) vTaskPlaceOnUnorderedEventList/64 (read) xTaskResumeAll.part.0/133 (read) xTaskResumeAll.part.0/133 (read) xTaskResumeAll.part.0/133 (write) vTaskResetState/101 (write) 
  Availability: available
  Varpool flags: initialized
uxTopUsedPriority/27 (uxTopUsedPriority) @069d58b8
  Type: variable definition analyzed
  Visibility: force_output prevailing_def_ironly
  References: 
  Referring: vTaskStartScheduler/48 (read) 
  Availability: available
  Varpool flags: initialized read-only
xIdleTaskHandles/26 (xIdleTaskHandles) @069d5828
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: prvCreateIdleTasks/47 (addr) vTaskEndScheduler/49 (read) 
  Availability: available
  Varpool flags:
xNextTaskUnblockTime/25 (xNextTaskUnblockTime) @069d5798
  Type: variable definition analyzed
  Visibility: force_output prevailing_def_ironly
  References: 
  Referring: prvAddCurrentTaskToDelayedList/100 (write) vTaskStartScheduler/48 (write) prvAddCurrentTaskToDelayedList/100 (read) xTaskIncrementTick.part.0/132 (write) prvResetNextTaskUnblockTime/82 (write) prvResetNextTaskUnblockTime.part.0/123 (write) xTaskIncrementTick.part.0/132 (read) xTaskIncrementTick.part.0/132 (write) vTaskResetState/101 (write) 
  Availability: available
  Varpool flags: initialized
uxTaskNumber/24 (uxTaskNumber) @069d5708
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: prvAddNewTaskToReadyList/32 (read) vTaskDelete/34 (write) prvAddNewTaskToReadyList/32 (write) vTaskDelete/34 (read) vTaskResetState/101 (write) 
  Availability: available
  Varpool flags: initialized
xNumOfOverflows/23 (xNumOfOverflows) @069d56c0
  Type: variable definition analyzed
  Visibility: force_output prevailing_def_ironly
  References: 
  Referring: vTaskSetTimeOutState/68 (read) vTaskInternalSetTimeOutState/69 (read) xTaskCheckForTimeOut/70 (read) xTaskIncrementTick.part.0/132 (write) xTaskIncrementTick.part.0/132 (read) vTaskResetState/101 (write) 
  Availability: available
  Varpool flags: initialized
xYieldPendings/22 (xYieldPendings) @069d5678
  Type: variable definition analyzed
  Visibility: force_output prevailing_def_ironly
  References: 
  Referring: xTaskGenericNotifyFromISR/96 (write) vTaskRemoveFromUnorderedEventList/67 (write) vTaskMissedYield/71 (write) xTaskResumeFromISR/46 (write) xTaskIncrementTick.part.0/132 (read) vTaskGenericNotifyGiveFromISR/97 (write) xTaskResumeAll.part.0/133 (write) xTaskResumeAll.part.0/133 (read) xTaskAbortDelay/60 (write) vTaskSwitchContext/62 (write) xTaskRemoveFromEventList/66 (write) xTaskResumeAll.part.0/133 (write) vTaskSwitchContext.part.0/134 (write) vTaskResetState/101 (write) 
  Availability: available
  Varpool flags: initialized
xPendedTicks/21 (xPendedTicks) @069d5630
  Type: variable definition analyzed
  Visibility: force_output prevailing_def_ironly
  References: 
  Referring: xTaskResumeAll.part.0/133 (read) xTaskCatchUpTicks/59 (write) xTaskIncrementTick/61 (read) xTaskIncrementTick/61 (write) xTaskResumeAll.part.0/133 (write) xTaskIncrementTick.part.0/132 (read) xTaskCatchUpTicks/59 (read) vTaskResetState/101 (write) 
  Availability: available
  Varpool flags: initialized
xSchedulerRunning/20 (xSchedulerRunning) @069d55a0
  Type: variable definition analyzed
  Visibility: force_output prevailing_def_ironly
  References: 
  Referring: vTaskEndScheduler/49 (write) vTaskSuspend/43 (read) vTaskDelete/34 (read) xTaskGetSchedulerState/85 (read) prvAddNewTaskToReadyList/32 (read) vTaskStartScheduler/48 (write) prvAddNewTaskToReadyList/32 (read) vTaskDelete/34 (read) vTaskSuspend/43 (read) vTaskResetState/101 (write) 
  Availability: available
  Varpool flags: initialized
uxTopReadyPriority/19 (uxTopReadyPriority) @069d5510
  Type: variable definition analyzed
  Visibility: force_output prevailing_def_ironly
  References: 
  Referring: xTaskGenericNotify/95 (write) xTaskGenericNotifyFromISR/96 (write) xTaskGenericNotifyFromISR/96 (read) vTaskGenericNotifyGiveFromISR/97 (write) prvAddNewTaskToReadyList/32 (read) prvAddNewTaskToReadyList/32 (write) vTaskPrioritySet/42 (read) vTaskPrioritySet/42 (write) xTaskResumeFromISR/46 (read) xTaskResumeFromISR/46 (write) xTaskIncrementTick.part.0/132 (read) xTaskIncrementTick.part.0/132 (write) vTaskResume/45 (read) vTaskResume/45 (write) xTaskResumeAll.part.0/133 (read) xTaskResumeAll.part.0/133 (write) xTaskAbortDelay/60 (read) xTaskAbortDelay/60 (write) vTaskSwitchContext.part.0/134 (read) vTaskSwitchContext.part.0/134 (write) xTaskRemoveFromEventList/66 (read) xTaskRemoveFromEventList/66 (write) vTaskRemoveFromUnorderedEventList/67 (read) vTaskRemoveFromUnorderedEventList/67 (write) xTaskPriorityInherit/86 (read) xTaskPriorityInherit/86 (write) xTaskPriorityDisinherit/87 (read) xTaskPriorityDisinherit/87 (write) vTaskPriorityDisinheritAfterTimeout/88 (read) vTaskPriorityDisinheritAfterTimeout/88 (write) xTaskGenericNotify/95 (read) vTaskGenericNotifyGiveFromISR/97 (read) vTaskResetState/101 (write) 
  Availability: available
  Varpool flags: initialized
xTickCount/18 (xTickCount) @069d54c8
  Type: variable definition analyzed
  Visibility: force_output prevailing_def_ironly
  References: 
  Referring: xTaskGetTickCountFromISR/53 (read) xTaskGenericNotify/95 (read) xTaskGenericNotifyFromISR/96 (read) prvAddCurrentTaskToDelayedList/100 (read) vTaskStartScheduler/48 (write) xTaskCheckForTimeOut/70 (read) xTaskGetTickCount/52 (read) xTaskIncrementTick.part.0/132 (write) xTaskDelayUntil/35 (read) vTaskSetTimeOutState/68 (read) vTaskInternalSetTimeOutState/69 (read) xTaskIncrementTick.part.0/132 (read) vTaskResetState/101 (write) 
  Availability: available
  Varpool flags: initialized
uxCurrentNumberOfTasks/17 (uxCurrentNumberOfTasks) @069d5480
  Type: variable definition analyzed
  Visibility: force_output prevailing_def_ironly
  References: 
  Referring: prvCheckTasksWaitingTermination/76 (read) vTaskSuspend/43 (read) uxTaskGetSystemState/58 (read) prvAddNewTaskToReadyList/32 (write) prvAddNewTaskToReadyList/32 (read) uxTaskGetNumberOfTasks/54 (read) vTaskDelete/34 (read) vTaskListTasks/90 (read) vTaskDelete/34 (write) prvCheckTasksWaitingTermination/76 (write) xTaskResumeAll.part.0/133 (read) prvAddNewTaskToReadyList/32 (read) vTaskListTasks/90 (read) vTaskResetState/101 (write) 
  Availability: available
  Varpool flags: initialized
xSuspendedTaskList/16 (xSuspendedTaskList) @069d53f0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: vTaskSuspend/43 (read) eTaskGetState.part.0/124 (addr) xTaskGetHandle/57 (addr) prvAddCurrentTaskToDelayedList/100 (write) prvTaskIsTaskSuspended/44 (addr) prvInitialiseTaskLists/75 (addr) prvAddCurrentTaskToDelayedList/100 (read) prvAddCurrentTaskToDelayedList/100 (read) prvAddCurrentTaskToDelayedList/100 (addr) vTaskSuspend/43 (addr) uxTaskGetSystemState/58 (addr) 
  Availability: available
  Varpool flags:
uxDeletedTasksWaitingCleanUp/15 (uxDeletedTasksWaitingCleanUp) @069d5360
  Type: variable definition analyzed
  Visibility: force_output prevailing_def_ironly
  References: 
  Referring: prvCheckTasksWaitingTermination/76 (write) vTaskDelete/34 (write) prvCheckTasksWaitingTermination/76 (read) prvCheckTasksWaitingTermination/76 (read) vTaskDelete/34 (read) vTaskResetState/101 (write) 
  Availability: available
  Varpool flags: initialized
xTasksWaitingTermination/14 (xTasksWaitingTermination) @069d52d0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: eTaskGetState.part.0/124 (addr) prvInitialiseTaskLists/75 (addr) prvCheckTasksWaitingTermination/76 (read) xTaskGetHandle/57 (addr) vTaskDelete/34 (addr) uxTaskGetSystemState/58 (addr) 
  Availability: available
  Varpool flags:
xPendingReadyList/13 (xPendingReadyList) @069d5240
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: xTaskGenericNotifyFromISR/96 (write) prvTaskIsTaskSuspended/44 (addr) vTaskGetInfo/77 (addr) prvInitialiseTaskLists/75 (addr) xTaskRemoveFromEventList/66 (read) eTaskGetState.part.0/124 (addr) xTaskRemoveFromEventList/66 (read) xTaskRemoveFromEventList/66 (addr) xTaskGenericNotifyFromISR/96 (read) xTaskResumeFromISR/46 (addr) xTaskResumeAll.part.0/133 (read) xTaskGenericNotifyFromISR/96 (read) xTaskGenericNotifyFromISR/96 (addr) xTaskResumeAll.part.0/133 (read) xTaskRemoveFromEventList/66 (write) vTaskGenericNotifyGiveFromISR/97 (read) vTaskGenericNotifyGiveFromISR/97 (addr) vTaskGenericNotifyGiveFromISR/97 (read) vTaskGenericNotifyGiveFromISR/97 (write) 
  Availability: available
  Varpool flags:
pxOverflowDelayedTaskList/12 (pxOverflowDelayedTaskList) @069d51b0
  Type: variable definition analyzed
  Visibility: force_output prevailing_def_ironly
  References: 
  Referring: prvAddCurrentTaskToDelayedList/100 (read) xTaskGetHandle/57 (read) prvInitialiseTaskLists/75 (write) eTaskGetState.part.0/124 (read) xTaskIncrementTick.part.0/132 (write) xTaskIncrementTick.part.0/132 (read) uxTaskGetSystemState/58 (read) 
  Availability: available
  Varpool flags:
pxDelayedTaskList/11 (pxDelayedTaskList) @069d5168
  Type: variable definition analyzed
  Visibility: force_output prevailing_def_ironly
  References: 
  Referring: xTaskGetHandle/57 (read) prvResetNextTaskUnblockTime.part.0/123 (read) prvAddCurrentTaskToDelayedList/100 (read) prvResetNextTaskUnblockTime/82 (read) prvInitialiseTaskLists/75 (write) eTaskGetState.part.0/124 (read) xTaskIncrementTick.part.0/132 (read) xTaskIncrementTick.part.0/132 (read) xTaskIncrementTick.part.0/132 (read) xTaskIncrementTick.part.0/132 (write) xTaskIncrementTick.part.0/132 (read) uxTaskGetSystemState/58 (read) 
  Availability: available
  Varpool flags:
xDelayedTaskList2/10 (xDelayedTaskList2) @069d5120
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: prvInitialiseTaskLists/75 (addr) prvInitialiseTaskLists/75 (addr) 
  Availability: available
  Varpool flags:
xDelayedTaskList1/9 (xDelayedTaskList1) @069d5090
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: prvInitialiseTaskLists/75 (addr) prvInitialiseTaskLists/75 (addr) 
  Availability: available
  Varpool flags:
pxReadyTasksLists/8 (pxReadyTasksLists) @069d5000
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: xTaskGenericNotify/95 (read) xTaskGenericNotify/95 (addr) xTaskGenericNotify/95 (read) xTaskGenericNotifyFromISR/96 (write) xTaskGenericNotify/95 (write) vTaskPriorityDisinheritAfterTimeout/88 (write) xTaskGenericNotifyFromISR/96 (read) xTaskGenericNotifyFromISR/96 (addr) xTaskGenericNotifyFromISR/96 (read) prvAddNewTaskToReadyList/32 (write) prvAddNewTaskToReadyList/32 (read) prvAddNewTaskToReadyList/32 (addr) prvAddNewTaskToReadyList/32 (read) prvIdleTask/74 (read) vTaskPrioritySet/42 (read) vTaskPrioritySet/42 (addr) vTaskPrioritySet/42 (read) vTaskPrioritySet/42 (write) prvInitialiseTaskLists/75 (addr) xTaskResumeFromISR/46 (read) xTaskResumeFromISR/46 (addr) xTaskResumeFromISR/46 (read) xTaskResumeFromISR/46 (write) xTaskIncrementTick.part.0/132 (read) xTaskRemoveFromEventList/66 (write) xTaskIncrementTick.part.0/132 (addr) xTaskIncrementTick.part.0/132 (read) xTaskIncrementTick.part.0/132 (write) xTaskResumeAll.part.0/133 (write) xTaskPriorityInherit/86 (addr) vTaskResume/45 (read) vTaskResume/45 (addr) vTaskResume/45 (read) vTaskResume/45 (write) xTaskResumeAll.part.0/133 (read) xTaskGetHandle/57 (addr) xTaskResumeAll.part.0/133 (read) xTaskResumeAll.part.0/133 (addr) xTaskAbortDelay/60 (read) xTaskAbortDelay/60 (write) vTaskSwitchContext.part.0/134 (addr) vTaskSwitchContext.part.0/134 (read) vTaskSwitchContext.part.0/134 (write) vTaskSwitchContext.part.0/134 (read) vTaskPrioritySet/42 (addr) xTaskRemoveFromEventList/66 (read) xTaskRemoveFromEventList/66 (addr) xTaskRemoveFromEventList/66 (read) vTaskRemoveFromUnorderedEventList/67 (write) vTaskRemoveFromUnorderedEventList/67 (read) vTaskRemoveFromUnorderedEventList/67 (addr) vTaskRemoveFromUnorderedEventList/67 (read) uxTaskGetSystemState/58 (addr) vTaskSwitchContext.part.0/134 (write) xTaskPriorityInherit/86 (read) xTaskPriorityInherit/86 (addr) xTaskPriorityInherit/86 (read) xTaskPriorityInherit/86 (write) xTaskPriorityDisinherit/87 (read) xTaskPriorityDisinherit/87 (addr) xTaskPriorityDisinherit/87 (read) xTaskPriorityDisinherit/87 (write) vTaskPriorityDisinheritAfterTimeout/88 (read) vTaskPriorityDisinheritAfterTimeout/88 (addr) vTaskPriorityDisinheritAfterTimeout/88 (read) xTaskIncrementTick.part.0/132 (read) xTaskAbortDelay/60 (read) xTaskAbortDelay/60 (addr) vTaskSwitchContext.part.0/134 (read) vTaskSwitchContext.part.0/134 (read) vTaskPriorityDisinheritAfterTimeout/88 (addr) vTaskGenericNotifyGiveFromISR/97 (read) vTaskGenericNotifyGiveFromISR/97 (addr) vTaskGenericNotifyGiveFromISR/97 (read) vTaskGenericNotifyGiveFromISR/97 (write) 
  Availability: available
  Varpool flags:
pxCurrentTCB/7 (pxCurrentTCB) @069cff78
  Type: variable definition analyzed
  Visibility: force_output externally_visible public
  References: 
  Referring: xTaskGenericNotifyWait/94 (read) xTaskGenericNotify/95 (read) xTaskGenericNotifyFromISR/96 (read) vTaskGenericNotifyGiveFromISR/97 (read) xTaskGenericNotifyStateClear/98 (read) prvAddNewTaskToReadyList/32 (read) prvAddNewTaskToReadyList/32 (write) prvAddNewTaskToReadyList/32 (read) xTaskPriorityInherit/86 (read) uxTaskResetEventItemValue/91 (read) uxTaskResetEventItemValue/91 (read) pvTaskIncrementMutexHeldCount/92 (read) ulTaskGenericNotifyTake/93 (read) ulTaskGenericNotifyTake/93 (read) ulTaskGenericNotifyTake/93 (read) ulTaskGenericNotifyTake/93 (read) ulTaskGenericNotifyTake/93 (read) ulTaskGenericNotifyValueClear/99 (read) prvAddCurrentTaskToDelayedList/100 (read) vTaskDelete/34 (read) eTaskGetState/37 (read) uxTaskPriorityGet/38 (read) uxTaskPriorityGetFromISR/39 (read) prvAddNewTaskToReadyList/32 (write) prvAddCurrentTaskToDelayedList/100 (read) prvAddCurrentTaskToDelayedList/100 (read) uxTaskBasePriorityGet/40 (read) vTaskDelete/34 (read) xTaskResumeAll.part.0/133 (read) xTaskAbortDelay/60 (read) vTaskDelete/34 (read) uxTaskBasePriorityGetFromISR/41 (read) vTaskPrioritySet/42 (read) vTaskResume/45 (read) pcTaskGetName/55 (read) vTaskResume/45 (read) xTaskIncrementTick.part.0/132 (read) vTaskPrioritySet/42 (read) xTaskResumeFromISR/46 (read) xTaskIncrementTick.part.0/132 (read) xTaskResumeAll.part.0/133 (read) vTaskSwitchContext.part.0/134 (read) ulTaskGenericNotifyTake/93 (read) prvAddNewTaskToReadyList/32 (read) prvAddCurrentTaskToDelayedList/100 (read) vTaskPrioritySet/42 (read) vTaskSwitchContext.part.0/134 (write) vTaskSuspend/43 (write) prvAddCurrentTaskToDelayedList/100 (read) vTaskPrioritySet/42 (read) vTaskSuspend/43 (read) vTaskSuspend/43 (read) vTaskPlaceOnEventList/63 (read) vTaskPlaceOnUnorderedEventList/64 (read) vTaskPlaceOnEventListRestricted/65 (read) vTaskPlaceOnUnorderedEventList/64 (read) xTaskRemoveFromEventList/66 (read) vTaskPlaceOnEventListRestricted/65 (read) vTaskRemoveFromUnorderedEventList/67 (read) xTaskCheckForTimeOut/70 (read) vTaskGetInfo/77 (read) uxTaskGetStackHighWaterMark/80 (read) vTaskPlaceOnUnorderedEventList/64 (read) vTaskPlaceOnUnorderedEventList/64 (read) vTaskPlaceOnUnorderedEventList/64 (read) xTaskCheckForTimeOut/70 (read) xTaskGetCurrentTaskHandle/83 (read) xTaskGetCurrentTaskHandleForCore/84 (read) xTaskPriorityInherit/86 (read) vTaskPlaceOnEventListRestricted/65 (read) vTaskGetInfo/77 (read) xTaskPriorityDisinherit/87 (read) vTaskPriorityDisinheritAfterTimeout/88 (read) prvAddCurrentTaskToDelayedList/100 (read) vTaskPlaceOnEventListRestricted/65 (read) vTaskPlaceOnEventListRestricted/65 (read) xTaskPriorityInherit/86 (read) xTaskPriorityInherit/86 (read) uxTaskResetEventItemValue/91 (read) prvAddCurrentTaskToDelayedList/100 (read) vTaskPlaceOnUnorderedEventList/64 (read) xTaskPriorityInherit/86 (read) prvAddCurrentTaskToDelayedList/100 (read) prvAddCurrentTaskToDelayedList/100 (read) prvAddCurrentTaskToDelayedList/100 (read) xTaskGenericNotifyWait/94 (read) xTaskGenericNotifyWait/94 (read) xTaskGenericNotifyWait/94 (read) xTaskGenericNotifyWait/94 (read) xTaskGenericNotifyWait/94 (read) xTaskGenericNotifyWait/94 (read) vTaskResetState/101 (write) 
  Availability: available
  Varpool flags: initialized

;; Function prvSearchForNameWithinSingleList (prvSearchForNameWithinSingleList, funcdef_no=34, decl_uid=7088, cgraph_uid=35, symbol_order=56)

Modification phase of node prvSearchForNameWithinSingleList/56
prvSearchForNameWithinSingleList (struct List_t * pxList, const char * pcNameToQuery)
{
  struct ListItem_t * pxIterator;
  const struct ListItem_t * pxEndMarker;
  char cNextChar;
  UBaseType_t x;
  struct TCB_t * pxTCB;
  struct TCB_t * pxReturn;
  long unsigned int _1;
  const char * _2;
  char _3;

  <bb 2> [local count: 26745564]:
  # DEBUG BEGIN_STMT
  # DEBUG pxReturn => 0B
  # DEBUG BEGIN_STMT
  # DEBUG pxTCB => 0B
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  pxEndMarker_11 = &pxList_10(D)->xListEnd;
  # DEBUG pxEndMarker => pxEndMarker_11
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = pxList_10(D)->uxNumberOfItems;
  if (_1 != 0)
    goto <bb 3>; [71.00%]
  else
    goto <bb 12>; [29.00%]

  <bb 3> [local count: 18989351]:
  # DEBUG BEGIN_STMT
  pxIterator_13 = pxList_10(D)->xListEnd.pxNext;
  # DEBUG pxIterator => pxIterator_13
  goto <bb 11>; [100.00%]

  <bb 4> [local count: 167748886]:
  # DEBUG BEGIN_STMT
  pxTCB_14 = pxIterator_9->pvOwner;
  # DEBUG pxTCB => pxTCB_14
  # DEBUG BEGIN_STMT
  # DEBUG xBreakLoop => 0
  # DEBUG BEGIN_STMT
  # DEBUG x => 0
  goto <bb 8>; [100.00%]

  <bb 5> [local count: 976138697]:
  # DEBUG BEGIN_STMT
  cNextChar_15 = pxTCB_14->pcTaskName[x_8];
  # DEBUG cNextChar => cNextChar_15
  # DEBUG BEGIN_STMT
  _2 = pcNameToQuery_16(D) + x_8;
  _3 = *_2;
  if (_3 != cNextChar_15)
    goto <bb 9>; [3.66%]
  else
    goto <bb 6>; [96.34%]

  <bb 6> [local count: 940412020]:
  # DEBUG BEGIN_STMT
  if (cNextChar_15 == 0)
    goto <bb 9>; [3.66%]
  else
    goto <bb 7>; [96.34%]

  <bb 7> [local count: 905992938]:
  # DEBUG xBreakLoop => 0
  # DEBUG pxReturn => pxReturn_4
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  x_17 = x_8 + 1;
  # DEBUG x => x_17

  <bb 8> [local count: 1073741824]:
  # pxReturn_4 = PHI <pxReturn_6(4), pxReturn_4(7)>
  # x_8 = PHI <0(4), x_17(7)>
  # DEBUG xBreakLoop => 0
  # DEBUG x => x_8
  # DEBUG pxReturn => pxReturn_4
  # DEBUG BEGIN_STMT
  if (x_8 != 10)
    goto <bb 5>; [90.91%]
  else
    goto <bb 9>; [9.09%]

  <bb 9> [local count: 167748886]:
  # pxReturn_5 = PHI <pxTCB_14(6), pxReturn_4(8), pxReturn_4(5)>
  # DEBUG xBreakLoop => NULL
  # DEBUG pxReturn => pxReturn_5
  # DEBUG BEGIN_STMT
  if (pxReturn_5 != 0B)
    goto <bb 12>; [5.50%]
  else
    goto <bb 10>; [94.50%]

  <bb 10> [local count: 158522698]:
  # DEBUG BEGIN_STMT
  pxIterator_18 = pxIterator_9->pxNext;
  # DEBUG pxIterator => pxIterator_18

  <bb 11> [local count: 177512049]:
  # pxReturn_6 = PHI <0B(3), 0B(10)>
  # pxIterator_9 = PHI <pxIterator_13(3), pxIterator_18(10)>
  # DEBUG pxIterator => pxIterator_9
  # DEBUG pxReturn => pxReturn_6
  # DEBUG BEGIN_STMT
  if (pxIterator_9 != pxEndMarker_11)
    goto <bb 4>; [94.50%]
  else
    goto <bb 12>; [5.50%]

  <bb 12> [local count: 26745565]:
  # pxReturn_7 = PHI <0B(2), pxReturn_6(11), pxReturn_5(9)>
  # DEBUG pxReturn => pxReturn_7
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return pxReturn_7;

}



;; Function prvAddCurrentTaskToDelayedList (prvAddCurrentTaskToDelayedList, funcdef_no=78, decl_uid=7081, cgraph_uid=79, symbol_order=100)

Modification phase of node prvAddCurrentTaskToDelayedList/100
prvAddCurrentTaskToDelayedList (TickType_t xTicksToWait, const BaseType_t xCanBlockIndefinitely)
{
  struct ListItem_t * const pxIndex;
  struct List_t * const pxOverflowDelayedList;
  struct List_t * const pxDelayedList;
  const TickType_t xConstTickCount;
  TickType_t xTimeToWake;
  struct TCB_t * pxCurrentTCB.25_1;
  struct TCB_t * pxCurrentTCB.26_2;
  struct ListItem_t * _3;
  struct TCB_t * pxCurrentTCB.27_4;
  struct TCB_t * pxCurrentTCB.28_5;
  struct xLIST_ITEM * _6;
  struct TCB_t * pxCurrentTCB.29_7;
  struct xLIST_ITEM * _8;
  struct ListItem_t * _9;
  struct TCB_t * pxCurrentTCB.30_10;
  struct ListItem_t * _11;
  struct TCB_t * pxCurrentTCB.31_12;
  long unsigned int _13;
  long unsigned int _14;
  struct TCB_t * pxCurrentTCB.32_15;
  struct TCB_t * pxCurrentTCB.33_16;
  struct ListItem_t * _17;
  struct TCB_t * pxCurrentTCB.34_18;
  struct ListItem_t * _19;
  long unsigned int xNextTaskUnblockTime.35_20;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  xConstTickCount_23 ={v} xTickCount;
  # DEBUG xConstTickCount => xConstTickCount_23
  # DEBUG BEGIN_STMT
  pxDelayedList_24 ={v} pxDelayedTaskList;
  # DEBUG pxDelayedList => pxDelayedList_24
  # DEBUG BEGIN_STMT
  pxOverflowDelayedList_25 ={v} pxOverflowDelayedTaskList;
  # DEBUG pxOverflowDelayedList => pxOverflowDelayedList_25
  # DEBUG BEGIN_STMT
  pxCurrentTCB.25_1 ={v} pxCurrentTCB;
  pxCurrentTCB.25_1->ucDelayAborted = 0;
  # DEBUG BEGIN_STMT
  pxCurrentTCB.26_2 ={v} pxCurrentTCB;
  _3 = &pxCurrentTCB.26_2->xStateListItem;
  uxListRemove (_3);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (xTicksToWait_28(D) == 4294967295)
    goto <bb 3>; [34.00%]
  else
    goto <bb 5>; [66.00%]

  <bb 3> [local count: 365072224]:
  if (xCanBlockIndefinitely_29(D) != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 4> [local count: 182536112]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  pxIndex_30 = xSuspendedTaskList.pxIndex;
  # DEBUG pxIndex => pxIndex_30
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  pxCurrentTCB.27_4 ={v} pxCurrentTCB;
  pxCurrentTCB.27_4->xStateListItem.pxNext = pxIndex_30;
  # DEBUG BEGIN_STMT
  pxCurrentTCB.28_5 ={v} pxCurrentTCB;
  _6 = pxIndex_30->pxPrevious;
  pxCurrentTCB.28_5->xStateListItem.pxPrevious = _6;
  # DEBUG BEGIN_STMT
  pxCurrentTCB.29_7 ={v} pxCurrentTCB;
  _8 = pxIndex_30->pxPrevious;
  _9 = &pxCurrentTCB.29_7->xStateListItem;
  _8->pxNext = _9;
  # DEBUG BEGIN_STMT
  pxCurrentTCB.30_10 ={v} pxCurrentTCB;
  _11 = &pxCurrentTCB.30_10->xStateListItem;
  pxIndex_30->pxPrevious = _11;
  # DEBUG BEGIN_STMT
  pxCurrentTCB.31_12 ={v} pxCurrentTCB;
  pxCurrentTCB.31_12->xStateListItem.pvContainer = &xSuspendedTaskList;
  # DEBUG BEGIN_STMT
  _13 = xSuspendedTaskList.uxNumberOfItems;
  _14 = _13 + 1;
  xSuspendedTaskList.uxNumberOfItems = _14;
  # DEBUG BEGIN_STMT
  goto <bb 9>; [100.00%]

  <bb 5> [local count: 891205713]:
  # DEBUG BEGIN_STMT
  xTimeToWake_37 = xConstTickCount_23 + xTicksToWait_28(D);
  # DEBUG xTimeToWake => xTimeToWake_37
  # DEBUG BEGIN_STMT
  pxCurrentTCB.32_15 ={v} pxCurrentTCB;
  pxCurrentTCB.32_15->xStateListItem.xItemValue = xTimeToWake_37;
  # DEBUG BEGIN_STMT
  if (xConstTickCount_23 > xTimeToWake_37)
    goto <bb 6>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 6> [local count: 445602856]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  pxCurrentTCB.33_16 ={v} pxCurrentTCB;
  _17 = &pxCurrentTCB.33_16->xStateListItem;
  vListInsert (pxOverflowDelayedList_25, _17);
  goto <bb 9>; [100.00%]

  <bb 7> [local count: 445602856]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  pxCurrentTCB.34_18 ={v} pxCurrentTCB;
  _19 = &pxCurrentTCB.34_18->xStateListItem;
  vListInsert (pxDelayedList_24, _19);
  # DEBUG BEGIN_STMT
  xNextTaskUnblockTime.35_20 ={v} xNextTaskUnblockTime;
  if (xNextTaskUnblockTime.35_20 > xTimeToWake_37)
    goto <bb 8>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 8> [local count: 222801428]:
  # DEBUG BEGIN_STMT
  xNextTaskUnblockTime ={v} xTimeToWake_37;

  <bb 9> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function prvTaskIsTaskSuspended (prvTaskIsTaskSuspended, funcdef_no=22, decl_uid=7070, cgraph_uid=23, symbol_order=44)

Modification phase of node prvTaskIsTaskSuspended/44
prvTaskIsTaskSuspended (struct tskTaskControlBlock * const xTask)
{
  BaseType_t x;
  BaseType_t xReturn;
  struct xLIST * _1;
  struct xLIST * _2;

  <bb 2> [local count: 35437027]:
  # DEBUG BEGIN_STMT
  # DEBUG xReturn => 0
  # DEBUG BEGIN_STMT
  # DEBUG pxTCB => xTask_6(D)
  # DEBUG BEGIN_STMT
  if (xTask_6(D) == 0B)
    goto <bb 3>; [30.00%]
  else
    goto <bb 5>; [70.00%]

  <bb 3> [local count: 10631108]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i " :  :  : "memory");

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 10> [local count: 1073741824]:
  goto <bb 4>; [100.00%]

  <bb 5> [local count: 24805919]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = MEM[(const struct TCB_t *)xTask_6(D)].xStateListItem.pvContainer;
  if (_1 == &xSuspendedTaskList)
    goto <bb 6>; [30.00%]
  else
    goto <bb 9>; [70.00%]

  <bb 6> [local count: 7441776]:
  # DEBUG BEGIN_STMT
  _2 = MEM[(const struct TCB_t *)xTask_6(D)].xEventListItem.pvContainer;
  if (_2 != &xPendingReadyList)
    goto <bb 7>; [70.00%]
  else
    goto <bb 9>; [30.00%]

  <bb 7> [local count: 5209243]:
  # DEBUG BEGIN_STMT
  if (_2 == 0B)
    goto <bb 8>; [30.00%]
  else
    goto <bb 9>; [70.00%]

  <bb 8> [local count: 1562773]:
  # x_5 = PHI <0(7)>
  xReturn_8 = prvTaskIsTaskSuspended.part.0 (xTask_6(D));

  <bb 9> [local count: 24805919]:
  # xReturn_4 = PHI <0(5), 0(7), 0(6), xReturn_8(8)>
  # DEBUG xReturn => xReturn_4
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return xReturn_4;

}



;; Function prvResetNextTaskUnblockTime (prvResetNextTaskUnblockTime, funcdef_no=60, decl_uid=7092, cgraph_uid=61, symbol_order=82)

Modification phase of node prvResetNextTaskUnblockTime/82
prvResetNextTaskUnblockTime ()
{
  struct List_t * pxDelayedTaskList.22_1;
  long unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  pxDelayedTaskList.22_1 ={v} pxDelayedTaskList;
  _2 = pxDelayedTaskList.22_1->uxNumberOfItems;
  if (_2 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  xNextTaskUnblockTime ={v} 4294967295;
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 536870912]:
  prvResetNextTaskUnblockTime.part.0 ();

  <bb 5> [local count: 1073741824]:
  return;

}



;; Function prvCheckTasksWaitingTermination (prvCheckTasksWaitingTermination, funcdef_no=54, decl_uid=7078, cgraph_uid=55, symbol_order=76)

Modification phase of node prvCheckTasksWaitingTermination/76
prvCheckTasksWaitingTermination ()
{
  struct TCB_t * pxTCB;
  struct xLIST_ITEM * _1;
  struct ListItem_t * _2;
  long unsigned int uxCurrentNumberOfTasks.60_3;
  long unsigned int _4;
  long unsigned int uxDeletedTasksWaitingCleanUp.61_5;
  long unsigned int _6;
  long unsigned int uxDeletedTasksWaitingCleanUp.62_7;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 955630225]:
  # DEBUG BEGIN_STMT
  vPortEnterCritical ();
  # DEBUG BEGIN_STMT
  _1 = xTasksWaitingTermination.xListEnd.pxNext;
  pxTCB_11 = _1->pvOwner;
  # DEBUG pxTCB => pxTCB_11
  # DEBUG BEGIN_STMT
  _2 = &pxTCB_11->xStateListItem;
  uxListRemove (_2);
  # DEBUG BEGIN_STMT
  uxCurrentNumberOfTasks.60_3 ={v} uxCurrentNumberOfTasks;
  _4 = uxCurrentNumberOfTasks.60_3 + 4294967295;
  uxCurrentNumberOfTasks ={v} _4;
  # DEBUG BEGIN_STMT
  uxDeletedTasksWaitingCleanUp.61_5 ={v} uxDeletedTasksWaitingCleanUp;
  _6 = uxDeletedTasksWaitingCleanUp.61_5 + 4294967295;
  uxDeletedTasksWaitingCleanUp ={v} _6;
  # DEBUG BEGIN_STMT
  vPortExitCritical ();
  # DEBUG BEGIN_STMT
  prvDeleteTCB (pxTCB_11);

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  uxDeletedTasksWaitingCleanUp.62_7 ={v} uxDeletedTasksWaitingCleanUp;
  if (uxDeletedTasksWaitingCleanUp.62_7 != 0)
    goto <bb 3>; [89.00%]
  else
    goto <bb 5>; [11.00%]

  <bb 5> [local count: 118111600]:
  return;

}



;; Function prvIdleTask (prvIdleTask, funcdef_no=52, decl_uid=7074, cgraph_uid=53, symbol_order=74) (executed once)

Modification phase of node prvIdleTask/74
prvIdleTask (void * pvParameters)
{
  long unsigned int _1;

  <bb 2> [local count: 6272354]:

  <bb 3> [local count: 633507680]:

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  prvCheckTasksWaitingTermination ();
  # DEBUG BEGIN_STMT
  _1 = pxReadyTasksLists[0].uxNumberOfItems;
  if (_1 > 1)
    goto <bb 5>; [59.00%]
  else
    goto <bb 6>; [41.00%]

  <bb 6> [local count: 440234144]:
  goto <bb 4>; [100.00%]

  <bb 5> [local count: 633507680]:
  # DEBUG BEGIN_STMT
  MEM[(volatile uint32_t *)3758157060B] ={v} 268435456;
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("dsb" :  :  : "memory");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("isb");
  # DEBUG BEGIN_STMT
  goto <bb 3>; [100.00%]

}



;; Function xTaskCreate (xTaskCreate, funcdef_no=8, decl_uid=6265, cgraph_uid=9, symbol_order=30)

Modification phase of node xTaskCreate/30
xTaskCreate (void (*TaskFunction_t) (void *) pxTaskCode, const char * const pcName, const StackType_t uxStackDepth, void * const pvParameters, UBaseType_t uxPriority, struct tskTaskControlBlock * * const pxCreatedTask)
{
  BaseType_t xReturn;
  struct TCB_t * pxNewTCB;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  pxNewTCB_11 = prvCreateTask (pxTaskCode_4(D), pcName_5(D), uxStackDepth_6(D), pvParameters_7(D), uxPriority_8(D), pxCreatedTask_9(D));
  # DEBUG pxNewTCB => pxNewTCB_11
  # DEBUG BEGIN_STMT
  if (pxNewTCB_11 != 0B)
    goto <bb 3>; [53.47%]
  else
    goto <bb 4>; [46.53%]

  <bb 3> [local count: 574129753]:
  # DEBUG BEGIN_STMT
  prvAddNewTaskToReadyList (pxNewTCB_11);
  # DEBUG BEGIN_STMT
  # DEBUG xReturn => 1

  <bb 4> [local count: 1073741824]:
  # xReturn_1 = PHI <1(3), -1(2)>
  # DEBUG xReturn => xReturn_1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return xReturn_1;

}



;; Function vTaskDelete (vTaskDelete, funcdef_no=12, decl_uid=6267, cgraph_uid=13, symbol_order=34)

Modification phase of node vTaskDelete/34
vTaskDelete (struct tskTaskControlBlock * xTaskToDelete)
{
  struct ListItem_t * _1;
  struct xLIST * _2;
  struct ListItem_t * _3;
  long unsigned int uxTaskNumber.13_4;
  long unsigned int _5;
  struct TCB_t * pxCurrentTCB.15_6;
  long int xSchedulerRunning.16_7;
  long unsigned int uxDeletedTasksWaitingCleanUp.17_8;
  long unsigned int _9;
  long unsigned int uxCurrentNumberOfTasks.18_10;
  long unsigned int _11;
  long int xSchedulerRunning.19_12;
  struct TCB_t * pxCurrentTCB.20_13;
  long unsigned int uxSchedulerSuspended.21_14;
  struct TCB_t * iftmp.12_15;
  long int iftmp.14_16;
  struct TCB_t * iftmp.12_24;

  <bb 2> [local count: 141748108]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG xDeleteTCBInIdleTask => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  vPortEnterCritical ();
  # DEBUG BEGIN_STMT
  if (xTaskToDelete_22(D) == 0B)
    goto <bb 3>; [30.00%]
  else
    goto <bb 4>; [70.00%]

  <bb 3> [local count: 42524432]:
  iftmp.12_24 ={v} pxCurrentTCB;

  <bb 4> [local count: 141748108]:
  # iftmp.12_15 = PHI <iftmp.12_24(3), xTaskToDelete_22(D)(2)>
  # DEBUG pxTCB => iftmp.12_15
  # DEBUG BEGIN_STMT
  _1 = &iftmp.12_15->xStateListItem;
  uxListRemove (_1);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _2 = iftmp.12_15->xEventListItem.pvContainer;
  if (_2 != 0B)
    goto <bb 5>; [53.47%]
  else
    goto <bb 6>; [46.53%]

  <bb 5> [local count: 75792713]:
  # DEBUG BEGIN_STMT
  _3 = &iftmp.12_15->xEventListItem;
  uxListRemove (_3);

  <bb 6> [local count: 141748108]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  uxTaskNumber.13_4 = uxTaskNumber;
  _5 = uxTaskNumber.13_4 + 1;
  uxTaskNumber = _5;
  # DEBUG BEGIN_STMT
  pxCurrentTCB.15_6 ={v} pxCurrentTCB;
  if (pxCurrentTCB.15_6 == iftmp.12_15)
    goto <bb 8>; [30.00%]
  else
    goto <bb 7>; [70.00%]

  <bb 7> [local count: 99223676]:

  <bb 8> [local count: 141748108]:
  # iftmp.14_16 = PHI <1(6), 0(7)>
  # DEBUG xTaskIsRunningOrYielding => iftmp.14_16
  # DEBUG BEGIN_STMT
  xSchedulerRunning.16_7 ={v} xSchedulerRunning;
  if (xSchedulerRunning.16_7 != 0)
    goto <bb 9>; [67.00%]
  else
    goto <bb 11>; [33.00%]

  <bb 9> [local count: 94971233]:
  if (iftmp.14_16 != 0)
    goto <bb 10>; [33.00%]
  else
    goto <bb 11>; [67.00%]

  <bb 10> [local count: 31340507]:
  # DEBUG BEGIN_STMT
  vListInsertEnd (&xTasksWaitingTermination, _1);
  # DEBUG BEGIN_STMT
  uxDeletedTasksWaitingCleanUp.17_8 ={v} uxDeletedTasksWaitingCleanUp;
  _9 = uxDeletedTasksWaitingCleanUp.17_8 + 1;
  uxDeletedTasksWaitingCleanUp ={v} _9;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG xDeleteTCBInIdleTask => 1
  # DEBUG BEGIN_STMT
  # DEBUG xDeleteTCBInIdleTask => 1
  # DEBUG BEGIN_STMT
  vPortExitCritical ();
  # DEBUG BEGIN_STMT
  goto <bb 12>; [100.00%]

  <bb 11> [local count: 110407601]:
  # DEBUG BEGIN_STMT
  uxCurrentNumberOfTasks.18_10 ={v} uxCurrentNumberOfTasks;
  _11 = uxCurrentNumberOfTasks.18_10 + 4294967295;
  uxCurrentNumberOfTasks ={v} _11;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  prvResetNextTaskUnblockTime ();
  # DEBUG xDeleteTCBInIdleTask => 0
  # DEBUG BEGIN_STMT
  vPortExitCritical ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  prvDeleteTCB (iftmp.12_15);

  <bb 12> [local count: 141748108]:
  # DEBUG BEGIN_STMT
  xSchedulerRunning.19_12 ={v} xSchedulerRunning;
  if (xSchedulerRunning.19_12 != 0)
    goto <bb 13>; [50.00%]
  else
    goto <bb 18>; [50.00%]

  <bb 13> [local count: 70874054]:
  # DEBUG BEGIN_STMT
  pxCurrentTCB.20_13 ={v} pxCurrentTCB;
  if (pxCurrentTCB.20_13 == iftmp.12_15)
    goto <bb 14>; [30.00%]
  else
    goto <bb 18>; [70.00%]

  <bb 14> [local count: 21262216]:
  # DEBUG BEGIN_STMT
  uxSchedulerSuspended.21_14 ={v} uxSchedulerSuspended;
  if (uxSchedulerSuspended.21_14 != 0)
    goto <bb 15>; [50.00%]
  else
    goto <bb 17>; [50.00%]

  <bb 15> [local count: 10631108]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i " :  :  : "memory");

  <bb 16> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 19> [local count: 1073741824]:
  goto <bb 16>; [100.00%]

  <bb 17> [local count: 10631108]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  MEM[(volatile uint32_t *)3758157060B] ={v} 268435456;
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("dsb" :  :  : "memory");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("isb");
  # DEBUG BEGIN_STMT

  <bb 18> [local count: 131117000]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return;

}



;; Function eTaskGetState (eTaskGetState, funcdef_no=15, decl_uid=6284, cgraph_uid=16, symbol_order=37)

Modification phase of node eTaskGetState/37
eTaskGetState (struct tskTaskControlBlock * xTask)
{
  eTaskState eReturn;
  struct TCB_t * pxCurrentTCB.37_1;

  <bb 2> [local count: 35437027]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG pxTCB => xTask_3(D)
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (xTask_3(D) == 0B)
    goto <bb 3>; [30.00%]
  else
    goto <bb 5>; [70.00%]

  <bb 3> [local count: 10631108]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i " :  :  : "memory");

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 8> [local count: 1073741824]:
  goto <bb 4>; [100.00%]

  <bb 5> [local count: 24805919]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  pxCurrentTCB.37_1 ={v} pxCurrentTCB;
  if (pxCurrentTCB.37_1 == xTask_3(D))
    goto <bb 7>; [46.53%]
  else
    goto <bb 6>; [53.47%]

  <bb 6> [local count: 13263725]:
  eReturn_6 = eTaskGetState.part.0 (xTask_3(D));

  <bb 7> [local count: 24805919]:
  # eReturn_2 = PHI <0(5), eReturn_6(6)>
  # DEBUG eReturn => eReturn_2
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return eReturn_2;

}



;; Function uxTaskPriorityGet (uxTaskPriorityGet, funcdef_no=16, decl_uid=6276, cgraph_uid=17, symbol_order=38)

Modification phase of node uxTaskPriorityGet/38
uxTaskPriorityGet (struct tskTaskControlBlock * const xTask)
{
  UBaseType_t uxReturn;
  const struct TCB_t * iftmp.38_1;
  const struct TCB_t * iftmp.38_5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  vPortEnterCritical ();
  # DEBUG BEGIN_STMT
  if (xTask_4(D) == 0B)
    goto <bb 3>; [30.00%]
  else
    goto <bb 4>; [70.00%]

  <bb 3> [local count: 322122544]:
  iftmp.38_5 ={v} pxCurrentTCB;

  <bb 4> [local count: 1073741824]:
  # iftmp.38_1 = PHI <iftmp.38_5(3), xTask_4(D)(2)>
  # DEBUG pxTCB => iftmp.38_1
  # DEBUG BEGIN_STMT
  uxReturn_6 = iftmp.38_1->uxPriority;
  # DEBUG uxReturn => uxReturn_6
  # DEBUG BEGIN_STMT
  vPortExitCritical ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return uxReturn_6;

}



;; Function uxTaskPriorityGetFromISR (uxTaskPriorityGetFromISR, funcdef_no=17, decl_uid=6278, cgraph_uid=18, symbol_order=39)

Modification phase of node uxTaskPriorityGetFromISR/39
uxTaskPriorityGetFromISR (struct tskTaskControlBlock * const xTask)
{
  uint32_t ulOriginalBASEPRI;
  uint32_t ulNewBASEPRI;
  UBaseType_t uxReturn;
  const struct TCB_t * iftmp.39_1;
  const struct TCB_t * iftmp.39_5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  vPortValidateInterruptPriority ();
  # DEBUG BEGIN_STMT
  # DEBUG INLINE_ENTRY ulPortRaiseBASEPRI
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("   mrs %0, basepri                                         
   mov %1, %2                                              
   cpsid i                                                 
   msr basepri, %1                                         
   isb                                                     
   dsb                                                     
   cpsie i                                                 
" : "=r" ulOriginalBASEPRI_7, "=r" ulNewBASEPRI_8 : "i" 16 : "memory");
  # DEBUG ulNewBASEPRI => ulNewBASEPRI_8
  # DEBUG ulOriginalBASEPRI => ulOriginalBASEPRI_7
  # DEBUG BEGIN_STMT
  # DEBUG ulNewBASEPRI => NULL
  # DEBUG ulOriginalBASEPRI => NULL
  # DEBUG uxSavedInterruptStatus => ulOriginalBASEPRI_7
  # DEBUG BEGIN_STMT
  if (xTask_4(D) == 0B)
    goto <bb 3>; [30.00%]
  else
    goto <bb 4>; [70.00%]

  <bb 3> [local count: 322122544]:
  iftmp.39_5 ={v} pxCurrentTCB;

  <bb 4> [local count: 1073741824]:
  # iftmp.39_1 = PHI <iftmp.39_5(3), xTask_4(D)(2)>
  # DEBUG pxTCB => iftmp.39_1
  # DEBUG BEGIN_STMT
  uxReturn_6 = iftmp.39_1->uxPriority;
  # DEBUG uxReturn => uxReturn_6
  # DEBUG BEGIN_STMT
  # DEBUG ulNewMaskValue => ulOriginalBASEPRI_7
  # DEBUG INLINE_ENTRY vPortSetBASEPRI
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("   msr basepri, %0 " :  : "r" ulOriginalBASEPRI_7 : "memory");
  # DEBUG ulNewMaskValue => NULL
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return uxReturn_6;

}



;; Function uxTaskBasePriorityGet (uxTaskBasePriorityGet, funcdef_no=18, decl_uid=6280, cgraph_uid=19, symbol_order=40)

Modification phase of node uxTaskBasePriorityGet/40
uxTaskBasePriorityGet (struct tskTaskControlBlock * const xTask)
{
  UBaseType_t uxReturn;
  const struct TCB_t * iftmp.40_1;
  const struct TCB_t * iftmp.40_5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  vPortEnterCritical ();
  # DEBUG BEGIN_STMT
  if (xTask_4(D) == 0B)
    goto <bb 3>; [30.00%]
  else
    goto <bb 4>; [70.00%]

  <bb 3> [local count: 322122544]:
  iftmp.40_5 ={v} pxCurrentTCB;

  <bb 4> [local count: 1073741824]:
  # iftmp.40_1 = PHI <iftmp.40_5(3), xTask_4(D)(2)>
  # DEBUG pxTCB => iftmp.40_1
  # DEBUG BEGIN_STMT
  uxReturn_6 = iftmp.40_1->uxBasePriority;
  # DEBUG uxReturn => uxReturn_6
  # DEBUG BEGIN_STMT
  vPortExitCritical ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return uxReturn_6;

}



;; Function uxTaskBasePriorityGetFromISR (uxTaskBasePriorityGetFromISR, funcdef_no=19, decl_uid=6282, cgraph_uid=20, symbol_order=41)

Modification phase of node uxTaskBasePriorityGetFromISR/41
uxTaskBasePriorityGetFromISR (struct tskTaskControlBlock * const xTask)
{
  uint32_t ulOriginalBASEPRI;
  uint32_t ulNewBASEPRI;
  UBaseType_t uxReturn;
  const struct TCB_t * iftmp.41_1;
  const struct TCB_t * iftmp.41_5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  vPortValidateInterruptPriority ();
  # DEBUG BEGIN_STMT
  # DEBUG INLINE_ENTRY ulPortRaiseBASEPRI
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("   mrs %0, basepri                                         
   mov %1, %2                                              
   cpsid i                                                 
   msr basepri, %1                                         
   isb                                                     
   dsb                                                     
   cpsie i                                                 
" : "=r" ulOriginalBASEPRI_7, "=r" ulNewBASEPRI_8 : "i" 16 : "memory");
  # DEBUG ulNewBASEPRI => ulNewBASEPRI_8
  # DEBUG ulOriginalBASEPRI => ulOriginalBASEPRI_7
  # DEBUG BEGIN_STMT
  # DEBUG ulNewBASEPRI => NULL
  # DEBUG ulOriginalBASEPRI => NULL
  # DEBUG uxSavedInterruptStatus => ulOriginalBASEPRI_7
  # DEBUG BEGIN_STMT
  if (xTask_4(D) == 0B)
    goto <bb 3>; [30.00%]
  else
    goto <bb 4>; [70.00%]

  <bb 3> [local count: 322122544]:
  iftmp.41_5 ={v} pxCurrentTCB;

  <bb 4> [local count: 1073741824]:
  # iftmp.41_1 = PHI <iftmp.41_5(3), xTask_4(D)(2)>
  # DEBUG pxTCB => iftmp.41_1
  # DEBUG BEGIN_STMT
  uxReturn_6 = iftmp.41_1->uxBasePriority;
  # DEBUG uxReturn => uxReturn_6
  # DEBUG BEGIN_STMT
  # DEBUG ulNewMaskValue => ulOriginalBASEPRI_7
  # DEBUG INLINE_ENTRY vPortSetBASEPRI
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("   msr basepri, %0 " :  : "r" ulOriginalBASEPRI_7 : "memory");
  # DEBUG ulNewMaskValue => NULL
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return uxReturn_6;

}



;; Function vTaskPrioritySet (vTaskPrioritySet, funcdef_no=20, decl_uid=6292, cgraph_uid=21, symbol_order=42)

Modification phase of node vTaskPrioritySet/42
vTaskPrioritySet (struct tskTaskControlBlock * xTask, UBaseType_t uxNewPriority)
{
  struct ListItem_t * const pxIndex;
  BaseType_t xYieldRequired;
  UBaseType_t uxPriorityUsedOnEntry;
  UBaseType_t uxCurrentBasePriority;
  struct TCB_t * pxCurrentTCB.43_1;
  struct TCB_t * pxCurrentTCB.44_2;
  long unsigned int _3;
  struct TCB_t * pxCurrentTCB.45_4;
  long unsigned int _5;
  signed int _6;
  long unsigned int _7;
  struct xLIST * _8;
  struct List_t * _9;
  struct ListItem_t * _10;
  long unsigned int _11;
  long unsigned int uxTopReadyPriority.46_12;
  struct xLIST_ITEM * _13;
  struct xLIST_ITEM * _14;
  struct List_t * _15;
  long unsigned int _16;
  long unsigned int _17;
  struct TCB_t * iftmp.42_19;
  struct TCB_t * iftmp.42_29;

  <bb 2> [local count: 15867325]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG xYieldRequired => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (uxNewPriority_25(D) > 9)
    goto <bb 3>; [67.00%]
  else
    goto <bb 5>; [33.00%]

  <bb 3> [local count: 10631108]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i " :  :  : "memory");

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 26> [local count: 1073741824]:
  goto <bb 4>; [100.00%]

  <bb 5> [local count: 5236217]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG uxNewPriority => uxNewPriority_25(D)
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  vPortEnterCritical ();
  # DEBUG BEGIN_STMT
  if (xTask_28(D) == 0B)
    goto <bb 6>; [30.00%]
  else
    goto <bb 7>; [70.00%]

  <bb 6> [local count: 1570865]:
  iftmp.42_29 ={v} pxCurrentTCB;

  <bb 7> [local count: 5236217]:
  # iftmp.42_19 = PHI <iftmp.42_29(6), xTask_28(D)(5)>
  # DEBUG pxTCB => iftmp.42_19
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  uxCurrentBasePriority_30 = iftmp.42_19->uxBasePriority;
  # DEBUG uxCurrentBasePriority => uxCurrentBasePriority_30
  # DEBUG BEGIN_STMT
  if (uxNewPriority_25(D) != uxCurrentBasePriority_30)
    goto <bb 8>; [66.00%]
  else
    goto <bb 25>; [34.00%]

  <bb 8> [local count: 3455903]:
  # DEBUG BEGIN_STMT
  if (uxNewPriority_25(D) > uxCurrentBasePriority_30)
    goto <bb 9>; [50.00%]
  else
    goto <bb 12>; [50.00%]

  <bb 9> [local count: 1727952]:
  # DEBUG BEGIN_STMT
  pxCurrentTCB.43_1 ={v} pxCurrentTCB;
  if (pxCurrentTCB.43_1 != iftmp.42_19)
    goto <bb 10>; [70.00%]
  else
    goto <bb 14>; [30.00%]

  <bb 10> [local count: 1209566]:
  # DEBUG BEGIN_STMT
  pxCurrentTCB.44_2 ={v} pxCurrentTCB;
  _3 = pxCurrentTCB.44_2->uxPriority;
  if (_3 < uxNewPriority_25(D))
    goto <bb 11>; [50.00%]
  else
    goto <bb 14>; [50.00%]

  <bb 11> [local count: 604783]:
  # DEBUG BEGIN_STMT
  # DEBUG xYieldRequired => 1
  goto <bb 14>; [100.00%]

  <bb 12> [local count: 1727952]:
  # DEBUG BEGIN_STMT
  pxCurrentTCB.45_4 ={v} pxCurrentTCB;
  if (pxCurrentTCB.45_4 == iftmp.42_19)
    goto <bb 13>; [30.00%]
  else
    goto <bb 14>; [70.00%]

  <bb 13> [local count: 518386]:
  # DEBUG BEGIN_STMT
  # DEBUG xYieldRequired => 1

  <bb 14> [local count: 3455903]:
  # xYieldRequired_18 = PHI <1(11), 0(12), 1(13), 0(9), 0(10)>
  # DEBUG xYieldRequired => xYieldRequired_18
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  uxPriorityUsedOnEntry_31 = iftmp.42_19->uxPriority;
  # DEBUG uxPriorityUsedOnEntry => uxPriorityUsedOnEntry_31
  # DEBUG BEGIN_STMT
  if (uxCurrentBasePriority_30 == uxPriorityUsedOnEntry_31)
    goto <bb 16>; [34.00%]
  else
    goto <bb 15>; [66.00%]

  <bb 15> [local count: 2280896]:
  if (uxNewPriority_25(D) > uxPriorityUsedOnEntry_31)
    goto <bb 16>; [50.00%]
  else
    goto <bb 17>; [50.00%]

  <bb 16> [local count: 2315455]:
  # DEBUG BEGIN_STMT
  iftmp.42_19->uxPriority = uxNewPriority_25(D);

  <bb 17> [local count: 3455903]:
  # DEBUG BEGIN_STMT
  iftmp.42_19->uxBasePriority = uxNewPriority_25(D);
  # DEBUG BEGIN_STMT
  _5 = iftmp.42_19->xEventListItem.xItemValue;
  _6 = (signed int) _5;
  if (_6 >= 0)
    goto <bb 18>; [59.00%]
  else
    goto <bb 19>; [41.00%]

  <bb 18> [local count: 2038983]:
  # DEBUG BEGIN_STMT
  _7 = 10 - uxNewPriority_25(D);
  iftmp.42_19->xEventListItem.xItemValue = _7;

  <bb 19> [local count: 3455903]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _8 = iftmp.42_19->xStateListItem.pvContainer;
  _9 = &pxReadyTasksLists[uxPriorityUsedOnEntry_31];
  if (_8 == _9)
    goto <bb 20>; [17.43%]
  else
    goto <bb 23>; [82.57%]

  <bb 20> [local count: 602364]:
  # DEBUG BEGIN_STMT
  _10 = &iftmp.42_19->xStateListItem;
  uxListRemove (_10);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _11 = iftmp.42_19->uxPriority;
  uxTopReadyPriority.46_12 ={v} uxTopReadyPriority;
  if (_11 > uxTopReadyPriority.46_12)
    goto <bb 21>; [50.00%]
  else
    goto <bb 22>; [50.00%]

  <bb 21> [local count: 301182]:
  # DEBUG BEGIN_STMT
  uxTopReadyPriority ={v} _11;

  <bb 22> [local count: 602364]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  pxIndex_37 = pxReadyTasksLists[_11].pxIndex;
  # DEBUG pxIndex => pxIndex_37
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  iftmp.42_19->xStateListItem.pxNext = pxIndex_37;
  # DEBUG BEGIN_STMT
  _13 = pxIndex_37->pxPrevious;
  iftmp.42_19->xStateListItem.pxPrevious = _13;
  # DEBUG BEGIN_STMT
  _14 = pxIndex_37->pxPrevious;
  _14->pxNext = _10;
  # DEBUG BEGIN_STMT
  pxIndex_37->pxPrevious = _10;
  # DEBUG BEGIN_STMT
  _15 = &pxReadyTasksLists[_11];
  iftmp.42_19->xStateListItem.pvContainer = _15;
  # DEBUG BEGIN_STMT
  _16 = pxReadyTasksLists[_11].uxNumberOfItems;
  _17 = _16 + 1;
  pxReadyTasksLists[_11].uxNumberOfItems = _17;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 23> [local count: 3455903]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (xYieldRequired_18 != 0)
    goto <bb 24>; [50.00%]
  else
    goto <bb 25>; [50.00%]

  <bb 24> [local count: 1727952]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  MEM[(volatile uint32_t *)3758157060B] ={v} 268435456;
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("dsb" :  :  : "memory");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("isb");
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 25> [local count: 5236217]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  vPortExitCritical ();
  # DEBUG BEGIN_STMT
  return;

}



;; Function vTaskResume (vTaskResume, funcdef_no=23, decl_uid=6296, cgraph_uid=24, symbol_order=45)

Modification phase of node vTaskResume/45
vTaskResume (struct tskTaskControlBlock * xTaskToResume)
{
  struct ListItem_t * const pxIndex;
  struct TCB_t * pxCurrentTCB.53_1;
  long int _2;
  struct ListItem_t * _3;
  long unsigned int _4;
  long unsigned int uxTopReadyPriority.54_5;
  struct xLIST_ITEM * _6;
  struct xLIST_ITEM * _7;
  struct List_t * _8;
  long unsigned int _9;
  long unsigned int _10;
  struct TCB_t * pxCurrentTCB.55_11;
  long unsigned int _12;

  <bb 2> [local count: 35437027]:
  # DEBUG BEGIN_STMT
  # DEBUG pxTCB => xTaskToResume_16(D)
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (xTaskToResume_16(D) == 0B)
    goto <bb 3>; [30.00%]
  else
    goto <bb 5>; [70.00%]

  <bb 3> [local count: 10631108]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i " :  :  : "memory");

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 13> [local count: 1073741824]:
  goto <bb 4>; [100.00%]

  <bb 5> [local count: 24805919]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  pxCurrentTCB.53_1 ={v} pxCurrentTCB;
  if (pxCurrentTCB.53_1 != xTaskToResume_16(D))
    goto <bb 6>; [53.47%]
  else
    goto <bb 12>; [46.53%]

  <bb 6> [local count: 13263725]:
  # DEBUG BEGIN_STMT
  vPortEnterCritical ();
  # DEBUG BEGIN_STMT
  _2 = prvTaskIsTaskSuspended (xTaskToResume_16(D));
  if (_2 != 0)
    goto <bb 7>; [33.00%]
  else
    goto <bb 11>; [67.00%]

  <bb 7> [local count: 4377029]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _3 = &MEM[(struct TCB_t *)xTaskToResume_16(D)].xStateListItem;
  uxListRemove (_3);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _4 = MEM[(struct TCB_t *)xTaskToResume_16(D)].uxPriority;
  uxTopReadyPriority.54_5 ={v} uxTopReadyPriority;
  if (_4 > uxTopReadyPriority.54_5)
    goto <bb 8>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 8> [local count: 2188515]:
  # DEBUG BEGIN_STMT
  uxTopReadyPriority ={v} _4;

  <bb 9> [local count: 4377029]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  pxIndex_22 = pxReadyTasksLists[_4].pxIndex;
  # DEBUG pxIndex => pxIndex_22
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  MEM[(struct TCB_t *)xTaskToResume_16(D)].xStateListItem.pxNext = pxIndex_22;
  # DEBUG BEGIN_STMT
  _6 = pxIndex_22->pxPrevious;
  MEM[(struct TCB_t *)xTaskToResume_16(D)].xStateListItem.pxPrevious = _6;
  # DEBUG BEGIN_STMT
  _7 = pxIndex_22->pxPrevious;
  _7->pxNext = _3;
  # DEBUG BEGIN_STMT
  pxIndex_22->pxPrevious = _3;
  # DEBUG BEGIN_STMT
  _8 = &pxReadyTasksLists[_4];
  MEM[(struct TCB_t *)xTaskToResume_16(D)].xStateListItem.pvContainer = _8;
  # DEBUG BEGIN_STMT
  _9 = pxReadyTasksLists[_4].uxNumberOfItems;
  _10 = _9 + 1;
  pxReadyTasksLists[_4].uxNumberOfItems = _10;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  pxCurrentTCB.55_11 ={v} pxCurrentTCB;
  _12 = pxCurrentTCB.55_11->uxPriority;
  if (_4 > _12)
    goto <bb 10>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 10> [local count: 2188515]:
  # DEBUG BEGIN_STMT
  MEM[(volatile uint32_t *)3758157060B] ={v} 268435456;
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("dsb" :  :  : "memory");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("isb");
  # DEBUG BEGIN_STMT

  <bb 11> [local count: 13263725]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  vPortExitCritical ();

  <bb 12> [local count: 24805919]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return;

}



;; Function xTaskResumeFromISR (xTaskResumeFromISR, funcdef_no=24, decl_uid=6298, cgraph_uid=25, symbol_order=46)

Modification phase of node xTaskResumeFromISR/46
xTaskResumeFromISR (struct tskTaskControlBlock * xTaskToResume)
{
  uint32_t ulOriginalBASEPRI;
  uint32_t ulNewBASEPRI;
  struct ListItem_t * const pxIndex;
  BaseType_t xYieldRequired;
  long int _1;
  long unsigned int uxSchedulerSuspended.56_2;
  long unsigned int _3;
  struct TCB_t * pxCurrentTCB.57_4;
  long unsigned int _5;
  struct ListItem_t * _6;
  long unsigned int _7;
  long unsigned int uxTopReadyPriority.58_8;
  struct xLIST_ITEM * _9;
  struct xLIST_ITEM * _10;
  struct List_t * _11;
  long unsigned int _12;
  long unsigned int _13;
  struct ListItem_t * _14;

  <bb 2> [local count: 22847857]:
  # DEBUG BEGIN_STMT
  # DEBUG xYieldRequired => 0
  # DEBUG BEGIN_STMT
  # DEBUG pxTCB => xTaskToResume_20(D)
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (xTaskToResume_20(D) == 0B)
    goto <bb 3>; [46.53%]
  else
    goto <bb 5>; [53.47%]

  <bb 3> [local count: 10631108]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i " :  :  : "memory");

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 14> [local count: 1073741824]:
  goto <bb 4>; [100.00%]

  <bb 5> [local count: 12216749]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  vPortValidateInterruptPriority ();
  # DEBUG BEGIN_STMT
  # DEBUG INLINE_ENTRY ulPortRaiseBASEPRI
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("   mrs %0, basepri                                         
   mov %1, %2                                              
   cpsid i                                                 
   msr basepri, %1                                         
   isb                                                     
   dsb                                                     
   cpsie i                                                 
" : "=r" ulOriginalBASEPRI_36, "=r" ulNewBASEPRI_37 : "i" 16 : "memory");
  # DEBUG ulNewBASEPRI => ulNewBASEPRI_37
  # DEBUG ulOriginalBASEPRI => ulOriginalBASEPRI_36
  # DEBUG BEGIN_STMT
  # DEBUG ulNewBASEPRI => NULL
  # DEBUG ulOriginalBASEPRI => NULL
  # DEBUG uxSavedInterruptStatus => ulOriginalBASEPRI_36
  # DEBUG BEGIN_STMT
  _1 = prvTaskIsTaskSuspended (xTaskToResume_20(D));
  if (_1 != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 13>; [50.00%]

  <bb 6> [local count: 6108375]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  uxSchedulerSuspended.56_2 ={v} uxSchedulerSuspended;
  if (uxSchedulerSuspended.56_2 == 0)
    goto <bb 7>; [67.00%]
  else
    goto <bb 12>; [33.00%]

  <bb 7> [local count: 4092611]:
  # DEBUG BEGIN_STMT
  _3 = MEM[(struct TCB_t *)xTaskToResume_20(D)].uxPriority;
  pxCurrentTCB.57_4 ={v} pxCurrentTCB;
  _5 = pxCurrentTCB.57_4->uxPriority;
  if (_3 > _5)
    goto <bb 8>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 8> [local count: 2046306]:
  # DEBUG BEGIN_STMT
  # DEBUG xYieldRequired => 1
  # DEBUG BEGIN_STMT
  xYieldPendings[0] ={v} 1;

  <bb 9> [local count: 4092611]:
  # xYieldRequired_15 = PHI <0(7), 1(8)>
  # DEBUG xYieldRequired => xYieldRequired_15
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _6 = &MEM[(struct TCB_t *)xTaskToResume_20(D)].xStateListItem;
  uxListRemove (_6);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _7 = MEM[(struct TCB_t *)xTaskToResume_20(D)].uxPriority;
  uxTopReadyPriority.58_8 ={v} uxTopReadyPriority;
  if (_7 > uxTopReadyPriority.58_8)
    goto <bb 10>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 10> [local count: 2046306]:
  # DEBUG BEGIN_STMT
  uxTopReadyPriority ={v} _7;

  <bb 11> [local count: 4092611]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  pxIndex_28 = pxReadyTasksLists[_7].pxIndex;
  # DEBUG pxIndex => pxIndex_28
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  MEM[(struct TCB_t *)xTaskToResume_20(D)].xStateListItem.pxNext = pxIndex_28;
  # DEBUG BEGIN_STMT
  _9 = pxIndex_28->pxPrevious;
  MEM[(struct TCB_t *)xTaskToResume_20(D)].xStateListItem.pxPrevious = _9;
  # DEBUG BEGIN_STMT
  _10 = pxIndex_28->pxPrevious;
  _10->pxNext = _6;
  # DEBUG BEGIN_STMT
  pxIndex_28->pxPrevious = _6;
  # DEBUG BEGIN_STMT
  _11 = &pxReadyTasksLists[_7];
  MEM[(struct TCB_t *)xTaskToResume_20(D)].xStateListItem.pvContainer = _11;
  # DEBUG BEGIN_STMT
  _12 = pxReadyTasksLists[_7].uxNumberOfItems;
  _13 = _12 + 1;
  pxReadyTasksLists[_7].uxNumberOfItems = _13;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  goto <bb 13>; [100.00%]

  <bb 12> [local count: 2015764]:
  # DEBUG BEGIN_STMT
  _14 = &MEM[(struct TCB_t *)xTaskToResume_20(D)].xEventListItem;
  vListInsertEnd (&xPendingReadyList, _14);

  <bb 13> [local count: 12216749]:
  # xYieldRequired_16 = PHI <0(5), 0(12), xYieldRequired_15(11)>
  # DEBUG xYieldRequired => xYieldRequired_16
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG ulNewMaskValue => ulOriginalBASEPRI_36
  # DEBUG INLINE_ENTRY vPortSetBASEPRI
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("   msr basepri, %0 " :  : "r" ulOriginalBASEPRI_36 : "memory");
  # DEBUG ulNewMaskValue => NULL
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return xYieldRequired_16;

}



;; Function vTaskStartScheduler (vTaskStartScheduler, funcdef_no=26, decl_uid=6300, cgraph_uid=27, symbol_order=48)

Modification phase of node vTaskStartScheduler/48
vTaskStartScheduler ()
{
  uint32_t ulNewBASEPRI;
  BaseType_t xReturn;
  long unsigned int vol.59_14;

  <bb 2> [local count: 39202563]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  xReturn_6 = prvCreateIdleTasks ();
  # DEBUG xReturn => xReturn_6
  # DEBUG BEGIN_STMT
  if (xReturn_6 == 1)
    goto <bb 3>; [20.24%]
  else
    goto <bb 4>; [79.76%]

  <bb 3> [local count: 7934599]:
  # DEBUG BEGIN_STMT
  xReturn_8 = xTimerCreateTimerTask ();
  # DEBUG xReturn => xReturn_8

  <bb 4> [local count: 39202563]:
  # xReturn_1 = PHI <xReturn_6(2), xReturn_8(3)>
  # DEBUG xReturn => xReturn_1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (xReturn_1 == 1)
    goto <bb 5>; [20.24%]
  else
    goto <bb 6>; [79.76%]

  <bb 5> [local count: 7934599]:
  # DEBUG BEGIN_STMT
  # DEBUG INLINE_ENTRY vPortRaiseBASEPRI
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("   mov %0, %1                                              
   cpsid i                                                 
   msr basepri, %0                                         
   isb                                                     
   dsb                                                     
   cpsie i                                                 
" : "=r" ulNewBASEPRI_15 : "i" 16 : "memory");
  # DEBUG ulNewBASEPRI => NULL
  # DEBUG BEGIN_STMT
  xNextTaskUnblockTime ={v} 4294967295;
  # DEBUG BEGIN_STMT
  xSchedulerRunning ={v} 1;
  # DEBUG BEGIN_STMT
  xTickCount ={v} 0;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  xPortStartScheduler ();
  goto <bb 9>; [100.00%]

  <bb 6> [local count: 31267964]:
  # DEBUG BEGIN_STMT
  if (xReturn_1 == -1)
    goto <bb 7>; [34.00%]
  else
    goto <bb 9>; [66.00%]

  <bb 7> [local count: 10631108]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i " :  :  : "memory");

  <bb 8> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 10> [local count: 1073741824]:
  goto <bb 8>; [100.00%]

  <bb 9> [local count: 28571455]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  vol.59_14 ={v} uxTopUsedPriority;
  # DEBUG BEGIN_STMT
  return;

}



;; Function vTaskEndScheduler (vTaskEndScheduler, funcdef_no=27, decl_uid=6302, cgraph_uid=28, symbol_order=49)

Modification phase of node vTaskEndScheduler/49
vTaskEndScheduler ()
{
  uint32_t ulNewBASEPRI;
  BaseType_t xCoreID;
  struct tskTaskControlBlock * _1;
  struct tskTaskControlBlock * _2;

  <bb 2> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = xTimerGetTimerDaemonTaskHandle ();
  vTaskDelete (_1);
  # DEBUG BEGIN_STMT
  # DEBUG xCoreID => 0
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _2 = xIdleTaskHandles[0];
  vTaskDelete (_2);
  # DEBUG BEGIN_STMT
  # DEBUG xCoreID => 1

  <bb 4> [local count: 1073741824]:
  # xCoreID_3 = PHI <0(2), 1(3)>
  # DEBUG xCoreID => xCoreID_3
  # DEBUG BEGIN_STMT
  if (xCoreID_3 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 5> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  prvCheckTasksWaitingTermination ();
  # DEBUG BEGIN_STMT
  # DEBUG INLINE_ENTRY vPortRaiseBASEPRI
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("   mov %0, %1                                              
   cpsid i                                                 
   msr basepri, %0                                         
   isb                                                     
   dsb                                                     
   cpsie i                                                 
" : "=r" ulNewBASEPRI_12 : "i" 16 : "memory");
  # DEBUG ulNewBASEPRI => NULL
  # DEBUG BEGIN_STMT
  xSchedulerRunning ={v} 0;
  # DEBUG BEGIN_STMT
  vPortEndScheduler ();
  # DEBUG BEGIN_STMT
  return;

}



;; Function vTaskSuspendAll (vTaskSuspendAll, funcdef_no=28, decl_uid=6304, cgraph_uid=29, symbol_order=50)

Modification phase of node vTaskSuspendAll/50
vTaskSuspendAll ()
{
  long unsigned int uxSchedulerSuspended.63_1;
  long unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  uxSchedulerSuspended.63_1 ={v} uxSchedulerSuspended;
  _2 = uxSchedulerSuspended.63_1 + 1;
  uxSchedulerSuspended ={v} _2;
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("" :  :  : "memory");
  # DEBUG BEGIN_STMT
  return;

}



;; Function xTaskGetTickCount (xTaskGetTickCount, funcdef_no=30, decl_uid=6308, cgraph_uid=31, symbol_order=52)

Modification phase of node xTaskGetTickCount/52
xTaskGetTickCount ()
{
  TickType_t xTicks;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  xTicks_2 ={v} xTickCount;
  # DEBUG xTicks => xTicks_2
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return xTicks_2;

}



;; Function xTaskGetTickCountFromISR (xTaskGetTickCountFromISR, funcdef_no=31, decl_uid=6310, cgraph_uid=32, symbol_order=53)

Modification phase of node xTaskGetTickCountFromISR/53
xTaskGetTickCountFromISR ()
{
  TickType_t xReturn;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  vPortValidateInterruptPriority ();
  # DEBUG BEGIN_STMT
  # DEBUG uxSavedInterruptStatus => 0
  # DEBUG BEGIN_STMT
  xReturn_3 ={v} xTickCount;
  # DEBUG xReturn => xReturn_3
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return xReturn_3;

}



;; Function uxTaskGetNumberOfTasks (uxTaskGetNumberOfTasks, funcdef_no=32, decl_uid=6312, cgraph_uid=33, symbol_order=54)

Modification phase of node uxTaskGetNumberOfTasks/54
uxTaskGetNumberOfTasks ()
{
  UBaseType_t _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _2 ={v} uxCurrentNumberOfTasks;
  return _2;

}



;; Function pcTaskGetName (pcTaskGetName, funcdef_no=33, decl_uid=6314, cgraph_uid=34, symbol_order=55)

Modification phase of node pcTaskGetName/55
pcTaskGetName (struct tskTaskControlBlock * xTaskToQuery)
{
  struct TCB_t * iftmp.71_1;
  struct TCB_t * iftmp.71_4;
  char * _5;

  <bb 2> [local count: 35437027]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (xTaskToQuery_2(D) == 0B)
    goto <bb 3>; [30.00%]
  else
    goto <bb 4>; [70.00%]

  <bb 3> [local count: 10631108]:
  iftmp.71_4 ={v} pxCurrentTCB;

  <bb 4> [local count: 35437027]:
  # iftmp.71_1 = PHI <iftmp.71_4(3), xTaskToQuery_2(D)(2)>
  # DEBUG pxTCB => iftmp.71_1
  # DEBUG BEGIN_STMT
  if (iftmp.71_1 == 0B)
    goto <bb 5>; [30.00%]
  else
    goto <bb 7>; [70.00%]

  <bb 5> [local count: 10631108]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i " :  :  : "memory");

  <bb 6> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 8> [local count: 1073741824]:
  goto <bb 6>; [100.00%]

  <bb 7> [local count: 24805919]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _5 = &iftmp.71_1->pcTaskName[0];
  return _5;

}



;; Function xTaskIncrementTick (xTaskIncrementTick, funcdef_no=39, decl_uid=6372, cgraph_uid=40, symbol_order=61)

Modification phase of node xTaskIncrementTick/61
xTaskIncrementTick ()
{
  BaseType_t xSwitchRequired;
  long unsigned int uxSchedulerSuspended.81_1;
  long unsigned int xPendedTicks.93_5;
  long unsigned int _6;

  <bb 2> [local count: 47365150]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG xSwitchRequired => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  uxSchedulerSuspended.81_1 ={v} uxSchedulerSuspended;
  if (uxSchedulerSuspended.81_1 == 0)
    goto <bb 3>; [67.00%]
  else
    goto <bb 4>; [33.00%]

  <bb 3> [local count: 31734651]:
  xSwitchRequired_2 = xTaskIncrementTick.part.0 ();
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 15630499]:
  # DEBUG BEGIN_STMT
  xPendedTicks.93_5 ={v} xPendedTicks;
  _6 = xPendedTicks.93_5 + 1;
  xPendedTicks ={v} _6;
  # DEBUG BEGIN_STMT
  vApplicationTickHook ();

  <bb 5> [local count: 36734042]:
  # xSwitchRequired_7 = PHI <xSwitchRequired_2(3), 0(4)>
  # DEBUG xSwitchRequired => xSwitchRequired_7
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return xSwitchRequired_7;

}



;; Function xTaskResumeAll (xTaskResumeAll, funcdef_no=29, decl_uid=6306, cgraph_uid=30, symbol_order=51)

Modification phase of node xTaskResumeAll/51
xTaskResumeAll ()
{
  BaseType_t D.8689;
  long unsigned int uxSchedulerSuspended.64_1;

  <bb 2> [local count: 21262216]:
  # DEBUG BEGIN_STMT
  # DEBUG pxTCB => 0B
  # DEBUG BEGIN_STMT
  # DEBUG xAlreadyYielded => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  vPortEnterCritical ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG xCoreID => 0
  # DEBUG BEGIN_STMT
  uxSchedulerSuspended.64_1 ={v} uxSchedulerSuspended;
  if (uxSchedulerSuspended.64_1 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 3> [local count: 10631108]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i " :  :  : "memory");

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 6> [local count: 1073741824]:
  goto <bb 4>; [100.00%]

  <bb 5> [local count: 10631108]:
  _2 = xTaskResumeAll.part.0 ();
  return _2;

}



;; Function xTaskDelayUntil (xTaskDelayUntil, funcdef_no=13, decl_uid=6272, cgraph_uid=14, symbol_order=35)

Modification phase of node xTaskDelayUntil/35
xTaskDelayUntil (TickType_t * const pxPreviousWakeTime, const TickType_t xTimeIncrement)
{
  const TickType_t xConstTickCount;
  BaseType_t xShouldDelay;
  BaseType_t xAlreadyYielded;
  TickType_t xTimeToWake;
  long unsigned int uxSchedulerSuspended.24_1;
  long unsigned int _2;
  long unsigned int _3;

  <bb 2> [local count: 22667608]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG xShouldDelay => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (pxPreviousWakeTime_7(D) == 0B)
    goto <bb 3>; [30.00%]
  else
    goto <bb 5>; [70.00%]

  <bb 3> [local count: 6800282]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i " :  :  : "memory");

  <bb 4> [local count: 686828449]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 25> [local count: 686828449]:
  goto <bb 4>; [100.00%]

  <bb 5> [local count: 15867325]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (xTimeIncrement_8(D) == 0)
    goto <bb 6>; [67.00%]
  else
    goto <bb 8>; [33.00%]

  <bb 6> [local count: 10631108]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i " :  :  : "memory");

  <bb 7> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 26> [local count: 1073741824]:
  goto <bb 7>; [100.00%]

  <bb 8> [local count: 5236217]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  vTaskSuspendAll ();
  # DEBUG BEGIN_STMT
  xConstTickCount_11 ={v} xTickCount;
  # DEBUG xConstTickCount => xConstTickCount_11
  # DEBUG BEGIN_STMT
  uxSchedulerSuspended.24_1 ={v} uxSchedulerSuspended;
  if (uxSchedulerSuspended.24_1 != 1)
    goto <bb 9>; [66.00%]
  else
    goto <bb 11>; [34.00%]

  <bb 9> [local count: 3455903]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i " :  :  : "memory");

  <bb 10> [local count: 349046218]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 27> [local count: 349046218]:
  goto <bb 10>; [100.00%]

  <bb 11> [local count: 1780314]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _2 = *pxPreviousWakeTime_7(D);
  xTimeToWake_12 = _2 + xTimeIncrement_8(D);
  # DEBUG xTimeToWake => xTimeToWake_12
  # DEBUG BEGIN_STMT
  if (_2 > xConstTickCount_11)
    goto <bb 12>; [50.00%]
  else
    goto <bb 17>; [50.00%]

  <bb 12> [local count: 890157]:
  # DEBUG BEGIN_STMT
  if (_2 > xTimeToWake_12)
    goto <bb 14>; [50.00%]
  else
    goto <bb 13>; [50.00%]

  <bb 13> [local count: 445078]:
  # DEBUG xShouldDelay => 0
  # DEBUG BEGIN_STMT
  *pxPreviousWakeTime_7(D) = xTimeToWake_12;
  # DEBUG BEGIN_STMT
  goto <bb 22>; [100.00%]

  <bb 14> [local count: 445078]:
  if (xConstTickCount_11 < xTimeToWake_12)
    goto <bb 16>; [50.00%]
  else
    goto <bb 15>; [50.00%]

  <bb 15> [local count: 222539]:
  # DEBUG xShouldDelay => 0
  # DEBUG BEGIN_STMT
  *pxPreviousWakeTime_7(D) = xTimeToWake_12;
  # DEBUG BEGIN_STMT
  goto <bb 22>; [100.00%]

  <bb 16> [local count: 222539]:
  # DEBUG BEGIN_STMT
  # DEBUG xShouldDelay => 1
  # DEBUG BEGIN_STMT
  *pxPreviousWakeTime_7(D) = xTimeToWake_12;
  # DEBUG BEGIN_STMT
  goto <bb 21>; [100.00%]

  <bb 17> [local count: 890157]:
  # DEBUG BEGIN_STMT
  if (_2 > xTimeToWake_12)
    goto <bb 19>; [50.00%]
  else
    goto <bb 18>; [50.00%]

  <bb 18> [local count: 445078]:
  if (xConstTickCount_11 < xTimeToWake_12)
    goto <bb 19>; [50.00%]
  else
    goto <bb 20>; [50.00%]

  <bb 19> [local count: 667618]:
  # DEBUG BEGIN_STMT
  # DEBUG xShouldDelay => 1
  # DEBUG BEGIN_STMT
  *pxPreviousWakeTime_7(D) = xTimeToWake_12;
  # DEBUG BEGIN_STMT
  goto <bb 21>; [100.00%]

  <bb 20> [local count: 222539]:
  # DEBUG xShouldDelay => 0
  # DEBUG BEGIN_STMT
  *pxPreviousWakeTime_7(D) = xTimeToWake_12;
  # DEBUG BEGIN_STMT
  goto <bb 22>; [100.00%]

  <bb 21> [local count: 890157]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _3 = xTimeToWake_12 - xConstTickCount_11;
  prvAddCurrentTaskToDelayedList (_3, 0);

  <bb 22> [local count: 1780314]:
  # xShouldDelay_26 = PHI <0(20), 1(21), 0(15), 0(13)>
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  xAlreadyYielded_16 = xTaskResumeAll ();
  # DEBUG xAlreadyYielded => xAlreadyYielded_16
  # DEBUG BEGIN_STMT
  if (xAlreadyYielded_16 == 0)
    goto <bb 23>; [50.00%]
  else
    goto <bb 24>; [50.00%]

  <bb 23> [local count: 890157]:
  # DEBUG BEGIN_STMT
  MEM[(volatile uint32_t *)3758157060B] ={v} 268435456;
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("dsb" :  :  : "memory");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("isb");
  # DEBUG BEGIN_STMT

  <bb 24> [local count: 1780314]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return xShouldDelay_26;

}



;; Function vTaskDelay (vTaskDelay, funcdef_no=14, decl_uid=6269, cgraph_uid=15, symbol_order=36)

Modification phase of node vTaskDelay/36
vTaskDelay (const TickType_t xTicksToDelay)
{
  BaseType_t xAlreadyYielded;
  long unsigned int uxSchedulerSuspended.36_1;

  <bb 2> [local count: 40390520]:
  # DEBUG BEGIN_STMT
  # DEBUG xAlreadyYielded => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (xTicksToDelay_3(D) != 0)
    goto <bb 4>; [33.00%]
  else
    goto <bb 8>; [67.00%]

  <bb 4> [local count: 13328872]:
  # DEBUG BEGIN_STMT
  vTaskSuspendAll ();
  # DEBUG BEGIN_STMT
  uxSchedulerSuspended.36_1 ={v} uxSchedulerSuspended;
  if (uxSchedulerSuspended.36_1 != 1)
    goto <bb 5>; [79.76%]
  else
    goto <bb 7>; [20.24%]

  <bb 5> [local count: 10631108]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i " :  :  : "memory");

  <bb 6> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 10> [local count: 1073741824]:
  goto <bb 6>; [100.00%]

  <bb 7> [local count: 2697764]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  prvAddCurrentTaskToDelayedList (xTicksToDelay_3(D), 0);
  # DEBUG BEGIN_STMT
  xAlreadyYielded_8 = xTaskResumeAll ();
  # DEBUG xAlreadyYielded => xAlreadyYielded_8
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (xAlreadyYielded_8 == 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 8> [local count: 28410530]:
  # DEBUG xAlreadyYielded => NULL
  # DEBUG BEGIN_STMT
  MEM[(volatile uint32_t *)3758157060B] ={v} 268435456;
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("dsb" :  :  : "memory");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("isb");
  # DEBUG BEGIN_STMT

  <bb 9> [local count: 29759412]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return;

}



;; Function xTaskGetHandle (xTaskGetHandle, funcdef_no=35, decl_uid=6316, cgraph_uid=36, symbol_order=57)

Modification phase of node xTaskGetHandle/57
xTaskGetHandle (const char * pcNameToQuery)
{
  struct TCB_t * pxTCB;
  UBaseType_t uxQueue;
  unsigned int _1;
  struct List_t * _2;
  struct List_t * pxDelayedTaskList.72_3;
  struct List_t * pxOverflowDelayedTaskList.73_4;

  <bb 2> [local count: 15867325]:
  # DEBUG BEGIN_STMT
  # DEBUG uxQueue => 10
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = strlen (pcNameToQuery_13(D));
  if (_1 > 9)
    goto <bb 3>; [67.00%]
  else
    goto <bb 5>; [33.00%]

  <bb 3> [local count: 10631108]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i " :  :  : "memory");

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 17> [local count: 1073741824]:
  goto <bb 4>; [100.00%]

  <bb 5> [local count: 5236217]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  vTaskSuspendAll ();

  <bb 6> [local count: 35024865]:
  # uxQueue_5 = PHI <10(5), uxQueue_15(18)>
  # DEBUG uxQueue => uxQueue_5
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  uxQueue_15 = uxQueue_5 + 4294967295;
  # DEBUG uxQueue => uxQueue_15
  # DEBUG BEGIN_STMT
  _2 = &pxReadyTasksLists[uxQueue_15];
  pxTCB_16 = prvSearchForNameWithinSingleList (_2, pcNameToQuery_13(D));
  # DEBUG pxTCB => pxTCB_16
  # DEBUG BEGIN_STMT
  if (pxTCB_16 != 0B)
    goto <bb 8>; [5.50%]
  else
    goto <bb 7>; [94.50%]

  <bb 7> [local count: 33098497]:
  # DEBUG BEGIN_STMT
  if (uxQueue_15 != 0)
    goto <bb 18>; [90.00%]
  else
    goto <bb 8>; [10.00%]

  <bb 18> [local count: 29788648]:
  goto <bb 6>; [100.00%]

  <bb 8> [local count: 5236217]:
  # pxTCB_11 = PHI <pxTCB_16(6), 0B(7)>
  # DEBUG BEGIN_STMT
  if (pxTCB_11 == 0B)
    goto <bb 9>; [17.43%]
  else
    goto <bb 10>; [82.57%]

  <bb 9> [local count: 912673]:
  # DEBUG BEGIN_STMT
  pxDelayedTaskList.72_3 ={v} pxDelayedTaskList;
  pxTCB_17 = prvSearchForNameWithinSingleList (pxDelayedTaskList.72_3, pcNameToQuery_13(D));
  # DEBUG pxTCB => pxTCB_17

  <bb 10> [local count: 5236217]:
  # pxTCB_6 = PHI <pxTCB_11(8), pxTCB_17(9)>
  # DEBUG pxTCB => pxTCB_6
  # DEBUG BEGIN_STMT
  if (pxTCB_6 == 0B)
    goto <bb 11>; [17.43%]
  else
    goto <bb 12>; [82.57%]

  <bb 11> [local count: 912673]:
  # DEBUG BEGIN_STMT
  pxOverflowDelayedTaskList.73_4 ={v} pxOverflowDelayedTaskList;
  pxTCB_18 = prvSearchForNameWithinSingleList (pxOverflowDelayedTaskList.73_4, pcNameToQuery_13(D));
  # DEBUG pxTCB => pxTCB_18

  <bb 12> [local count: 5236217]:
  # pxTCB_7 = PHI <pxTCB_6(10), pxTCB_18(11)>
  # DEBUG pxTCB => pxTCB_7
  # DEBUG BEGIN_STMT
  if (pxTCB_7 == 0B)
    goto <bb 13>; [17.43%]
  else
    goto <bb 14>; [82.57%]

  <bb 13> [local count: 912673]:
  # DEBUG BEGIN_STMT
  pxTCB_19 = prvSearchForNameWithinSingleList (&xSuspendedTaskList, pcNameToQuery_13(D));
  # DEBUG pxTCB => pxTCB_19

  <bb 14> [local count: 5236217]:
  # pxTCB_8 = PHI <pxTCB_7(12), pxTCB_19(13)>
  # DEBUG pxTCB => pxTCB_8
  # DEBUG BEGIN_STMT
  if (pxTCB_8 == 0B)
    goto <bb 15>; [17.43%]
  else
    goto <bb 16>; [82.57%]

  <bb 15> [local count: 912673]:
  # DEBUG BEGIN_STMT
  pxTCB_20 = prvSearchForNameWithinSingleList (&xTasksWaitingTermination, pcNameToQuery_13(D));
  # DEBUG pxTCB => pxTCB_20

  <bb 16> [local count: 5236217]:
  # pxTCB_9 = PHI <pxTCB_8(14), pxTCB_20(15)>
  # DEBUG pxTCB => pxTCB_9
  # DEBUG BEGIN_STMT
  xTaskResumeAll ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return pxTCB_9;

}



;; Function xTaskCatchUpTicks (xTaskCatchUpTicks, funcdef_no=37, decl_uid=6368, cgraph_uid=38, symbol_order=59)

Modification phase of node xTaskCatchUpTicks/59
xTaskCatchUpTicks (TickType_t xTicksToCatchUp)
{
  BaseType_t xYieldOccurred;
  long unsigned int uxSchedulerSuspended.77_1;
  long unsigned int xPendedTicks.78_2;
  long unsigned int _3;

  <bb 2> [local count: 15867325]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  uxSchedulerSuspended.77_1 ={v} uxSchedulerSuspended;
  if (uxSchedulerSuspended.77_1 != 0)
    goto <bb 3>; [67.00%]
  else
    goto <bb 5>; [33.00%]

  <bb 3> [local count: 10631108]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i " :  :  : "memory");

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 6> [local count: 1073741824]:
  goto <bb 4>; [100.00%]

  <bb 5> [local count: 5236217]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  vTaskSuspendAll ();
  # DEBUG BEGIN_STMT
  vPortEnterCritical ();
  # DEBUG BEGIN_STMT
  xPendedTicks.78_2 ={v} xPendedTicks;
  _3 = xPendedTicks.78_2 + xTicksToCatchUp_7(D);
  xPendedTicks ={v} _3;
  # DEBUG BEGIN_STMT
  vPortExitCritical ();
  # DEBUG BEGIN_STMT
  xYieldOccurred_11 = xTaskResumeAll ();
  # DEBUG xYieldOccurred => xYieldOccurred_11
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return xYieldOccurred_11;

}



;; Function xTaskAbortDelay (xTaskAbortDelay, funcdef_no=38, decl_uid=6274, cgraph_uid=39, symbol_order=60)

Modification phase of node xTaskAbortDelay/60
xTaskAbortDelay (struct tskTaskControlBlock * xTask)
{
  struct ListItem_t * const pxIndex;
  BaseType_t xReturn;
  <unnamed type> _1;
  struct ListItem_t * _2;
  struct xLIST * _3;
  struct ListItem_t * _4;
  long unsigned int _5;
  long unsigned int uxTopReadyPriority.79_6;
  struct xLIST_ITEM * _7;
  struct xLIST_ITEM * _8;
  struct List_t * _9;
  long unsigned int _10;
  long unsigned int _11;
  struct TCB_t * pxCurrentTCB.80_12;
  long unsigned int _13;

  <bb 2> [local count: 22847857]:
  # DEBUG BEGIN_STMT
  # DEBUG pxTCB => xTask_18(D)
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (xTask_18(D) == 0B)
    goto <bb 3>; [46.53%]
  else
    goto <bb 5>; [53.47%]

  <bb 3> [local count: 10631108]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i " :  :  : "memory");

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 13> [local count: 1073741824]:
  goto <bb 4>; [100.00%]

  <bb 5> [local count: 12216749]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  vTaskSuspendAll ();
  # DEBUG BEGIN_STMT
  _1 = eTaskGetState (xTask_18(D));
  if (_1 == 2)
    goto <bb 6>; [20.24%]
  else
    goto <bb 12>; [79.76%]

  <bb 6> [local count: 2472670]:
  # DEBUG BEGIN_STMT
  # DEBUG xReturn => 1
  # DEBUG BEGIN_STMT
  _2 = &MEM[(struct TCB_t *)xTask_18(D)].xStateListItem;
  uxListRemove (_2);
  # DEBUG BEGIN_STMT
  vPortEnterCritical ();
  # DEBUG BEGIN_STMT
  _3 = MEM[(struct TCB_t *)xTask_18(D)].xEventListItem.pvContainer;
  if (_3 != 0B)
    goto <bb 7>; [53.47%]
  else
    goto <bb 8>; [46.53%]

  <bb 7> [local count: 1322137]:
  # DEBUG BEGIN_STMT
  _4 = &MEM[(struct TCB_t *)xTask_18(D)].xEventListItem;
  uxListRemove (_4);
  # DEBUG BEGIN_STMT
  MEM[(struct TCB_t *)xTask_18(D)].ucDelayAborted = 1;

  <bb 8> [local count: 2472670]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  vPortExitCritical ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _5 = MEM[(struct TCB_t *)xTask_18(D)].uxPriority;
  uxTopReadyPriority.79_6 ={v} uxTopReadyPriority;
  if (_5 > uxTopReadyPriority.79_6)
    goto <bb 9>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 9> [local count: 1236335]:
  # DEBUG BEGIN_STMT
  uxTopReadyPriority ={v} _5;

  <bb 10> [local count: 2472670]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  pxIndex_28 = pxReadyTasksLists[_5].pxIndex;
  # DEBUG pxIndex => pxIndex_28
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  MEM[(struct TCB_t *)xTask_18(D)].xStateListItem.pxNext = pxIndex_28;
  # DEBUG BEGIN_STMT
  _7 = pxIndex_28->pxPrevious;
  MEM[(struct TCB_t *)xTask_18(D)].xStateListItem.pxPrevious = _7;
  # DEBUG BEGIN_STMT
  _8 = pxIndex_28->pxPrevious;
  _8->pxNext = _2;
  # DEBUG BEGIN_STMT
  pxIndex_28->pxPrevious = _2;
  # DEBUG BEGIN_STMT
  _9 = &pxReadyTasksLists[_5];
  MEM[(struct TCB_t *)xTask_18(D)].xStateListItem.pvContainer = _9;
  # DEBUG BEGIN_STMT
  _10 = pxReadyTasksLists[_5].uxNumberOfItems;
  _11 = _10 + 1;
  pxReadyTasksLists[_5].uxNumberOfItems = _11;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  pxCurrentTCB.80_12 ={v} pxCurrentTCB;
  _13 = pxCurrentTCB.80_12->uxPriority;
  if (_5 > _13)
    goto <bb 11>; [50.00%]
  else
    goto <bb 12>; [50.00%]

  <bb 11> [local count: 1236335]:
  # DEBUG BEGIN_STMT
  xYieldPendings[0] ={v} 1;

  <bb 12> [local count: 12216749]:
  # xReturn_14 = PHI <1(11), 0(5), 1(10)>
  # DEBUG xReturn => xReturn_14
  # DEBUG BEGIN_STMT
  xTaskResumeAll ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return xReturn_14;

}



;; Function vTaskSwitchContext (vTaskSwitchContext, funcdef_no=40, decl_uid=6390, cgraph_uid=41, symbol_order=62)

Modification phase of node vTaskSwitchContext/62
__attribute__((used))
vTaskSwitchContext ()
{
  long unsigned int uxSchedulerSuspended.94_1;

  <bb 2> [local count: 43761915]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  uxSchedulerSuspended.94_1 ={v} uxSchedulerSuspended;
  if (uxSchedulerSuspended.94_1 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 21880958]:
  # DEBUG BEGIN_STMT
  xYieldPendings[0] ={v} 1;
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 21880958]:
  vTaskSwitchContext.part.0 ();

  <bb 5> [local count: 33130807]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function vTaskSuspend (vTaskSuspend, funcdef_no=21, decl_uid=6294, cgraph_uid=22, symbol_order=43)

Modification phase of node vTaskSuspend/43
vTaskSuspend (struct tskTaskControlBlock * xTaskToSuspend)
{
  UBaseType_t uxCurrentListLength;
  BaseType_t x;
  struct ListItem_t * _1;
  struct xLIST * _2;
  struct ListItem_t * _3;
  unsigned char _4;
  long int xSchedulerRunning.48_5;
  struct TCB_t * pxCurrentTCB.49_6;
  long int xSchedulerRunning.50_7;
  long unsigned int uxSchedulerSuspended.51_8;
  long unsigned int uxCurrentNumberOfTasks.52_9;
  struct TCB_t * iftmp.47_11;
  struct TCB_t * iftmp.47_20;

  <bb 2> [local count: 59055800]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  vPortEnterCritical ();
  # DEBUG BEGIN_STMT
  if (xTaskToSuspend_19(D) == 0B)
    goto <bb 3>; [30.00%]
  else
    goto <bb 4>; [70.00%]

  <bb 3> [local count: 17716740]:
  iftmp.47_20 ={v} pxCurrentTCB;

  <bb 4> [local count: 59055800]:
  # iftmp.47_11 = PHI <iftmp.47_20(3), xTaskToSuspend_19(D)(2)>
  # DEBUG pxTCB => iftmp.47_11
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = &iftmp.47_11->xStateListItem;
  uxListRemove (_1);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _2 = iftmp.47_11->xEventListItem.pvContainer;
  if (_2 != 0B)
    goto <bb 5>; [53.47%]
  else
    goto <bb 6>; [46.53%]

  <bb 5> [local count: 31577136]:
  # DEBUG BEGIN_STMT
  _3 = &iftmp.47_11->xEventListItem;
  uxListRemove (_3);

  <bb 6> [local count: 59055800]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  vListInsertEnd (&xSuspendedTaskList, _1);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG x => 0
  goto <bb 9>; [100.00%]

  <bb 7> [local count: 1014686025]:
  # DEBUG BEGIN_STMT
  _4 ={v} iftmp.47_11->ucNotifyState[0];
  if (_4 == 1)
    goto <bb 8>; [67.00%]
  else
    goto <bb 24>; [33.00%]

  <bb 24> [local count: 334846386]:
  goto <bb 10>; [100.00%]

  <bb 8> [local count: 679839639]:
  # DEBUG BEGIN_STMT
  iftmp.47_11->ucNotifyState[0] ={v} 0;

  <bb 9> [local count: 738895439]:
  # x_13 = PHI <0(6), 1(8)>

  <bb 10> [local count: 1073741824]:
  # x_10 = PHI <x_13(9), 1(24)>
  # DEBUG x => x_10
  # DEBUG BEGIN_STMT
  if (x_10 == 0)
    goto <bb 7>; [94.50%]
  else
    goto <bb 11>; [5.50%]

  <bb 11> [local count: 59055800]:
  # DEBUG BEGIN_STMT
  vPortExitCritical ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  xSchedulerRunning.48_5 ={v} xSchedulerRunning;
  if (xSchedulerRunning.48_5 != 0)
    goto <bb 12>; [33.00%]
  else
    goto <bb 13>; [67.00%]

  <bb 12> [local count: 19488414]:
  # DEBUG BEGIN_STMT
  vPortEnterCritical ();
  # DEBUG BEGIN_STMT
  prvResetNextTaskUnblockTime ();
  # DEBUG BEGIN_STMT
  vPortExitCritical ();

  <bb 13> [local count: 59055800]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  pxCurrentTCB.49_6 ={v} pxCurrentTCB;
  if (pxCurrentTCB.49_6 == iftmp.47_11)
    goto <bb 14>; [30.00%]
  else
    goto <bb 22>; [70.00%]

  <bb 14> [local count: 17716740]:
  # DEBUG BEGIN_STMT
  xSchedulerRunning.50_7 ={v} xSchedulerRunning;
  if (xSchedulerRunning.50_7 != 0)
    goto <bb 15>; [50.00%]
  else
    goto <bb 19>; [50.00%]

  <bb 15> [local count: 8858370]:
  # DEBUG BEGIN_STMT
  uxSchedulerSuspended.51_8 ={v} uxSchedulerSuspended;
  if (uxSchedulerSuspended.51_8 != 0)
    goto <bb 16>; [50.00%]
  else
    goto <bb 18>; [50.00%]

  <bb 16> [local count: 4429185]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i " :  :  : "memory");

  <bb 17> [local count: 447347646]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 23> [local count: 447347646]:
  goto <bb 17>; [100.00%]

  <bb 18> [local count: 4429185]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  MEM[(volatile uint32_t *)3758157060B] ={v} 268435456;
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("dsb" :  :  : "memory");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("isb");
  # DEBUG BEGIN_STMT
  goto <bb 22>; [100.00%]

  <bb 19> [local count: 8858370]:
  # DEBUG BEGIN_STMT
  uxCurrentListLength_28 = xSuspendedTaskList.uxNumberOfItems;
  # DEBUG uxCurrentListLength => uxCurrentListLength_28
  # DEBUG BEGIN_STMT
  uxCurrentNumberOfTasks.52_9 ={v} uxCurrentNumberOfTasks;
  if (uxCurrentNumberOfTasks.52_9 == uxCurrentListLength_28)
    goto <bb 20>; [51.12%]
  else
    goto <bb 21>; [48.88%]

  <bb 20> [local count: 4528399]:
  # DEBUG BEGIN_STMT
  pxCurrentTCB ={v} 0B;
  goto <bb 22>; [100.00%]

  <bb 21> [local count: 4329971]:
  # DEBUG BEGIN_STMT
  vTaskSwitchContext ();

  <bb 22> [local count: 54626615]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return;

}



;; Function vTaskPlaceOnEventList (vTaskPlaceOnEventList, funcdef_no=41, decl_uid=6375, cgraph_uid=42, symbol_order=63)

Modification phase of node vTaskPlaceOnEventList/63
vTaskPlaceOnEventList (struct List_t * const pxEventList, const TickType_t xTicksToWait)
{
  struct TCB_t * pxCurrentTCB.96_1;
  struct ListItem_t * _2;

  <bb 2> [local count: 22847857]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (pxEventList_3(D) == 0B)
    goto <bb 3>; [46.53%]
  else
    goto <bb 5>; [53.47%]

  <bb 3> [local count: 10631108]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i " :  :  : "memory");

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 6> [local count: 1073741824]:
  goto <bb 4>; [100.00%]

  <bb 5> [local count: 12216749]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  pxCurrentTCB.96_1 ={v} pxCurrentTCB;
  _2 = &pxCurrentTCB.96_1->xEventListItem;
  vListInsert (pxEventList_3(D), _2);
  # DEBUG BEGIN_STMT
  prvAddCurrentTaskToDelayedList (xTicksToWait_6(D), 1);
  # DEBUG BEGIN_STMT
  return;

}



;; Function vTaskPlaceOnUnorderedEventList (vTaskPlaceOnUnorderedEventList, funcdef_no=42, decl_uid=6379, cgraph_uid=43, symbol_order=64)

Modification phase of node vTaskPlaceOnUnorderedEventList/64
vTaskPlaceOnUnorderedEventList (struct List_t * pxEventList, const TickType_t xItemValue, const TickType_t xTicksToWait)
{
  struct ListItem_t * const pxIndex;
  long unsigned int uxSchedulerSuspended.97_1;
  struct TCB_t * pxCurrentTCB.98_2;
  long unsigned int _3;
  struct TCB_t * pxCurrentTCB.99_4;
  struct TCB_t * pxCurrentTCB.100_5;
  struct xLIST_ITEM * _6;
  struct TCB_t * pxCurrentTCB.101_7;
  struct xLIST_ITEM * _8;
  struct ListItem_t * _9;
  struct TCB_t * pxCurrentTCB.102_10;
  struct ListItem_t * _11;
  struct TCB_t * pxCurrentTCB.103_12;
  long unsigned int _13;
  long unsigned int _14;

  <bb 2> [local count: 22667608]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (pxEventList_15(D) == 0B)
    goto <bb 3>; [30.00%]
  else
    goto <bb 5>; [70.00%]

  <bb 3> [local count: 6800282]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i " :  :  : "memory");

  <bb 4> [local count: 686828449]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 9> [local count: 686828449]:
  goto <bb 4>; [100.00%]

  <bb 5> [local count: 15867325]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  uxSchedulerSuspended.97_1 ={v} uxSchedulerSuspended;
  if (uxSchedulerSuspended.97_1 == 0)
    goto <bb 6>; [67.00%]
  else
    goto <bb 8>; [33.00%]

  <bb 6> [local count: 10631108]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i " :  :  : "memory");

  <bb 7> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 10> [local count: 1073741824]:
  goto <bb 7>; [100.00%]

  <bb 8> [local count: 5236217]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  pxCurrentTCB.98_2 ={v} pxCurrentTCB;
  _3 = xItemValue_17(D) | 2147483648;
  pxCurrentTCB.98_2->xEventListItem.xItemValue = _3;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  pxIndex_19 = pxEventList_15(D)->pxIndex;
  # DEBUG pxIndex => pxIndex_19
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  pxCurrentTCB.99_4 ={v} pxCurrentTCB;
  pxCurrentTCB.99_4->xEventListItem.pxNext = pxIndex_19;
  # DEBUG BEGIN_STMT
  pxCurrentTCB.100_5 ={v} pxCurrentTCB;
  _6 = pxIndex_19->pxPrevious;
  pxCurrentTCB.100_5->xEventListItem.pxPrevious = _6;
  # DEBUG BEGIN_STMT
  pxCurrentTCB.101_7 ={v} pxCurrentTCB;
  _8 = pxIndex_19->pxPrevious;
  _9 = &pxCurrentTCB.101_7->xEventListItem;
  _8->pxNext = _9;
  # DEBUG BEGIN_STMT
  pxCurrentTCB.102_10 ={v} pxCurrentTCB;
  _11 = &pxCurrentTCB.102_10->xEventListItem;
  pxIndex_19->pxPrevious = _11;
  # DEBUG BEGIN_STMT
  pxCurrentTCB.103_12 ={v} pxCurrentTCB;
  pxCurrentTCB.103_12->xEventListItem.pvContainer = pxEventList_15(D);
  # DEBUG BEGIN_STMT
  _13 = pxEventList_15(D)->uxNumberOfItems;
  _14 = _13 + 1;
  pxEventList_15(D)->uxNumberOfItems = _14;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  prvAddCurrentTaskToDelayedList (xTicksToWait_26(D), 1);
  # DEBUG BEGIN_STMT
  return;

}



;; Function vTaskPlaceOnEventListRestricted (vTaskPlaceOnEventListRestricted, funcdef_no=43, decl_uid=6383, cgraph_uid=44, symbol_order=65)

Modification phase of node vTaskPlaceOnEventListRestricted/65
vTaskPlaceOnEventListRestricted (struct List_t * const pxEventList, TickType_t xTicksToWait, const BaseType_t xWaitIndefinitely)
{
  struct ListItem_t * const pxIndex;
  struct TCB_t * pxCurrentTCB.104_1;
  struct TCB_t * pxCurrentTCB.105_2;
  struct xLIST_ITEM * _3;
  struct TCB_t * pxCurrentTCB.106_4;
  struct xLIST_ITEM * _5;
  struct ListItem_t * _6;
  struct TCB_t * pxCurrentTCB.107_7;
  struct ListItem_t * _8;
  struct TCB_t * pxCurrentTCB.108_9;
  long unsigned int _10;
  long unsigned int _11;

  <bb 2> [local count: 35437027]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (pxEventList_13(D) == 0B)
    goto <bb 3>; [30.00%]
  else
    goto <bb 5>; [70.00%]

  <bb 3> [local count: 10631108]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i " :  :  : "memory");

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 8> [local count: 1073741824]:
  goto <bb 4>; [100.00%]

  <bb 5> [local count: 24805919]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  pxIndex_15 = pxEventList_13(D)->pxIndex;
  # DEBUG pxIndex => pxIndex_15
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  pxCurrentTCB.104_1 ={v} pxCurrentTCB;
  pxCurrentTCB.104_1->xEventListItem.pxNext = pxIndex_15;
  # DEBUG BEGIN_STMT
  pxCurrentTCB.105_2 ={v} pxCurrentTCB;
  _3 = pxIndex_15->pxPrevious;
  pxCurrentTCB.105_2->xEventListItem.pxPrevious = _3;
  # DEBUG BEGIN_STMT
  pxCurrentTCB.106_4 ={v} pxCurrentTCB;
  _5 = pxIndex_15->pxPrevious;
  _6 = &pxCurrentTCB.106_4->xEventListItem;
  _5->pxNext = _6;
  # DEBUG BEGIN_STMT
  pxCurrentTCB.107_7 ={v} pxCurrentTCB;
  _8 = &pxCurrentTCB.107_7->xEventListItem;
  pxIndex_15->pxPrevious = _8;
  # DEBUG BEGIN_STMT
  pxCurrentTCB.108_9 ={v} pxCurrentTCB;
  pxCurrentTCB.108_9->xEventListItem.pvContainer = pxEventList_13(D);
  # DEBUG BEGIN_STMT
  _10 = pxEventList_13(D)->uxNumberOfItems;
  _11 = _10 + 1;
  pxEventList_13(D)->uxNumberOfItems = _11;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (xWaitIndefinitely_22(D) != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 6> [local count: 12402960]:
  # DEBUG BEGIN_STMT
  # DEBUG xTicksToWait => 4294967295

  <bb 7> [local count: 24805919]:
  # xTicksToWait_12 = PHI <xTicksToWait_23(D)(5), 4294967295(6)>
  # DEBUG xTicksToWait => xTicksToWait_12
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  prvAddCurrentTaskToDelayedList (xTicksToWait_12, xWaitIndefinitely_22(D));
  # DEBUG BEGIN_STMT
  return;

}



;; Function xTaskRemoveFromEventList (xTaskRemoveFromEventList, funcdef_no=44, decl_uid=6385, cgraph_uid=45, symbol_order=66)

Modification phase of node xTaskRemoveFromEventList/66
xTaskRemoveFromEventList (const struct List_t * const pxEventList)
{
  struct ListItem_t * const pxIndex;
  struct ListItem_t * const pxIndex;
  struct List_t * const pxList;
  struct List_t * const pxList;
  BaseType_t xReturn;
  struct TCB_t * pxUnblockedTCB;
  struct xLIST_ITEM * _1;
  struct xLIST_ITEM * _2;
  struct xLIST_ITEM * _3;
  struct ListItem_t * _4;
  struct ListItem_t * _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int uxSchedulerSuspended.109_8;
  struct xLIST_ITEM * _9;
  struct xLIST_ITEM * _10;
  struct xLIST_ITEM * _11;
  struct ListItem_t * _12;
  struct ListItem_t * _13;
  long unsigned int _14;
  long unsigned int _15;
  long unsigned int _16;
  long unsigned int uxTopReadyPriority.110_17;
  struct xLIST_ITEM * _18;
  struct xLIST_ITEM * _19;
  struct List_t * _20;
  long unsigned int _21;
  long unsigned int _22;
  struct xLIST_ITEM * _23;
  struct xLIST_ITEM * _24;
  long unsigned int _25;
  long unsigned int _26;
  long unsigned int _27;
  struct TCB_t * pxCurrentTCB.111_28;
  long unsigned int _29;

  <bb 2> [local count: 35437027]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = pxEventList_37(D)->xListEnd.pxNext;
  pxUnblockedTCB_38 = _1->pvOwner;
  # DEBUG pxUnblockedTCB => pxUnblockedTCB_38
  # DEBUG BEGIN_STMT
  if (pxUnblockedTCB_38 == 0B)
    goto <bb 3>; [30.00%]
  else
    goto <bb 5>; [70.00%]

  <bb 3> [local count: 10631108]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i " :  :  : "memory");

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 17> [local count: 1073741824]:
  goto <bb 4>; [100.00%]

  <bb 5> [local count: 24805919]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  pxList_39 = pxUnblockedTCB_38->xEventListItem.pvContainer;
  # DEBUG pxList => pxList_39
  # DEBUG BEGIN_STMT
  _2 = pxUnblockedTCB_38->xEventListItem.pxNext;
  _3 = pxUnblockedTCB_38->xEventListItem.pxPrevious;
  _2->pxPrevious = _3;
  # DEBUG BEGIN_STMT
  _3->pxNext = _2;
  # DEBUG BEGIN_STMT
  _4 = pxList_39->pxIndex;
  _5 = &pxUnblockedTCB_38->xEventListItem;
  if (_4 == _5)
    goto <bb 6>; [30.00%]
  else
    goto <bb 7>; [70.00%]

  <bb 6> [local count: 7441776]:
  # DEBUG BEGIN_STMT
  pxList_39->pxIndex = _3;

  <bb 7> [local count: 24805919]:
  # DEBUG BEGIN_STMT
  pxUnblockedTCB_38->xEventListItem.pvContainer = 0B;
  # DEBUG BEGIN_STMT
  _6 = pxList_39->uxNumberOfItems;
  _7 = _6 + 4294967295;
  pxList_39->uxNumberOfItems = _7;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  uxSchedulerSuspended.109_8 ={v} uxSchedulerSuspended;
  if (uxSchedulerSuspended.109_8 == 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 13>; [50.00%]

  <bb 8> [local count: 12402960]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  pxList_52 = pxUnblockedTCB_38->xStateListItem.pvContainer;
  # DEBUG pxList => pxList_52
  # DEBUG BEGIN_STMT
  _9 = pxUnblockedTCB_38->xStateListItem.pxNext;
  _10 = pxUnblockedTCB_38->xStateListItem.pxPrevious;
  _9->pxPrevious = _10;
  # DEBUG BEGIN_STMT
  _11 = pxUnblockedTCB_38->xStateListItem.pxPrevious;
  _11->pxNext = _9;
  # DEBUG BEGIN_STMT
  _12 = pxList_52->pxIndex;
  _13 = &pxUnblockedTCB_38->xStateListItem;
  if (_12 == _13)
    goto <bb 9>; [30.00%]
  else
    goto <bb 10>; [70.00%]

  <bb 9> [local count: 3720888]:
  # DEBUG BEGIN_STMT
  pxList_52->pxIndex = _11;

  <bb 10> [local count: 12402960]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _14 = pxList_52->uxNumberOfItems;
  _15 = _14 + 4294967295;
  pxList_52->uxNumberOfItems = _15;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _16 = pxUnblockedTCB_38->uxPriority;
  uxTopReadyPriority.110_17 ={v} uxTopReadyPriority;
  if (_16 > uxTopReadyPriority.110_17)
    goto <bb 11>; [50.00%]
  else
    goto <bb 12>; [50.00%]

  <bb 11> [local count: 6201480]:
  # DEBUG BEGIN_STMT
  uxTopReadyPriority ={v} _16;

  <bb 12> [local count: 12402960]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  pxIndex_58 = pxReadyTasksLists[_16].pxIndex;
  # DEBUG pxIndex => pxIndex_58
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  pxUnblockedTCB_38->xStateListItem.pxNext = pxIndex_58;
  # DEBUG BEGIN_STMT
  _18 = pxIndex_58->pxPrevious;
  pxUnblockedTCB_38->xStateListItem.pxPrevious = _18;
  # DEBUG BEGIN_STMT
  _19 = pxIndex_58->pxPrevious;
  _19->pxNext = _13;
  # DEBUG BEGIN_STMT
  pxIndex_58->pxPrevious = _13;
  # DEBUG BEGIN_STMT
  _20 = &pxReadyTasksLists[_16];
  pxUnblockedTCB_38->xStateListItem.pvContainer = _20;
  # DEBUG BEGIN_STMT
  _21 = pxReadyTasksLists[_16].uxNumberOfItems;
  _22 = _21 + 1;
  pxReadyTasksLists[_16].uxNumberOfItems = _22;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  goto <bb 14>; [100.00%]

  <bb 13> [local count: 12402960]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  pxIndex_45 = xPendingReadyList.pxIndex;
  # DEBUG pxIndex => pxIndex_45
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  pxUnblockedTCB_38->xEventListItem.pxNext = pxIndex_45;
  # DEBUG BEGIN_STMT
  _23 = pxIndex_45->pxPrevious;
  pxUnblockedTCB_38->xEventListItem.pxPrevious = _23;
  # DEBUG BEGIN_STMT
  _24 = pxIndex_45->pxPrevious;
  _24->pxNext = _5;
  # DEBUG BEGIN_STMT
  pxIndex_45->pxPrevious = _5;
  # DEBUG BEGIN_STMT
  pxUnblockedTCB_38->xEventListItem.pvContainer = &xPendingReadyList;
  # DEBUG BEGIN_STMT
  _25 = xPendingReadyList.uxNumberOfItems;
  _26 = _25 + 1;
  xPendingReadyList.uxNumberOfItems = _26;

  <bb 14> [local count: 24805919]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _27 = pxUnblockedTCB_38->uxPriority;
  pxCurrentTCB.111_28 ={v} pxCurrentTCB;
  _29 = pxCurrentTCB.111_28->uxPriority;
  if (_27 > _29)
    goto <bb 15>; [50.00%]
  else
    goto <bb 16>; [50.00%]

  <bb 15> [local count: 12402960]:
  # DEBUG BEGIN_STMT
  # DEBUG xReturn => 1
  # DEBUG BEGIN_STMT
  xYieldPendings[0] ={v} 1;

  <bb 16> [local count: 24805919]:
  # xReturn_30 = PHI <1(15), 0(14)>
  # DEBUG xReturn => xReturn_30
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return xReturn_30;

}



;; Function vTaskRemoveFromUnorderedEventList (vTaskRemoveFromUnorderedEventList, funcdef_no=45, decl_uid=6388, cgraph_uid=46, symbol_order=67)

Modification phase of node vTaskRemoveFromUnorderedEventList/67
vTaskRemoveFromUnorderedEventList (struct ListItem_t * pxEventListItem, const TickType_t xItemValue)
{
  struct ListItem_t * const pxIndex;
  struct List_t * const pxList;
  struct List_t * const pxList;
  struct TCB_t * pxUnblockedTCB;
  long unsigned int uxSchedulerSuspended.112_1;
  long unsigned int _2;
  struct xLIST_ITEM * _3;
  struct xLIST_ITEM * _4;
  struct xLIST_ITEM * _5;
  struct ListItem_t * _6;
  long unsigned int _7;
  long unsigned int _8;
  struct xLIST_ITEM * _9;
  struct xLIST_ITEM * _10;
  struct xLIST_ITEM * _11;
  struct ListItem_t * _12;
  struct ListItem_t * _13;
  long unsigned int _14;
  long unsigned int _15;
  long unsigned int _16;
  long unsigned int uxTopReadyPriority.113_17;
  struct xLIST_ITEM * _18;
  struct xLIST_ITEM * _19;
  struct List_t * _20;
  long unsigned int _21;
  long unsigned int _22;
  struct TCB_t * pxCurrentTCB.114_23;
  long unsigned int _24;

  <bb 2> [local count: 21262216]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  uxSchedulerSuspended.112_1 ={v} uxSchedulerSuspended;
  if (uxSchedulerSuspended.112_1 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 3> [local count: 10631108]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i " :  :  : "memory");

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 17> [local count: 1073741824]:
  goto <bb 4>; [100.00%]

  <bb 5> [local count: 10631108]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _2 = xItemValue_30(D) | 2147483648;
  pxEventListItem_31(D)->xItemValue = _2;
  # DEBUG BEGIN_STMT
  pxUnblockedTCB_33 = pxEventListItem_31(D)->pvOwner;
  # DEBUG pxUnblockedTCB => pxUnblockedTCB_33
  # DEBUG BEGIN_STMT
  if (pxUnblockedTCB_33 == 0B)
    goto <bb 6>; [30.00%]
  else
    goto <bb 8>; [70.00%]

  <bb 6> [local count: 3189332]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i " :  :  : "memory");

  <bb 7> [local count: 322122544]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 18> [local count: 322122544]:
  goto <bb 7>; [100.00%]

  <bb 8> [local count: 7441776]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  pxList_34 = pxEventListItem_31(D)->pvContainer;
  # DEBUG pxList => pxList_34
  # DEBUG BEGIN_STMT
  _3 = pxEventListItem_31(D)->pxNext;
  _4 = pxEventListItem_31(D)->pxPrevious;
  _3->pxPrevious = _4;
  # DEBUG BEGIN_STMT
  _5 = pxEventListItem_31(D)->pxPrevious;
  _5->pxNext = _3;
  # DEBUG BEGIN_STMT
  _6 = pxList_34->pxIndex;
  if (_6 == pxEventListItem_31(D))
    goto <bb 9>; [30.00%]
  else
    goto <bb 10>; [70.00%]

  <bb 9> [local count: 2232533]:
  # DEBUG BEGIN_STMT
  pxList_34->pxIndex = _5;

  <bb 10> [local count: 7441776]:
  # DEBUG BEGIN_STMT
  pxEventListItem_31(D)->pvContainer = 0B;
  # DEBUG BEGIN_STMT
  _7 = pxList_34->uxNumberOfItems;
  _8 = _7 + 4294967295;
  pxList_34->uxNumberOfItems = _8;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  pxList_40 = pxUnblockedTCB_33->xStateListItem.pvContainer;
  # DEBUG pxList => pxList_40
  # DEBUG BEGIN_STMT
  _9 = pxUnblockedTCB_33->xStateListItem.pxNext;
  _10 = pxUnblockedTCB_33->xStateListItem.pxPrevious;
  _9->pxPrevious = _10;
  # DEBUG BEGIN_STMT
  _11 = pxUnblockedTCB_33->xStateListItem.pxPrevious;
  _11->pxNext = _9;
  # DEBUG BEGIN_STMT
  _12 = pxList_40->pxIndex;
  _13 = &pxUnblockedTCB_33->xStateListItem;
  if (_12 == _13)
    goto <bb 11>; [30.00%]
  else
    goto <bb 12>; [70.00%]

  <bb 11> [local count: 2232533]:
  # DEBUG BEGIN_STMT
  pxList_40->pxIndex = _11;

  <bb 12> [local count: 7441776]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _14 = pxList_40->uxNumberOfItems;
  _15 = _14 + 4294967295;
  pxList_40->uxNumberOfItems = _15;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _16 = pxUnblockedTCB_33->uxPriority;
  uxTopReadyPriority.113_17 ={v} uxTopReadyPriority;
  if (_16 > uxTopReadyPriority.113_17)
    goto <bb 13>; [50.00%]
  else
    goto <bb 14>; [50.00%]

  <bb 13> [local count: 3720888]:
  # DEBUG BEGIN_STMT
  uxTopReadyPriority ={v} _16;

  <bb 14> [local count: 7441776]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  pxIndex_46 = pxReadyTasksLists[_16].pxIndex;
  # DEBUG pxIndex => pxIndex_46
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  pxUnblockedTCB_33->xStateListItem.pxNext = pxIndex_46;
  # DEBUG BEGIN_STMT
  _18 = pxIndex_46->pxPrevious;
  pxUnblockedTCB_33->xStateListItem.pxPrevious = _18;
  # DEBUG BEGIN_STMT
  _19 = pxIndex_46->pxPrevious;
  _19->pxNext = _13;
  # DEBUG BEGIN_STMT
  pxIndex_46->pxPrevious = _13;
  # DEBUG BEGIN_STMT
  _20 = &pxReadyTasksLists[_16];
  pxUnblockedTCB_33->xStateListItem.pvContainer = _20;
  # DEBUG BEGIN_STMT
  _21 = pxReadyTasksLists[_16].uxNumberOfItems;
  _22 = _21 + 1;
  pxReadyTasksLists[_16].uxNumberOfItems = _22;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  pxCurrentTCB.114_23 ={v} pxCurrentTCB;
  _24 = pxCurrentTCB.114_23->uxPriority;
  if (_16 > _24)
    goto <bb 15>; [50.00%]
  else
    goto <bb 16>; [50.00%]

  <bb 15> [local count: 3720888]:
  # DEBUG BEGIN_STMT
  xYieldPendings[0] ={v} 1;

  <bb 16> [local count: 7441776]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function vTaskSetTimeOutState (vTaskSetTimeOutState, funcdef_no=46, decl_uid=6363, cgraph_uid=47, symbol_order=68)

Modification phase of node vTaskSetTimeOutState/68
vTaskSetTimeOutState (struct TimeOut_t * const pxTimeOut)
{
  long int xNumOfOverflows.115_1;
  long unsigned int xTickCount.116_2;

  <bb 2> [local count: 22847857]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (pxTimeOut_3(D) == 0B)
    goto <bb 3>; [46.53%]
  else
    goto <bb 5>; [53.47%]

  <bb 3> [local count: 10631108]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i " :  :  : "memory");

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 6> [local count: 1073741824]:
  goto <bb 4>; [100.00%]

  <bb 5> [local count: 12216749]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  vPortEnterCritical ();
  # DEBUG BEGIN_STMT
  xNumOfOverflows.115_1 ={v} xNumOfOverflows;
  pxTimeOut_3(D)->xOverflowCount = xNumOfOverflows.115_1;
  # DEBUG BEGIN_STMT
  xTickCount.116_2 ={v} xTickCount;
  pxTimeOut_3(D)->xTimeOnEntering = xTickCount.116_2;
  # DEBUG BEGIN_STMT
  vPortExitCritical ();
  # DEBUG BEGIN_STMT
  return;

}



;; Function vTaskInternalSetTimeOutState (vTaskInternalSetTimeOutState, funcdef_no=47, decl_uid=6416, cgraph_uid=48, symbol_order=69)

Modification phase of node vTaskInternalSetTimeOutState/69
vTaskInternalSetTimeOutState (struct TimeOut_t * const pxTimeOut)
{
  long int xNumOfOverflows.117_1;
  long unsigned int xTickCount.118_2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  xNumOfOverflows.117_1 ={v} xNumOfOverflows;
  pxTimeOut_4(D)->xOverflowCount = xNumOfOverflows.117_1;
  # DEBUG BEGIN_STMT
  xTickCount.118_2 ={v} xTickCount;
  pxTimeOut_4(D)->xTimeOnEntering = xTickCount.118_2;
  # DEBUG BEGIN_STMT
  return;

}



;; Function xTaskCheckForTimeOut (xTaskCheckForTimeOut, funcdef_no=48, decl_uid=6366, cgraph_uid=49, symbol_order=70)

Modification phase of node xTaskCheckForTimeOut/70
xTaskCheckForTimeOut (struct TimeOut_t * const pxTimeOut, TickType_t * const pxTicksToWait)
{
  const TickType_t xElapsedTime;
  const TickType_t xConstTickCount;
  BaseType_t xReturn;
  long unsigned int _1;
  struct TCB_t * pxCurrentTCB.119_2;
  unsigned char _3;
  struct TCB_t * pxCurrentTCB.120_4;
  long unsigned int _5;
  long int _6;
  long int xNumOfOverflows.121_7;
  long unsigned int _8;
  long unsigned int _17;

  <bb 2> [local count: 32639796]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (pxTimeOut_11(D) == 0B)
    goto <bb 3>; [30.00%]
  else
    goto <bb 5>; [70.00%]

  <bb 3> [local count: 9791939]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i " :  :  : "memory");

  <bb 4> [local count: 988985730]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 18> [local count: 988985730]:
  goto <bb 4>; [100.00%]

  <bb 5> [local count: 22847857]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (pxTicksToWait_12(D) == 0B)
    goto <bb 6>; [46.53%]
  else
    goto <bb 8>; [53.47%]

  <bb 6> [local count: 10631108]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i " :  :  : "memory");

  <bb 7> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 19> [local count: 1073741824]:
  goto <bb 7>; [100.00%]

  <bb 8> [local count: 12216749]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  vPortEnterCritical ();
  # DEBUG BEGIN_STMT
  xConstTickCount_15 ={v} xTickCount;
  # DEBUG xConstTickCount => xConstTickCount_15
  # DEBUG BEGIN_STMT
  _1 = pxTimeOut_11(D)->xTimeOnEntering;
  xElapsedTime_16 = xConstTickCount_15 - _1;
  # DEBUG xElapsedTime => xElapsedTime_16
  # DEBUG BEGIN_STMT
  pxCurrentTCB.119_2 ={v} pxCurrentTCB;
  _3 = pxCurrentTCB.119_2->ucDelayAborted;
  if (_3 != 0)
    goto <bb 9>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 9> [local count: 6108375]:
  # DEBUG BEGIN_STMT
  pxCurrentTCB.120_4 ={v} pxCurrentTCB;
  pxCurrentTCB.120_4->ucDelayAborted = 0;
  # DEBUG BEGIN_STMT
  # DEBUG xReturn => 1
  goto <bb 17>; [100.00%]

  <bb 10> [local count: 6108375]:
  # DEBUG BEGIN_STMT
  _5 = *pxTicksToWait_12(D);
  if (_5 == 4294967295)
    goto <bb 17>; [34.00%]
  else
    goto <bb 11>; [66.00%]

  <bb 11> [local count: 4031527]:
  # DEBUG BEGIN_STMT
  _6 = pxTimeOut_11(D)->xOverflowCount;
  xNumOfOverflows.121_7 ={v} xNumOfOverflows;
  if (_6 != xNumOfOverflows.121_7)
    goto <bb 12>; [66.00%]
  else
    goto <bb 14>; [34.00%]

  <bb 12> [local count: 2660808]:
  if (_1 <= xConstTickCount_15)
    goto <bb 13>; [50.00%]
  else
    goto <bb 14>; [50.00%]

  <bb 13> [local count: 1330404]:
  # DEBUG BEGIN_STMT
  # DEBUG xReturn => 1
  # DEBUG BEGIN_STMT
  *pxTicksToWait_12(D) = 0;
  goto <bb 17>; [100.00%]

  <bb 14> [local count: 2701123]:
  # DEBUG BEGIN_STMT
  if (_5 > xElapsedTime_16)
    goto <bb 15>; [33.00%]
  else
    goto <bb 16>; [67.00%]

  <bb 15> [local count: 891371]:
  # DEBUG BEGIN_STMT
  _17 = _1 - xConstTickCount_15;
  _8 = _5 + _17;
  *pxTicksToWait_12(D) = _8;
  # DEBUG BEGIN_STMT
  vTaskInternalSetTimeOutState (pxTimeOut_11(D));
  # DEBUG BEGIN_STMT
  # DEBUG xReturn => 0
  goto <bb 17>; [100.00%]

  <bb 16> [local count: 1809753]:
  # DEBUG BEGIN_STMT
  *pxTicksToWait_12(D) = 0;
  # DEBUG BEGIN_STMT
  # DEBUG xReturn => 1

  <bb 17> [local count: 12216749]:
  # xReturn_9 = PHI <1(9), 0(10), 1(13), 0(15), 1(16)>
  # DEBUG xReturn => xReturn_9
  # DEBUG BEGIN_STMT
  vPortExitCritical ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return xReturn_9;

}



;; Function vTaskMissedYield (vTaskMissedYield, funcdef_no=49, decl_uid=6398, cgraph_uid=50, symbol_order=71)

Modification phase of node vTaskMissedYield/71
vTaskMissedYield ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  xYieldPendings[0] ={v} 1;
  # DEBUG BEGIN_STMT
  return;

}



;; Function uxTaskGetTaskNumber (uxTaskGetTaskNumber, funcdef_no=50, decl_uid=6409, cgraph_uid=51, symbol_order=72)

Modification phase of node uxTaskGetTaskNumber/72
uxTaskGetTaskNumber (struct tskTaskControlBlock * xTask)
{
  UBaseType_t uxReturn;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (xTask_2(D) != 0B)
    goto <bb 3>; [70.00%]
  else
    goto <bb 4>; [30.00%]

  <bb 3> [local count: 751619281]:
  # DEBUG BEGIN_STMT
  # DEBUG pxTCB => xTask_2(D)
  # DEBUG BEGIN_STMT
  uxReturn_4 = MEM[(const struct TCB_t *)xTask_2(D)].uxTaskNumber;
  # DEBUG uxReturn => uxReturn_4

  <bb 4> [local count: 1073741824]:
  # uxReturn_1 = PHI <uxReturn_4(3), 0(2)>
  # DEBUG uxReturn => uxReturn_1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return uxReturn_1;

}



;; Function vTaskSetTaskNumber (vTaskSetTaskNumber, funcdef_no=51, decl_uid=6412, cgraph_uid=52, symbol_order=73)

Modification phase of node vTaskSetTaskNumber/73
vTaskSetTaskNumber (struct tskTaskControlBlock * xTask, const UBaseType_t uxHandle)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (xTask_2(D) != 0B)
    goto <bb 3>; [70.00%]
  else
    goto <bb 4>; [30.00%]

  <bb 3> [local count: 751619281]:
  # DEBUG BEGIN_STMT
  # DEBUG pxTCB => xTask_2(D)
  # DEBUG BEGIN_STMT
  MEM[(struct TCB_t *)xTask_2(D)].uxTaskNumber = uxHandle_4(D);

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function vTaskGetInfo (vTaskGetInfo, funcdef_no=55, decl_uid=6289, cgraph_uid=56, symbol_order=77)

Modification phase of node vTaskGetInfo/77
vTaskGetInfo (struct tskTaskControlBlock * xTask, struct TaskStatus_t * pxTaskStatus, BaseType_t xGetFreeStackSpace, eTaskState eState)
{
  BaseType_t x;
  char * _1;
  long unsigned int _2;
  StackType_t * _3;
  long unsigned int _4;
  long unsigned int _5;
  struct TCB_t * pxCurrentTCB.123_6;
  struct xLIST * _7;
  unsigned char _8;
  struct xLIST * _9;
  <unnamed type> _10;
  StackType_t * _11;
  long unsigned int _12;
  struct TCB_t * iftmp.122_14;
  struct TCB_t * iftmp.122_22;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (xTask_20(D) == 0B)
    goto <bb 3>; [30.00%]
  else
    goto <bb 4>; [70.00%]

  <bb 3> [local count: 322122544]:
  iftmp.122_22 ={v} pxCurrentTCB;

  <bb 4> [local count: 1073741823]:
  # iftmp.122_14 = PHI <iftmp.122_22(3), xTask_20(D)(2)>
  # DEBUG pxTCB => iftmp.122_14
  # DEBUG BEGIN_STMT
  pxTaskStatus_23(D)->xHandle = iftmp.122_14;
  # DEBUG BEGIN_STMT
  _1 = &iftmp.122_14->pcTaskName[0];
  pxTaskStatus_23(D)->pcTaskName = _1;
  # DEBUG BEGIN_STMT
  _2 = iftmp.122_14->uxPriority;
  pxTaskStatus_23(D)->uxCurrentPriority = _2;
  # DEBUG BEGIN_STMT
  _3 = iftmp.122_14->pxStack;
  pxTaskStatus_23(D)->pxStackBase = _3;
  # DEBUG BEGIN_STMT
  _4 = iftmp.122_14->uxTCBNumber;
  pxTaskStatus_23(D)->xTaskNumber = _4;
  # DEBUG BEGIN_STMT
  _5 = iftmp.122_14->uxBasePriority;
  pxTaskStatus_23(D)->uxBasePriority = _5;
  # DEBUG BEGIN_STMT
  pxTaskStatus_23(D)->ulRunTimeCounter = 0;
  # DEBUG BEGIN_STMT
  if (eState_31(D) != 5)
    goto <bb 5>; [79.76%]
  else
    goto <bb 17>; [20.24%]

  <bb 5> [local count: 856416479]:
  # DEBUG BEGIN_STMT
  pxCurrentTCB.123_6 ={v} pxCurrentTCB;
  if (pxCurrentTCB.123_6 == iftmp.122_14)
    goto <bb 6>; [30.00%]
  else
    goto <bb 7>; [70.00%]

  <bb 6> [local count: 256924941]:
  # DEBUG BEGIN_STMT
  pxTaskStatus_23(D)->eCurrentState = 0;
  goto <bb 18>; [100.00%]

  <bb 7> [local count: 599491539]:
  # DEBUG BEGIN_STMT
  pxTaskStatus_23(D)->eCurrentState = eState_31(D);
  # DEBUG BEGIN_STMT
  if (eState_31(D) == 3)
    goto <bb 8>; [20.24%]
  else
    goto <bb 14>; [79.76%]

  <bb 8> [local count: 121337087]:
  # DEBUG BEGIN_STMT
  vTaskSuspendAll ();
  # DEBUG BEGIN_STMT
  _7 = iftmp.122_14->xEventListItem.pvContainer;
  if (_7 != 0B)
    goto <bb 9>; [70.00%]
  else
    goto <bb 22>; [30.00%]

  <bb 9> [local count: 84935961]:
  # DEBUG BEGIN_STMT
  pxTaskStatus_23(D)->eCurrentState = 2;
  goto <bb 13>; [100.00%]

  <bb 10> [local count: 21797081]:
  # DEBUG BEGIN_STMT
  _8 ={v} iftmp.122_14->ucNotifyState[0];
  if (_8 == 1)
    goto <bb 11>; [67.00%]
  else
    goto <bb 23>; [33.00%]

  <bb 23> [local count: 7193037]:
  goto <bb 12>; [100.00%]

  <bb 11> [local count: 14604044]:
  # DEBUG BEGIN_STMT
  pxTaskStatus_23(D)->eCurrentState = 2;
  # DEBUG BEGIN_STMT
  goto <bb 13>; [100.00%]

  <bb 22> [local count: 36401126]:

  <bb 12> [local count: 43594162]:
  # x_13 = PHI <0(22), 1(23)>
  # DEBUG x => x_13
  # DEBUG BEGIN_STMT
  if (x_13 == 0)
    goto <bb 10>; [50.00%]
  else
    goto <bb 13>; [50.00%]

  <bb 13> [local count: 121337087]:
  # DEBUG BEGIN_STMT
  xTaskResumeAll ();

  <bb 14> [local count: 599491539]:
  # DEBUG BEGIN_STMT
  vPortEnterCritical ();
  # DEBUG BEGIN_STMT
  _9 = iftmp.122_14->xEventListItem.pvContainer;
  if (_9 == &xPendingReadyList)
    goto <bb 15>; [30.00%]
  else
    goto <bb 16>; [70.00%]

  <bb 15> [local count: 179847460]:
  # DEBUG BEGIN_STMT
  pxTaskStatus_23(D)->eCurrentState = 1;

  <bb 16> [local count: 599491539]:
  # DEBUG BEGIN_STMT
  vPortExitCritical ();
  goto <bb 18>; [100.00%]

  <bb 17> [local count: 217325344]:
  # DEBUG BEGIN_STMT
  _10 = eTaskGetState (iftmp.122_14);
  pxTaskStatus_23(D)->eCurrentState = _10;

  <bb 18> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  if (xGetFreeStackSpace_43(D) != 0)
    goto <bb 19>; [33.00%]
  else
    goto <bb 20>; [67.00%]

  <bb 19> [local count: 354334800]:
  # DEBUG BEGIN_STMT
  _11 = iftmp.122_14->pxStack;
  _12 = prvTaskCheckFreeStackSpace (_11);
  pxTaskStatus_23(D)->usStackHighWaterMark = _12;
  goto <bb 21>; [100.00%]

  <bb 20> [local count: 719407025]:
  # DEBUG BEGIN_STMT
  pxTaskStatus_23(D)->usStackHighWaterMark = 0;

  <bb 21> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function prvListTasksWithinSingleList (prvListTasksWithinSingleList, funcdef_no=56, decl_uid=7085, cgraph_uid=57, symbol_order=78)

Modification phase of node prvListTasksWithinSingleList/78
Adjusting mask for param 2 to 0x7
Setting value range of param 2 (now 2) [1, 4]
prvListTasksWithinSingleList (struct TaskStatus_t * pxTaskStatusArray, struct List_t * pxList, eTaskState eState)
{
  struct TCB_t * pxTCB;
  struct ListItem_t * pxIterator;
  const struct ListItem_t * pxEndMarker;
  UBaseType_t uxTask;
  long unsigned int _1;
  long unsigned int _2;
  struct TaskStatus_t * _3;

  <bb 2> [local count: 236223200]:
  # DEBUG BEGIN_STMT
  # DEBUG uxTask => 0
  # DEBUG BEGIN_STMT
  pxEndMarker_10 = &pxList_9(D)->xListEnd;
  # DEBUG pxEndMarker => pxEndMarker_10
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG pxTCB => 0B
  # DEBUG BEGIN_STMT
  _1 = pxList_9(D)->uxNumberOfItems;
  if (_1 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 3> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  pxIterator_12 = pxList_9(D)->xListEnd.pxNext;
  # DEBUG pxIterator => pxIterator_12
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 955630225]:
  # DEBUG BEGIN_STMT
  pxTCB_13 = pxIterator_6->pvOwner;
  # DEBUG pxTCB => pxTCB_13
  # DEBUG BEGIN_STMT
  _2 = uxTask_4 * 36;
  _3 = pxTaskStatusArray_14(D) + _2;
  vTaskGetInfo (pxTCB_13, _3, 1, eState_15(D));
  # DEBUG BEGIN_STMT
  uxTask_17 = uxTask_4 + 1;
  # DEBUG uxTask => uxTask_17
  # DEBUG BEGIN_STMT
  pxIterator_18 = pxIterator_6->pxNext;
  # DEBUG pxIterator => pxIterator_18

  <bb 5> [local count: 1073741824]:
  # uxTask_4 = PHI <0(3), uxTask_17(4)>
  # pxIterator_6 = PHI <pxIterator_12(3), pxIterator_18(4)>
  # DEBUG pxIterator => pxIterator_6
  # DEBUG uxTask => uxTask_4
  # DEBUG BEGIN_STMT
  if (pxIterator_6 != pxEndMarker_10)
    goto <bb 4>; [89.00%]
  else
    goto <bb 6>; [11.00%]

  <bb 6> [local count: 236223200]:
  # uxTask_5 = PHI <0(2), uxTask_4(5)>
  # DEBUG uxTask => uxTask_5
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return uxTask_5;

}



;; Function uxTaskGetSystemState (uxTaskGetSystemState, funcdef_no=36, decl_uid=6324, cgraph_uid=37, symbol_order=58)

Modification phase of node uxTaskGetSystemState/58
uxTaskGetSystemState (struct TaskStatus_t * const pxTaskStatusArray, const UBaseType_t uxArraySize, uint32_t * const pulTotalRunTime)
{
  UBaseType_t uxQueue;
  UBaseType_t uxTask;
  long unsigned int uxCurrentNumberOfTasks.74_1;
  long unsigned int _2;
  struct TaskStatus_t * _3;
  struct List_t * _4;
  long unsigned int _5;
  long unsigned int _6;
  struct TaskStatus_t * _7;
  struct List_t * pxDelayedTaskList.75_8;
  long unsigned int _9;
  long unsigned int _10;
  struct TaskStatus_t * _11;
  struct List_t * pxOverflowDelayedTaskList.76_12;
  long unsigned int _13;
  long unsigned int _14;
  struct TaskStatus_t * _15;
  long unsigned int _16;
  long unsigned int _17;
  struct TaskStatus_t * _18;
  long unsigned int _19;

  <bb 2> [local count: 214748368]:
  # DEBUG BEGIN_STMT
  # DEBUG uxTask => 0
  # DEBUG uxQueue => 10
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  vTaskSuspendAll ();
  # DEBUG BEGIN_STMT
  uxCurrentNumberOfTasks.74_1 ={v} uxCurrentNumberOfTasks;
  if (uxCurrentNumberOfTasks.74_1 <= uxArraySize_28(D))
    goto <bb 7>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 7> [local count: 107374184]:

  <bb 3> [local count: 1073741824]:
  # uxTask_20 = PHI <0(7), uxTask_32(8)>
  # uxQueue_22 = PHI <10(7), uxQueue_29(8)>
  # DEBUG uxQueue => uxQueue_22
  # DEBUG uxTask => uxTask_20
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  uxQueue_29 = uxQueue_22 + 4294967295;
  # DEBUG uxQueue => uxQueue_29
  # DEBUG BEGIN_STMT
  _2 = uxTask_20 * 36;
  _3 = pxTaskStatusArray_30(D) + _2;
  _4 = &pxReadyTasksLists[uxQueue_29];
  _5 = prvListTasksWithinSingleList (_3, _4, 1);
  uxTask_32 = _5 + uxTask_20;
  # DEBUG uxTask => uxTask_32
  # DEBUG BEGIN_STMT
  if (uxQueue_29 != 0)
    goto <bb 8>; [90.00%]
  else
    goto <bb 4>; [10.00%]

  <bb 8> [local count: 966367641]:
  goto <bb 3>; [100.00%]

  <bb 4> [local count: 107374184]:
  # uxTask_25 = PHI <uxTask_32(3)>
  # DEBUG BEGIN_STMT
  _6 = uxTask_25 * 36;
  _7 = pxTaskStatusArray_30(D) + _6;
  pxDelayedTaskList.75_8 ={v} pxDelayedTaskList;
  _9 = prvListTasksWithinSingleList (_7, pxDelayedTaskList.75_8, 2);
  uxTask_34 = _9 + uxTask_25;
  # DEBUG uxTask => uxTask_34
  # DEBUG BEGIN_STMT
  _10 = uxTask_34 * 36;
  _11 = pxTaskStatusArray_30(D) + _10;
  pxOverflowDelayedTaskList.76_12 ={v} pxOverflowDelayedTaskList;
  _13 = prvListTasksWithinSingleList (_11, pxOverflowDelayedTaskList.76_12, 2);
  uxTask_36 = _13 + uxTask_34;
  # DEBUG uxTask => uxTask_36
  # DEBUG BEGIN_STMT
  _14 = uxTask_36 * 36;
  _15 = pxTaskStatusArray_30(D) + _14;
  _16 = prvListTasksWithinSingleList (_15, &xTasksWaitingTermination, 4);
  uxTask_38 = _16 + uxTask_36;
  # DEBUG uxTask => uxTask_38
  # DEBUG BEGIN_STMT
  _17 = uxTask_38 * 36;
  _18 = pxTaskStatusArray_30(D) + _17;
  _19 = prvListTasksWithinSingleList (_18, &xSuspendedTaskList, 3);
  uxTask_40 = _19 + uxTask_38;
  # DEBUG uxTask => uxTask_40
  # DEBUG BEGIN_STMT
  if (pulTotalRunTime_41(D) != 0B)
    goto <bb 5>; [70.00%]
  else
    goto <bb 6>; [30.00%]

  <bb 5> [local count: 75161929]:
  # DEBUG BEGIN_STMT
  *pulTotalRunTime_41(D) = 0;

  <bb 6> [local count: 214748368]:
  # uxTask_21 = PHI <0(2), uxTask_40(5), uxTask_40(4)>
  # DEBUG uxTask => uxTask_21
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  xTaskResumeAll ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return uxTask_21;

}



;; Function uxTaskGetStackHighWaterMark (uxTaskGetStackHighWaterMark, funcdef_no=58, decl_uid=6318, cgraph_uid=59, symbol_order=80)

Modification phase of node uxTaskGetStackHighWaterMark/80
uxTaskGetStackHighWaterMark (struct tskTaskControlBlock * xTask)
{
  UBaseType_t uxReturn;
  uint8_t * pucEndOfStack;
  struct TCB_t * iftmp.124_1;
  struct TCB_t * iftmp.124_4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (xTask_2(D) == 0B)
    goto <bb 3>; [30.00%]
  else
    goto <bb 4>; [70.00%]

  <bb 3> [local count: 322122544]:
  iftmp.124_4 ={v} pxCurrentTCB;

  <bb 4> [local count: 1073741824]:
  # iftmp.124_1 = PHI <iftmp.124_4(3), xTask_2(D)(2)>
  # DEBUG pxTCB => iftmp.124_1
  # DEBUG BEGIN_STMT
  pucEndOfStack_5 = iftmp.124_1->pxStack;
  # DEBUG pucEndOfStack => pucEndOfStack_5
  # DEBUG BEGIN_STMT
  uxReturn_6 = prvTaskCheckFreeStackSpace (pucEndOfStack_5);
  # DEBUG uxReturn => uxReturn_6
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return uxReturn_6;

}



;; Function xTaskGetCurrentTaskHandle (xTaskGetCurrentTaskHandle, funcdef_no=61, decl_uid=6394, cgraph_uid=62, symbol_order=83)

Modification phase of node xTaskGetCurrentTaskHandle/83
xTaskGetCurrentTaskHandle ()
{
  struct tskTaskControlBlock * xReturn;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  xReturn_2 ={v} pxCurrentTCB;
  # DEBUG xReturn => xReturn_2
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return xReturn_2;

}



;; Function xTaskGetCurrentTaskHandleForCore (xTaskGetCurrentTaskHandleForCore, funcdef_no=62, decl_uid=6396, cgraph_uid=63, symbol_order=84)

Modification phase of node xTaskGetCurrentTaskHandleForCore/84
xTaskGetCurrentTaskHandleForCore (BaseType_t xCoreID)
{
  struct tskTaskControlBlock * xReturn;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG xReturn => 0B
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (xCoreID_2(D) == 0)
    goto <bb 3>; [71.00%]
  else
    goto <bb 4>; [29.00%]

  <bb 3> [local count: 762356697]:
  # DEBUG BEGIN_STMT
  xReturn_4 ={v} pxCurrentTCB;
  # DEBUG xReturn => xReturn_4

  <bb 4> [local count: 1073741824]:
  # xReturn_1 = PHI <0B(2), xReturn_4(3)>
  # DEBUG xReturn => xReturn_1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return xReturn_1;

}



;; Function xTaskGetSchedulerState (xTaskGetSchedulerState, funcdef_no=63, decl_uid=6400, cgraph_uid=64, symbol_order=85)

Modification phase of node xTaskGetSchedulerState/85
xTaskGetSchedulerState ()
{
  BaseType_t xReturn;
  long int xSchedulerRunning.125_1;
  long unsigned int uxSchedulerSuspended.126_2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  xSchedulerRunning.125_1 ={v} xSchedulerRunning;
  if (xSchedulerRunning.125_1 == 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  uxSchedulerSuspended.126_2 ={v} uxSchedulerSuspended;
  if (uxSchedulerSuspended.126_2 == 0)
    goto <bb 5>; [35.00%]
  else
    goto <bb 4>; [65.00%]

  <bb 4> [local count: 348966092]:
  # DEBUG BEGIN_STMT
  # DEBUG xReturn => 0

  <bb 5> [local count: 1073741824]:
  # xReturn_3 = PHI <1(2), 2(3), 0(4)>
  # DEBUG xReturn => xReturn_3
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return xReturn_3;

}



;; Function xTaskPriorityInherit (xTaskPriorityInherit, funcdef_no=64, decl_uid=6402, cgraph_uid=65, symbol_order=86)

Modification phase of node xTaskPriorityInherit/86
xTaskPriorityInherit (struct tskTaskControlBlock * const pxMutexHolder)
{
  struct ListItem_t * const pxIndex;
  BaseType_t xReturn;
  long unsigned int _1;
  struct TCB_t * pxCurrentTCB.127_2;
  long unsigned int _3;
  long unsigned int _4;
  signed int _5;
  struct TCB_t * pxCurrentTCB.128_6;
  long unsigned int _7;
  long unsigned int _8;
  struct xLIST * _9;
  struct List_t * _10;
  struct ListItem_t * _11;
  struct TCB_t * pxCurrentTCB.129_12;
  long unsigned int _13;
  long unsigned int uxTopReadyPriority.130_14;
  struct xLIST_ITEM * _15;
  struct xLIST_ITEM * _16;
  struct List_t * _17;
  long unsigned int _18;
  long unsigned int _19;
  struct TCB_t * pxCurrentTCB.131_20;
  long unsigned int _21;
  long unsigned int _22;
  struct TCB_t * pxCurrentTCB.132_23;
  long unsigned int _24;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG pxMutexHolderTCB => pxMutexHolder_29(D)
  # DEBUG BEGIN_STMT
  # DEBUG xReturn => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (pxMutexHolder_29(D) != 0B)
    goto <bb 3>; [70.00%]
  else
    goto <bb 13>; [30.00%]

  <bb 3> [local count: 751619281]:
  # DEBUG BEGIN_STMT
  _1 = MEM[(struct TCB_t *)pxMutexHolder_29(D)].uxPriority;
  pxCurrentTCB.127_2 ={v} pxCurrentTCB;
  _3 = pxCurrentTCB.127_2->uxPriority;
  if (_1 < _3)
    goto <bb 4>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 4> [local count: 375809640]:
  # DEBUG BEGIN_STMT
  _4 = MEM[(struct TCB_t *)pxMutexHolder_29(D)].xEventListItem.xItemValue;
  _5 = (signed int) _4;
  if (_5 >= 0)
    goto <bb 5>; [59.00%]
  else
    goto <bb 6>; [41.00%]

  <bb 5> [local count: 221727689]:
  # DEBUG BEGIN_STMT
  pxCurrentTCB.128_6 ={v} pxCurrentTCB;
  _7 = pxCurrentTCB.128_6->uxPriority;
  _8 = 10 - _7;
  MEM[(struct TCB_t *)pxMutexHolder_29(D)].xEventListItem.xItemValue = _8;

  <bb 6> [local count: 375809640]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _9 = MEM[(struct TCB_t *)pxMutexHolder_29(D)].xStateListItem.pvContainer;
  _10 = &pxReadyTasksLists[_1];
  if (_9 == _10)
    goto <bb 7>; [17.43%]
  else
    goto <bb 10>; [82.57%]

  <bb 7> [local count: 65503620]:
  # DEBUG BEGIN_STMT
  _11 = &MEM[(struct TCB_t *)pxMutexHolder_29(D)].xStateListItem;
  uxListRemove (_11);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  pxCurrentTCB.129_12 ={v} pxCurrentTCB;
  _13 = pxCurrentTCB.129_12->uxPriority;
  MEM[(struct TCB_t *)pxMutexHolder_29(D)].uxPriority = _13;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  uxTopReadyPriority.130_14 ={v} uxTopReadyPriority;
  if (_13 > uxTopReadyPriority.130_14)
    goto <bb 8>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 8> [local count: 32751810]:
  # DEBUG BEGIN_STMT
  uxTopReadyPriority ={v} _13;

  <bb 9> [local count: 65503620]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  pxIndex_36 = pxReadyTasksLists[_13].pxIndex;
  # DEBUG pxIndex => pxIndex_36
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  MEM[(struct TCB_t *)pxMutexHolder_29(D)].xStateListItem.pxNext = pxIndex_36;
  # DEBUG BEGIN_STMT
  _15 = pxIndex_36->pxPrevious;
  MEM[(struct TCB_t *)pxMutexHolder_29(D)].xStateListItem.pxPrevious = _15;
  # DEBUG BEGIN_STMT
  _16 = pxIndex_36->pxPrevious;
  _16->pxNext = _11;
  # DEBUG BEGIN_STMT
  pxIndex_36->pxPrevious = _11;
  # DEBUG BEGIN_STMT
  _17 = &pxReadyTasksLists[_13];
  MEM[(struct TCB_t *)pxMutexHolder_29(D)].xStateListItem.pvContainer = _17;
  # DEBUG BEGIN_STMT
  _18 = pxReadyTasksLists[_13].uxNumberOfItems;
  _19 = _18 + 1;
  pxReadyTasksLists[_13].uxNumberOfItems = _19;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  goto <bb 13>; [100.00%]

  <bb 10> [local count: 310306020]:
  # DEBUG BEGIN_STMT
  pxCurrentTCB.131_20 ={v} pxCurrentTCB;
  _21 = pxCurrentTCB.131_20->uxPriority;
  MEM[(struct TCB_t *)pxMutexHolder_29(D)].uxPriority = _21;
  goto <bb 13>; [100.00%]

  <bb 11> [local count: 375809640]:
  # DEBUG BEGIN_STMT
  _22 = MEM[(struct TCB_t *)pxMutexHolder_29(D)].uxBasePriority;
  pxCurrentTCB.132_23 ={v} pxCurrentTCB;
  _24 = pxCurrentTCB.132_23->uxPriority;
  if (_22 < _24)
    goto <bb 12>; [50.00%]
  else
    goto <bb 13>; [50.00%]

  <bb 12> [local count: 187904820]:
  # DEBUG BEGIN_STMT
  # DEBUG xReturn => 1

  <bb 13> [local count: 1073741824]:
  # xReturn_25 = PHI <0(2), 0(11), 1(10), 1(12), 1(9)>
  # DEBUG xReturn => xReturn_25
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return xReturn_25;

}



;; Function xTaskPriorityDisinherit (xTaskPriorityDisinherit, funcdef_no=65, decl_uid=6404, cgraph_uid=66, symbol_order=87)

Modification phase of node xTaskPriorityDisinherit/87
xTaskPriorityDisinherit (struct tskTaskControlBlock * const pxMutexHolder)
{
  struct ListItem_t * const pxIndex;
  BaseType_t xReturn;
  struct TCB_t * pxCurrentTCB.133_1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  struct ListItem_t * _6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int uxTopReadyPriority.134_9;
  struct xLIST_ITEM * _10;
  struct xLIST_ITEM * _11;
  struct List_t * _12;
  long unsigned int _13;
  long unsigned int _14;

  <bb 2> [local count: 21696139]:
  # DEBUG BEGIN_STMT
  # DEBUG pxTCB => pxMutexHolder_18(D)
  # DEBUG BEGIN_STMT
  # DEBUG xReturn => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (pxMutexHolder_18(D) != 0B)
    goto <bb 3>; [70.00%]
  else
    goto <bb 14>; [30.00%]

  <bb 3> [local count: 15187297]:
  # DEBUG BEGIN_STMT
  pxCurrentTCB.133_1 ={v} pxCurrentTCB;
  if (pxCurrentTCB.133_1 != pxMutexHolder_18(D))
    goto <bb 4>; [70.00%]
  else
    goto <bb 6>; [30.00%]

  <bb 4> [local count: 10631108]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i " :  :  : "memory");

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 15> [local count: 1073741824]:
  goto <bb 5>; [100.00%]

  <bb 6> [local count: 4556189]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _2 = MEM[(struct TCB_t *)pxMutexHolder_18(D)].uxMutexesHeld;
  if (_2 == 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 7> [local count: 2278095]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i " :  :  : "memory");

  <bb 8> [local count: 230087531]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 16> [local count: 230087531]:
  goto <bb 8>; [100.00%]

  <bb 9> [local count: 2278095]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _3 = _2 + 4294967295;
  MEM[(struct TCB_t *)pxMutexHolder_18(D)].uxMutexesHeld = _3;
  # DEBUG BEGIN_STMT
  _4 = MEM[(struct TCB_t *)pxMutexHolder_18(D)].uxPriority;
  _5 = MEM[(struct TCB_t *)pxMutexHolder_18(D)].uxBasePriority;
  if (_4 != _5)
    goto <bb 10>; [66.00%]
  else
    goto <bb 14>; [34.00%]

  <bb 10> [local count: 1503542]:
  # DEBUG BEGIN_STMT
  if (_3 == 0)
    goto <bb 11>; [33.00%]
  else
    goto <bb 14>; [67.00%]

  <bb 11> [local count: 496169]:
  # DEBUG BEGIN_STMT
  _6 = &MEM[(struct TCB_t *)pxMutexHolder_18(D)].xStateListItem;
  uxListRemove (_6);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _7 = MEM[(struct TCB_t *)pxMutexHolder_18(D)].uxBasePriority;
  MEM[(struct TCB_t *)pxMutexHolder_18(D)].uxPriority = _7;
  # DEBUG BEGIN_STMT
  _8 = 10 - _7;
  MEM[(struct TCB_t *)pxMutexHolder_18(D)].xEventListItem.xItemValue = _8;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  uxTopReadyPriority.134_9 ={v} uxTopReadyPriority;
  if (_7 > uxTopReadyPriority.134_9)
    goto <bb 12>; [50.00%]
  else
    goto <bb 13>; [50.00%]

  <bb 12> [local count: 248084]:
  # DEBUG BEGIN_STMT
  uxTopReadyPriority ={v} _7;

  <bb 13> [local count: 496169]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  pxIndex_25 = pxReadyTasksLists[_7].pxIndex;
  # DEBUG pxIndex => pxIndex_25
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  MEM[(struct TCB_t *)pxMutexHolder_18(D)].xStateListItem.pxNext = pxIndex_25;
  # DEBUG BEGIN_STMT
  _10 = pxIndex_25->pxPrevious;
  MEM[(struct TCB_t *)pxMutexHolder_18(D)].xStateListItem.pxPrevious = _10;
  # DEBUG BEGIN_STMT
  _11 = pxIndex_25->pxPrevious;
  _11->pxNext = _6;
  # DEBUG BEGIN_STMT
  pxIndex_25->pxPrevious = _6;
  # DEBUG BEGIN_STMT
  _12 = &pxReadyTasksLists[_7];
  MEM[(struct TCB_t *)pxMutexHolder_18(D)].xStateListItem.pvContainer = _12;
  # DEBUG BEGIN_STMT
  _13 = pxReadyTasksLists[_7].uxNumberOfItems;
  _14 = _13 + 1;
  pxReadyTasksLists[_7].uxNumberOfItems = _14;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG xReturn => 1

  <bb 14> [local count: 8786936]:
  # xReturn_15 = PHI <0(2), 1(13), 0(9), 0(10)>
  # DEBUG xReturn => xReturn_15
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return xReturn_15;

}



;; Function vTaskPriorityDisinheritAfterTimeout (vTaskPriorityDisinheritAfterTimeout, funcdef_no=66, decl_uid=6407, cgraph_uid=67, symbol_order=88)

Modification phase of node vTaskPriorityDisinheritAfterTimeout/88
vTaskPriorityDisinheritAfterTimeout (struct tskTaskControlBlock * const pxMutexHolder, UBaseType_t uxHighestPriorityWaitingTask)
{
  struct ListItem_t * const pxIndex;
  UBaseType_t uxPriorityToUse;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  struct TCB_t * pxCurrentTCB.135_4;
  long unsigned int _5;
  signed int _6;
  long unsigned int _7;
  struct xLIST * _8;
  struct List_t * _9;
  struct ListItem_t * _10;
  long unsigned int _12;
  long unsigned int uxTopReadyPriority.136_13;
  struct xLIST_ITEM * _14;
  struct xLIST_ITEM * _15;
  struct List_t * _16;
  long unsigned int _17;
  long unsigned int _18;

  <bb 2> [local count: 30374594]:
  # DEBUG BEGIN_STMT
  # DEBUG pxTCB => pxMutexHolder_22(D)
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG uxOnlyOneMutexHeld => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (pxMutexHolder_22(D) != 0B)
    goto <bb 3>; [70.00%]
  else
    goto <bb 17>; [30.00%]

  <bb 3> [local count: 21262216]:
  # DEBUG BEGIN_STMT
  _1 = MEM[(struct TCB_t *)pxMutexHolder_22(D)].uxMutexesHeld;
  if (_1 == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 4> [local count: 10631108]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i " :  :  : "memory");

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 18> [local count: 1073741824]:
  goto <bb 5>; [100.00%]

  <bb 6> [local count: 10631108]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _2 = MEM[(struct TCB_t *)pxMutexHolder_22(D)].uxBasePriority;
  uxPriorityToUse_11 = MAX_EXPR <_2, uxHighestPriorityWaitingTask_24(D)>;
  # DEBUG uxPriorityToUse => uxPriorityToUse_11
  # DEBUG BEGIN_STMT
  _3 = MEM[(struct TCB_t *)pxMutexHolder_22(D)].uxPriority;
  if (_3 != uxPriorityToUse_11)
    goto <bb 7>; [66.00%]
  else
    goto <bb 17>; [34.00%]

  <bb 7> [local count: 7016531]:
  # DEBUG BEGIN_STMT
  if (_1 == 1)
    goto <bb 8>; [34.00%]
  else
    goto <bb 17>; [66.00%]

  <bb 8> [local count: 2385621]:
  # DEBUG BEGIN_STMT
  pxCurrentTCB.135_4 ={v} pxCurrentTCB;
  if (pxCurrentTCB.135_4 == pxMutexHolder_22(D))
    goto <bb 9>; [30.00%]
  else
    goto <bb 11>; [70.00%]

  <bb 9> [local count: 715686]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i " :  :  : "memory");

  <bb 10> [local count: 72284299]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 19> [local count: 72284299]:
  goto <bb 10>; [100.00%]

  <bb 11> [local count: 1669934]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG uxPriorityUsedOnEntry => _3
  # DEBUG BEGIN_STMT
  MEM[(struct TCB_t *)pxMutexHolder_22(D)].uxPriority = uxPriorityToUse_11;
  # DEBUG BEGIN_STMT
  _5 = MEM[(struct TCB_t *)pxMutexHolder_22(D)].xEventListItem.xItemValue;
  _6 = (signed int) _5;
  if (_6 >= 0)
    goto <bb 12>; [59.00%]
  else
    goto <bb 13>; [41.00%]

  <bb 12> [local count: 985261]:
  # DEBUG BEGIN_STMT
  _7 = 10 - uxPriorityToUse_11;
  MEM[(struct TCB_t *)pxMutexHolder_22(D)].xEventListItem.xItemValue = _7;

  <bb 13> [local count: 1669934]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _8 = MEM[(struct TCB_t *)pxMutexHolder_22(D)].xStateListItem.pvContainer;
  _9 = &pxReadyTasksLists[_3];
  if (_8 == _9)
    goto <bb 14>; [17.43%]
  else
    goto <bb 17>; [82.57%]

  <bb 14> [local count: 291070]:
  # DEBUG BEGIN_STMT
  _10 = &MEM[(struct TCB_t *)pxMutexHolder_22(D)].xStateListItem;
  uxListRemove (_10);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _12 = MEM[(struct TCB_t *)pxMutexHolder_22(D)].uxPriority;
  uxTopReadyPriority.136_13 ={v} uxTopReadyPriority;
  if (_12 > uxTopReadyPriority.136_13)
    goto <bb 15>; [50.00%]
  else
    goto <bb 16>; [50.00%]

  <bb 15> [local count: 145535]:
  # DEBUG BEGIN_STMT
  uxTopReadyPriority ={v} _12;

  <bb 16> [local count: 291070]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  pxIndex_29 = pxReadyTasksLists[_12].pxIndex;
  # DEBUG pxIndex => pxIndex_29
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  MEM[(struct TCB_t *)pxMutexHolder_22(D)].xStateListItem.pxNext = pxIndex_29;
  # DEBUG BEGIN_STMT
  _14 = pxIndex_29->pxPrevious;
  MEM[(struct TCB_t *)pxMutexHolder_22(D)].xStateListItem.pxPrevious = _14;
  # DEBUG BEGIN_STMT
  _15 = pxIndex_29->pxPrevious;
  _15->pxNext = _10;
  # DEBUG BEGIN_STMT
  pxIndex_29->pxPrevious = _10;
  # DEBUG BEGIN_STMT
  _16 = &pxReadyTasksLists[_12];
  MEM[(struct TCB_t *)pxMutexHolder_22(D)].xStateListItem.pvContainer = _16;
  # DEBUG BEGIN_STMT
  _17 = pxReadyTasksLists[_12].uxNumberOfItems;
  _18 = _17 + 1;
  pxReadyTasksLists[_12].uxNumberOfItems = _18;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 17> [local count: 19027800]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return;

}



;; Function vTaskListTasks (vTaskListTasks, funcdef_no=68, decl_uid=6327, cgraph_uid=69, symbol_order=90)

Modification phase of node vTaskListTasks/90
vTaskListTasks (char * pcWriteBuffer, size_t uxBufferLength)
{
  char cStatus;
  UBaseType_t x;
  UBaseType_t uxArraySize;
  BaseType_t xOutputBufferFull;
  int iSnprintfReturnValue;
  size_t uxCharsWrittenBySnprintf;
  size_t uxConsumedBufferLength;
  struct TaskStatus_t * pxTaskStatusArray;
  long unsigned int uxCurrentNumberOfTasks.137_1;
  long unsigned int _2;
  long unsigned int _3;
  struct TaskStatus_t * _4;
  <unnamed type> _5;
  unsigned char _6;
  unsigned int _7;
  const char * _10;
  unsigned int _11;
  unsigned int _12;
  int _13;
  long unsigned int _14;
  long unsigned int _15;
  long unsigned int _16;

  <bb 2> [local count: 214818646]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG uxConsumedBufferLength => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG xOutputBufferFull => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  *pcWriteBuffer_30(D) = 0;
  # DEBUG BEGIN_STMT
  uxArraySize_32 ={v} uxCurrentNumberOfTasks;
  # DEBUG uxArraySize => uxArraySize_32
  # DEBUG BEGIN_STMT
  uxCurrentNumberOfTasks.137_1 ={v} uxCurrentNumberOfTasks;
  _2 = uxCurrentNumberOfTasks.137_1 * 36;
  pxTaskStatusArray_34 = pvPortMalloc (_2);
  # DEBUG pxTaskStatusArray => pxTaskStatusArray_34
  # DEBUG BEGIN_STMT
  if (pxTaskStatusArray_34 != 0B)
    goto <bb 3>; [53.47%]
  else
    goto <bb 14>; [46.53%]

  <bb 3> [local count: 114863530]:
  # DEBUG BEGIN_STMT
  uxArraySize_36 = uxTaskGetSystemState (pxTaskStatusArray_34, uxArraySize_32, 0B);
  # DEBUG uxArraySize => uxArraySize_36
  # DEBUG BEGIN_STMT
  # DEBUG x => 0
  goto <bb 12>; [100.00%]

  <bb 4> [local count: 1014686025]:
  # DEBUG BEGIN_STMT
  _3 = x_23 * 36;
  _4 = pxTaskStatusArray_34 + _3;
  _5 = _4->eCurrentState;
  _6 = _5;
  if (_6 <= 4)
    goto <bb 6>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 5> [local count: 507343012]:
<L22>:
  cStatus_9 = 0;
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 507343012]:
<L23>:
  cStatus_8 = CSWTCH.233[_6];

  <bb 7> [local count: 1014686025]:
  # cStatus_24 = PHI <cStatus_8(6), cStatus_9(5)>
<L24>:
<L21>:
  # DEBUG cStatus => cStatus_24
  # DEBUG BEGIN_STMT
  _7 = uxConsumedBufferLength_20 + 10;
  if (_7 <= uxBufferLength_37(D))
    goto <bb 8>; [67.00%]
  else
    goto <bb 10>; [33.00%]

  <bb 8> [local count: 679839639]:
  # DEBUG BEGIN_STMT
  _10 = _4->pcTaskName;
  pcWriteBuffer_39 = prvWriteNameToBuffer (pcWriteBuffer_18, _10);
  # DEBUG pcWriteBuffer => pcWriteBuffer_39
  # DEBUG BEGIN_STMT
  uxConsumedBufferLength_40 = uxConsumedBufferLength_20 + 9;
  # DEBUG uxConsumedBufferLength => uxConsumedBufferLength_40
  # DEBUG BEGIN_STMT
  _11 = uxBufferLength_37(D) + 4294967295;
  if (_11 > uxConsumedBufferLength_40)
    goto <bb 9>; [67.00%]
  else
    goto <bb 10>; [33.00%]

  <bb 9> [local count: 455492559]:
  # DEBUG BEGIN_STMT
  _12 = uxBufferLength_37(D) - uxConsumedBufferLength_40;
  _13 = (int) cStatus_24;
  _14 = _4->uxCurrentPriority;
  _15 = _4->usStackHighWaterMark;
  _16 = _4->xTaskNumber;
  iSnprintfReturnValue_42 = snprintf (pcWriteBuffer_39, _12, "\t%c\t%u\t%u\t%u\r\n", _13, _14, _15, _16);
  # DEBUG iSnprintfReturnValue => iSnprintfReturnValue_42
  # DEBUG BEGIN_STMT
  uxCharsWrittenBySnprintf_43 = prvSnprintfReturnValueToCharsWritten (iSnprintfReturnValue_42, _12);
  # DEBUG uxCharsWrittenBySnprintf => uxCharsWrittenBySnprintf_43
  # DEBUG BEGIN_STMT
  uxConsumedBufferLength_44 = uxConsumedBufferLength_40 + uxCharsWrittenBySnprintf_43;
  # DEBUG uxConsumedBufferLength => uxConsumedBufferLength_44
  # DEBUG BEGIN_STMT
  pcWriteBuffer_45 = pcWriteBuffer_39 + uxCharsWrittenBySnprintf_43;
  # DEBUG pcWriteBuffer => pcWriteBuffer_45

  <bb 10> [local count: 1014686025]:
  # pcWriteBuffer_17 = PHI <pcWriteBuffer_39(8), pcWriteBuffer_18(7), pcWriteBuffer_45(9)>
  # uxConsumedBufferLength_19 = PHI <uxConsumedBufferLength_40(8), uxConsumedBufferLength_20(7), uxConsumedBufferLength_44(9)>
  # xOutputBufferFull_21 = PHI <1(8), 1(7), xOutputBufferFull_22(9)>
  # DEBUG xOutputBufferFull => xOutputBufferFull_21
  # DEBUG uxConsumedBufferLength => uxConsumedBufferLength_19
  # DEBUG pcWriteBuffer => pcWriteBuffer_17
  # DEBUG BEGIN_STMT
  if (xOutputBufferFull_21 == 1)
    goto <bb 13>; [5.50%]
  else
    goto <bb 11>; [94.50%]

  <bb 11> [local count: 958878295]:
  # DEBUG BEGIN_STMT
  x_46 = x_23 + 1;
  # DEBUG x => x_46

  <bb 12> [local count: 1073741824]:
  # pcWriteBuffer_18 = PHI <pcWriteBuffer_30(D)(3), pcWriteBuffer_17(11)>
  # uxConsumedBufferLength_20 = PHI <0(3), uxConsumedBufferLength_19(11)>
  # xOutputBufferFull_22 = PHI <0(3), xOutputBufferFull_21(11)>
  # x_23 = PHI <0(3), x_46(11)>
  # DEBUG x => x_23
  # DEBUG xOutputBufferFull => xOutputBufferFull_22
  # DEBUG uxConsumedBufferLength => uxConsumedBufferLength_20
  # DEBUG pcWriteBuffer => pcWriteBuffer_18
  # DEBUG BEGIN_STMT
  if (x_23 < uxArraySize_36)
    goto <bb 4>; [94.50%]
  else
    goto <bb 13>; [5.50%]

  <bb 13> [local count: 114863531]:
  # DEBUG BEGIN_STMT
  vPortFree (pxTaskStatusArray_34);

  <bb 14> [local count: 214818648]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return;

}



;; Function uxTaskResetEventItemValue (uxTaskResetEventItemValue, funcdef_no=69, decl_uid=6392, cgraph_uid=70, symbol_order=91)

Modification phase of node uxTaskResetEventItemValue/91
uxTaskResetEventItemValue ()
{
  TickType_t uxReturn;
  struct TCB_t * pxCurrentTCB.139_1;
  struct TCB_t * pxCurrentTCB.140_2;
  long unsigned int _3;
  struct TCB_t * pxCurrentTCB.141_4;
  long unsigned int _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  pxCurrentTCB.139_1 ={v} pxCurrentTCB;
  uxReturn_7 = pxCurrentTCB.139_1->xEventListItem.xItemValue;
  # DEBUG uxReturn => uxReturn_7
  # DEBUG BEGIN_STMT
  pxCurrentTCB.140_2 ={v} pxCurrentTCB;
  _3 = pxCurrentTCB.140_2->uxPriority;
  pxCurrentTCB.141_4 ={v} pxCurrentTCB;
  _5 = 10 - _3;
  pxCurrentTCB.141_4->xEventListItem.xItemValue = _5;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return uxReturn_7;

}



;; Function pvTaskIncrementMutexHeldCount (pvTaskIncrementMutexHeldCount, funcdef_no=70, decl_uid=6414, cgraph_uid=71, symbol_order=92)

Modification phase of node pvTaskIncrementMutexHeldCount/92
pvTaskIncrementMutexHeldCount ()
{
  struct TCB_t * pxTCB;
  long unsigned int _1;
  long unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  pxTCB_5 ={v} pxCurrentTCB;
  # DEBUG pxTCB => pxTCB_5
  # DEBUG BEGIN_STMT
  if (pxTCB_5 != 0B)
    goto <bb 3>; [70.00%]
  else
    goto <bb 4>; [30.00%]

  <bb 3> [local count: 751619281]:
  # DEBUG BEGIN_STMT
  _1 = pxTCB_5->uxMutexesHeld;
  _2 = _1 + 1;
  pxTCB_5->uxMutexesHeld = _2;

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return pxTCB_5;

}



;; Function ulTaskGenericNotifyTake (ulTaskGenericNotifyTake, funcdef_no=71, decl_uid=6354, cgraph_uid=72, symbol_order=93)

Modification phase of node ulTaskGenericNotifyTake/93
ulTaskGenericNotifyTake (UBaseType_t uxIndexToWaitOn, BaseType_t xClearCountOnExit, TickType_t xTicksToWait)
{
  BaseType_t xShouldBlock;
  BaseType_t xAlreadyYielded;
  uint32_t ulReturn;
  struct TCB_t * pxCurrentTCB.142_1;
  long unsigned int _2;
  struct TCB_t * pxCurrentTCB.143_3;
  struct TCB_t * pxCurrentTCB.144_5;
  struct TCB_t * pxCurrentTCB.145_6;
  struct TCB_t * pxCurrentTCB.146_7;
  long unsigned int _8;
  struct TCB_t * pxCurrentTCB.147_9;

  <bb 2> [local count: 15867325]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG xShouldBlock => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (uxIndexToWaitOn_13(D) != 0)
    goto <bb 3>; [67.00%]
  else
    goto <bb 5>; [33.00%]

  <bb 3> [local count: 10631108]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i " :  :  : "memory");

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 18> [local count: 1073741824]:
  goto <bb 4>; [100.00%]

  <bb 5> [local count: 5236217]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  vTaskSuspendAll ();
  # DEBUG BEGIN_STMT
  vPortEnterCritical ();
  # DEBUG BEGIN_STMT
  pxCurrentTCB.142_1 ={v} pxCurrentTCB;
  _2 ={v} pxCurrentTCB.142_1->ulNotifiedValue[0];
  if (_2 == 0)
    goto <bb 7>; [67.00%]
  else
    goto <bb 6>; [33.00%]

  <bb 6> [local count: 1727952]:
  # DEBUG xShouldBlock => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  vPortExitCritical ();
  # DEBUG BEGIN_STMT
  goto <bb 10>; [100.00%]

  <bb 7> [local count: 3508266]:
  # DEBUG BEGIN_STMT
  pxCurrentTCB.143_3 ={v} pxCurrentTCB;
  pxCurrentTCB.143_3->ucNotifyState[0] ={v} 1;
  # DEBUG BEGIN_STMT
  if (xTicksToWait_18(D) != 0)
    goto <bb 9>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 8> [local count: 1754133]:
  # DEBUG xShouldBlock => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  vPortExitCritical ();
  # DEBUG BEGIN_STMT
  goto <bb 10>; [100.00%]

  <bb 9> [local count: 1754133]:
  # DEBUG BEGIN_STMT
  # DEBUG xShouldBlock => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  vPortExitCritical ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  prvAddCurrentTaskToDelayedList (xTicksToWait_18(D), 1);

  <bb 10> [local count: 5236217]:
  # xShouldBlock_35 = PHI <0(8), 1(9), 0(6)>
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  xAlreadyYielded_21 = xTaskResumeAll ();
  # DEBUG xAlreadyYielded => xAlreadyYielded_21
  # DEBUG BEGIN_STMT
  if (xShouldBlock_35 == 1)
    goto <bb 11>; [34.00%]
  else
    goto <bb 13>; [66.00%]

  <bb 11> [local count: 1780314]:
  if (xAlreadyYielded_21 == 0)
    goto <bb 12>; [50.00%]
  else
    goto <bb 13>; [50.00%]

  <bb 12> [local count: 890157]:
  # DEBUG BEGIN_STMT
  MEM[(volatile uint32_t *)3758157060B] ={v} 268435456;
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("dsb" :  :  : "memory");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("isb");
  # DEBUG BEGIN_STMT

  <bb 13> [local count: 5236217]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  vPortEnterCritical ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  pxCurrentTCB.144_5 ={v} pxCurrentTCB;
  ulReturn_26 ={v} pxCurrentTCB.144_5->ulNotifiedValue[0];
  # DEBUG ulReturn => ulReturn_26
  # DEBUG BEGIN_STMT
  if (ulReturn_26 != 0)
    goto <bb 14>; [50.00%]
  else
    goto <bb 17>; [50.00%]

  <bb 14> [local count: 2618109]:
  # DEBUG BEGIN_STMT
  if (xClearCountOnExit_27(D) != 0)
    goto <bb 15>; [50.00%]
  else
    goto <bb 16>; [50.00%]

  <bb 15> [local count: 1309054]:
  # DEBUG BEGIN_STMT
  pxCurrentTCB.145_6 ={v} pxCurrentTCB;
  pxCurrentTCB.145_6->ulNotifiedValue[0] ={v} 0;
  goto <bb 17>; [100.00%]

  <bb 16> [local count: 1309054]:
  # DEBUG BEGIN_STMT
  pxCurrentTCB.146_7 ={v} pxCurrentTCB;
  _8 = ulReturn_26 + 4294967295;
  pxCurrentTCB.146_7->ulNotifiedValue[0] ={v} _8;

  <bb 17> [local count: 5236217]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  pxCurrentTCB.147_9 ={v} pxCurrentTCB;
  pxCurrentTCB.147_9->ucNotifyState[0] ={v} 0;
  # DEBUG BEGIN_STMT
  vPortExitCritical ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return ulReturn_26;

}



;; Function xTaskGenericNotifyWait (xTaskGenericNotifyWait, funcdef_no=72, decl_uid=6346, cgraph_uid=73, symbol_order=94)

Modification phase of node xTaskGenericNotifyWait/94
xTaskGenericNotifyWait (UBaseType_t uxIndexToWaitOn, uint32_t ulBitsToClearOnEntry, uint32_t ulBitsToClearOnExit, uint32_t * pulNotificationValue, TickType_t xTicksToWait)
{
  BaseType_t xShouldBlock;
  BaseType_t xAlreadyYielded;
  BaseType_t xReturn;
  struct TCB_t * pxCurrentTCB.148_1;
  unsigned char _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  struct TCB_t * pxCurrentTCB.150_6;
  struct TCB_t * pxCurrentTCB.151_7;
  long unsigned int _8;
  struct TCB_t * pxCurrentTCB.152_9;
  unsigned char _10;
  long unsigned int _11;
  long unsigned int _12;
  long unsigned int _13;
  struct TCB_t * pxCurrentTCB.154_14;
  struct TCB_t * pxCurrentTCB.149_24;
  struct TCB_t * pxCurrentTCB.153_39;

  <bb 2> [local count: 15867325]:
  # DEBUG BEGIN_STMT
  # DEBUG xShouldBlock => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (uxIndexToWaitOn_20(D) != 0)
    goto <bb 3>; [67.00%]
  else
    goto <bb 5>; [33.00%]

  <bb 3> [local count: 10631108]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i " :  :  : "memory");

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 18> [local count: 1073741824]:
  goto <bb 4>; [100.00%]

  <bb 5> [local count: 5236217]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  vTaskSuspendAll ();
  # DEBUG BEGIN_STMT
  vPortEnterCritical ();
  # DEBUG BEGIN_STMT
  pxCurrentTCB.148_1 ={v} pxCurrentTCB;
  _2 ={v} pxCurrentTCB.148_1->ucNotifyState[0];
  if (_2 != 2)
    goto <bb 7>; [79.76%]
  else
    goto <bb 6>; [20.24%]

  <bb 6> [local count: 1059810]:
  # DEBUG xShouldBlock => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  vPortExitCritical ();
  # DEBUG BEGIN_STMT
  goto <bb 10>; [100.00%]

  <bb 7> [local count: 4176407]:
  # DEBUG BEGIN_STMT
  pxCurrentTCB.149_24 ={v} pxCurrentTCB;
  _3 ={v} pxCurrentTCB.149_24->ulNotifiedValue[0];
  _4 = ~ulBitsToClearOnEntry_25(D);
  _5 = _3 & _4;
  pxCurrentTCB.149_24->ulNotifiedValue[0] ={v} _5;
  # DEBUG BEGIN_STMT
  pxCurrentTCB.150_6 ={v} pxCurrentTCB;
  pxCurrentTCB.150_6->ucNotifyState[0] ={v} 1;
  # DEBUG BEGIN_STMT
  if (xTicksToWait_28(D) != 0)
    goto <bb 9>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 8> [local count: 2088203]:
  # DEBUG xShouldBlock => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  vPortExitCritical ();
  # DEBUG BEGIN_STMT
  goto <bb 10>; [100.00%]

  <bb 9> [local count: 2088203]:
  # DEBUG BEGIN_STMT
  # DEBUG xShouldBlock => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  vPortExitCritical ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  prvAddCurrentTaskToDelayedList (xTicksToWait_28(D), 1);

  <bb 10> [local count: 5236217]:
  # xShouldBlock_47 = PHI <0(8), 1(9), 0(6)>
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  xAlreadyYielded_32 = xTaskResumeAll ();
  # DEBUG xAlreadyYielded => xAlreadyYielded_32
  # DEBUG BEGIN_STMT
  if (xShouldBlock_47 == 1)
    goto <bb 11>; [34.00%]
  else
    goto <bb 13>; [66.00%]

  <bb 11> [local count: 1780314]:
  if (xAlreadyYielded_32 == 0)
    goto <bb 12>; [50.00%]
  else
    goto <bb 13>; [50.00%]

  <bb 12> [local count: 890157]:
  # DEBUG BEGIN_STMT
  MEM[(volatile uint32_t *)3758157060B] ={v} 268435456;
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("dsb" :  :  : "memory");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("isb");
  # DEBUG BEGIN_STMT

  <bb 13> [local count: 5236217]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  vPortEnterCritical ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (pulNotificationValue_37(D) != 0B)
    goto <bb 14>; [70.00%]
  else
    goto <bb 15>; [30.00%]

  <bb 14> [local count: 3665352]:
  # DEBUG BEGIN_STMT
  pxCurrentTCB.151_7 ={v} pxCurrentTCB;
  _8 ={v} pxCurrentTCB.151_7->ulNotifiedValue[0];
  *pulNotificationValue_37(D) = _8;

  <bb 15> [local count: 5236217]:
  # DEBUG BEGIN_STMT
  pxCurrentTCB.152_9 ={v} pxCurrentTCB;
  _10 ={v} pxCurrentTCB.152_9->ucNotifyState[0];
  if (_10 != 2)
    goto <bb 17>; [66.00%]
  else
    goto <bb 16>; [34.00%]

  <bb 16> [local count: 1780314]:
  # DEBUG BEGIN_STMT
  pxCurrentTCB.153_39 ={v} pxCurrentTCB;
  _11 ={v} pxCurrentTCB.153_39->ulNotifiedValue[0];
  _12 = ~ulBitsToClearOnExit_40(D);
  _13 = _11 & _12;
  pxCurrentTCB.153_39->ulNotifiedValue[0] ={v} _13;
  # DEBUG BEGIN_STMT
  # DEBUG xReturn => 1

  <bb 17> [local count: 5236217]:
  # xReturn_15 = PHI <0(15), 1(16)>
  # DEBUG xReturn => xReturn_15
  # DEBUG BEGIN_STMT
  pxCurrentTCB.154_14 ={v} pxCurrentTCB;
  pxCurrentTCB.154_14->ucNotifyState[0] ={v} 0;
  # DEBUG BEGIN_STMT
  vPortExitCritical ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return xReturn_15;

}



;; Function xTaskGenericNotify (xTaskGenericNotify, funcdef_no=73, decl_uid=6333, cgraph_uid=74, symbol_order=95)

Modification phase of node xTaskGenericNotify/95
xTaskGenericNotify (struct tskTaskControlBlock * xTaskToNotify, UBaseType_t uxIndexToNotify, uint32_t ulValue, eNotifyAction eAction, uint32_t * pulPreviousNotificationValue)
{
  struct ListItem_t * const pxIndex;
  struct List_t * const pxList;
  uint8_t ucOriginalNotifyState;
  BaseType_t xReturn;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int xTickCount.155_6;
  struct xLIST_ITEM * _7;
  struct xLIST_ITEM * _8;
  struct xLIST_ITEM * _9;
  struct ListItem_t * _10;
  struct ListItem_t * _11;
  long unsigned int _12;
  long unsigned int _13;
  long unsigned int _14;
  long unsigned int uxTopReadyPriority.156_15;
  struct xLIST_ITEM * _16;
  struct xLIST_ITEM * _17;
  struct List_t * _18;
  long unsigned int _19;
  long unsigned int _20;
  struct xLIST * _21;
  struct TCB_t * pxCurrentTCB.157_22;
  long unsigned int _23;

  <bb 2> [local count: 21262216]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG xReturn => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (uxIndexToNotify_30(D) != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 3> [local count: 10631108]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i " :  :  : "memory");

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 30> [local count: 1073741824]:
  goto <bb 4>; [100.00%]

  <bb 5> [local count: 10631108]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (xTaskToNotify_31(D) == 0B)
    goto <bb 6>; [46.53%]
  else
    goto <bb 8>; [53.47%]

  <bb 6> [local count: 4946655]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i " :  :  : "memory");

  <bb 7> [local count: 499612072]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 31> [local count: 499612072]:
  goto <bb 7>; [100.00%]

  <bb 8> [local count: 5684453]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG pxTCB => xTaskToNotify_31(D)
  # DEBUG BEGIN_STMT
  vPortEnterCritical ();
  # DEBUG BEGIN_STMT
  if (pulPreviousNotificationValue_34(D) != 0B)
    goto <bb 9>; [70.00%]
  else
    goto <bb 10>; [30.00%]

  <bb 9> [local count: 3979117]:
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct TCB_t *)xTaskToNotify_31(D)].ulNotifiedValue[0];
  *pulPreviousNotificationValue_34(D) = _1;

  <bb 10> [local count: 5684453]:
  # DEBUG BEGIN_STMT
  ucOriginalNotifyState_36 ={v} MEM[(struct TCB_t *)xTaskToNotify_31(D)].ucNotifyState[0];
  # DEBUG ucOriginalNotifyState => ucOriginalNotifyState_36
  # DEBUG BEGIN_STMT
  MEM[(struct TCB_t *)xTaskToNotify_31(D)].ucNotifyState[0] ={v} 2;
  # DEBUG BEGIN_STMT
  switch (eAction_38(D)) <default: <L16> [16.67%], case 0: <L35> [16.67%], case 1: <L8> [16.67%], case 2: <L9> [16.67%], case 3: <L10> [16.67%], case 4: <L11> [16.67%]>

  <bb 11> [local count: 947409]:
<L8>:
  # DEBUG BEGIN_STMT
  _2 ={v} MEM[(struct TCB_t *)xTaskToNotify_31(D)].ulNotifiedValue[0];
  _3 = _2 | ulValue_39(D);
  MEM[(struct TCB_t *)xTaskToNotify_31(D)].ulNotifiedValue[0] ={v} _3;
  # DEBUG BEGIN_STMT
  goto <bb 19>; [100.00%]

  <bb 12> [local count: 947409]:
<L9>:
  # DEBUG BEGIN_STMT
  _4 ={v} MEM[(struct TCB_t *)xTaskToNotify_31(D)].ulNotifiedValue[0];
  _5 = _4 + 1;
  MEM[(struct TCB_t *)xTaskToNotify_31(D)].ulNotifiedValue[0] ={v} _5;
  # DEBUG BEGIN_STMT
  goto <bb 19>; [100.00%]

  <bb 13> [local count: 947409]:
<L10>:
  # DEBUG BEGIN_STMT
  MEM[(struct TCB_t *)xTaskToNotify_31(D)].ulNotifiedValue[0] ={v} ulValue_39(D);
  # DEBUG BEGIN_STMT
  goto <bb 19>; [100.00%]

  <bb 14> [local count: 947409]:
<L11>:
  # DEBUG BEGIN_STMT
  if (ucOriginalNotifyState_36 != 2)
    goto <bb 15>; [66.00%]
  else
    goto <bb 19>; [34.00%]

  <bb 15> [local count: 625290]:
  # DEBUG BEGIN_STMT
  MEM[(struct TCB_t *)xTaskToNotify_31(D)].ulNotifiedValue[0] ={v} ulValue_39(D);
  goto <bb 19>; [100.00%]

  <bb 16> [local count: 947409]:
<L16>:
  # DEBUG BEGIN_STMT
  xTickCount.155_6 ={v} xTickCount;
  if (xTickCount.155_6 != 0)
    goto <bb 17>; [50.00%]
  else
    goto <bb 19>; [50.00%]

  <bb 17> [local count: 473704]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i " :  :  : "memory");

  <bb 18> [local count: 47844145]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 32> [local count: 47844145]:
  goto <bb 18>; [100.00%]

  <bb 19> [local count: 5210749]:
  # xReturn_24 = PHI <1(11), 1(12), 1(13), 0(14), 1(10), 1(16), 1(15)>
<L35>:
  # DEBUG xReturn => xReturn_24
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (ucOriginalNotifyState_36 == 1)
    goto <bb 20>; [51.12%]
  else
    goto <bb 29>; [48.88%]

  <bb 20> [local count: 2663735]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  pxList_45 = MEM[(struct TCB_t *)xTaskToNotify_31(D)].xStateListItem.pvContainer;
  # DEBUG pxList => pxList_45
  # DEBUG BEGIN_STMT
  _7 = MEM[(struct TCB_t *)xTaskToNotify_31(D)].xStateListItem.pxNext;
  _8 = MEM[(struct TCB_t *)xTaskToNotify_31(D)].xStateListItem.pxPrevious;
  _7->pxPrevious = _8;
  # DEBUG BEGIN_STMT
  _9 = MEM[(struct TCB_t *)xTaskToNotify_31(D)].xStateListItem.pxPrevious;
  _9->pxNext = _7;
  # DEBUG BEGIN_STMT
  _10 = pxList_45->pxIndex;
  _11 = &MEM[(struct TCB_t *)xTaskToNotify_31(D)].xStateListItem;
  if (_10 == _11)
    goto <bb 21>; [30.00%]
  else
    goto <bb 22>; [70.00%]

  <bb 21> [local count: 799120]:
  # DEBUG BEGIN_STMT
  pxList_45->pxIndex = _9;

  <bb 22> [local count: 2663735]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _12 = pxList_45->uxNumberOfItems;
  _13 = _12 + 4294967295;
  pxList_45->uxNumberOfItems = _13;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _14 = MEM[(struct TCB_t *)xTaskToNotify_31(D)].uxPriority;
  uxTopReadyPriority.156_15 ={v} uxTopReadyPriority;
  if (_14 > uxTopReadyPriority.156_15)
    goto <bb 23>; [50.00%]
  else
    goto <bb 24>; [50.00%]

  <bb 23> [local count: 1331867]:
  # DEBUG BEGIN_STMT
  uxTopReadyPriority ={v} _14;

  <bb 24> [local count: 2663735]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  pxIndex_51 = pxReadyTasksLists[_14].pxIndex;
  # DEBUG pxIndex => pxIndex_51
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  MEM[(struct TCB_t *)xTaskToNotify_31(D)].xStateListItem.pxNext = pxIndex_51;
  # DEBUG BEGIN_STMT
  _16 = pxIndex_51->pxPrevious;
  MEM[(struct TCB_t *)xTaskToNotify_31(D)].xStateListItem.pxPrevious = _16;
  # DEBUG BEGIN_STMT
  _17 = pxIndex_51->pxPrevious;
  _17->pxNext = _11;
  # DEBUG BEGIN_STMT
  pxIndex_51->pxPrevious = _11;
  # DEBUG BEGIN_STMT
  _18 = &pxReadyTasksLists[_14];
  MEM[(struct TCB_t *)xTaskToNotify_31(D)].xStateListItem.pvContainer = _18;
  # DEBUG BEGIN_STMT
  _19 = pxReadyTasksLists[_14].uxNumberOfItems;
  _20 = _19 + 1;
  pxReadyTasksLists[_14].uxNumberOfItems = _20;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _21 = MEM[(struct TCB_t *)xTaskToNotify_31(D)].xEventListItem.pvContainer;
  if (_21 != 0B)
    goto <bb 25>; [70.00%]
  else
    goto <bb 27>; [30.00%]

  <bb 25> [local count: 1864614]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i " :  :  : "memory");

  <bb 26> [local count: 188326041]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 33> [local count: 188326041]:
  goto <bb 26>; [100.00%]

  <bb 27> [local count: 799120]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  pxCurrentTCB.157_22 ={v} pxCurrentTCB;
  _23 = pxCurrentTCB.157_22->uxPriority;
  if (_14 > _23)
    goto <bb 28>; [50.00%]
  else
    goto <bb 29>; [50.00%]

  <bb 28> [local count: 399560]:
  # DEBUG BEGIN_STMT
  MEM[(volatile uint32_t *)3758157060B] ={v} 268435456;
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("dsb" :  :  : "memory");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("isb");
  # DEBUG BEGIN_STMT

  <bb 29> [local count: 3346135]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  vPortExitCritical ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return xReturn_24;

}



;; Function xTaskGenericNotifyFromISR (xTaskGenericNotifyFromISR, funcdef_no=74, decl_uid=6340, cgraph_uid=75, symbol_order=96)

Modification phase of node xTaskGenericNotifyFromISR/96
xTaskGenericNotifyFromISR (struct tskTaskControlBlock * xTaskToNotify, UBaseType_t uxIndexToNotify, uint32_t ulValue, eNotifyAction eAction, uint32_t * pulPreviousNotificationValue, BaseType_t * pxHigherPriorityTaskWoken)
{
  uint32_t ulOriginalBASEPRI;
  uint32_t ulNewBASEPRI;
  struct ListItem_t * const pxIndex;
  struct ListItem_t * const pxIndex;
  struct List_t * const pxList;
  BaseType_t xReturn;
  uint8_t ucOriginalNotifyState;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int xTickCount.158_6;
  struct xLIST * _7;
  long unsigned int uxSchedulerSuspended.159_8;
  struct xLIST_ITEM * _9;
  struct xLIST_ITEM * _10;
  struct xLIST_ITEM * _11;
  struct ListItem_t * _12;
  struct ListItem_t * _13;
  long unsigned int _14;
  long unsigned int _15;
  long unsigned int _16;
  long unsigned int uxTopReadyPriority.160_17;
  struct xLIST_ITEM * _18;
  struct xLIST_ITEM * _19;
  struct List_t * _20;
  long unsigned int _21;
  long unsigned int _22;
  struct xLIST_ITEM * _23;
  struct xLIST_ITEM * _24;
  struct ListItem_t * _25;
  long unsigned int _26;
  long unsigned int _27;
  long unsigned int _28;
  struct TCB_t * pxCurrentTCB.161_29;
  long unsigned int _30;

  <bb 2> [local count: 22667608]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG xReturn => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (xTaskToNotify_39(D) == 0B)
    goto <bb 3>; [30.00%]
  else
    goto <bb 5>; [70.00%]

  <bb 3> [local count: 6800282]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i " :  :  : "memory");

  <bb 4> [local count: 686828449]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 35> [local count: 686828449]:
  goto <bb 4>; [100.00%]

  <bb 5> [local count: 15867325]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (uxIndexToNotify_40(D) != 0)
    goto <bb 6>; [67.00%]
  else
    goto <bb 8>; [33.00%]

  <bb 6> [local count: 10631108]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i " :  :  : "memory");

  <bb 7> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 36> [local count: 1073741824]:
  goto <bb 7>; [100.00%]

  <bb 8> [local count: 5236217]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  vPortValidateInterruptPriority ();
  # DEBUG BEGIN_STMT
  # DEBUG pxTCB => xTaskToNotify_39(D)
  # DEBUG BEGIN_STMT
  # DEBUG INLINE_ENTRY ulPortRaiseBASEPRI
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("   mrs %0, basepri                                         
   mov %1, %2                                              
   cpsid i                                                 
   msr basepri, %1                                         
   isb                                                     
   dsb                                                     
   cpsie i                                                 
" : "=r" ulOriginalBASEPRI_80, "=r" ulNewBASEPRI_81 : "i" 16 : "memory");
  # DEBUG ulNewBASEPRI => ulNewBASEPRI_81
  # DEBUG ulOriginalBASEPRI => ulOriginalBASEPRI_80
  # DEBUG BEGIN_STMT
  # DEBUG ulNewBASEPRI => NULL
  # DEBUG ulOriginalBASEPRI => NULL
  # DEBUG uxSavedInterruptStatus => ulOriginalBASEPRI_80
  # DEBUG BEGIN_STMT
  if (pulPreviousNotificationValue_43(D) != 0B)
    goto <bb 9>; [70.00%]
  else
    goto <bb 10>; [30.00%]

  <bb 9> [local count: 3665352]:
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct TCB_t *)xTaskToNotify_39(D)].ulNotifiedValue[0];
  *pulPreviousNotificationValue_43(D) = _1;

  <bb 10> [local count: 5236217]:
  # DEBUG BEGIN_STMT
  ucOriginalNotifyState_45 ={v} MEM[(struct TCB_t *)xTaskToNotify_39(D)].ucNotifyState[0];
  # DEBUG ucOriginalNotifyState => ucOriginalNotifyState_45
  # DEBUG BEGIN_STMT
  MEM[(struct TCB_t *)xTaskToNotify_39(D)].ucNotifyState[0] ={v} 2;
  # DEBUG BEGIN_STMT
  switch (eAction_47(D)) <default: <L16> [16.67%], case 0: <L39> [16.67%], case 1: <L8> [16.67%], case 2: <L9> [16.67%], case 3: <L10> [16.67%], case 4: <L11> [16.67%]>

  <bb 11> [local count: 872703]:
<L8>:
  # DEBUG BEGIN_STMT
  _2 ={v} MEM[(struct TCB_t *)xTaskToNotify_39(D)].ulNotifiedValue[0];
  _3 = _2 | ulValue_48(D);
  MEM[(struct TCB_t *)xTaskToNotify_39(D)].ulNotifiedValue[0] ={v} _3;
  # DEBUG BEGIN_STMT
  goto <bb 19>; [100.00%]

  <bb 12> [local count: 872703]:
<L9>:
  # DEBUG BEGIN_STMT
  _4 ={v} MEM[(struct TCB_t *)xTaskToNotify_39(D)].ulNotifiedValue[0];
  _5 = _4 + 1;
  MEM[(struct TCB_t *)xTaskToNotify_39(D)].ulNotifiedValue[0] ={v} _5;
  # DEBUG BEGIN_STMT
  goto <bb 19>; [100.00%]

  <bb 13> [local count: 872703]:
<L10>:
  # DEBUG BEGIN_STMT
  MEM[(struct TCB_t *)xTaskToNotify_39(D)].ulNotifiedValue[0] ={v} ulValue_48(D);
  # DEBUG BEGIN_STMT
  goto <bb 19>; [100.00%]

  <bb 14> [local count: 872703]:
<L11>:
  # DEBUG BEGIN_STMT
  if (ucOriginalNotifyState_45 != 2)
    goto <bb 15>; [66.00%]
  else
    goto <bb 19>; [34.00%]

  <bb 15> [local count: 575984]:
  # DEBUG BEGIN_STMT
  MEM[(struct TCB_t *)xTaskToNotify_39(D)].ulNotifiedValue[0] ={v} ulValue_48(D);
  goto <bb 19>; [100.00%]

  <bb 16> [local count: 872703]:
<L16>:
  # DEBUG BEGIN_STMT
  xTickCount.158_6 ={v} xTickCount;
  if (xTickCount.158_6 != 0)
    goto <bb 17>; [50.00%]
  else
    goto <bb 19>; [50.00%]

  <bb 17> [local count: 436351]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i " :  :  : "memory");

  <bb 18> [local count: 44071492]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 37> [local count: 44071492]:
  goto <bb 18>; [100.00%]

  <bb 19> [local count: 4799866]:
  # xReturn_31 = PHI <1(11), 1(12), 1(13), 0(14), 1(10), 1(16), 1(15)>
<L39>:
  # DEBUG xReturn => xReturn_31
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (ucOriginalNotifyState_45 == 1)
    goto <bb 20>; [34.00%]
  else
    goto <bb 34>; [66.00%]

  <bb 20> [local count: 1631954]:
  # DEBUG BEGIN_STMT
  _7 = MEM[(struct TCB_t *)xTaskToNotify_39(D)].xEventListItem.pvContainer;
  if (_7 != 0B)
    goto <bb 21>; [70.00%]
  else
    goto <bb 23>; [30.00%]

  <bb 21> [local count: 1142368]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i " :  :  : "memory");

  <bb 22> [local count: 115379167]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 38> [local count: 115379167]:
  goto <bb 22>; [100.00%]

  <bb 23> [local count: 489586]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  uxSchedulerSuspended.159_8 ={v} uxSchedulerSuspended;
  if (uxSchedulerSuspended.159_8 == 0)
    goto <bb 24>; [50.00%]
  else
    goto <bb 29>; [50.00%]

  <bb 24> [local count: 244793]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  pxList_61 = MEM[(struct TCB_t *)xTaskToNotify_39(D)].xStateListItem.pvContainer;
  # DEBUG pxList => pxList_61
  # DEBUG BEGIN_STMT
  _9 = MEM[(struct TCB_t *)xTaskToNotify_39(D)].xStateListItem.pxNext;
  _10 = MEM[(struct TCB_t *)xTaskToNotify_39(D)].xStateListItem.pxPrevious;
  _9->pxPrevious = _10;
  # DEBUG BEGIN_STMT
  _11 = MEM[(struct TCB_t *)xTaskToNotify_39(D)].xStateListItem.pxPrevious;
  _11->pxNext = _9;
  # DEBUG BEGIN_STMT
  _12 = pxList_61->pxIndex;
  _13 = &MEM[(struct TCB_t *)xTaskToNotify_39(D)].xStateListItem;
  if (_12 == _13)
    goto <bb 25>; [30.00%]
  else
    goto <bb 26>; [70.00%]

  <bb 25> [local count: 73438]:
  # DEBUG BEGIN_STMT
  pxList_61->pxIndex = _11;

  <bb 26> [local count: 244793]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _14 = pxList_61->uxNumberOfItems;
  _15 = _14 + 4294967295;
  pxList_61->uxNumberOfItems = _15;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _16 = MEM[(struct TCB_t *)xTaskToNotify_39(D)].uxPriority;
  uxTopReadyPriority.160_17 ={v} uxTopReadyPriority;
  if (_16 > uxTopReadyPriority.160_17)
    goto <bb 27>; [50.00%]
  else
    goto <bb 28>; [50.00%]

  <bb 27> [local count: 122397]:
  # DEBUG BEGIN_STMT
  uxTopReadyPriority ={v} _16;

  <bb 28> [local count: 244793]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  pxIndex_67 = pxReadyTasksLists[_16].pxIndex;
  # DEBUG pxIndex => pxIndex_67
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  MEM[(struct TCB_t *)xTaskToNotify_39(D)].xStateListItem.pxNext = pxIndex_67;
  # DEBUG BEGIN_STMT
  _18 = pxIndex_67->pxPrevious;
  MEM[(struct TCB_t *)xTaskToNotify_39(D)].xStateListItem.pxPrevious = _18;
  # DEBUG BEGIN_STMT
  _19 = pxIndex_67->pxPrevious;
  _19->pxNext = _13;
  # DEBUG BEGIN_STMT
  pxIndex_67->pxPrevious = _13;
  # DEBUG BEGIN_STMT
  _20 = &pxReadyTasksLists[_16];
  MEM[(struct TCB_t *)xTaskToNotify_39(D)].xStateListItem.pvContainer = _20;
  # DEBUG BEGIN_STMT
  _21 = pxReadyTasksLists[_16].uxNumberOfItems;
  _22 = _21 + 1;
  pxReadyTasksLists[_16].uxNumberOfItems = _22;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  goto <bb 30>; [100.00%]

  <bb 29> [local count: 244793]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  pxIndex_54 = xPendingReadyList.pxIndex;
  # DEBUG pxIndex => pxIndex_54
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  MEM[(struct TCB_t *)xTaskToNotify_39(D)].xEventListItem.pxNext = pxIndex_54;
  # DEBUG BEGIN_STMT
  _23 = pxIndex_54->pxPrevious;
  MEM[(struct TCB_t *)xTaskToNotify_39(D)].xEventListItem.pxPrevious = _23;
  # DEBUG BEGIN_STMT
  _24 = pxIndex_54->pxPrevious;
  _25 = &MEM[(struct TCB_t *)xTaskToNotify_39(D)].xEventListItem;
  _24->pxNext = _25;
  # DEBUG BEGIN_STMT
  pxIndex_54->pxPrevious = _25;
  # DEBUG BEGIN_STMT
  MEM[(struct TCB_t *)xTaskToNotify_39(D)].xEventListItem.pvContainer = &xPendingReadyList;
  # DEBUG BEGIN_STMT
  _26 = xPendingReadyList.uxNumberOfItems;
  _27 = _26 + 1;
  xPendingReadyList.uxNumberOfItems = _27;

  <bb 30> [local count: 489586]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _28 = MEM[(struct TCB_t *)xTaskToNotify_39(D)].uxPriority;
  pxCurrentTCB.161_29 ={v} pxCurrentTCB;
  _30 = pxCurrentTCB.161_29->uxPriority;
  if (_28 > _30)
    goto <bb 31>; [50.00%]
  else
    goto <bb 34>; [50.00%]

  <bb 31> [local count: 244793]:
  # DEBUG BEGIN_STMT
  if (pxHigherPriorityTaskWoken_74(D) != 0B)
    goto <bb 32>; [70.00%]
  else
    goto <bb 33>; [30.00%]

  <bb 32> [local count: 171355]:
  # DEBUG BEGIN_STMT
  *pxHigherPriorityTaskWoken_74(D) = 1;

  <bb 33> [local count: 244793]:
  # DEBUG BEGIN_STMT
  xYieldPendings[0] ={v} 1;

  <bb 34> [local count: 3657498]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG ulNewMaskValue => ulOriginalBASEPRI_80
  # DEBUG INLINE_ENTRY vPortSetBASEPRI
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("   msr basepri, %0 " :  : "r" ulOriginalBASEPRI_80 : "memory");
  # DEBUG ulNewMaskValue => NULL
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return xReturn_31;

}



;; Function vTaskGenericNotifyGiveFromISR (vTaskGenericNotifyGiveFromISR, funcdef_no=75, decl_uid=6350, cgraph_uid=76, symbol_order=97)

Modification phase of node vTaskGenericNotifyGiveFromISR/97
vTaskGenericNotifyGiveFromISR (struct tskTaskControlBlock * xTaskToNotify, UBaseType_t uxIndexToNotify, BaseType_t * pxHigherPriorityTaskWoken)
{
  uint32_t ulOriginalBASEPRI;
  uint32_t ulNewBASEPRI;
  struct ListItem_t * const pxIndex;
  struct ListItem_t * const pxIndex;
  struct List_t * const pxList;
  uint8_t ucOriginalNotifyState;
  long unsigned int _1;
  long unsigned int _2;
  struct xLIST * _3;
  long unsigned int uxSchedulerSuspended.162_4;
  struct xLIST_ITEM * _5;
  struct xLIST_ITEM * _6;
  struct xLIST_ITEM * _7;
  struct ListItem_t * _8;
  struct ListItem_t * _9;
  long unsigned int _10;
  long unsigned int _11;
  long unsigned int _12;
  long unsigned int uxTopReadyPriority.163_13;
  struct xLIST_ITEM * _14;
  struct xLIST_ITEM * _15;
  struct List_t * _16;
  long unsigned int _17;
  long unsigned int _18;
  struct xLIST_ITEM * _19;
  struct xLIST_ITEM * _20;
  struct ListItem_t * _21;
  long unsigned int _22;
  long unsigned int _23;
  long unsigned int _24;
  struct TCB_t * pxCurrentTCB.164_25;
  long unsigned int _26;

  <bb 2> [local count: 22667608]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (xTaskToNotify_32(D) == 0B)
    goto <bb 3>; [30.00%]
  else
    goto <bb 5>; [70.00%]

  <bb 3> [local count: 6800282]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i " :  :  : "memory");

  <bb 4> [local count: 686828449]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 24> [local count: 686828449]:
  goto <bb 4>; [100.00%]

  <bb 5> [local count: 15867325]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (uxIndexToNotify_33(D) != 0)
    goto <bb 6>; [67.00%]
  else
    goto <bb 8>; [33.00%]

  <bb 6> [local count: 10631108]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i " :  :  : "memory");

  <bb 7> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 25> [local count: 1073741824]:
  goto <bb 7>; [100.00%]

  <bb 8> [local count: 5236217]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  vPortValidateInterruptPriority ();
  # DEBUG BEGIN_STMT
  # DEBUG pxTCB => xTaskToNotify_32(D)
  # DEBUG BEGIN_STMT
  # DEBUG INLINE_ENTRY ulPortRaiseBASEPRI
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("   mrs %0, basepri                                         
   mov %1, %2                                              
   cpsid i                                                 
   msr basepri, %1                                         
   isb                                                     
   dsb                                                     
   cpsie i                                                 
" : "=r" ulOriginalBASEPRI_65, "=r" ulNewBASEPRI_66 : "i" 16 : "memory");
  # DEBUG ulNewBASEPRI => ulNewBASEPRI_66
  # DEBUG ulOriginalBASEPRI => ulOriginalBASEPRI_65
  # DEBUG BEGIN_STMT
  # DEBUG ulNewBASEPRI => NULL
  # DEBUG ulOriginalBASEPRI => NULL
  # DEBUG uxSavedInterruptStatus => ulOriginalBASEPRI_65
  # DEBUG BEGIN_STMT
  ucOriginalNotifyState_36 ={v} MEM[(struct TCB_t *)xTaskToNotify_32(D)].ucNotifyState[0];
  # DEBUG ucOriginalNotifyState => ucOriginalNotifyState_36
  # DEBUG BEGIN_STMT
  MEM[(struct TCB_t *)xTaskToNotify_32(D)].ucNotifyState[0] ={v} 2;
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct TCB_t *)xTaskToNotify_32(D)].ulNotifiedValue[0];
  _2 = _1 + 1;
  MEM[(struct TCB_t *)xTaskToNotify_32(D)].ulNotifiedValue[0] ={v} _2;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (ucOriginalNotifyState_36 == 1)
    goto <bb 9>; [34.00%]
  else
    goto <bb 23>; [66.00%]

  <bb 9> [local count: 1780314]:
  # DEBUG BEGIN_STMT
  _3 = MEM[(struct TCB_t *)xTaskToNotify_32(D)].xEventListItem.pvContainer;
  if (_3 != 0B)
    goto <bb 10>; [70.00%]
  else
    goto <bb 12>; [30.00%]

  <bb 10> [local count: 1246220]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i " :  :  : "memory");

  <bb 11> [local count: 125868184]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 26> [local count: 125868184]:
  goto <bb 11>; [100.00%]

  <bb 12> [local count: 534094]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  uxSchedulerSuspended.162_4 ={v} uxSchedulerSuspended;
  if (uxSchedulerSuspended.162_4 == 0)
    goto <bb 13>; [50.00%]
  else
    goto <bb 18>; [50.00%]

  <bb 13> [local count: 267047]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  pxList_46 = MEM[(struct TCB_t *)xTaskToNotify_32(D)].xStateListItem.pvContainer;
  # DEBUG pxList => pxList_46
  # DEBUG BEGIN_STMT
  _5 = MEM[(struct TCB_t *)xTaskToNotify_32(D)].xStateListItem.pxNext;
  _6 = MEM[(struct TCB_t *)xTaskToNotify_32(D)].xStateListItem.pxPrevious;
  _5->pxPrevious = _6;
  # DEBUG BEGIN_STMT
  _7 = MEM[(struct TCB_t *)xTaskToNotify_32(D)].xStateListItem.pxPrevious;
  _7->pxNext = _5;
  # DEBUG BEGIN_STMT
  _8 = pxList_46->pxIndex;
  _9 = &MEM[(struct TCB_t *)xTaskToNotify_32(D)].xStateListItem;
  if (_8 == _9)
    goto <bb 14>; [30.00%]
  else
    goto <bb 15>; [70.00%]

  <bb 14> [local count: 80114]:
  # DEBUG BEGIN_STMT
  pxList_46->pxIndex = _7;

  <bb 15> [local count: 267047]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _10 = pxList_46->uxNumberOfItems;
  _11 = _10 + 4294967295;
  pxList_46->uxNumberOfItems = _11;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _12 = MEM[(struct TCB_t *)xTaskToNotify_32(D)].uxPriority;
  uxTopReadyPriority.163_13 ={v} uxTopReadyPriority;
  if (_12 > uxTopReadyPriority.163_13)
    goto <bb 16>; [50.00%]
  else
    goto <bb 17>; [50.00%]

  <bb 16> [local count: 133524]:
  # DEBUG BEGIN_STMT
  uxTopReadyPriority ={v} _12;

  <bb 17> [local count: 267047]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  pxIndex_52 = pxReadyTasksLists[_12].pxIndex;
  # DEBUG pxIndex => pxIndex_52
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  MEM[(struct TCB_t *)xTaskToNotify_32(D)].xStateListItem.pxNext = pxIndex_52;
  # DEBUG BEGIN_STMT
  _14 = pxIndex_52->pxPrevious;
  MEM[(struct TCB_t *)xTaskToNotify_32(D)].xStateListItem.pxPrevious = _14;
  # DEBUG BEGIN_STMT
  _15 = pxIndex_52->pxPrevious;
  _15->pxNext = _9;
  # DEBUG BEGIN_STMT
  pxIndex_52->pxPrevious = _9;
  # DEBUG BEGIN_STMT
  _16 = &pxReadyTasksLists[_12];
  MEM[(struct TCB_t *)xTaskToNotify_32(D)].xStateListItem.pvContainer = _16;
  # DEBUG BEGIN_STMT
  _17 = pxReadyTasksLists[_12].uxNumberOfItems;
  _18 = _17 + 1;
  pxReadyTasksLists[_12].uxNumberOfItems = _18;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  goto <bb 19>; [100.00%]

  <bb 18> [local count: 267047]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  pxIndex_39 = xPendingReadyList.pxIndex;
  # DEBUG pxIndex => pxIndex_39
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  MEM[(struct TCB_t *)xTaskToNotify_32(D)].xEventListItem.pxNext = pxIndex_39;
  # DEBUG BEGIN_STMT
  _19 = pxIndex_39->pxPrevious;
  MEM[(struct TCB_t *)xTaskToNotify_32(D)].xEventListItem.pxPrevious = _19;
  # DEBUG BEGIN_STMT
  _20 = pxIndex_39->pxPrevious;
  _21 = &MEM[(struct TCB_t *)xTaskToNotify_32(D)].xEventListItem;
  _20->pxNext = _21;
  # DEBUG BEGIN_STMT
  pxIndex_39->pxPrevious = _21;
  # DEBUG BEGIN_STMT
  MEM[(struct TCB_t *)xTaskToNotify_32(D)].xEventListItem.pvContainer = &xPendingReadyList;
  # DEBUG BEGIN_STMT
  _22 = xPendingReadyList.uxNumberOfItems;
  _23 = _22 + 1;
  xPendingReadyList.uxNumberOfItems = _23;

  <bb 19> [local count: 534094]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _24 = MEM[(struct TCB_t *)xTaskToNotify_32(D)].uxPriority;
  pxCurrentTCB.164_25 ={v} pxCurrentTCB;
  _26 = pxCurrentTCB.164_25->uxPriority;
  if (_24 > _26)
    goto <bb 20>; [50.00%]
  else
    goto <bb 23>; [50.00%]

  <bb 20> [local count: 267047]:
  # DEBUG BEGIN_STMT
  if (pxHigherPriorityTaskWoken_59(D) != 0B)
    goto <bb 21>; [70.00%]
  else
    goto <bb 22>; [30.00%]

  <bb 21> [local count: 186933]:
  # DEBUG BEGIN_STMT
  *pxHigherPriorityTaskWoken_59(D) = 1;

  <bb 22> [local count: 267047]:
  # DEBUG BEGIN_STMT
  xYieldPendings[0] ={v} 1;

  <bb 23> [local count: 3989998]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG ulNewMaskValue => ulOriginalBASEPRI_65
  # DEBUG INLINE_ENTRY vPortSetBASEPRI
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("   msr basepri, %0 " :  : "r" ulOriginalBASEPRI_65 : "memory");
  # DEBUG ulNewMaskValue => NULL
  # DEBUG BEGIN_STMT
  return;

}



;; Function xTaskGenericNotifyStateClear (xTaskGenericNotifyStateClear, funcdef_no=76, decl_uid=6357, cgraph_uid=77, symbol_order=98)

Modification phase of node xTaskGenericNotifyStateClear/98
xTaskGenericNotifyStateClear (struct tskTaskControlBlock * xTask, UBaseType_t uxIndexToClear)
{
  BaseType_t xReturn;
  unsigned char _1;
  struct TCB_t * iftmp.165_3;
  struct TCB_t * iftmp.165_8;

  <bb 2> [local count: 21262216]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (uxIndexToClear_5(D) != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 3> [local count: 10631108]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i " :  :  : "memory");

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 10> [local count: 1073741824]:
  goto <bb 4>; [100.00%]

  <bb 5> [local count: 10631108]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (xTask_6(D) == 0B)
    goto <bb 6>; [30.00%]
  else
    goto <bb 7>; [70.00%]

  <bb 6> [local count: 3189332]:
  iftmp.165_8 ={v} pxCurrentTCB;

  <bb 7> [local count: 10631108]:
  # iftmp.165_3 = PHI <iftmp.165_8(6), xTask_6(D)(5)>
  # DEBUG pxTCB => iftmp.165_3
  # DEBUG BEGIN_STMT
  vPortEnterCritical ();
  # DEBUG BEGIN_STMT
  _1 ={v} iftmp.165_3->ucNotifyState[0];
  if (_1 == 2)
    goto <bb 8>; [34.00%]
  else
    goto <bb 9>; [66.00%]

  <bb 8> [local count: 3614577]:
  # DEBUG BEGIN_STMT
  iftmp.165_3->ucNotifyState[0] ={v} 0;
  # DEBUG BEGIN_STMT
  # DEBUG xReturn => 1

  <bb 9> [local count: 10631108]:
  # xReturn_2 = PHI <1(8), 0(7)>
  # DEBUG xReturn => xReturn_2
  # DEBUG BEGIN_STMT
  vPortExitCritical ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return xReturn_2;

}



;; Function ulTaskGenericNotifyValueClear (ulTaskGenericNotifyValueClear, funcdef_no=77, decl_uid=6361, cgraph_uid=78, symbol_order=99)

Modification phase of node ulTaskGenericNotifyValueClear/99
ulTaskGenericNotifyValueClear (struct tskTaskControlBlock * xTask, UBaseType_t uxIndexToClear, uint32_t ulBitsToClear)
{
  uint32_t ulReturn;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  struct TCB_t * iftmp.166_4;
  struct TCB_t * iftmp.166_8;

  <bb 2> [local count: 21262216]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (uxIndexToClear_5(D) != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 3> [local count: 10631108]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i " :  :  : "memory");

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 8> [local count: 1073741824]:
  goto <bb 4>; [100.00%]

  <bb 5> [local count: 10631108]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (xTask_6(D) == 0B)
    goto <bb 6>; [30.00%]
  else
    goto <bb 7>; [70.00%]

  <bb 6> [local count: 3189332]:
  iftmp.166_8 ={v} pxCurrentTCB;

  <bb 7> [local count: 10631108]:
  # iftmp.166_4 = PHI <iftmp.166_8(6), xTask_6(D)(5)>
  # DEBUG pxTCB => iftmp.166_4
  # DEBUG BEGIN_STMT
  vPortEnterCritical ();
  # DEBUG BEGIN_STMT
  ulReturn_10 ={v} iftmp.166_4->ulNotifiedValue[0];
  # DEBUG ulReturn => ulReturn_10
  # DEBUG BEGIN_STMT
  _1 ={v} iftmp.166_4->ulNotifiedValue[0];
  _2 = ~ulBitsToClear_11(D);
  _3 = _1 & _2;
  iftmp.166_4->ulNotifiedValue[0] ={v} _3;
  # DEBUG BEGIN_STMT
  vPortExitCritical ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return ulReturn_10;

}



;; Function vTaskResetState (vTaskResetState, funcdef_no=79, decl_uid=6370, cgraph_uid=80, symbol_order=101)

Modification phase of node vTaskResetState/101
vTaskResetState ()
{
  BaseType_t xCoreID;

  <bb 2> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  pxCurrentTCB ={v} 0B;
  # DEBUG BEGIN_STMT
  uxDeletedTasksWaitingCleanUp ={v} 0;
  # DEBUG BEGIN_STMT
  uxCurrentNumberOfTasks ={v} 0;
  # DEBUG BEGIN_STMT
  xTickCount ={v} 0;
  # DEBUG BEGIN_STMT
  uxTopReadyPriority ={v} 0;
  # DEBUG BEGIN_STMT
  xSchedulerRunning ={v} 0;
  # DEBUG BEGIN_STMT
  xPendedTicks ={v} 0;
  # DEBUG BEGIN_STMT
  # DEBUG xCoreID => 0
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  xYieldPendings[0] ={v} 0;
  # DEBUG BEGIN_STMT
  # DEBUG xCoreID => 1

  <bb 4> [local count: 1073741824]:
  # xCoreID_1 = PHI <0(2), 1(3)>
  # DEBUG xCoreID => xCoreID_1
  # DEBUG BEGIN_STMT
  if (xCoreID_1 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 5> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  xNumOfOverflows ={v} 0;
  # DEBUG BEGIN_STMT
  uxTaskNumber = 0;
  # DEBUG BEGIN_STMT
  xNextTaskUnblockTime ={v} 0;
  # DEBUG BEGIN_STMT
  uxSchedulerSuspended ={v} 0;
  return;

}


