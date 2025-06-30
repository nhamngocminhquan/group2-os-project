Creating summary for xTimerGetReloadMode.part.0/61:
  Descriptor for parameter 0 xTimerD.6987
    not a candidate
----------------------------------------
  Descriptor for parameter 0 xTimerD.6987
    not a candidate for splitting


Creating summary for prvInsertTimerInActiveList.part.0/60:
  Descriptor for parameter 0 pxTimerD.6958
    (locally) unused
    not a candidate for splitting


Creating summary for vTimerResetState/39:


Creating summary for vTimerSetTimerNumber/38:
  Descriptor for parameter 0 xTimerD.6745
    not a candidate for splitting
  Descriptor for parameter 1 uxTimerNumberD.6746
    not a candidate for splitting


Creating summary for uxTimerGetTimerNumber/37:
  Descriptor for parameter 0 xTimerD.6742
    by_ref with 0 pass throughs
        * Access to offset: 288, size: 32, type: UBaseType_t, alias_ptr_type: long unsigned int *, nonarg: 1, reverse: 0
----------------------------------------
  Descriptor for parameter 0 xTimerD.6742
    param_size_limit: 4, size_reached: 4, by_ref
    * Access to unit offset: 36, unit size: 4, type: UBaseType_t, alias_ptr_type: long unsigned int *, certain


Creating summary for xTimerPendFunctionCall/36:
  Descriptor for parameter 0 xFunctionToPendD.6733
    not a candidate for splitting
  Descriptor for parameter 1 pvParameter1D.6734
    not a candidate for splitting
  Descriptor for parameter 2 ulParameter2D.6735
    not a candidate for splitting
  Descriptor for parameter 3 xTicksToWaitD.6736
    (locally) unused
    not a candidate for splitting


Creating summary for xTimerPendFunctionCallFromISR/35:
  Descriptor for parameter 0 xFunctionToPendD.6725
    not a candidate
  Descriptor for parameter 1 pvParameter1D.6726
    not a candidate
  Descriptor for parameter 2 ulParameter2D.6727
    not a candidate
  Descriptor for parameter 3 pxHigherPriorityTaskWokenD.6728
    unused with 1 call_uses
    by_ref with 1 pass throughs
----------------------------------------
  Descriptor for parameter 0 xFunctionToPendD.6725
    not a candidate for splitting
  Descriptor for parameter 1 pvParameter1D.6726
    not a candidate for splitting
  Descriptor for parameter 2 ulParameter2D.6727
    not a candidate for splitting
  Descriptor for parameter 3 pxHigherPriorityTaskWokenD.6728
    (locally) unused
    param_size_limit: 4, size_reached: 0, by_ref


Creating summary for vTimerSetTimerID/34:
  Descriptor for parameter 0 xTimerD.6719
    not a candidate for splitting
  Descriptor for parameter 1 pvNewIDD.6720
    not a candidate for splitting


Creating summary for pvTimerGetTimerID/33:
  Descriptor for parameter 0 xTimerD.6713
    not a candidate for splitting


Creating summary for xTimerIsTimerActive/32:
  Descriptor for parameter 0 xTimerD.6707
    not a candidate for splitting


Creating summary for prvCheckForValidListAndQueue/31:


Creating summary for prvSwitchTimerLists/30:


Creating summary for prvProcessReceivedCommands/29:


Creating summary for prvInsertTimerInActiveList/28:
  Descriptor for parameter 0 pxTimerD.6665
    not a candidate for splitting
  Descriptor for parameter 1 xNextExpiryTimeD.6666
    not a candidate for splitting
  Descriptor for parameter 2 xTimeNowD.6667
    not a candidate for splitting
  Descriptor for parameter 3 xCommandTimeD.6668
    not a candidate for splitting


Creating summary for prvSampleTimeNow/27:
  Descriptor for parameter 0 pxTimerListsWereSwitchedD.6660
    not a candidate for splitting


Creating summary for prvGetNextExpireTime/26:
  Descriptor for parameter 0 pxListWasEmptyD.6656
    not a candidate for splitting


Creating summary for prvProcessTimerOrBlockTask/25:
  Descriptor for parameter 0 xNextExpireTimeD.6650
    not a candidate for splitting
  Descriptor for parameter 1 xListWasEmptyD.6651
    not a candidate for splitting


Creating summary for prvTimerTask/24:
  Descriptor for parameter 0 pvParametersD.6644
    (locally) unused
    not a candidate for splitting


Creating summary for prvProcessExpiredTimer/23:
  Descriptor for parameter 0 xNextExpireTimeD.6639
    (locally) unused
    not a candidate for splitting
  Descriptor for parameter 1 xTimeNowD.6640
    (locally) unused
    not a candidate for splitting


Creating summary for prvReloadTimer/22:
  Descriptor for parameter 0 pxTimerD.6631
    not a candidate
  Descriptor for parameter 1 xExpiredTimeD.6632
    unused with 2 call_uses
    not a candidate
  Descriptor for parameter 2 xTimeNowD.6633
    unused with 1 call_uses
    not a candidate
----------------------------------------
  Descriptor for parameter 0 pxTimerD.6631
    not a candidate for splitting
  Descriptor for parameter 1 xExpiredTimeD.6632
    (locally) unused
    not a candidate for splitting
  Descriptor for parameter 2 xTimeNowD.6633
    (locally) unused
    not a candidate for splitting


Creating summary for pcTimerGetName/21:
  Descriptor for parameter 0 xTimerD.6626
    not a candidate for splitting


Creating summary for xTimerGetExpiryTime/20:
  Descriptor for parameter 0 xTimerD.6620
    not a candidate for splitting


Creating summary for uxTimerGetReloadMode/19:
  Descriptor for parameter 0 xTimerD.6616
    unused with 1 call_uses
    by_ref with 1 pass throughs
----------------------------------------
  Descriptor for parameter 0 xTimerD.6616
    (locally) unused
    param_size_limit: 4, size_reached: 0, by_ref


Creating summary for xTimerGetReloadMode/18:
  Descriptor for parameter 0 xTimerD.6610
    not a candidate for splitting


Creating summary for vTimerSetReloadMode/17:
  Descriptor for parameter 0 xTimerD.6604
    not a candidate for splitting
  Descriptor for parameter 1 xAutoReloadD.6605
    not a candidate for splitting


Creating summary for xTimerGetPeriod/16:
  Descriptor for parameter 0 xTimerD.6599
    not a candidate for splitting


Creating summary for xTimerGetTimerDaemonTaskHandle/15:


Creating summary for xTimerGenericCommandFromISR/14:
  Descriptor for parameter 0 xTimerD.6584
    not a candidate
  Descriptor for parameter 1 xCommandIDD.6585
    not a candidate
  Descriptor for parameter 2 xOptionalValueD.6586
    not a candidate
  Descriptor for parameter 3 pxHigherPriorityTaskWokenD.6587
    unused with 1 call_uses
    by_ref with 1 pass throughs
  Descriptor for parameter 4 xTicksToWaitD.6588
    unused with 0 call_uses
    not a candidate
----------------------------------------
  Descriptor for parameter 0 xTimerD.6584
    not a candidate for splitting
  Descriptor for parameter 1 xCommandIDD.6585
    not a candidate for splitting
  Descriptor for parameter 2 xOptionalValueD.6586
    not a candidate for splitting
  Descriptor for parameter 3 pxHigherPriorityTaskWokenD.6587
    (locally) unused
    param_size_limit: 4, size_reached: 0, by_ref
  Descriptor for parameter 4 xTicksToWaitD.6588
    (locally) unused
    not a candidate for splitting


Creating summary for xTimerGenericCommandFromTask/13:
  Descriptor for parameter 0 xTimerD.6573
    not a candidate
  Descriptor for parameter 1 xCommandIDD.6574
    not a candidate
  Descriptor for parameter 2 xOptionalValueD.6575
    not a candidate
  Descriptor for parameter 3 pxHigherPriorityTaskWokenD.6576
    unused with 0 call_uses
    by_ref with 0 pass throughs
  Descriptor for parameter 4 xTicksToWaitD.6577
    unused with 1 call_uses
    not a candidate
----------------------------------------
  Descriptor for parameter 0 xTimerD.6573
    not a candidate for splitting
  Descriptor for parameter 1 xCommandIDD.6574
    not a candidate for splitting
  Descriptor for parameter 2 xOptionalValueD.6575
    not a candidate for splitting
  Descriptor for parameter 3 pxHigherPriorityTaskWokenD.6576
    (locally) unused
    param_size_limit: 4, size_reached: 0, by_ref
  Descriptor for parameter 4 xTicksToWaitD.6577
    (locally) unused
    not a candidate for splitting


Creating summary for prvInitialiseNewTimer/12:
  Descriptor for parameter 0 pcTimerNameD.6564
    not a candidate for splitting
  Descriptor for parameter 1 xTimerPeriodInTicksD.6565
    not a candidate for splitting
  Descriptor for parameter 2 xAutoReloadD.6566
    not a candidate for splitting
  Descriptor for parameter 3 pvTimerIDD.6567
    not a candidate for splitting
  Descriptor for parameter 4 pxCallbackFunctionD.6568
    not a candidate for splitting
  Descriptor for parameter 5 pxNewTimerD.6569
    not a candidate for splitting


Creating summary for xTimerCreate/11:
  Descriptor for parameter 0 pcTimerNameD.6556
    unused with 1 call_uses
    by_ref with 1 pass throughs
  Descriptor for parameter 1 xTimerPeriodInTicksD.6557
    unused with 1 call_uses
    not a candidate
  Descriptor for parameter 2 xAutoReloadD.6558
    unused with 1 call_uses
    not a candidate
  Descriptor for parameter 3 pvTimerIDD.6559
    unused with 1 call_uses
    not a candidate
  Descriptor for parameter 4 pxCallbackFunctionD.6560
    unused with 1 call_uses
    not a candidate
----------------------------------------
  Descriptor for parameter 0 pcTimerNameD.6556
    (locally) unused
    param_size_limit: 4, size_reached: 0, by_ref
  Descriptor for parameter 1 xTimerPeriodInTicksD.6557
    (locally) unused
    not a candidate for splitting
  Descriptor for parameter 2 xAutoReloadD.6558
    (locally) unused
    not a candidate for splitting
  Descriptor for parameter 3 pvTimerIDD.6559
    (locally) unused
    not a candidate for splitting
  Descriptor for parameter 4 pxCallbackFunctionD.6560
    (locally) unused
    not a candidate for splitting


Creating summary for xTimerCreateTimerTask/10:



========== IPA-SRA IPA stage ==========

Summary for node prvInitialiseNewTimer.constprop/62:
  Descriptor for parameter 0:
    not a candidate for splitting
  Descriptor for parameter 1:
    not a candidate for splitting
  Descriptor for parameter 2:
    not a candidate for splitting
  Descriptor for parameter 3:
    not a candidate for splitting
  Descriptor for parameter 4:
    not a candidate for splitting
  Descriptor for parameter 5:
    not a candidate for splitting

  Summary for edge prvInitialiseNewTimer.constprop/62->prvCheckForValidListAndQueue/31:
    return value ignored
  Summary for edge prvInitialiseNewTimer.constprop/62->vListInitialiseItem/56:
    return value ignored

Summary for node xTimerGetReloadMode.part.0/61:
  Returns value
  Descriptor for parameter 0:
    not a candidate for splitting

  Summary for edge xTimerGetReloadMode.part.0/61->vPortEnterCritical/50:
    return value ignored
  Summary for edge xTimerGetReloadMode.part.0/61->vPortExitCritical/54:
    return value ignored

Summary for node prvInsertTimerInActiveList.part.0/60:
  Returns value
  Descriptor for parameter 0:
    (locally) unused
    not a candidate for splitting

  Summary for edge prvInsertTimerInActiveList.part.0/60->vListInsert/47:
    return value ignored
    Parameter 0:
    Parameter 1:
      Scalar param sources: 0

Summary for node vTimerResetState/39:
  No parameter information. 


Summary for node vTimerSetTimerNumber/38:
  Descriptor for parameter 0:
    not a candidate for splitting
  Descriptor for parameter 1:
    not a candidate for splitting


Summary for node uxTimerGetTimerNumber/37:
  Returns value
  Descriptor for parameter 0:
    param_size_limit: 4, size_reached: 4, by_ref
    * Access to unit offset: 36, unit size: 4, type: UBaseType_t, alias_ptr_type: long unsigned int *, certain


Summary for node xTimerPendFunctionCall/36:
  Returns value
  Descriptor for parameter 0:
    not a candidate for splitting
  Descriptor for parameter 1:
    not a candidate for splitting
  Descriptor for parameter 2:
    not a candidate for splitting
  Descriptor for parameter 3:
    (locally) unused
    not a candidate for splitting

  Summary for edge xTimerPendFunctionCall/36->xQueueGenericSend/58:
    return value used only to compute caller return value
    Parameter 0:
    Parameter 1:
    Parameter 2:
      Scalar param sources: 3
    Parameter 3:

Summary for node xTimerPendFunctionCallFromISR/35:
  Returns value
  Descriptor for parameter 0:
    not a candidate for splitting
  Descriptor for parameter 1:
    not a candidate for splitting
  Descriptor for parameter 2:
    not a candidate for splitting
  Descriptor for parameter 3:
    (locally) unused
    param_size_limit: 4, size_reached: 0, by_ref

  Summary for edge xTimerPendFunctionCallFromISR/35->xQueueGenericSendFromISR/59:
    return value used only to compute caller return value
    Parameter 0:
    Parameter 1:
    Parameter 2:
      Scalar param sources: 3
      Pointer pass through from the param given above, safe_to_import_accesses: 0
    Parameter 3:

Summary for node vTimerSetTimerID/34:
  Descriptor for parameter 0:
    not a candidate for splitting
  Descriptor for parameter 1:
    not a candidate for splitting

  Summary for edge vTimerSetTimerID/34->vPortExitCritical/54:
    return value ignored
  Summary for edge vTimerSetTimerID/34->vPortEnterCritical/50:
    return value ignored

Summary for node pvTimerGetTimerID/33:
  Returns value
  Descriptor for parameter 0:
    not a candidate for splitting

  Summary for edge pvTimerGetTimerID/33->vPortExitCritical/54:
    return value ignored
  Summary for edge pvTimerGetTimerID/33->vPortEnterCritical/50:
    return value ignored

Summary for node xTimerIsTimerActive/32:
  Returns value
  Descriptor for parameter 0:
    not a candidate for splitting

  Summary for edge xTimerIsTimerActive/32->vPortExitCritical/54:
    return value ignored
  Summary for edge xTimerIsTimerActive/32->vPortEnterCritical/50:
    return value ignored

Summary for node prvCheckForValidListAndQueue/31:
  No parameter information. 

  Summary for edge prvCheckForValidListAndQueue/31->vPortExitCritical/54:
    return value ignored
  Summary for edge prvCheckForValidListAndQueue/31->vQueueAddToRegistry/53:
    return value ignored
  Summary for edge prvCheckForValidListAndQueue/31->xQueueGenericCreate/52:
  Summary for edge prvCheckForValidListAndQueue/31->vListInitialise/51:
    return value ignored
  Summary for edge prvCheckForValidListAndQueue/31->vListInitialise/51:
    return value ignored
  Summary for edge prvCheckForValidListAndQueue/31->vPortEnterCritical/50:
    return value ignored

Summary for node prvSwitchTimerLists/30:
  No parameter information. 

  Summary for edge prvSwitchTimerLists/30->prvProcessExpiredTimer/23:
    return value ignored

Summary for node prvProcessReceivedCommands/29:
  No parameter information. 

  Summary for edge prvProcessReceivedCommands/29->xQueueReceive/49:
  Summary for edge prvProcessReceivedCommands/29->vPortFree/48:
    return value ignored
  Summary for edge prvProcessReceivedCommands/29->prvInsertTimerInActiveList/28:
    return value ignored
  Summary for edge prvProcessReceivedCommands/29->prvReloadTimer/22:
    return value ignored
  Summary for edge prvProcessReceivedCommands/29->prvInsertTimerInActiveList/28:
  Summary for edge prvProcessReceivedCommands/29->prvSampleTimeNow/27:
  Summary for edge prvProcessReceivedCommands/29->uxListRemove/46:
    return value ignored

Summary for node prvInsertTimerInActiveList/28:
  Returns value
  Descriptor for parameter 0:
    not a candidate for splitting
  Descriptor for parameter 1:
    not a candidate for splitting
  Descriptor for parameter 2:
    not a candidate for splitting
  Descriptor for parameter 3:
    not a candidate for splitting

  Summary for edge prvInsertTimerInActiveList/28->vListInsert/47:
    return value ignored
  Summary for edge prvInsertTimerInActiveList/28->prvInsertTimerInActiveList.part.0/60:
    return value used only to compute caller return value
    Parameter 0:
      Scalar param sources: 0
      Pointer pass through from the param given above, safe_to_import_accesses: 0

Summary for node prvSampleTimeNow/27:
  Returns value
  Descriptor for parameter 0:
    not a candidate for splitting

  Summary for edge prvSampleTimeNow/27->prvSwitchTimerLists/30:
    return value ignored
  Summary for edge prvSampleTimeNow/27->xTaskGetTickCount/44:

Summary for node prvGetNextExpireTime/26:
  Returns value
  Descriptor for parameter 0:
    not a candidate for splitting


Summary for node prvProcessTimerOrBlockTask/25:
  Descriptor for parameter 0:
    not a candidate for splitting
  Descriptor for parameter 1:
    not a candidate for splitting

  Summary for edge prvProcessTimerOrBlockTask/25->xTaskResumeAll/42:
    return value ignored
  Summary for edge prvProcessTimerOrBlockTask/25->xTaskResumeAll/42:
  Summary for edge prvProcessTimerOrBlockTask/25->vQueueWaitForMessageRestricted/43:
    return value ignored
    Parameter 0:
    Parameter 1:
    Parameter 2:
      Scalar param sources: 1
  Summary for edge prvProcessTimerOrBlockTask/25->prvProcessExpiredTimer/23:
    return value ignored
  Summary for edge prvProcessTimerOrBlockTask/25->xTaskResumeAll/42:
    return value ignored
  Summary for edge prvProcessTimerOrBlockTask/25->prvSampleTimeNow/27:
  Summary for edge prvProcessTimerOrBlockTask/25->vTaskSuspendAll/41:
    return value ignored

Summary for node prvTimerTask/24:
  Descriptor for parameter 0:
    (locally) unused
    not a candidate for splitting

  Summary for edge prvTimerTask/24->prvProcessReceivedCommands/29:
    return value ignored
  Summary for edge prvTimerTask/24->prvProcessTimerOrBlockTask/25:
    return value ignored
  Summary for edge prvTimerTask/24->prvGetNextExpireTime/26:

Summary for node prvProcessExpiredTimer/23:
  Descriptor for parameter 0:
    (locally) unused
    not a candidate for splitting
  Descriptor for parameter 1:
    (locally) unused
    not a candidate for splitting

  Summary for edge prvProcessExpiredTimer/23->prvReloadTimer/22:
    return value ignored
    Parameter 0:
    Parameter 1:
      Scalar param sources: 0
    Parameter 2:
      Scalar param sources: 1
  Summary for edge prvProcessExpiredTimer/23->uxListRemove/46:
    return value ignored

Summary for node prvReloadTimer/22:
  Descriptor for parameter 0:
    not a candidate for splitting
  Descriptor for parameter 1:
    (locally) unused
    not a candidate for splitting
  Descriptor for parameter 2:
    (locally) unused
    not a candidate for splitting

  Summary for edge prvReloadTimer/22->prvInsertTimerInActiveList/28:
    Parameter 0:
      Scalar param sources: 0
      Pointer pass through from the param given above, safe_to_import_accesses: 0
    Parameter 1:
      Scalar param sources: 1
    Parameter 2:
      Scalar param sources: 2
    Parameter 3:
      Scalar param sources: 1

Summary for node pcTimerGetName/21:
  Returns value
  Descriptor for parameter 0:
    not a candidate for splitting


Summary for node xTimerGetExpiryTime/20:
  Returns value
  Descriptor for parameter 0:
    not a candidate for splitting


Summary for node uxTimerGetReloadMode/19:
  Returns value
  Descriptor for parameter 0:
    (locally) unused
    param_size_limit: 4, size_reached: 0, by_ref

  Summary for edge uxTimerGetReloadMode/19->xTimerGetReloadMode/18:
    return value used only to compute caller return value
    Parameter 0:
      Scalar param sources: 0
      Pointer pass through from the param given above, safe_to_import_accesses: 1

Summary for node xTimerGetReloadMode/18:
  Returns value
  Descriptor for parameter 0:
    not a candidate for splitting

  Summary for edge xTimerGetReloadMode/18->xTimerGetReloadMode.part.0/61:
    return value used only to compute caller return value
    Parameter 0:
      Scalar param sources: 0
      Pointer pass through from the param given above, safe_to_import_accesses: 0

Summary for node vTimerSetReloadMode/17:
  Descriptor for parameter 0:
    not a candidate for splitting
  Descriptor for parameter 1:
    not a candidate for splitting

  Summary for edge vTimerSetReloadMode/17->vPortExitCritical/54:
    return value ignored
  Summary for edge vTimerSetReloadMode/17->vPortEnterCritical/50:
    return value ignored

Summary for node xTimerGetPeriod/16:
  Returns value
  Descriptor for parameter 0:
    not a candidate for splitting


Summary for node xTimerGetTimerDaemonTaskHandle/15:
  Returns value
  No parameter information. 


Summary for node xTimerGenericCommandFromISR/14:
  Returns value
  Descriptor for parameter 0:
    not a candidate for splitting
  Descriptor for parameter 1:
    not a candidate for splitting
  Descriptor for parameter 2:
    not a candidate for splitting
  Descriptor for parameter 3:
    (locally) unused
    param_size_limit: 4, size_reached: 0, by_ref
  Descriptor for parameter 4:
    (locally) unused
    not a candidate for splitting

  Summary for edge xTimerGenericCommandFromISR/14->xQueueGenericSendFromISR/59:
    return value used only to compute caller return value
    Parameter 0:
    Parameter 1:
    Parameter 2:
      Scalar param sources: 3
      Pointer pass through from the param given above, safe_to_import_accesses: 0
    Parameter 3:

Summary for node xTimerGenericCommandFromTask/13:
  Returns value
  Descriptor for parameter 0:
    not a candidate for splitting
  Descriptor for parameter 1:
    not a candidate for splitting
  Descriptor for parameter 2:
    not a candidate for splitting
  Descriptor for parameter 3:
    (locally) unused
    param_size_limit: 4, size_reached: 0, by_ref
  Descriptor for parameter 4:
    (locally) unused
    not a candidate for splitting

  Summary for edge xTimerGenericCommandFromTask/13->xQueueGenericSend/58:
    return value used only to compute caller return value
  Summary for edge xTimerGenericCommandFromTask/13->xQueueGenericSend/58:
    return value used only to compute caller return value
    Parameter 0:
    Parameter 1:
    Parameter 2:
      Scalar param sources: 4
    Parameter 3:
  Summary for edge xTimerGenericCommandFromTask/13->xTaskGetSchedulerState/57:

Summary for node xTimerCreate/11:
  Returns value
  Descriptor for parameter 0:
    (locally) unused
    param_size_limit: 4, size_reached: 0, by_ref
  Descriptor for parameter 1:
    (locally) unused
    not a candidate for splitting
  Descriptor for parameter 2:
    (locally) unused
    not a candidate for splitting
  Descriptor for parameter 3:
    (locally) unused
    not a candidate for splitting
  Descriptor for parameter 4:
    (locally) unused
    not a candidate for splitting

  Summary for edge xTimerCreate/11->prvInitialiseNewTimer.constprop/62:
    return value ignored
    Parameter 0:
      Scalar param sources: 0
      Pointer pass through from the param given above, safe_to_import_accesses: 0
    Parameter 1:
      Scalar param sources: 1
    Parameter 2:
      Scalar param sources: 2
    Parameter 3:
      Scalar param sources: 3
    Parameter 4:
      Scalar param sources: 4
    Parameter 5:
  Summary for edge xTimerCreate/11->pvPortMalloc/55:
    Parameter 0:

Summary for node xTimerCreateTimerTask/10:
  Returns value
  No parameter information. 

  Summary for edge xTimerCreateTimerTask/10->xTaskCreate/40:
  Summary for edge xTimerCreateTimerTask/10->prvCheckForValidListAndQueue/31:
    return value ignored


Function xTimerCreateTimerTask/10 disqualified because it cannot be made local.
Function xTimerCreate/11 disqualified because it cannot be made local.
Function xTimerGenericCommandFromTask/13 disqualified because it cannot be made local.
Function xTimerGenericCommandFromISR/14 disqualified because it cannot be made local.
Function xTimerGetTimerDaemonTaskHandle/15 disqualified because it cannot be made local.
Function xTimerGetPeriod/16 disqualified because it cannot be made local.
Function vTimerSetReloadMode/17 disqualified because it cannot be made local.
Function xTimerGetReloadMode/18 disqualified because it cannot be made local.
Function uxTimerGetReloadMode/19 disqualified because it cannot be made local.
Function xTimerGetExpiryTime/20 disqualified because it cannot be made local.
Function pcTimerGetName/21 disqualified because it cannot be made local.
Function prvTimerTask/24 disqualified because it cannot be made local.
Function xTimerIsTimerActive/32 disqualified because it cannot be made local.
Function pvTimerGetTimerID/33 disqualified because it cannot be made local.
Function vTimerSetTimerID/34 disqualified because it cannot be made local.
Function xTimerPendFunctionCallFromISR/35 disqualified because it cannot be made local.
Function xTimerPendFunctionCall/36 disqualified because it cannot be made local.
Function uxTimerGetTimerNumber/37 disqualified because it cannot be made local.
Function vTimerSetTimerNumber/38 disqualified because it cannot be made local.
Function vTimerResetState/39 disqualified because it cannot be made local.

========== IPA-SRA decisions ==========

========== IPA SRA IPA analysis done ==========


Reclaiming functions:
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
xTimerGetReloadMode.part.0 (struct tmrTimerControl * xTimer)
{
  struct Timer_t * pxTimer;
  BaseType_t xReturn;
  unsigned char _2;
  unsigned char _3;

  <bb 5> [local count: 1073741824]:

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  vPortEnterCritical ();
  # DEBUG BEGIN_STMT
  _2 = MEM[(struct Timer_t *)xTimer_1(D)].ucStatus;
  _3 = _2 & 4;
  if (_3 == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG xReturn => 1

  <bb 4> [local count: 1073741824]:
  # xReturn_4 = PHI <0(2), 1(3)>
  # DEBUG xReturn => xReturn_4
  # DEBUG BEGIN_STMT
  vPortExitCritical ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return xReturn_4;

}


prvInsertTimerInActiveList.part.0 (struct Timer_t * const pxTimer)
{
  BaseType_t xProcessTimerNow;
  const TickType_t xNextExpiryTime;
  const TickType_t xTimeNow;
  const TickType_t xCommandTime;
  struct List_t * pxOverflowTimerList.14_1;
  struct ListItem_t * _3;

  <bb 4> [local count: 1073741824]:
  # DEBUG D#6 s=> xNextExpiryTime
  # DEBUG xNextExpiryTime => D#6
  # DEBUG D#5 s=> xTimeNow
  # DEBUG xTimeNow => D#5
  # DEBUG D#4 s=> xCommandTime
  # DEBUG xCommandTime => D#4

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  pxOverflowTimerList.14_1 = pxOverflowTimerList;
  _3 = &pxTimer_2(D)->xTimerListItem;
  vListInsert (pxOverflowTimerList.14_1, _3);

  <bb 3> [local count: 1073741824]:
  # xProcessTimerNow_4 = PHI <0(2)>
  # DEBUG xProcessTimerNow => xProcessTimerNow_4
  # DEBUG BEGIN_STMT
  return xProcessTimerNow_4;

}


vTimerResetState ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  xTimerQueue = 0B;
  # DEBUG BEGIN_STMT
  xTimerTaskHandle = 0B;
  return;

}


vTimerSetTimerNumber (struct tmrTimerControl * xTimer, UBaseType_t uxTimerNumber)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  MEM[(struct Timer_t *)xTimer_2(D)].uxTimerNumber = uxTimerNumber_3(D);
  # DEBUG BEGIN_STMT
  return;

}


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


prvSwitchTimerLists ()
{
  TickType_t xNextExpireTime;
  struct xLIST_ITEM * _1;
  struct List_t * pxCurrentTimerList.11_2;
  long unsigned int _3;
  struct List_t * pxOverflowTimerList.12_4;
  struct List_t * pxCurrentTimerList.11_7;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 955630225]:
  # DEBUG BEGIN_STMT
  _1 = pxCurrentTimerList.11_2->xListEnd.pxNext;
  xNextExpireTime_10 = _1->xItemValue;
  # DEBUG xNextExpireTime => xNextExpireTime_10
  # DEBUG BEGIN_STMT
  prvProcessExpiredTimer (xNextExpireTime_10, 4294967295);

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  pxCurrentTimerList.11_2 = pxCurrentTimerList;
  _3 = pxCurrentTimerList.11_2->uxNumberOfItems;
  if (_3 != 0)
    goto <bb 3>; [89.00%]
  else
    goto <bb 5>; [11.00%]

  <bb 5> [local count: 118111600]:
  # pxCurrentTimerList.11_7 = PHI <pxCurrentTimerList.11_2(4)>
  # DEBUG BEGIN_STMT
  # DEBUG pxTemp => pxCurrentTimerList.11_7
  # DEBUG BEGIN_STMT
  pxOverflowTimerList.12_4 = pxOverflowTimerList;
  pxCurrentTimerList = pxOverflowTimerList.12_4;
  # DEBUG BEGIN_STMT
  pxOverflowTimerList = pxCurrentTimerList.11_7;
  return;

}


prvProcessReceivedCommands ()
{
  TickType_t xTimeNow;
  BaseType_t xTimerListsWereSwitched;
  struct Timer_t * pxTimer;
  struct DaemonTaskMessage_t xMessage;
  long int _1;
  void (*<T696>) (void *, uint32_t) _2;
  void * _3;
  long unsigned int _4;
  long int _5;
  struct xLIST * _6;
  struct ListItem_t * _7;
  long int _8;
  unsigned char _9;
  unsigned char _10;
  long unsigned int _11;
  long unsigned int _12;
  long unsigned int _13;
  long int _15;
  unsigned char _16;
  long unsigned int _17;
  long unsigned int _18;
  long unsigned int _19;
  unsigned char _21;
  void (*<T691>) (struct tmrTimerControl *) _22;
  unsigned char _23;
  unsigned char _24;
  unsigned char _25;
  unsigned char _26;
  long unsigned int _27;
  long unsigned int _30;
  unsigned char _31;
  unsigned char _33;
  struct QueueDefinition * xTimerQueue.16_34;
  long int _35;
  unsigned char _45;
  unsigned char _47;

  <bb 2> [local count: 59669683]:
  # DEBUG BEGIN_STMT
  xMessage = {};
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  goto <bb 23>; [100.00%]

  <bb 3> [local count: 1014686025]:
  # DEBUG BEGIN_STMT
  _1 = xMessage.xMessageID;
  if (_1 < 0)
    goto <bb 4>; [41.00%]
  else
    goto <bb 5>; [59.00%]

  <bb 4> [local count: 416021267]:
  # DEBUG BEGIN_STMT
  # DEBUG pxCallback => &xMessage.u.xCallbackParameters
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _2 = MEM[(const struct CallbackParameters_t *)&xMessage + 4B].pxCallbackFunction;
  _3 = MEM[(const struct CallbackParameters_t *)&xMessage + 4B].pvParameter1;
  _4 = MEM[(const struct CallbackParameters_t *)&xMessage + 4B].ulParameter2;
  _2 (_3, _4);

  <bb 5> [local count: 1014686025]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _5 = xMessage.xMessageID;
  if (_5 >= 0)
    goto <bb 6>; [5.50%]
  else
    goto <bb 29>; [94.50%]

  <bb 29> [local count: 958878294]:
  goto <bb 25>; [100.00%]

  <bb 6> [local count: 55807731]:
  # DEBUG BEGIN_STMT
  pxTimer_48 = xMessage.u.xTimerParameters.pxTimer;
  # DEBUG pxTimer => pxTimer_48
  # DEBUG BEGIN_STMT
  _6 = pxTimer_48->xTimerListItem.pvContainer;
  if (_6 != 0B)
    goto <bb 7>; [53.47%]
  else
    goto <bb 8>; [46.53%]

  <bb 7> [local count: 29840394]:
  # DEBUG BEGIN_STMT
  _7 = &pxTimer_48->xTimerListItem;
  uxListRemove (_7);

  <bb 8> [local count: 55807731]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  xTimeNow_51 = prvSampleTimeNow (&xTimerListsWereSwitched);
  # DEBUG xTimeNow => xTimeNow_51
  # DEBUG BEGIN_STMT
  _8 = xMessage.xMessageID;
  switch (_8) <default: <L41> [20.00%], case 1 ... 2: <L11> [20.00%], case 3: <L21> [20.00%], case 4: <L23> [20.00%], case 5: <L28> [20.00%], case 6 ... 7: <L11> [20.00%], case 8: <L21> [20.00%], case 9: <L23> [20.00%]>

  <bb 28> [local count: 11161546]:
<L41>:
  goto <bb 24>; [100.00%]

  <bb 9> [local count: 11161546]:
  # pxTimer_14 = PHI <pxTimer_48(8)>
  # xTimeNow_66 = PHI <xTimeNow_51(8)>
<L11>:
  # DEBUG BEGIN_STMT
  _9 = pxTimer_14->ucStatus;
  _10 = _9 | 1;
  pxTimer_14->ucStatus = _10;
  # DEBUG BEGIN_STMT
  _11 = xMessage.u.xTimerParameters.xMessageValue;
  _12 = pxTimer_14->xTimerPeriodInTicks;
  _13 = _11 + _12;
  _15 = prvInsertTimerInActiveList (pxTimer_14, _13, xTimeNow_66, _11);
  if (_15 != 0)
    goto <bb 10>; [50.00%]
  else
    goto <bb 22>; [50.00%]

  <bb 10> [local count: 5580773]:
  # DEBUG BEGIN_STMT
  _16 = pxTimer_14->ucStatus;
  _45 = _16 & 4;
  if (_45 != 0)
    goto <bb 11>; [33.00%]
  else
    goto <bb 12>; [67.00%]

  <bb 11> [local count: 1841655]:
  # DEBUG BEGIN_STMT
  _17 = xMessage.u.xTimerParameters.xMessageValue;
  _18 = pxTimer_14->xTimerPeriodInTicks;
  _19 = _17 + _18;
  prvReloadTimer (pxTimer_14, _19, xTimeNow_66);
  goto <bb 13>; [100.00%]

  <bb 12> [local count: 3739118]:
  # DEBUG BEGIN_STMT
  _21 = _16 & 254;
  pxTimer_14->ucStatus = _21;

  <bb 13> [local count: 5580773]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _22 = pxTimer_14->pxCallbackFunction;
  _22 (pxTimer_14);
  goto <bb 22>; [100.00%]

  <bb 14> [local count: 11161546]:
  # pxTimer_20 = PHI <pxTimer_48(8)>
<L21>:
  # DEBUG BEGIN_STMT
  _23 = pxTimer_20->ucStatus;
  _24 = _23 & 254;
  pxTimer_20->ucStatus = _24;
  # DEBUG BEGIN_STMT
  goto <bb 22>; [100.00%]

  <bb 15> [local count: 11161546]:
  # pxTimer_64 = PHI <pxTimer_48(8)>
  # xTimeNow_67 = PHI <xTimeNow_51(8)>
<L23>:
  # DEBUG BEGIN_STMT
  _25 = pxTimer_64->ucStatus;
  _26 = _25 | 1;
  pxTimer_64->ucStatus = _26;
  # DEBUG BEGIN_STMT
  _27 = xMessage.u.xTimerParameters.xMessageValue;
  pxTimer_64->xTimerPeriodInTicks = _27;
  # DEBUG BEGIN_STMT
  if (_27 == 0)
    goto <bb 16>; [5.50%]
  else
    goto <bb 18>; [94.50%]

  <bb 16> [local count: 613885]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i " :  :  : "memory");

  <bb 17> [local count: 62002385]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 27> [local count: 62002385]:
  goto <bb 17>; [100.00%]

  <bb 18> [local count: 10547661]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _30 = _27 + xTimeNow_67;
  prvInsertTimerInActiveList (pxTimer_64, _30, xTimeNow_67, xTimeNow_67);
  # DEBUG BEGIN_STMT
  goto <bb 22>; [100.00%]

  <bb 19> [local count: 11161546]:
  # pxTimer_65 = PHI <pxTimer_48(8)>
<L28>:
  # DEBUG BEGIN_STMT
  _31 = pxTimer_65->ucStatus;
  _47 = _31 & 2;
  if (_47 == 0)
    goto <bb 20>; [33.00%]
  else
    goto <bb 21>; [67.00%]

  <bb 20> [local count: 3683310]:
  # DEBUG BEGIN_STMT
  vPortFree (pxTimer_65);
  goto <bb 22>; [100.00%]

  <bb 21> [local count: 7478236]:
  # DEBUG BEGIN_STMT
  _33 = _31 & 254;
  pxTimer_65->ucStatus = _33;

  <bb 22> [local count: 44032300]:

  <bb 23> [local count: 103701984]:

  <bb 24> [local count: 114863530]:
<L38>:

  <bb 25> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  xTimerQueue.16_34 = xTimerQueue;
  _35 = xQueueReceive (xTimerQueue.16_34, &xMessage, 0);
  if (_35 != 0)
    goto <bb 3>; [94.50%]
  else
    goto <bb 26>; [5.50%]

  <bb 26> [local count: 59055800]:
  xMessage ={v} {CLOBBER};
  xTimerListsWereSwitched ={v} {CLOBBER};
  return;

}


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


prvGetNextExpireTime (BaseType_t * const pxListWasEmpty)
{
  TickType_t xNextExpireTime;
  struct List_t * pxCurrentTimerList.3_1;
  long unsigned int _2;
  struct xLIST_ITEM * _3;
  long int iftmp.2_5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  pxCurrentTimerList.3_1 = pxCurrentTimerList;
  _2 = pxCurrentTimerList.3_1->uxNumberOfItems;
  if (_2 == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 536870913]:

  <bb 4> [local count: 1073741824]:
  # iftmp.2_5 = PHI <1(2), 0(3)>
  *pxListWasEmpty_7(D) = iftmp.2_5;
  # DEBUG BEGIN_STMT
  if (iftmp.2_5 == 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _3 = pxCurrentTimerList.3_1->xListEnd.pxNext;
  xNextExpireTime_9 = _3->xItemValue;
  # DEBUG xNextExpireTime => xNextExpireTime_9

  <bb 6> [local count: 1073741824]:
  # xNextExpireTime_4 = PHI <xNextExpireTime_9(5), 0(4)>
  # DEBUG xNextExpireTime => xNextExpireTime_4
  # DEBUG BEGIN_STMT
  return xNextExpireTime_4;

}


prvProcessTimerOrBlockTask (const TickType_t xNextExpireTime, BaseType_t xListWasEmpty)
{
  BaseType_t xTimerListsWereSwitched;
  TickType_t xTimeNow;
  long int xTimerListsWereSwitched.5_1;
  struct List_t * pxOverflowTimerList.7_2;
  long unsigned int _3;
  struct QueueDefinition * xTimerQueue.8_4;
  long unsigned int _5;
  long int _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  vTaskSuspendAll ();
  # DEBUG BEGIN_STMT
  xTimeNow_12 = prvSampleTimeNow (&xTimerListsWereSwitched);
  # DEBUG xTimeNow => xTimeNow_12
  # DEBUG BEGIN_STMT
  xTimerListsWereSwitched.5_1 = xTimerListsWereSwitched;
  if (xTimerListsWereSwitched.5_1 == 0)
    goto <bb 3>; [67.00%]
  else
    goto <bb 12>; [33.00%]

  <bb 3> [local count: 719407025]:
  # DEBUG BEGIN_STMT
  if (xListWasEmpty_14(D) == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 4> [local count: 359703512]:
  if (xTimeNow_12 >= xNextExpireTime_15(D))
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 118702158]:
  # DEBUG BEGIN_STMT
  xTaskResumeAll ();
  # DEBUG BEGIN_STMT
  prvProcessExpiredTimer (xNextExpireTime_15(D), xTimeNow_12);
  goto <bb 13>; [100.00%]

  <bb 6> [local count: 600704867]:
  # DEBUG BEGIN_STMT
  if (xListWasEmpty_14(D) != 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 7> [local count: 300352433]:
  # DEBUG BEGIN_STMT
  pxOverflowTimerList.7_2 = pxOverflowTimerList;
  _3 = pxOverflowTimerList.7_2->uxNumberOfItems;
  if (_3 == 0)
    goto <bb 10>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 8> [local count: 150176217]:

  <bb 10> [local count: 600704867]:
  # xListWasEmpty_7 = PHI <xListWasEmpty_14(D)(6), 0(8), 1(7)>
  # DEBUG xListWasEmpty => xListWasEmpty_7
  # DEBUG BEGIN_STMT
  xTimerQueue.8_4 = xTimerQueue;
  _5 = xNextExpireTime_15(D) - xTimeNow_12;
  vQueueWaitForMessageRestricted (xTimerQueue.8_4, _5, xListWasEmpty_7);
  # DEBUG BEGIN_STMT
  _6 = xTaskResumeAll ();
  if (_6 == 0)
    goto <bb 11>; [50.00%]
  else
    goto <bb 13>; [50.00%]

  <bb 11> [local count: 300352433]:
  # DEBUG BEGIN_STMT
  MEM[(volatile uint32_t *)3758157060B] ={v} 268435456;
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("dsb" :  :  : "memory");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("isb");
  # DEBUG BEGIN_STMT
  goto <bb 13>; [100.00%]

  <bb 12> [local count: 354334800]:
  # DEBUG BEGIN_STMT
  xTaskResumeAll ();

  <bb 13> [local count: 1073741824]:
  xTimerListsWereSwitched ={v} {CLOBBER};
  return;

}


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


