
IPA constant propagation start:
Determining dynamic type for call: _2 (_3, _4);
  Starting walk at: _2 (_3, _4);
  instance pointer: _3  Outer instance pointer: _3 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_35 = xQueueReceive (xTimerQueue.16_34, &xMessage, 0);
  Function call may change dynamic type:vPortFree (pxTimer_65);
  Function call may change dynamic type:xTimeNow_51 = prvSampleTimeNow (&xTimerListsWereSwitched);
  Function call may change dynamic type:_35 = xQueueReceive (xTimerQueue.16_34, &xMessage, 0);
  Function call may change dynamic type:_2 (_3, _4);
  Function call may change dynamic type:uxListRemove (_7);
  Function call may change dynamic type:_22 (pxTimer_14);
  Function call may change dynamic type:prvReloadTimer (pxTimer_14, _19, xTimeNow_66);
  Function call may change dynamic type:_15 = prvInsertTimerInActiveList (pxTimer_14, _13, xTimeNow_66, _11);
  Function call may change dynamic type:prvInsertTimerInActiveList (pxTimer_64, _30, xTimeNow_67, xTimeNow_67);
Determining dynamic type for call: xTimeNow_51 = prvSampleTimeNow (&xTimerListsWereSwitched);
  Starting walk at: xTimeNow_51 = prvSampleTimeNow (&xTimerListsWereSwitched);
  instance pointer: &xTimerListsWereSwitched  Outer instance pointer: xTimerListsWereSwitched offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_35 = xQueueReceive (xTimerQueue.16_34, &xMessage, 0);
  Function call may change dynamic type:vPortFree (pxTimer_65);
  Function call may change dynamic type:xTimeNow_51 = prvSampleTimeNow (&xTimerListsWereSwitched);
  Function call may change dynamic type:uxListRemove (_7);
  Function call may change dynamic type:_22 (pxTimer_14);
  Function call may change dynamic type:prvReloadTimer (pxTimer_14, _19, xTimeNow_66);
  Function call may change dynamic type:_15 = prvInsertTimerInActiveList (pxTimer_14, _13, xTimeNow_66, _11);
  Function call may change dynamic type:prvInsertTimerInActiveList (pxTimer_64, _30, xTimeNow_67, xTimeNow_67);
  Function call may change dynamic type:_2 (_3, _4);
Determining dynamic type for call: prvInsertTimerInActiveList (pxTimer_64, _30, xTimeNow_67, xTimeNow_67);
  Starting walk at: prvInsertTimerInActiveList (pxTimer_64, _30, xTimeNow_67, xTimeNow_67);
  instance pointer: pxTimer_64  Outer instance pointer: pxTimer_48 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:xTimeNow_51 = prvSampleTimeNow (&xTimerListsWereSwitched);
  Function call may change dynamic type:_35 = xQueueReceive (xTimerQueue.16_34, &xMessage, 0);
  Function call may change dynamic type:vPortFree (pxTimer_65);
  Function call may change dynamic type:xTimeNow_51 = prvSampleTimeNow (&xTimerListsWereSwitched);
  Function call may change dynamic type:uxListRemove (_7);
  Function call may change dynamic type:_22 (pxTimer_14);
  Function call may change dynamic type:prvReloadTimer (pxTimer_14, _19, xTimeNow_66);
  Function call may change dynamic type:_15 = prvInsertTimerInActiveList (pxTimer_14, _13, xTimeNow_66, _11);
  Function call may change dynamic type:prvInsertTimerInActiveList (pxTimer_64, _30, xTimeNow_67, xTimeNow_67);
  Function call may change dynamic type:_2 (_3, _4);
Determining dynamic type for call: _15 = prvInsertTimerInActiveList (pxTimer_14, _13, xTimeNow_66, _11);
  Starting walk at: _15 = prvInsertTimerInActiveList (pxTimer_14, _13, xTimeNow_66, _11);
  instance pointer: pxTimer_14  Outer instance pointer: pxTimer_48 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:xTimeNow_51 = prvSampleTimeNow (&xTimerListsWereSwitched);
  Function call may change dynamic type:_35 = xQueueReceive (xTimerQueue.16_34, &xMessage, 0);
  Function call may change dynamic type:vPortFree (pxTimer_65);
  Function call may change dynamic type:xTimeNow_51 = prvSampleTimeNow (&xTimerListsWereSwitched);
  Function call may change dynamic type:uxListRemove (_7);
  Function call may change dynamic type:_22 (pxTimer_14);
  Function call may change dynamic type:prvReloadTimer (pxTimer_14, _19, xTimeNow_66);
  Function call may change dynamic type:_15 = prvInsertTimerInActiveList (pxTimer_14, _13, xTimeNow_66, _11);
  Function call may change dynamic type:prvInsertTimerInActiveList (pxTimer_64, _30, xTimeNow_67, xTimeNow_67);
  Function call may change dynamic type:_2 (_3, _4);
Determining dynamic type for call: prvReloadTimer (pxTimer_14, _19, xTimeNow_66);
  Starting walk at: prvReloadTimer (pxTimer_14, _19, xTimeNow_66);
  instance pointer: pxTimer_14  Outer instance pointer: pxTimer_48 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_15 = prvInsertTimerInActiveList (pxTimer_14, _13, xTimeNow_66, _11);
  Function call may change dynamic type:xTimeNow_51 = prvSampleTimeNow (&xTimerListsWereSwitched);
  Function call may change dynamic type:_35 = xQueueReceive (xTimerQueue.16_34, &xMessage, 0);
  Function call may change dynamic type:vPortFree (pxTimer_65);
  Function call may change dynamic type:xTimeNow_51 = prvSampleTimeNow (&xTimerListsWereSwitched);
  Function call may change dynamic type:uxListRemove (_7);
  Function call may change dynamic type:_22 (pxTimer_14);
  Function call may change dynamic type:prvReloadTimer (pxTimer_14, _19, xTimeNow_66);
  Function call may change dynamic type:_15 = prvInsertTimerInActiveList (pxTimer_14, _13, xTimeNow_66, _11);
  Function call may change dynamic type:prvInsertTimerInActiveList (pxTimer_64, _30, xTimeNow_67, xTimeNow_67);
  Function call may change dynamic type:_2 (_3, _4);
Determining dynamic type for call: _22 (pxTimer_14);
  Starting walk at: _22 (pxTimer_14);
  instance pointer: pxTimer_14  Outer instance pointer: pxTimer_48 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:prvReloadTimer (pxTimer_14, _19, xTimeNow_66);
  Function call may change dynamic type:_15 = prvInsertTimerInActiveList (pxTimer_14, _13, xTimeNow_66, _11);
  Function call may change dynamic type:xTimeNow_51 = prvSampleTimeNow (&xTimerListsWereSwitched);
  Function call may change dynamic type:_35 = xQueueReceive (xTimerQueue.16_34, &xMessage, 0);
  Function call may change dynamic type:vPortFree (pxTimer_65);
  Function call may change dynamic type:_22 (pxTimer_14);
  Function call may change dynamic type:prvInsertTimerInActiveList (pxTimer_64, _30, xTimeNow_67, xTimeNow_67);
  Function call may change dynamic type:_2 (_3, _4);
  Function call may change dynamic type:uxListRemove (_7);
Determining dynamic type for call: xProcessTimerNow_16 = prvInsertTimerInActiveList.part.0 (pxTimer_8(D));
  Starting walk at: xProcessTimerNow_16 = prvInsertTimerInActiveList.part.0 (pxTimer_8(D));
  instance pointer: pxTimer_8(D)  Outer instance pointer: pxTimer_8(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: xTimeNow_12 = prvSampleTimeNow (&xTimerListsWereSwitched);
  Starting walk at: xTimeNow_12 = prvSampleTimeNow (&xTimerListsWereSwitched);
  instance pointer: &xTimerListsWereSwitched  Outer instance pointer: xTimerListsWereSwitched offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:vTaskSuspendAll ();
Determining dynamic type for call: xNextExpireTime_5 = prvGetNextExpireTime (&xListWasEmpty);
  Starting walk at: xNextExpireTime_5 = prvGetNextExpireTime (&xListWasEmpty);
  instance pointer: &xListWasEmpty  Outer instance pointer: xListWasEmpty offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:prvProcessReceivedCommands ();
  Function call may change dynamic type:prvProcessTimerOrBlockTask (xNextExpireTime_5, xListWasEmpty.1_1);
  Function call may change dynamic type:xNextExpireTime_5 = prvGetNextExpireTime (&xListWasEmpty);
Determining dynamic type for call: prvReloadTimer (pxTimer_9, xNextExpireTime_12(D), xTimeNow_13(D));
  Starting walk at: prvReloadTimer (pxTimer_9, xNextExpireTime_12(D), xTimeNow_13(D));
  instance pointer: pxTimer_9  Outer instance pointer: pxTimer_9 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:uxListRemove (_3);
Determining dynamic type for call: _6 (pxTimer_9);
  Starting walk at: _6 (pxTimer_9);
  instance pointer: pxTimer_9  Outer instance pointer: pxTimer_9 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:prvReloadTimer (pxTimer_9, xNextExpireTime_12(D), xTimeNow_13(D));
  Function call may change dynamic type:uxListRemove (_3);
Determining dynamic type for call: _5 = prvInsertTimerInActiveList (pxTimer_10(D), _4, xTimeNow_11(D), xExpiredTime_6);
  Starting walk at: _5 = prvInsertTimerInActiveList (pxTimer_10(D), _4, xTimeNow_11(D), xExpiredTime_6);
  instance pointer: pxTimer_10(D)  Outer instance pointer: pxTimer_10(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_2 (pxTimer_10(D));
  Function call may change dynamic type:_5 = prvInsertTimerInActiveList (pxTimer_10(D), _4, xTimeNow_11(D), xExpiredTime_6);
Determining dynamic type for call: _2 (pxTimer_10(D));
  Starting walk at: _2 (pxTimer_10(D));
  instance pointer: pxTimer_10(D)  Outer instance pointer: pxTimer_10(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_5 = prvInsertTimerInActiveList (pxTimer_10(D), _4, xTimeNow_11(D), xExpiredTime_6);
  Function call may change dynamic type:_2 (pxTimer_10(D));
  Function call may change dynamic type:_5 = prvInsertTimerInActiveList (pxTimer_10(D), _4, xTimeNow_11(D), xExpiredTime_6);
Determining dynamic type for call: _1 = xTimerGetReloadMode (xTimer_3(D));
  Starting walk at: _1 = xTimerGetReloadMode (xTimer_3(D));
  instance pointer: xTimer_3(D)  Outer instance pointer: xTimer_3(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _1 = xTimerGetReloadMode.part.0 (xTimer_3(D));
  Starting walk at: _1 = xTimerGetReloadMode.part.0 (xTimer_3(D));
  instance pointer: xTimer_3(D)  Outer instance pointer: xTimer_3(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: prvInitialiseNewTimer (pcTimerName_6(D), xTimerPeriodInTicks_7(D), xAutoReload_8(D), pvTimerID_9(D), pxCallbackFunction_10(D), pxNewTimer_4);
  Starting walk at: prvInitialiseNewTimer (pcTimerName_6(D), xTimerPeriodInTicks_7(D), xAutoReload_8(D), pvTimerID_9(D), pxCallbackFunction_10(D), pxNewTimer_4);
  instance pointer: pcTimerName_6(D)  Outer instance pointer: pcTimerName_6(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:pxNewTimer_4 = pvPortMalloc (44);
Determining dynamic type for call: prvInitialiseNewTimer (pcTimerName_6(D), xTimerPeriodInTicks_7(D), xAutoReload_8(D), pvTimerID_9(D), pxCallbackFunction_10(D), pxNewTimer_4);
  Starting walk at: prvInitialiseNewTimer (pcTimerName_6(D), xTimerPeriodInTicks_7(D), xAutoReload_8(D), pvTimerID_9(D), pxCallbackFunction_10(D), pxNewTimer_4);
  instance pointer: pvTimerID_9(D)  Outer instance pointer: pvTimerID_9(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:pxNewTimer_4 = pvPortMalloc (44);
Determining dynamic type for call: prvInitialiseNewTimer (pcTimerName_6(D), xTimerPeriodInTicks_7(D), xAutoReload_8(D), pvTimerID_9(D), pxCallbackFunction_10(D), pxNewTimer_4);
  Starting walk at: prvInitialiseNewTimer (pcTimerName_6(D), xTimerPeriodInTicks_7(D), xAutoReload_8(D), pvTimerID_9(D), pxCallbackFunction_10(D), pxNewTimer_4);
  instance pointer: pxCallbackFunction_10(D)  Outer instance pointer: pxCallbackFunction_10(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:pxNewTimer_4 = pvPortMalloc (44);
Determining dynamic type for call: prvInitialiseNewTimer (pcTimerName_6(D), xTimerPeriodInTicks_7(D), xAutoReload_8(D), pvTimerID_9(D), pxCallbackFunction_10(D), pxNewTimer_4);
  Starting walk at: prvInitialiseNewTimer (pcTimerName_6(D), xTimerPeriodInTicks_7(D), xAutoReload_8(D), pvTimerID_9(D), pxCallbackFunction_10(D), pxNewTimer_4);
  instance pointer: pxNewTimer_4  Outer instance pointer: pxNewTimer_4 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:pxNewTimer_4 = pvPortMalloc (44);

IPA structures before propagation:

Jump functions:
  Jump functions of caller  xTimerGetReloadMode.part.0/61:
    callsite  xTimerGetReloadMode.part.0/61 -> vPortEnterCritical/50 : 
       no arg info
    callsite  xTimerGetReloadMode.part.0/61 -> vPortExitCritical/54 : 
       no arg info
  Jump functions of caller  prvInsertTimerInActiveList.part.0/60:
    callsite  prvInsertTimerInActiveList.part.0/60 -> vListInsert/47 : 
       no arg info
  Jump functions of caller  xQueueGenericSendFromISR/59:
  Jump functions of caller  xQueueGenericSend/58:
  Jump functions of caller  xTaskGetSchedulerState/57:
  Jump functions of caller  vListInitialiseItem/56:
  Jump functions of caller  pvPortMalloc/55:
  Jump functions of caller  vPortExitCritical/54:
  Jump functions of caller  vQueueAddToRegistry/53:
  Jump functions of caller  xQueueGenericCreate/52:
  Jump functions of caller  vListInitialise/51:
  Jump functions of caller  vPortEnterCritical/50:
  Jump functions of caller  xQueueReceive/49:
  Jump functions of caller  vPortFree/48:
  Jump functions of caller  vListInsert/47:
  Jump functions of caller  uxListRemove/46:
  Jump functions of caller  xTaskGetTickCount/44:
  Jump functions of caller  vQueueWaitForMessageRestricted/43:
  Jump functions of caller  xTaskResumeAll/42:
  Jump functions of caller  vTaskSuspendAll/41:
  Jump functions of caller  xTaskCreate/40:
  Jump functions of caller  vTimerResetState/39:
  Jump functions of caller  vTimerSetTimerNumber/38:
  Jump functions of caller  uxTimerGetTimerNumber/37:
  Jump functions of caller  xTimerPendFunctionCall/36:
    callsite  xTimerPendFunctionCall/36 -> xQueueGenericSend/58 : 
       no arg info
  Jump functions of caller  xTimerPendFunctionCallFromISR/35:
    callsite  xTimerPendFunctionCallFromISR/35 -> xQueueGenericSendFromISR/59 : 
       no arg info
  Jump functions of caller  vTimerSetTimerID/34:
    callsite  vTimerSetTimerID/34 -> vPortExitCritical/54 : 
       no arg info
    callsite  vTimerSetTimerID/34 -> vPortEnterCritical/50 : 
       no arg info
  Jump functions of caller  pvTimerGetTimerID/33:
    callsite  pvTimerGetTimerID/33 -> vPortExitCritical/54 : 
       no arg info
    callsite  pvTimerGetTimerID/33 -> vPortEnterCritical/50 : 
       no arg info
  Jump functions of caller  xTimerIsTimerActive/32:
    callsite  xTimerIsTimerActive/32 -> vPortExitCritical/54 : 
       no arg info
    callsite  xTimerIsTimerActive/32 -> vPortEnterCritical/50 : 
       no arg info
  Jump functions of caller  prvCheckForValidListAndQueue/31:
    callsite  prvCheckForValidListAndQueue/31 -> vPortExitCritical/54 : 
       no arg info
    callsite  prvCheckForValidListAndQueue/31 -> vQueueAddToRegistry/53 : 
       no arg info
    callsite  prvCheckForValidListAndQueue/31 -> xQueueGenericCreate/52 : 
       no arg info
    callsite  prvCheckForValidListAndQueue/31 -> vListInitialise/51 : 
       no arg info
    callsite  prvCheckForValidListAndQueue/31 -> vListInitialise/51 : 
       no arg info
    callsite  prvCheckForValidListAndQueue/31 -> vPortEnterCritical/50 : 
       no arg info
  Jump functions of caller  prvSwitchTimerLists/30:
    callsite  prvSwitchTimerLists/30 -> prvProcessExpiredTimer/23 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 4294967295
         value: 0xffffffff, mask: 0x0
         Unknown VR
  Jump functions of caller  prvProcessReceivedCommands/29:
    callsite  prvProcessReceivedCommands/29 -> xQueueReceive/49 : 
       no arg info
    callsite  prvProcessReceivedCommands/29 -> vPortFree/48 : 
       no arg info
    callsite  prvProcessReceivedCommands/29 -> prvInsertTimerInActiveList/28 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  [1, -1]
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 3: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  prvProcessReceivedCommands/29 -> prvReloadTimer/22 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  [1, -1]
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  prvProcessReceivedCommands/29 -> prvInsertTimerInActiveList/28 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  [1, -1]
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 3: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  prvProcessReceivedCommands/29 -> prvSampleTimeNow/27 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  [1, -1]
    callsite  prvProcessReceivedCommands/29 -> uxListRemove/46 : 
       no arg info
    indirect simple callsite, calling param -1, offset 0, for stmt _22 (pxTimer_14);
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  [1, -1]
    indirect simple callsite, calling param -1, offset 0, for stmt _2 (_3, _4);
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  prvInsertTimerInActiveList/28:
    callsite  prvInsertTimerInActiveList/28 -> vListInsert/47 : 
       no arg info
    callsite  prvInsertTimerInActiveList/28 -> prvInsertTimerInActiveList.part.0/60 : 
       param 0: PASS THROUGH: 0, op nop_expr
         Aggregate passed by reference:
           offset: 32, type: TickType_t, PASS THROUGH: 1, op nop_expr
           offset: 128, type: void *, PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  prvSampleTimeNow/27:
    callsite  prvSampleTimeNow/27 -> prvSwitchTimerLists/30 : 
    callsite  prvSampleTimeNow/27 -> xTaskGetTickCount/44 : 
       no arg info
  Jump functions of caller  prvGetNextExpireTime/26:
  Jump functions of caller  prvProcessTimerOrBlockTask/25:
    callsite  prvProcessTimerOrBlockTask/25 -> xTaskResumeAll/42 : 
       no arg info
    callsite  prvProcessTimerOrBlockTask/25 -> xTaskResumeAll/42 : 
       no arg info
    callsite  prvProcessTimerOrBlockTask/25 -> vQueueWaitForMessageRestricted/43 : 
       no arg info
    callsite  prvProcessTimerOrBlockTask/25 -> prvProcessExpiredTimer/23 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  prvProcessTimerOrBlockTask/25 -> xTaskResumeAll/42 : 
       no arg info
    callsite  prvProcessTimerOrBlockTask/25 -> prvSampleTimeNow/27 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  [1, -1]
    callsite  prvProcessTimerOrBlockTask/25 -> vTaskSuspendAll/41 : 
       no arg info
  Jump functions of caller  prvTimerTask/24:
    callsite  prvTimerTask/24 -> prvProcessReceivedCommands/29 : 
    callsite  prvTimerTask/24 -> prvProcessTimerOrBlockTask/25 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
         Unknown VR
    callsite  prvTimerTask/24 -> prvGetNextExpireTime/26 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  [1, -1]
  Jump functions of caller  prvProcessExpiredTimer/23:
    callsite  prvProcessExpiredTimer/23 -> prvReloadTimer/22 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  prvProcessExpiredTimer/23 -> uxListRemove/46 : 
       no arg info
    indirect simple callsite, calling param -1, offset 0, for stmt _6 (pxTimer_9);
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  prvReloadTimer/22:
    callsite  prvReloadTimer/22 -> prvInsertTimerInActiveList/28 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 3: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    indirect aggregate callsite, calling param 0, offset 256, by reference, for stmt _2 (pxTimer_10(D));
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  pcTimerGetName/21:
  Jump functions of caller  xTimerGetExpiryTime/20:
  Jump functions of caller  uxTimerGetReloadMode/19:
    callsite  uxTimerGetReloadMode/19 -> xTimerGetReloadMode/18 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  xTimerGetReloadMode/18:
    callsite  xTimerGetReloadMode/18 -> xTimerGetReloadMode.part.0/61 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  vTimerSetReloadMode/17:
    callsite  vTimerSetReloadMode/17 -> vPortExitCritical/54 : 
       no arg info
    callsite  vTimerSetReloadMode/17 -> vPortEnterCritical/50 : 
       no arg info
  Jump functions of caller  xTimerGetPeriod/16:
  Jump functions of caller  xTimerGetTimerDaemonTaskHandle/15:
  Jump functions of caller  xTimerGenericCommandFromISR/14:
    callsite  xTimerGenericCommandFromISR/14 -> xQueueGenericSendFromISR/59 : 
       no arg info
  Jump functions of caller  xTimerGenericCommandFromTask/13:
    callsite  xTimerGenericCommandFromTask/13 -> xQueueGenericSend/58 : 
       no arg info
    callsite  xTimerGenericCommandFromTask/13 -> xQueueGenericSend/58 : 
       no arg info
    callsite  xTimerGenericCommandFromTask/13 -> xTaskGetSchedulerState/57 : 
       no arg info
  Jump functions of caller  prvInitialiseNewTimer/12:
    callsite  prvInitialiseNewTimer/12 -> vListInitialiseItem/56 : 
       no arg info
    callsite  prvInitialiseNewTimer/12 -> prvCheckForValidListAndQueue/31 : 
  Jump functions of caller  xTimerCreate/11:
    callsite  xTimerCreate/11 -> prvInitialiseNewTimer/12 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
         Unknown VR
       param 3: PASS THROUGH: 3, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 4: PASS THROUGH: 4, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 5: UNKNOWN
         Aggregate passed by reference:
           offset: 320, type: uint8_t, CONST: 0
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  xTimerCreate/11 -> pvPortMalloc/55 : 
       no arg info
  Jump functions of caller  xTimerCreateTimerTask/10:
    callsite  xTimerCreateTimerTask/10 -> xTaskCreate/40 : 
       no arg info
    callsite  xTimerCreateTimerTask/10 -> prvCheckForValidListAndQueue/31 : 

 Propagating constants:

Not considering vTimerSetTimerNumber/38 for cloning; -fipa-cp-clone disabled.
Not considering uxTimerGetTimerNumber/37 for cloning; -fipa-cp-clone disabled.
Not considering xTimerPendFunctionCall/36 for cloning; -fipa-cp-clone disabled.
Not considering xTimerPendFunctionCallFromISR/35 for cloning; -fipa-cp-clone disabled.
Not considering vTimerSetTimerID/34 for cloning; -fipa-cp-clone disabled.
Not considering pvTimerGetTimerID/33 for cloning; -fipa-cp-clone disabled.
Not considering xTimerIsTimerActive/32 for cloning; -fipa-cp-clone disabled.
Not considering prvTimerTask/24 for cloning; -fipa-cp-clone disabled.
Not considering pcTimerGetName/21 for cloning; -fipa-cp-clone disabled.
Not considering xTimerGetExpiryTime/20 for cloning; -fipa-cp-clone disabled.
Not considering uxTimerGetReloadMode/19 for cloning; -fipa-cp-clone disabled.
Not considering xTimerGetReloadMode/18 for cloning; -fipa-cp-clone disabled.
Not considering vTimerSetReloadMode/17 for cloning; -fipa-cp-clone disabled.
Not considering xTimerGetPeriod/16 for cloning; -fipa-cp-clone disabled.
Not considering xTimerGenericCommandFromISR/14 for cloning; -fipa-cp-clone disabled.
Not considering xTimerGenericCommandFromTask/13 for cloning; -fipa-cp-clone disabled.
Not considering xTimerCreate/11 for cloning; -fipa-cp-clone disabled.

overall_size: 542
 - context independent values, size: 10, time_benefit: 1.000000
 - context independent values, size: 21, time_benefit: 1.000000
 - context independent values, size: 33, time_benefit: 1.000000
 - context independent values, size: 18, time_benefit: 0.000000
     Decided to specialize for all known contexts, code not going to grow.

IPA lattices after all propagation:

Lattices:
  Node: xTimerGetReloadMode.part.0/61:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         int VARYING
        AGGS VARIABLE
  Node: prvInsertTimerInActiveList.part.0/60:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         int VARYING
        AGGS VARIABLE
  Node: vTimerResetState/39:
  Node: vTimerSetTimerNumber/38:
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
  Node: uxTimerGetTimerNumber/37:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: xTimerPendFunctionCall/36:
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
  Node: xTimerPendFunctionCallFromISR/35:
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
  Node: vTimerSetTimerID/34:
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
  Node: pvTimerGetTimerID/33:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: xTimerIsTimerActive/32:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: prvCheckForValidListAndQueue/31:
  Node: prvSwitchTimerLists/30:
  Node: prvProcessReceivedCommands/29:
  Node: prvInsertTimerInActiveList/28:
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
               4294967295 [loc_time: 1, loc_size: 22, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         int VARYING
        AGGS VARIABLE
    param [3]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         int VARYING
        AGGS VARIABLE
  Node: prvSampleTimeNow/27:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         BaseType_t * const [1B, +INF]
        AGGS VARIABLE
  Node: prvGetNextExpireTime/26:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         BaseType_t * const [1B, +INF]
        AGGS VARIABLE
  Node: prvProcessTimerOrBlockTask/25:
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
  Node: prvTimerTask/24:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: prvProcessExpiredTimer/23:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         int VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
               4294967295 [loc_time: 1, loc_size: 23, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         int VARYING
        AGGS VARIABLE
  Node: prvReloadTimer/22:
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
               4294967295 [loc_time: 1, loc_size: 20, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         int VARYING
        AGGS VARIABLE
  Node: pcTimerGetName/21:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: xTimerGetExpiryTime/20:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: uxTimerGetReloadMode/19:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: xTimerGetReloadMode/18:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: vTimerSetReloadMode/17:
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
  Node: xTimerGetPeriod/16:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: xTimerGetTimerDaemonTaskHandle/15:
  Node: xTimerGenericCommandFromISR/14:
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
  Node: xTimerGenericCommandFromTask/13:
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
  Node: prvInitialiseNewTimer/12:
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
        ref offset 320: 0 [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
  Node: xTimerCreate/11:
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
  Node: xTimerCreateTimerTask/10:

IPA decision stage:

 - Creating a specialized node of prvInitialiseNewTimer/12 for all known contexts.
Propagated bits info for function prvSampleTimeNow/27:
 param 0: value = 0x0, mask = 0xfffffffc
Propagated bits info for function prvGetNextExpireTime/26:
 param 0: value = 0x0, mask = 0xfffffffc

IPA constant propagation end

Reclaiming functions: prvInitialiseNewTimer/12
Reclaiming variables:
Clearing address taken flags:
Symbol table:

prvInitialiseNewTimer.constprop.0/62 (prvInitialiseNewTimer.constprop) @06a67d20
  Type: function definition analyzed
  Visibility:
  References: 
  Referring: 
  Clone of prvInitialiseNewTimer/12
  Availability: local
  Function flags: count:15867325 (estimated locally) local optimize_size
  Called by: xTimerCreate/11 (574129753 (estimated locally),0.53 per call) 
  Calls: prvCheckForValidListAndQueue/31 (5236217 (estimated locally),0.33 per call) vListInitialiseItem/56 (5236217 (estimated locally),0.33 per call) 
xTimerGetReloadMode.part.0/61 (xTimerGetReloadMode.part.0) @06a67ee0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local split_part optimize_size
  Called by: xTimerGetReloadMode/18 (12216749 (estimated locally),0.53 per call) 
  Calls: vPortEnterCritical/50 (1073741824 (estimated locally),1.00 per call) vPortExitCritical/54 (1073741824 (estimated locally),1.00 per call) 
prvInsertTimerInActiveList.part.0/60 (prvInsertTimerInActiveList.part.0) @06a67540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: pxOverflowTimerList/7 (read) 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local split_part optimize_size
  Called by: prvInsertTimerInActiveList/28 (177167400 (estimated locally),0.16 per call) 
  Calls: vListInsert/47 (1073741824 (estimated locally),1.00 per call) 
xQueueGenericSendFromISR/59 (xQueueGenericSendFromISR) @06a2ad20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: xTimerPendFunctionCallFromISR/35 (1073741824 (estimated locally),1.00 per call) xTimerGenericCommandFromISR/14 (5236217 (estimated locally),0.16 per call) 
  Calls: 
xQueueGenericSend/58 (xQueueGenericSend) @06a2ab60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: xTimerPendFunctionCall/36 (12216749 (estimated locally),0.53 per call) xTimerGenericCommandFromTask/13 (3455903 (estimated locally),0.11 per call) xTimerGenericCommandFromTask/13 (1780314 (estimated locally),0.05 per call) 
  Calls: 
xTaskGetSchedulerState/57 (xTaskGetSchedulerState) @06a2aa80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: xTimerGenericCommandFromTask/13 (5236217 (estimated locally),0.16 per call) 
  Calls: 
vListInitialiseItem/56 (vListInitialiseItem) @06a2a8c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: prvInitialiseNewTimer.constprop.0/62 (5236217 (estimated locally),0.33 per call) 
  Calls: 
pvPortMalloc/55 (pvPortMalloc) @06a2a700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: xTimerCreate/11 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
vPortExitCritical/54 (vPortExitCritical) @06a2a540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: vTimerSetTimerID/34 (12216749 (estimated locally),0.53 per call) pvTimerGetTimerID/33 (12216749 (estimated locally),0.53 per call) xTimerIsTimerActive/32 (12216749 (estimated locally),0.53 per call) xTimerGetReloadMode.part.0/61 (1073741824 (estimated locally),1.00 per call) vTimerSetReloadMode/17 (12216749 (estimated locally),0.53 per call) prvCheckForValidListAndQueue/31 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
vQueueAddToRegistry/53 (vQueueAddToRegistry) @06a2a460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: prvCheckForValidListAndQueue/31 (100070816 (estimated locally),0.09 per call) 
  Calls: 
xQueueGenericCreate/52 (xQueueGenericCreate) @06a2a380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: prvCheckForValidListAndQueue/31 (187153200 (estimated locally),0.17 per call) 
  Calls: 
vListInitialise/51 (vListInitialise) @06a2a1c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: prvCheckForValidListAndQueue/31 (187153200 (estimated locally),0.17 per call) prvCheckForValidListAndQueue/31 (187153200 (estimated locally),0.17 per call) 
  Calls: 
vPortEnterCritical/50 (vPortEnterCritical) @06a2a0e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: vTimerSetTimerID/34 (12216749 (estimated locally),0.53 per call) pvTimerGetTimerID/33 (12216749 (estimated locally),0.53 per call) xTimerIsTimerActive/32 (12216749 (estimated locally),0.53 per call) xTimerGetReloadMode.part.0/61 (1073741824 (estimated locally),1.00 per call) vTimerSetReloadMode/17 (12216749 (estimated locally),0.53 per call) prvCheckForValidListAndQueue/31 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
xQueueReceive/49 (xQueueReceive) @06a07ee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: prvProcessReceivedCommands/29 (1073741824 (estimated locally),17.99 per call) 
  Calls: 
vPortFree/48 (vPortFree) @06a07e00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: prvProcessReceivedCommands/29 (3683310 (estimated locally),0.06 per call) 
  Calls: 
vListInsert/47 (vListInsert) @06a07a80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: prvInsertTimerInActiveList/28 (357019156 (estimated locally),0.33 per call) prvInsertTimerInActiveList.part.0/60 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
uxListRemove/46 (uxListRemove) @06a077e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: prvProcessReceivedCommands/29 (29840394 (estimated locally),0.50 per call) prvProcessExpiredTimer/23 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
xLastTime.0/45 (xLastTime) @06a1a708
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: prvSampleTimeNow/27 (read) prvSampleTimeNow/27 (write) 
  Availability: available
  Varpool flags: initialized
xTaskGetTickCount/44 (xTaskGetTickCount) @06a07460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: prvSampleTimeNow/27 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
vQueueWaitForMessageRestricted/43 (vQueueWaitForMessageRestricted) @06a072a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: prvProcessTimerOrBlockTask/25 (600704867 (estimated locally),0.56 per call) 
  Calls: 
xTaskResumeAll/42 (xTaskResumeAll) @06a071c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: prvProcessTimerOrBlockTask/25 (354334800 (estimated locally),0.33 per call) prvProcessTimerOrBlockTask/25 (600704867 (estimated locally),0.56 per call) prvProcessTimerOrBlockTask/25 (118702158 (estimated locally),0.11 per call) 
  Calls: 
vTaskSuspendAll/41 (vTaskSuspendAll) @06a070e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: prvProcessTimerOrBlockTask/25 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
xTaskCreate/40 (xTaskCreate) @06a00540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: xTimerCreateTimerTask/10 (7758757 (estimated locally),0.53 per call) 
  Calls: 
vTimerResetState/39 (vTimerResetState) @06a00c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: xTimerQueue/8 (write) xTimerTaskHandle/9 (write) 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
vTimerSetTimerNumber/38 (vTimerSetTimerNumber) @06a009a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
uxTimerGetTimerNumber/37 (uxTimerGetTimerNumber) @06a00700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
xTimerPendFunctionCall/36 (xTimerPendFunctionCall) @06a00460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: xTimerQueue/8 (read) 
  Referring: 
  Availability: available
  Function flags: count:22847857 (estimated locally) body optimize_size
  Called by: 
  Calls: xQueueGenericSend/58 (12216749 (estimated locally),0.53 per call) 
xTimerPendFunctionCallFromISR/35 (xTimerPendFunctionCallFromISR) @06a00000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: xTimerQueue/8 (read) 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: xQueueGenericSendFromISR/59 (1073741824 (estimated locally),1.00 per call) 
vTimerSetTimerID/34 (vTimerSetTimerID) @069f67e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:22847857 (estimated locally) body optimize_size
  Called by: 
  Calls: vPortExitCritical/54 (12216749 (estimated locally),0.53 per call) vPortEnterCritical/50 (12216749 (estimated locally),0.53 per call) 
pvTimerGetTimerID/33 (pvTimerGetTimerID) @069f6e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:22847857 (estimated locally) body optimize_size
  Called by: 
  Calls: vPortExitCritical/54 (12216749 (estimated locally),0.53 per call) vPortEnterCritical/50 (12216749 (estimated locally),0.53 per call) 
xTimerIsTimerActive/32 (xTimerIsTimerActive) @069f6a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:22847857 (estimated locally) body optimize_size
  Called by: 
  Calls: vPortExitCritical/54 (12216749 (estimated locally),0.53 per call) vPortEnterCritical/50 (12216749 (estimated locally),0.53 per call) 
prvCheckForValidListAndQueue/31 (prvCheckForValidListAndQueue) @069f6700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: xTimerQueue/8 (read) xActiveTimerList1/4 (addr) xActiveTimerList2/5 (addr) pxCurrentTimerList/6 (write) xActiveTimerList1/4 (addr) pxOverflowTimerList/7 (write) xActiveTimerList2/5 (addr) xTimerQueue/8 (write) 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: prvInitialiseNewTimer.constprop.0/62 (5236217 (estimated locally),0.33 per call) xTimerCreateTimerTask/10 (14510487 (estimated locally),1.00 per call) 
  Calls: vPortExitCritical/54 (1073741824 (estimated locally),1.00 per call) vQueueAddToRegistry/53 (100070816 (estimated locally),0.09 per call) xQueueGenericCreate/52 (187153200 (estimated locally),0.17 per call) vListInitialise/51 (187153200 (estimated locally),0.17 per call) vListInitialise/51 (187153200 (estimated locally),0.17 per call) vPortEnterCritical/50 (1073741824 (estimated locally),1.00 per call) 
prvSwitchTimerLists/30 (prvSwitchTimerLists) @069f6460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: pxCurrentTimerList/6 (read) pxOverflowTimerList/7 (read) pxCurrentTimerList/6 (write) pxOverflowTimerList/7 (write) 
  Referring: 
  Availability: local
  Function flags: count:118111600 (estimated locally) body local optimize_size
  Called by: prvSampleTimeNow/27 (354334800 (estimated locally),0.33 per call) 
  Calls: prvProcessExpiredTimer/23 (955630225 (estimated locally),8.09 per call) 
prvProcessReceivedCommands/29 (prvProcessReceivedCommands) @069f60e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: xTimerQueue/8 (read) 
  Referring: 
  Availability: local
  Function flags: count:59669683 (estimated locally) body local optimize_size
  Called by: prvTimerTask/24 (1073741824 (estimated locally),101.00 per call) 
  Calls: xQueueReceive/49 (1073741824 (estimated locally),17.99 per call) vPortFree/48 (3683310 (estimated locally),0.06 per call) prvInsertTimerInActiveList/28 (10547661 (estimated locally),0.18 per call) prvReloadTimer/22 (1841655 (estimated locally),0.03 per call) prvInsertTimerInActiveList/28 (11161546 (estimated locally),0.19 per call) prvSampleTimeNow/27 (55807731 (estimated locally),0.94 per call) uxListRemove/46 (29840394 (estimated locally),0.50 per call) 
   Indirect call(5580773 (estimated locally),0.09 per call)  Num speculative call targets: 0
   Indirect call(416021267 (estimated locally),6.97 per call)  Num speculative call targets: 0
prvInsertTimerInActiveList/28 (prvInsertTimerInActiveList) @069eac40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: pxCurrentTimerList/6 (read) 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: prvProcessReceivedCommands/29 (10547661 (estimated locally),0.18 per call) prvProcessReceivedCommands/29 (11161546 (estimated locally),0.19 per call) prvReloadTimer/22 (1073741824 (estimated locally),9.09 per call) 
  Calls: vListInsert/47 (357019156 (estimated locally),0.33 per call) prvInsertTimerInActiveList.part.0/60 (177167400 (estimated locally),0.16 per call) 
prvSampleTimeNow/27 (prvSampleTimeNow) @069eae00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: xLastTime.0/45 (read) xLastTime.0/45 (write) 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: prvProcessReceivedCommands/29 (55807731 (estimated locally),0.94 per call) prvProcessTimerOrBlockTask/25 (1073741824 (estimated locally),1.00 per call) 
  Calls: prvSwitchTimerLists/30 (354334800 (estimated locally),0.33 per call) xTaskGetTickCount/44 (1073741824 (estimated locally),1.00 per call) 
prvGetNextExpireTime/26 (prvGetNextExpireTime) @069eab60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: pxCurrentTimerList/6 (read) 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: prvTimerTask/24 (1073741824 (estimated locally),101.00 per call) 
  Calls: 
prvProcessTimerOrBlockTask/25 (prvProcessTimerOrBlockTask) @069ea7e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: pxOverflowTimerList/7 (read) xTimerQueue/8 (read) 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: prvTimerTask/24 (1073741824 (estimated locally),101.00 per call) 
  Calls: xTaskResumeAll/42 (354334800 (estimated locally),0.33 per call) xTaskResumeAll/42 (600704867 (estimated locally),0.56 per call) vQueueWaitForMessageRestricted/43 (600704867 (estimated locally),0.56 per call) prvProcessExpiredTimer/23 (118702158 (estimated locally),0.11 per call) xTaskResumeAll/42 (118702158 (estimated locally),0.11 per call) prvSampleTimeNow/27 (1073741824 (estimated locally),1.00 per call) vTaskSuspendAll/41 (1073741824 (estimated locally),1.00 per call) 
prvTimerTask/24 (prvTimerTask) @069ea380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: xTimerCreateTimerTask/10 (addr) 
  Availability: available
  Function flags: count:10631108 (estimated locally) body executed_once optimize_size
  Called by: 
  Calls: prvProcessReceivedCommands/29 (1073741824 (estimated locally),101.00 per call) prvProcessTimerOrBlockTask/25 (1073741824 (estimated locally),101.00 per call) prvGetNextExpireTime/26 (1073741824 (estimated locally),101.00 per call) 
prvProcessExpiredTimer/23 (prvProcessExpiredTimer) @069ea0e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: pxCurrentTimerList/6 (read) 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: prvProcessTimerOrBlockTask/25 (118702158 (estimated locally),0.11 per call) prvSwitchTimerLists/30 (955630225 (estimated locally),8.09 per call) 
  Calls: prvReloadTimer/22 (354334800 (estimated locally),0.33 per call) uxListRemove/46 (1073741824 (estimated locally),1.00 per call) 
   Indirect call(1073741824 (estimated locally),1.00 per call)  Num speculative call targets: 0
prvReloadTimer/22 (prvReloadTimer) @069aaa80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:118111600 (estimated locally) body local optimize_size
  Called by: prvProcessReceivedCommands/29 (1841655 (estimated locally),0.03 per call) prvProcessExpiredTimer/23 (354334800 (estimated locally),0.33 per call) 
  Calls: prvInsertTimerInActiveList/28 (1073741824 (estimated locally),9.09 per call) 
   Indirect call(955630225 (estimated locally),8.09 per call)  of param:0 loaded from aggregate passed by reference at offset 256 (vptr maybe changed) Num speculative call targets: 0
pcTimerGetName/21 (pcTimerGetName) @069aa460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:35437027 (estimated locally) body optimize_size
  Called by: 
  Calls: 
xTimerGetExpiryTime/20 (xTimerGetExpiryTime) @069aad20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:35437027 (estimated locally) body optimize_size
  Called by: 
  Calls: 
uxTimerGetReloadMode/19 (uxTimerGetReloadMode) @069aa9a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: xTimerGetReloadMode/18 (1073741824 (estimated locally),1.00 per call) 
xTimerGetReloadMode/18 (xTimerGetReloadMode) @069aa700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:22847857 (estimated locally) body optimize_size
  Called by: uxTimerGetReloadMode/19 (1073741824 (estimated locally),1.00 per call) 
  Calls: xTimerGetReloadMode.part.0/61 (12216749 (estimated locally),0.53 per call) 
vTimerSetReloadMode/17 (vTimerSetReloadMode) @069aa380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:22847857 (estimated locally) body optimize_size
  Called by: 
  Calls: vPortExitCritical/54 (12216749 (estimated locally),0.53 per call) vPortEnterCritical/50 (12216749 (estimated locally),0.53 per call) 
xTimerGetPeriod/16 (xTimerGetPeriod) @069aa000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:35437027 (estimated locally) body optimize_size
  Called by: 
  Calls: 
xTimerGetTimerDaemonTaskHandle/15 (xTimerGetTimerDaemonTaskHandle) @069bd460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: xTimerTaskHandle/9 (read) 
  Referring: 
  Availability: available
  Function flags: count:35437027 (estimated locally) body optimize_size
  Called by: 
  Calls: 
xTimerGenericCommandFromISR/14 (xTimerGenericCommandFromISR) @069bdee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: xTimerQueue/8 (read) 
  Referring: 
  Availability: available
  Function flags: count:32382296 (estimated locally) body optimize_size
  Called by: 
  Calls: xQueueGenericSendFromISR/59 (5236217 (estimated locally),0.16 per call) 
xTimerGenericCommandFromTask/13 (xTimerGenericCommandFromTask) @069bda80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: xTimerQueue/8 (read) xTimerQueue/8 (read) xTimerQueue/8 (read) 
  Referring: 
  Availability: available
  Function flags: count:32382296 (estimated locally) body optimize_size
  Called by: 
  Calls: xQueueGenericSend/58 (3455903 (estimated locally),0.11 per call) xQueueGenericSend/58 (1780314 (estimated locally),0.05 per call) xTaskGetSchedulerState/57 (5236217 (estimated locally),0.16 per call) 
prvInitialiseNewTimer/12 (prvInitialiseNewTimer) @069bd620
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:15867325 (estimated locally) body optimize_size
  Called by: 
  Calls: 
xTimerCreate/11 (xTimerCreate) @069bd380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: prvInitialiseNewTimer.constprop.0/62 (574129753 (estimated locally),0.53 per call) pvPortMalloc/55 (1073741824 (estimated locally),1.00 per call) 
xTimerCreateTimerTask/10 (xTimerCreateTimerTask) @069bd0e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: xTimerQueue/8 (read) prvTimerTask/24 (addr) xTimerTaskHandle/9 (addr) 
  Referring: 
  Availability: available
  Function flags: count:14510487 (estimated locally) body optimize_size
  Called by: 
  Calls: xTaskCreate/40 (7758757 (estimated locally),0.53 per call) prvCheckForValidListAndQueue/31 (14510487 (estimated locally),1.00 per call) 
xTimerTaskHandle/9 (xTimerTaskHandle) @069b2cf0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: xTimerCreateTimerTask/10 (addr) xTimerGetTimerDaemonTaskHandle/15 (read) vTimerResetState/39 (write) 
  Availability: available
  Varpool flags: initialized
xTimerQueue/8 (xTimerQueue) @069b2ca8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: prvProcessReceivedCommands/29 (read) xTimerPendFunctionCallFromISR/35 (read) xTimerPendFunctionCall/36 (read) xTimerGenericCommandFromTask/13 (read) xTimerGenericCommandFromTask/13 (read) xTimerGenericCommandFromISR/14 (read) prvProcessTimerOrBlockTask/25 (read) xTimerCreateTimerTask/10 (read) xTimerGenericCommandFromTask/13 (read) prvCheckForValidListAndQueue/31 (write) prvCheckForValidListAndQueue/31 (read) vTimerResetState/39 (write) 
  Availability: available
  Varpool flags: initialized
pxOverflowTimerList/7 (pxOverflowTimerList) @069b2c18
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: prvInsertTimerInActiveList.part.0/60 (read) prvSwitchTimerLists/30 (write) prvProcessTimerOrBlockTask/25 (read) prvSwitchTimerLists/30 (read) prvCheckForValidListAndQueue/31 (write) 
  Availability: available
  Varpool flags:
pxCurrentTimerList/6 (pxCurrentTimerList) @069b2b88
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: prvSwitchTimerLists/30 (write) prvProcessExpiredTimer/23 (read) prvInsertTimerInActiveList/28 (read) prvGetNextExpireTime/26 (read) prvSwitchTimerLists/30 (read) prvCheckForValidListAndQueue/31 (write) 
  Availability: available
  Varpool flags:
xActiveTimerList2/5 (xActiveTimerList2) @069b2af8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: prvCheckForValidListAndQueue/31 (addr) prvCheckForValidListAndQueue/31 (addr) 
  Availability: available
  Varpool flags:
xActiveTimerList1/4 (xActiveTimerList1) @069b2a68
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: prvCheckForValidListAndQueue/31 (addr) prvCheckForValidListAndQueue/31 (addr) 
  Availability: available
  Varpool flags:

;; Function prvCheckForValidListAndQueue (prvCheckForValidListAndQueue, funcdef_no=25, decl_uid=6518, cgraph_uid=26, symbol_order=31)

Modification phase of node prvCheckForValidListAndQueue/31
prvCheckForValidListAndQueue ()
{
  struct QueueDefinition * xTimerQueue.17_1;
  struct QueueDefinition * _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  vPortEnterCritical ();
  # DEBUG BEGIN_STMT
  xTimerQueue.17_1 = xTimerQueue;
  if (xTimerQueue.17_1 == 0B)
    goto <bb 3>; [17.43%]
  else
    goto <bb 5>; [82.57%]

  <bb 3> [local count: 187153200]:
  # DEBUG BEGIN_STMT
  vListInitialise (&xActiveTimerList1);
  # DEBUG BEGIN_STMT
  vListInitialise (&xActiveTimerList2);
  # DEBUG BEGIN_STMT
  pxCurrentTimerList = &xActiveTimerList1;
  # DEBUG BEGIN_STMT
  pxOverflowTimerList = &xActiveTimerList2;
  # DEBUG BEGIN_STMT
  _2 = xQueueGenericCreate (10, 16, 0);
  xTimerQueue = _2;
  # DEBUG BEGIN_STMT
  if (_2 != 0B)
    goto <bb 4>; [53.47%]
  else
    goto <bb 5>; [46.53%]

  <bb 4> [local count: 100070816]:
  # DEBUG BEGIN_STMT
  vQueueAddToRegistry (_2, "TmrQ");

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  vPortExitCritical ();
  return;

}



;; Function prvInsertTimerInActiveList (prvInsertTimerInActiveList, funcdef_no=22, decl_uid=6527, cgraph_uid=23, symbol_order=28)

Modification phase of node prvInsertTimerInActiveList/28
prvInsertTimerInActiveList (struct Timer_t * const pxTimer, const TickType_t xNextExpiryTime, const TickType_t xTimeNow, const TickType_t xCommandTime)
{
  BaseType_t xProcessTimerNow;
  long unsigned int _1;
  long unsigned int _2;
  struct List_t * pxCurrentTimerList.15_3;
  struct ListItem_t * _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG xProcessTimerNow => 0
  # DEBUG BEGIN_STMT
  pxTimer_8(D)->xTimerListItem.xItemValue = xNextExpiryTime_9(D);
  # DEBUG BEGIN_STMT
  pxTimer_8(D)->xTimerListItem.pvOwner = pxTimer_8(D);
  # DEBUG BEGIN_STMT
  if (xNextExpiryTime_9(D) <= xTimeNow_12(D))
    goto <bb 3>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _1 = xTimeNow_12(D) - xCommandTime_13(D);
  _2 = pxTimer_8(D)->xTimerPeriodInTicks;
  if (_1 >= _2)
    goto <bb 8>; [67.00%]
  else
    goto <bb 4>; [33.00%]

  <bb 4> [local count: 177167400]:
  # DEBUG D#1 => xNextExpiryTime_9(D)
  # DEBUG D#2 => xTimeNow_12(D)
  # DEBUG D#3 => xCommandTime_13(D)
  xProcessTimerNow_16 = prvInsertTimerInActiveList.part.0 (pxTimer_8(D));
  goto <bb 8>; [100.00%]

  <bb 5> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  if (xTimeNow_12(D) < xCommandTime_13(D))
    goto <bb 6>; [67.00%]
  else
    goto <bb 7>; [33.00%]

  <bb 6> [local count: 359703512]:
  if (xNextExpiryTime_9(D) >= xCommandTime_13(D))
    goto <bb 8>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 7> [local count: 357019156]:
  # DEBUG BEGIN_STMT
  pxCurrentTimerList.15_3 = pxCurrentTimerList;
  _4 = &pxTimer_8(D)->xTimerListItem;
  vListInsert (pxCurrentTimerList.15_3, _4);

  <bb 8> [local count: 1073741824]:
  # xProcessTimerNow_5 = PHI <xProcessTimerNow_16(4), 1(6), 0(7), 1(3)>
  # DEBUG xProcessTimerNow => xProcessTimerNow_5
  # DEBUG BEGIN_STMT
  return xProcessTimerNow_5;

}



;; Function prvReloadTimer (prvReloadTimer, funcdef_no=16, decl_uid=6531, cgraph_uid=17, symbol_order=22)

Modification phase of node prvReloadTimer/22
prvReloadTimer (struct Timer_t * const pxTimer, TickType_t xExpiredTime, const TickType_t xTimeNow)
{
  long unsigned int _1;
  void (*<T691>) (struct tmrTimerControl *) _2;
  long unsigned int _3;
  long unsigned int _4;
  long int _5;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 955630225]:
  # DEBUG BEGIN_STMT
  _1 = pxTimer_10(D)->xTimerPeriodInTicks;
  xExpiredTime_13 = _1 + xExpiredTime_6;
  # DEBUG xExpiredTime => xExpiredTime_13
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _2 = pxTimer_10(D)->pxCallbackFunction;
  _2 (pxTimer_10(D));

  <bb 4> [local count: 1073741824]:
  # xExpiredTime_6 = PHI <xExpiredTime_8(D)(2), xExpiredTime_13(3)>
  # DEBUG xExpiredTime => xExpiredTime_6
  # DEBUG BEGIN_STMT
  _3 = pxTimer_10(D)->xTimerPeriodInTicks;
  _4 = _3 + xExpiredTime_6;
  _5 = prvInsertTimerInActiveList (pxTimer_10(D), _4, xTimeNow_11(D), xExpiredTime_6);
  if (_5 != 0)
    goto <bb 3>; [89.00%]
  else
    goto <bb 5>; [11.00%]

  <bb 5> [local count: 118111600]:
  return;

}



;; Function prvProcessExpiredTimer (prvProcessExpiredTimer, funcdef_no=17, decl_uid=6534, cgraph_uid=18, symbol_order=23)

Modification phase of node prvProcessExpiredTimer/23
prvProcessExpiredTimer (const TickType_t xNextExpireTime, const TickType_t xTimeNow)
{
  struct Timer_t * const pxTimer;
  struct List_t * pxCurrentTimerList.13_1;
  struct xLIST_ITEM * _2;
  struct ListItem_t * _3;
  unsigned char _4;
  unsigned char _5;
  void (*<T691>) (struct tmrTimerControl *) _6;
  unsigned char _16;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  pxCurrentTimerList.13_1 = pxCurrentTimerList;
  _2 = pxCurrentTimerList.13_1->xListEnd.pxNext;
  pxTimer_9 = _2->pvOwner;
  # DEBUG pxTimer => pxTimer_9
  # DEBUG BEGIN_STMT
  _3 = &pxTimer_9->xTimerListItem;
  uxListRemove (_3);
  # DEBUG BEGIN_STMT
  _4 = pxTimer_9->ucStatus;
  _16 = _4 & 4;
  if (_16 != 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334800]:
  # DEBUG BEGIN_STMT
  prvReloadTimer (pxTimer_9, xNextExpireTime_12(D), xTimeNow_13(D));
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 719407025]:
  # DEBUG BEGIN_STMT
  _5 = _4 & 254;
  pxTimer_9->ucStatus = _5;

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _6 = pxTimer_9->pxCallbackFunction;
  _6 (pxTimer_9);
  return;

}



;; Function prvSampleTimeNow (prvSampleTimeNow, funcdef_no=21, decl_uid=6538, cgraph_uid=22, symbol_order=27)

Modification phase of node prvSampleTimeNow/27
Adjusting mask for param 0 to 0xfffffffc
Adjusting align: 4, misalign: 0
Setting nonnull for 0
prvSampleTimeNow (BaseType_t * const pxTimerListsWereSwitched)
{
  static TickType_t xLastTime = 0;
  TickType_t xTimeNow;
  long unsigned int xLastTime.9_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  xTimeNow_5 = xTaskGetTickCount ();
  # DEBUG xTimeNow => xTimeNow_5
  # DEBUG BEGIN_STMT
  xLastTime.9_1 = xLastTime;
  if (xLastTime.9_1 > xTimeNow_5)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334800]:
  # DEBUG BEGIN_STMT
  prvSwitchTimerLists ();
  # DEBUG BEGIN_STMT
  *pxTimerListsWereSwitched_6(D) = 1;
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 719407025]:
  # DEBUG BEGIN_STMT
  *pxTimerListsWereSwitched_6(D) = 0;

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  xLastTime = xTimeNow_5;
  # DEBUG BEGIN_STMT
  return xTimeNow_5;

}



;; Function prvTimerTask (prvTimerTask, funcdef_no=18, decl_uid=6520, cgraph_uid=19, symbol_order=24) (executed once)

Modification phase of node prvTimerTask/24
prvTimerTask (void * pvParameters)
{
  BaseType_t xListWasEmpty;
  TickType_t xNextExpireTime;
  long int xListWasEmpty.1_1;

  <bb 2> [local count: 10631108]:

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  xNextExpireTime_5 = prvGetNextExpireTime (&xListWasEmpty);
  # DEBUG xNextExpireTime => xNextExpireTime_5
  # DEBUG BEGIN_STMT
  xListWasEmpty.1_1 = xListWasEmpty;
  prvProcessTimerOrBlockTask (xNextExpireTime_5, xListWasEmpty.1_1);
  # DEBUG BEGIN_STMT
  prvProcessReceivedCommands ();
  # DEBUG BEGIN_STMT

  <bb 4> [local count: 1073741824]:
  goto <bb 3>; [100.00%]

}



;; Function xTimerCreateTimerTask (xTimerCreateTimerTask, funcdef_no=4, decl_uid=6466, cgraph_uid=5, symbol_order=10)

Modification phase of node xTimerCreateTimerTask/10
xTimerCreateTimerTask ()
{
  BaseType_t xReturn;
  struct QueueDefinition * xTimerQueue.0_1;

  <bb 2> [local count: 14510487]:
  # DEBUG BEGIN_STMT
  # DEBUG xReturn => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  prvCheckForValidListAndQueue ();
  # DEBUG BEGIN_STMT
  xTimerQueue.0_1 = xTimerQueue;
  if (xTimerQueue.0_1 != 0B)
    goto <bb 4>; [53.47%]
  else
    goto <bb 5>; [46.53%]

  <bb 4> [local count: 7758757]:
  # DEBUG BEGIN_STMT
  xReturn_5 = xTaskCreate (prvTimerTask, "Tmr Svc", 180, 0B, 2, &xTimerTaskHandle);
  # DEBUG xReturn => xReturn_5
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (xReturn_5 == 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 5> [local count: 10631108]:
  # DEBUG xReturn => NULL
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i " :  :  : "memory");

  <bb 6> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 8> [local count: 1073741824]:
  goto <bb 6>; [100.00%]

  <bb 7> [local count: 3879379]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return xReturn_5;

}



;; Function xTimerCreate (xTimerCreate, funcdef_no=5, decl_uid=6432, cgraph_uid=6, symbol_order=11)

Modification phase of node xTimerCreate/11
xTimerCreate (const char * const pcTimerName, const TickType_t xTimerPeriodInTicks, const BaseType_t xAutoReload, void * const pvTimerID, void (*TimerCallbackFunction_t) (struct tmrTimerControl *) pxCallbackFunction)
{
  struct Timer_t * pxNewTimer;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  pxNewTimer_4 = pvPortMalloc (44);
  # DEBUG pxNewTimer => pxNewTimer_4
  # DEBUG BEGIN_STMT
  if (pxNewTimer_4 != 0B)
    goto <bb 3>; [53.47%]
  else
    goto <bb 4>; [46.53%]

  <bb 3> [local count: 574129753]:
  # DEBUG BEGIN_STMT
  pxNewTimer_4->ucStatus = 0;
  # DEBUG BEGIN_STMT
  prvInitialiseNewTimer (pcTimerName_6(D), xTimerPeriodInTicks_7(D), xAutoReload_8(D), pvTimerID_9(D), pxCallbackFunction_10(D), pxNewTimer_4);

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return pxNewTimer_4;

}



;; Function xTimerGenericCommandFromTask (xTimerGenericCommandFromTask, funcdef_no=7, decl_uid=6472, cgraph_uid=8, symbol_order=13)

Modification phase of node xTimerGenericCommandFromTask/13
xTimerGenericCommandFromTask (struct tmrTimerControl * xTimer, const BaseType_t xCommandID, const TickType_t xOptionalValue, BaseType_t * const pxHigherPriorityTaskWoken, const TickType_t xTicksToWait)
{
  struct DaemonTaskMessage_t xMessage;
  BaseType_t xReturn;
  struct QueueDefinition * xTimerQueue.20_1;
  long int _2;
  struct QueueDefinition * xTimerQueue.21_3;
  struct QueueDefinition * xTimerQueue.22_4;

  <bb 2> [local count: 32382296]:
  # DEBUG BEGIN_STMT
  # DEBUG xReturn => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (xTimer_7(D) == 0B)
    goto <bb 3>; [30.00%]
  else
    goto <bb 5>; [70.00%]

  <bb 3> [local count: 9714689]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i " :  :  : "memory");

  <bb 4> [local count: 981183493]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 13> [local count: 981183493]:
  goto <bb 4>; [100.00%]

  <bb 5> [local count: 22667608]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  xTimerQueue.20_1 = xTimerQueue;
  if (xTimerQueue.20_1 != 0B)
    goto <bb 6>; [70.00%]
  else
    goto <bb 12>; [30.00%]

  <bb 6> [local count: 15867325]:
  # DEBUG BEGIN_STMT
  xMessage.xMessageID = xCommandID_9(D);
  # DEBUG BEGIN_STMT
  xMessage.u.xTimerParameters.xMessageValue = xOptionalValue_11(D);
  # DEBUG BEGIN_STMT
  xMessage.u.xTimerParameters.pxTimer = xTimer_7(D);
  # DEBUG BEGIN_STMT
  if (xCommandID_9(D) > 5)
    goto <bb 7>; [67.00%]
  else
    goto <bb 9>; [33.00%]

  <bb 7> [local count: 10631108]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i " :  :  : "memory");

  <bb 8> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 14> [local count: 1073741824]:
  goto <bb 8>; [100.00%]

  <bb 9> [local count: 5236217]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _2 = xTaskGetSchedulerState ();
  if (_2 == 2)
    goto <bb 10>; [34.00%]
  else
    goto <bb 11>; [66.00%]

  <bb 10> [local count: 1780314]:
  # DEBUG BEGIN_STMT
  xTimerQueue.21_3 = xTimerQueue;
  xReturn_19 = xQueueGenericSend (xTimerQueue.21_3, &xMessage, xTicksToWait_17(D), 0);
  # DEBUG xReturn => xReturn_19
  goto <bb 12>; [100.00%]

  <bb 11> [local count: 3455903]:
  # DEBUG BEGIN_STMT
  xTimerQueue.22_4 = xTimerQueue;
  xReturn_16 = xQueueGenericSend (xTimerQueue.22_4, &xMessage, 0, 0);
  # DEBUG xReturn => xReturn_16

  <bb 12> [local count: 12036500]:
  # xReturn_5 = PHI <0(5), xReturn_19(10), xReturn_16(11)>
  # DEBUG xReturn => xReturn_5
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  xMessage ={v} {CLOBBER};
  return xReturn_5;

}



;; Function xTimerGenericCommandFromISR (xTimerGenericCommandFromISR, funcdef_no=8, decl_uid=6478, cgraph_uid=9, symbol_order=14)

Modification phase of node xTimerGenericCommandFromISR/14
xTimerGenericCommandFromISR (struct tmrTimerControl * xTimer, const BaseType_t xCommandID, const TickType_t xOptionalValue, BaseType_t * const pxHigherPriorityTaskWoken, const TickType_t xTicksToWait)
{
  struct DaemonTaskMessage_t xMessage;
  BaseType_t xReturn;
  struct QueueDefinition * xTimerQueue.23_1;

  <bb 2> [local count: 32382296]:
  # DEBUG BEGIN_STMT
  # DEBUG xReturn => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (xTimer_4(D) == 0B)
    goto <bb 3>; [30.00%]
  else
    goto <bb 5>; [70.00%]

  <bb 3> [local count: 9714689]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i " :  :  : "memory");

  <bb 4> [local count: 981183493]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 11> [local count: 981183493]:
  goto <bb 4>; [100.00%]

  <bb 5> [local count: 22667608]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  xTimerQueue.23_1 = xTimerQueue;
  if (xTimerQueue.23_1 != 0B)
    goto <bb 6>; [70.00%]
  else
    goto <bb 10>; [30.00%]

  <bb 6> [local count: 15867325]:
  # DEBUG BEGIN_STMT
  xMessage.xMessageID = xCommandID_6(D);
  # DEBUG BEGIN_STMT
  xMessage.u.xTimerParameters.xMessageValue = xOptionalValue_8(D);
  # DEBUG BEGIN_STMT
  xMessage.u.xTimerParameters.pxTimer = xTimer_4(D);
  # DEBUG BEGIN_STMT
  if (xCommandID_6(D) <= 5)
    goto <bb 7>; [67.00%]
  else
    goto <bb 9>; [33.00%]

  <bb 7> [local count: 10631108]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i " :  :  : "memory");

  <bb 8> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 12> [local count: 1073741824]:
  goto <bb 8>; [100.00%]

  <bb 9> [local count: 5236217]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  xReturn_13 = xQueueGenericSendFromISR (xTimerQueue.23_1, &xMessage, pxHigherPriorityTaskWoken_11(D), 0);
  # DEBUG xReturn => xReturn_13

  <bb 10> [local count: 12036500]:
  # xReturn_2 = PHI <0(5), xReturn_13(9)>
  # DEBUG xReturn => xReturn_2
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  xMessage ={v} {CLOBBER};
  return xReturn_2;

}



;; Function xTimerGetTimerDaemonTaskHandle (xTimerGetTimerDaemonTaskHandle, funcdef_no=9, decl_uid=6441, cgraph_uid=10, symbol_order=15)

Modification phase of node xTimerGetTimerDaemonTaskHandle/15
xTimerGetTimerDaemonTaskHandle ()
{
  struct tskTaskControlBlock * xTimerTaskHandle.25_1;

  <bb 2> [local count: 35437027]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  xTimerTaskHandle.25_1 = xTimerTaskHandle;
  if (xTimerTaskHandle.25_1 == 0B)
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

  <bb 6> [local count: 1073741824]:
  goto <bb 4>; [100.00%]

  <bb 5> [local count: 24805919]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return xTimerTaskHandle.25_1;

}



;; Function xTimerGetPeriod (xTimerGetPeriod, funcdef_no=10, decl_uid=6462, cgraph_uid=11, symbol_order=16)

Modification phase of node xTimerGetPeriod/16
xTimerGetPeriod (struct tmrTimerControl * xTimer)
{
  TickType_t _3;

  <bb 2> [local count: 35437027]:
  # DEBUG BEGIN_STMT
  # DEBUG pxTimer => xTimer_1(D)
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (xTimer_1(D) == 0B)
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

  <bb 6> [local count: 1073741824]:
  goto <bb 4>; [100.00%]

  <bb 5> [local count: 24805919]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _3 = MEM[(struct Timer_t *)xTimer_1(D)].xTimerPeriodInTicks;
  return _3;

}



;; Function vTimerSetReloadMode (vTimerSetReloadMode, funcdef_no=11, decl_uid=6456, cgraph_uid=12, symbol_order=17)

Modification phase of node vTimerSetReloadMode/17
vTimerSetReloadMode (struct tmrTimerControl * xTimer, const BaseType_t xAutoReload)
{
  unsigned char _1;
  unsigned char _2;
  unsigned char _3;
  unsigned char _4;

  <bb 2> [local count: 22847857]:
  # DEBUG BEGIN_STMT
  # DEBUG pxTimer => xTimer_6(D)
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (xTimer_6(D) == 0B)
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

  <bb 9> [local count: 1073741824]:
  goto <bb 4>; [100.00%]

  <bb 5> [local count: 12216749]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  vPortEnterCritical ();
  # DEBUG BEGIN_STMT
  if (xAutoReload_9(D) != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 6> [local count: 6108375]:
  # DEBUG BEGIN_STMT
  _1 = MEM[(struct Timer_t *)xTimer_6(D)].ucStatus;
  _2 = _1 | 4;
  MEM[(struct Timer_t *)xTimer_6(D)].ucStatus = _2;
  goto <bb 8>; [100.00%]

  <bb 7> [local count: 6108375]:
  # DEBUG BEGIN_STMT
  _3 = MEM[(struct Timer_t *)xTimer_6(D)].ucStatus;
  _4 = _3 & 251;
  MEM[(struct Timer_t *)xTimer_6(D)].ucStatus = _4;

  <bb 8> [local count: 12216749]:
  # DEBUG BEGIN_STMT
  vPortExitCritical ();
  # DEBUG BEGIN_STMT
  return;

}



;; Function xTimerGetReloadMode (xTimerGetReloadMode, funcdef_no=12, decl_uid=6458, cgraph_uid=13, symbol_order=18)

Modification phase of node xTimerGetReloadMode/18
xTimerGetReloadMode (struct tmrTimerControl * xTimer)
{
  BaseType_t D.6991;

  <bb 2> [local count: 22847857]:
  # DEBUG BEGIN_STMT
  # DEBUG pxTimer => xTimer_3(D)
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (xTimer_3(D) == 0B)
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
  _1 = xTimerGetReloadMode.part.0 (xTimer_3(D));
  return _1;

}



;; Function uxTimerGetReloadMode (uxTimerGetReloadMode, funcdef_no=13, decl_uid=6460, cgraph_uid=14, symbol_order=19)

Modification phase of node uxTimerGetReloadMode/19
uxTimerGetReloadMode (struct tmrTimerControl * xTimer)
{
  UBaseType_t uxReturn;
  long int _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = xTimerGetReloadMode (xTimer_3(D));
  uxReturn_5 = (UBaseType_t) _1;
  # DEBUG uxReturn => uxReturn_5
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return uxReturn_5;

}



;; Function xTimerGetExpiryTime (xTimerGetExpiryTime, funcdef_no=14, decl_uid=6464, cgraph_uid=15, symbol_order=20)

Modification phase of node xTimerGetExpiryTime/20
xTimerGetExpiryTime (struct tmrTimerControl * xTimer)
{
  TickType_t xReturn;

  <bb 2> [local count: 35437027]:
  # DEBUG BEGIN_STMT
  # DEBUG pxTimer => xTimer_1(D)
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (xTimer_1(D) == 0B)
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

  <bb 6> [local count: 1073741824]:
  goto <bb 4>; [100.00%]

  <bb 5> [local count: 24805919]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  xReturn_3 = MEM[(struct Timer_t *)xTimer_1(D)].xTimerListItem.xItemValue;
  # DEBUG xReturn => xReturn_3
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return xReturn_3;

}



;; Function pcTimerGetName (pcTimerGetName, funcdef_no=15, decl_uid=6453, cgraph_uid=16, symbol_order=21)

Modification phase of node pcTimerGetName/21
pcTimerGetName (struct tmrTimerControl * xTimer)
{
  const char * _3;

  <bb 2> [local count: 35437027]:
  # DEBUG BEGIN_STMT
  # DEBUG pxTimer => xTimer_1(D)
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (xTimer_1(D) == 0B)
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

  <bb 6> [local count: 1073741824]:
  goto <bb 4>; [100.00%]

  <bb 5> [local count: 24805919]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _3 = MEM[(struct Timer_t *)xTimer_1(D)].pcTimerName;
  return _3;

}



;; Function xTimerIsTimerActive (xTimerIsTimerActive, funcdef_no=26, decl_uid=6439, cgraph_uid=27, symbol_order=32)

Modification phase of node xTimerIsTimerActive/32
xTimerIsTimerActive (struct tmrTimerControl * xTimer)
{
  unsigned char _1;
  long int _2;
  unsigned char _4;

  <bb 2> [local count: 22847857]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG pxTimer => xTimer_3(D)
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (xTimer_3(D) == 0B)
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
  _1 = MEM[(struct Timer_t *)xTimer_3(D)].ucStatus;
  _4 = _1 & 1;
  _2 = (long int) _4;
  # DEBUG xReturn => _2
  # DEBUG BEGIN_STMT
  vPortExitCritical ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return _2;

}



;; Function pvTimerGetTimerID (pvTimerGetTimerID, funcdef_no=27, decl_uid=6434, cgraph_uid=28, symbol_order=33)

Modification phase of node pvTimerGetTimerID/33
pvTimerGetTimerID (struct tmrTimerControl * const xTimer)
{
  void * pvReturn;

  <bb 2> [local count: 22847857]:
  # DEBUG BEGIN_STMT
  # DEBUG pxTimer => xTimer_1(D)
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (xTimer_1(D) == 0B)
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
  pvReturn_4 = MEM[(struct Timer_t *)xTimer_1(D)].pvTimerID;
  # DEBUG pvReturn => pvReturn_4
  # DEBUG BEGIN_STMT
  vPortExitCritical ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return pvReturn_4;

}



;; Function vTimerSetTimerID (vTimerSetTimerID, funcdef_no=28, decl_uid=6437, cgraph_uid=29, symbol_order=34)

Modification phase of node vTimerSetTimerID/34
vTimerSetTimerID (struct tmrTimerControl * xTimer, void * pvNewID)
{
  <bb 2> [local count: 22847857]:
  # DEBUG BEGIN_STMT
  # DEBUG pxTimer => xTimer_1(D)
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (xTimer_1(D) == 0B)
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
  MEM[(struct Timer_t *)xTimer_1(D)].pvTimerID = pvNewID_4(D);
  # DEBUG BEGIN_STMT
  vPortExitCritical ();
  # DEBUG BEGIN_STMT
  return;

}



;; Function xTimerPendFunctionCallFromISR (xTimerPendFunctionCallFromISR, funcdef_no=29, decl_uid=6446, cgraph_uid=30, symbol_order=35)

Modification phase of node xTimerPendFunctionCallFromISR/35
xTimerPendFunctionCallFromISR (void (*PendedFunction_t) (void *, uint32_t) xFunctionToPend, void * pvParameter1, uint32_t ulParameter2, BaseType_t * pxHigherPriorityTaskWoken)
{
  BaseType_t xReturn;
  struct DaemonTaskMessage_t xMessage;
  struct QueueDefinition * xTimerQueue.26_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  xMessage.xMessageID = -2;
  # DEBUG BEGIN_STMT
  xMessage.u.xCallbackParameters.pxCallbackFunction = xFunctionToPend_4(D);
  # DEBUG BEGIN_STMT
  xMessage.u.xCallbackParameters.pvParameter1 = pvParameter1_6(D);
  # DEBUG BEGIN_STMT
  xMessage.u.xCallbackParameters.ulParameter2 = ulParameter2_8(D);
  # DEBUG BEGIN_STMT
  xTimerQueue.26_1 = xTimerQueue;
  xReturn_12 = xQueueGenericSendFromISR (xTimerQueue.26_1, &xMessage, pxHigherPriorityTaskWoken_10(D), 0);
  # DEBUG xReturn => xReturn_12
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  xMessage ={v} {CLOBBER};
  return xReturn_12;

}



;; Function xTimerPendFunctionCall (xTimerPendFunctionCall, funcdef_no=30, decl_uid=6451, cgraph_uid=31, symbol_order=36)

Modification phase of node xTimerPendFunctionCall/36
xTimerPendFunctionCall (void (*PendedFunction_t) (void *, uint32_t) xFunctionToPend, void * pvParameter1, uint32_t ulParameter2, TickType_t xTicksToWait)
{
  BaseType_t xReturn;
  struct DaemonTaskMessage_t xMessage;
  struct QueueDefinition * xTimerQueue.27_1;

  <bb 2> [local count: 22847857]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  xTimerQueue.27_1 = xTimerQueue;
  if (xTimerQueue.27_1 == 0B)
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
  xMessage.xMessageID = -1;
  # DEBUG BEGIN_STMT
  xMessage.u.xCallbackParameters.pxCallbackFunction = xFunctionToPend_4(D);
  # DEBUG BEGIN_STMT
  xMessage.u.xCallbackParameters.pvParameter1 = pvParameter1_6(D);
  # DEBUG BEGIN_STMT
  xMessage.u.xCallbackParameters.ulParameter2 = ulParameter2_8(D);
  # DEBUG BEGIN_STMT
  xReturn_12 = xQueueGenericSend (xTimerQueue.27_1, &xMessage, xTicksToWait_10(D), 0);
  # DEBUG xReturn => xReturn_12
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  xMessage ={v} {CLOBBER};
  return xReturn_12;

}



;; Function uxTimerGetTimerNumber (uxTimerGetTimerNumber, funcdef_no=31, decl_uid=6483, cgraph_uid=32, symbol_order=37)

Modification phase of node uxTimerGetTimerNumber/37
uxTimerGetTimerNumber (struct tmrTimerControl * xTimer)
{
  UBaseType_t _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _3 = MEM[(struct Timer_t *)xTimer_2(D)].uxTimerNumber;
  return _3;

}



;; Function vTimerSetTimerNumber (vTimerSetTimerNumber, funcdef_no=32, decl_uid=6481, cgraph_uid=33, symbol_order=38)

Modification phase of node vTimerSetTimerNumber/38
vTimerSetTimerNumber (struct tmrTimerControl * xTimer, UBaseType_t uxTimerNumber)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  MEM[(struct Timer_t *)xTimer_2(D)].uxTimerNumber = uxTimerNumber_3(D);
  # DEBUG BEGIN_STMT
  return;

}



;; Function vTimerResetState (vTimerResetState, funcdef_no=33, decl_uid=6485, cgraph_uid=34, symbol_order=39)

Modification phase of node vTimerResetState/39
vTimerResetState ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  xTimerQueue = 0B;
  # DEBUG BEGIN_STMT
  xTimerTaskHandle = 0B;
  return;

}


