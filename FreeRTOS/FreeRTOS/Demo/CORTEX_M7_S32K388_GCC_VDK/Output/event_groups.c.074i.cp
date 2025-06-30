
IPA constant propagation start:
Determining dynamic type for call: xEventGroupClearBits (pvEventGroup_2(D), ulBitsToClear_3(D));
  Starting walk at: xEventGroupClearBits (pvEventGroup_2(D), ulBitsToClear_3(D));
  instance pointer: pvEventGroup_2(D)  Outer instance pointer: pvEventGroup_2(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: xEventGroupSetBits (pvEventGroup_2(D), ulBitsToSet_3(D));
  Starting walk at: xEventGroupSetBits (pvEventGroup_2(D), ulBitsToSet_3(D));
  instance pointer: pvEventGroup_2(D)  Outer instance pointer: pvEventGroup_2(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _6 = xEventGroupSetBits.part.0 (xEventGroup_3(D), uxBitsToSet_4(D));
  Starting walk at: _6 = xEventGroupSetBits.part.0 (xEventGroup_3(D), uxBitsToSet_4(D));
  instance pointer: xEventGroup_3(D)  Outer instance pointer: xEventGroup_3(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _2 = xEventGroupClearBits.part.0 (xEventGroup_3(D), uxBitsToClear_5(D));
  Starting walk at: _2 = xEventGroupClearBits.part.0 (xEventGroup_3(D), uxBitsToClear_5(D));
  instance pointer: xEventGroup_3(D)  Outer instance pointer: xEventGroup_3(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: xEventGroupSetBits (xEventGroup_23(D), uxBitsToSet_30(D));
  Starting walk at: xEventGroupSetBits (xEventGroup_23(D), uxBitsToSet_30(D));
  instance pointer: xEventGroup_23(D)  Outer instance pointer: xEventGroup_23(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:vTaskSuspendAll ();
  Function call may change dynamic type:_2 = xTaskGetSchedulerState ();

IPA structures before propagation:

Jump functions:
  Jump functions of caller  xEventGroupSetBits.part.0/31:
    callsite  xEventGroupSetBits.part.0/31 -> vTaskSuspendAll/21 : 
       no arg info
    callsite  xEventGroupSetBits.part.0/31 -> vTaskRemoveFromUnorderedEventList/28 : 
       no arg info
    callsite  xEventGroupSetBits.part.0/31 -> xTaskResumeAll/23 : 
       no arg info
  Jump functions of caller  xEventGroupClearBits.part.0/30:
    callsite  xEventGroupClearBits.part.0/30 -> vPortEnterCritical/25 : 
       no arg info
    callsite  xEventGroupClearBits.part.0/30 -> vPortExitCritical/26 : 
       no arg info
  Jump functions of caller  vPortFree/29:
  Jump functions of caller  vTaskRemoveFromUnorderedEventList/28:
  Jump functions of caller  xTimerPendFunctionCallFromISR/27:
  Jump functions of caller  vPortExitCritical/26:
  Jump functions of caller  vPortEnterCritical/25:
  Jump functions of caller  uxTaskResetEventItemValue/24:
  Jump functions of caller  xTaskResumeAll/23:
  Jump functions of caller  vTaskPlaceOnUnorderedEventList/22:
  Jump functions of caller  vTaskSuspendAll/21:
  Jump functions of caller  xTaskGetSchedulerState/20:
  Jump functions of caller  vListInitialise/19:
  Jump functions of caller  pvPortMalloc/18:
  Jump functions of caller  vEventGroupSetNumber/17:
  Jump functions of caller  uxEventGroupGetNumber/16:
  Jump functions of caller  xEventGroupSetBitsFromISR/15:
    callsite  xEventGroupSetBitsFromISR/15 -> xTimerPendFunctionCallFromISR/27 : 
       no arg info
  Jump functions of caller  prvTestWaitCondition/14:
  Jump functions of caller  vEventGroupClearBitsCallback/13:
    callsite  vEventGroupClearBitsCallback/13 -> xEventGroupClearBits/7 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  vEventGroupSetBitsCallback/12:
    callsite  vEventGroupSetBitsCallback/12 -> xEventGroupSetBits/10 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  vEventGroupDelete/11:
    callsite  vEventGroupDelete/11 -> vPortFree/29 : 
       no arg info
    callsite  vEventGroupDelete/11 -> xTaskResumeAll/23 : 
       no arg info
    callsite  vEventGroupDelete/11 -> vTaskRemoveFromUnorderedEventList/28 : 
       no arg info
    callsite  vEventGroupDelete/11 -> vTaskSuspendAll/21 : 
       no arg info
  Jump functions of caller  xEventGroupSetBits/10:
    callsite  xEventGroupSetBits/10 -> xEventGroupSetBits.part.0/31 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  xEventGroupGetBitsFromISR/9:
  Jump functions of caller  xEventGroupClearBitsFromISR/8:
    callsite  xEventGroupClearBitsFromISR/8 -> xTimerPendFunctionCallFromISR/27 : 
       no arg info
  Jump functions of caller  xEventGroupClearBits/7:
    callsite  xEventGroupClearBits/7 -> xEventGroupClearBits.part.0/30 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  xEventGroupWaitBits/6:
    callsite  xEventGroupWaitBits/6 -> vPortExitCritical/26 : 
       no arg info
    callsite  xEventGroupWaitBits/6 -> prvTestWaitCondition/14 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: PASS THROUGH: 3, op nop_expr
         value: 0x0, mask: 0xffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
         Unknown VR
    callsite  xEventGroupWaitBits/6 -> vPortEnterCritical/25 : 
       no arg info
    callsite  xEventGroupWaitBits/6 -> uxTaskResetEventItemValue/24 : 
       no arg info
    callsite  xEventGroupWaitBits/6 -> xTaskResumeAll/23 : 
       no arg info
    callsite  xEventGroupWaitBits/6 -> vTaskPlaceOnUnorderedEventList/22 : 
       no arg info
    callsite  xEventGroupWaitBits/6 -> prvTestWaitCondition/14 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: PASS THROUGH: 3, op nop_expr
         value: 0x0, mask: 0xffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
         Unknown VR
    callsite  xEventGroupWaitBits/6 -> vTaskSuspendAll/21 : 
       no arg info
    callsite  xEventGroupWaitBits/6 -> xTaskGetSchedulerState/20 : 
       no arg info
  Jump functions of caller  xEventGroupSync/5:
    callsite  xEventGroupSync/5 -> vPortExitCritical/26 : 
       no arg info
    callsite  xEventGroupSync/5 -> vPortEnterCritical/25 : 
       no arg info
    callsite  xEventGroupSync/5 -> uxTaskResetEventItemValue/24 : 
       no arg info
    callsite  xEventGroupSync/5 -> xTaskResumeAll/23 : 
       no arg info
    callsite  xEventGroupSync/5 -> vTaskPlaceOnUnorderedEventList/22 : 
       no arg info
    callsite  xEventGroupSync/5 -> xEventGroupSetBits/10 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  xEventGroupSync/5 -> vTaskSuspendAll/21 : 
       no arg info
    callsite  xEventGroupSync/5 -> xTaskGetSchedulerState/20 : 
       no arg info
  Jump functions of caller  xEventGroupCreate/4:
    callsite  xEventGroupCreate/4 -> vListInitialise/19 : 
       no arg info
    callsite  xEventGroupCreate/4 -> pvPortMalloc/18 : 
       no arg info

 Propagating constants:

Not considering vEventGroupSetNumber/17 for cloning; -fipa-cp-clone disabled.
Not considering uxEventGroupGetNumber/16 for cloning; -fipa-cp-clone disabled.
Not considering xEventGroupSetBitsFromISR/15 for cloning; -fipa-cp-clone disabled.
Not considering vEventGroupClearBitsCallback/13 for cloning; -fipa-cp-clone disabled.
Not considering vEventGroupSetBitsCallback/12 for cloning; -fipa-cp-clone disabled.
Not considering vEventGroupDelete/11 for cloning; -fipa-cp-clone disabled.
Not considering xEventGroupSetBits/10 for cloning; -fipa-cp-clone disabled.
Not considering xEventGroupGetBitsFromISR/9 for cloning; -fipa-cp-clone disabled.
Not considering xEventGroupClearBitsFromISR/8 for cloning; -fipa-cp-clone disabled.
Not considering xEventGroupClearBits/7 for cloning; -fipa-cp-clone disabled.
Not considering xEventGroupWaitBits/6 for cloning; -fipa-cp-clone disabled.
Not considering xEventGroupSync/5 for cloning; -fipa-cp-clone disabled.

overall_size: 309

IPA lattices after all propagation:

Lattices:
  Node: xEventGroupSetBits.part.0/31:
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
  Node: xEventGroupClearBits.part.0/30:
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
  Node: vEventGroupSetNumber/17:
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
  Node: uxEventGroupGetNumber/16:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: xEventGroupSetBitsFromISR/15:
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
  Node: prvTestWaitCondition/14:
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
  Node: vEventGroupClearBitsCallback/13:
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
  Node: vEventGroupSetBitsCallback/12:
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
  Node: vEventGroupDelete/11:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: xEventGroupSetBits/10:
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
  Node: xEventGroupGetBitsFromISR/9:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: xEventGroupClearBitsFromISR/8:
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
  Node: xEventGroupClearBits/7:
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
  Node: xEventGroupWaitBits/6:
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
  Node: xEventGroupSync/5:
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
  Node: xEventGroupCreate/4:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

xEventGroupSetBits.part.0/31 (xEventGroupSetBits.part.0) @0698d9a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:118111600 (estimated locally) body local split_part optimize_size
  Called by: xEventGroupSetBits/10 (5236217 (estimated locally),0.23 per call) 
  Calls: vTaskSuspendAll/21 (118111600 (estimated locally),1.00 per call) vTaskRemoveFromUnorderedEventList/28 (401364696 (estimated locally),3.40 per call) xTaskResumeAll/23 (118111600 (estimated locally),1.00 per call) 
xEventGroupClearBits.part.0/30 (xEventGroupClearBits.part.0) @069c28c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local split_part optimize_size
  Called by: xEventGroupClearBits/7 (5236217 (estimated locally),0.23 per call) 
  Calls: vPortEnterCritical/25 (1073741824 (estimated locally),1.00 per call) vPortExitCritical/26 (1073741824 (estimated locally),1.00 per call) 
vPortFree/29 (vPortFree) @0698de00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: vEventGroupDelete/11 (6281105 (estimated locally),0.27 per call) 
  Calls: 
vTaskRemoveFromUnorderedEventList/28 (vTaskRemoveFromUnorderedEventList) @0698dc40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: vEventGroupDelete/11 (101985162 (estimated locally),4.46 per call) xEventGroupSetBits.part.0/31 (401364696 (estimated locally),3.40 per call) 
  Calls: 
xTimerPendFunctionCallFromISR/27 (xTimerPendFunctionCallFromISR) @0698d700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: xEventGroupSetBitsFromISR/15 (1073741824 (estimated locally),1.00 per call) xEventGroupClearBitsFromISR/8 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
vPortExitCritical/26 (vPortExitCritical) @0698d0e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: xEventGroupSync/5 (384944 (estimated locally),0.02 per call) xEventGroupClearBits.part.0/30 (1073741824 (estimated locally),1.00 per call) xEventGroupWaitBits/6 (384944 (estimated locally),0.01 per call) 
  Calls: 
vPortEnterCritical/25 (vPortEnterCritical) @0698d000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: xEventGroupSync/5 (384944 (estimated locally),0.02 per call) xEventGroupClearBits.part.0/30 (1073741824 (estimated locally),1.00 per call) xEventGroupWaitBits/6 (384944 (estimated locally),0.01 per call) 
  Calls: 
uxTaskResetEventItemValue/24 (uxTaskResetEventItemValue) @0694c2a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: xEventGroupSync/5 (1166498 (estimated locally),0.05 per call) xEventGroupWaitBits/6 (1166498 (estimated locally),0.04 per call) 
  Calls: 
xTaskResumeAll/23 (xTaskResumeAll) @0694c000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: vEventGroupDelete/11 (6281105 (estimated locally),0.27 per call) xEventGroupSync/5 (2332997 (estimated locally),0.11 per call) xEventGroupSetBits.part.0/31 (118111600 (estimated locally),1.00 per call) xEventGroupWaitBits/6 (2332997 (estimated locally),0.08 per call) 
  Calls: 
vTaskPlaceOnUnorderedEventList/22 (vTaskPlaceOnUnorderedEventList) @0694cee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: xEventGroupSync/5 (508127 (estimated locally),0.02 per call) xEventGroupWaitBits/6 (583249 (estimated locally),0.02 per call) 
  Calls: 
vTaskSuspendAll/21 (vTaskSuspendAll) @0694ce00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: vEventGroupDelete/11 (12216749 (estimated locally),0.53 per call) xEventGroupSync/5 (2332997 (estimated locally),0.11 per call) xEventGroupSetBits.part.0/31 (118111600 (estimated locally),1.00 per call) xEventGroupWaitBits/6 (2332997 (estimated locally),0.08 per call) 
  Calls: 
xTaskGetSchedulerState/20 (xTaskGetSchedulerState) @0694cd20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: xEventGroupSync/5 (3508266 (estimated locally),0.17 per call) xEventGroupWaitBits/6 (3508266 (estimated locally),0.12 per call) 
  Calls: 
vListInitialise/19 (vListInitialise) @0694c9a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: xEventGroupCreate/4 (574129753 (estimated locally),0.53 per call) 
  Calls: 
pvPortMalloc/18 (pvPortMalloc) @0694c8c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: xEventGroupCreate/4 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
vEventGroupSetNumber/17 (vEventGroupSetNumber) @0694c460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
uxEventGroupGetNumber/16 (uxEventGroupGetNumber) @0694c1c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
xEventGroupSetBitsFromISR/15 (xEventGroupSetBitsFromISR) @06942e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: vEventGroupSetBitsCallback/12 (addr) 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: xTimerPendFunctionCallFromISR/27 (1073741824 (estimated locally),1.00 per call) 
prvTestWaitCondition/14 (prvTestWaitCondition) @069427e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: xEventGroupWaitBits/6 (384944 (estimated locally),0.01 per call) xEventGroupWaitBits/6 (2332997 (estimated locally),0.08 per call) 
  Calls: 
vEventGroupClearBitsCallback/13 (vEventGroupClearBitsCallback) @069420e0
  Type: function definition analyzed
  Visibility: externally_visible public
  Address is taken.
  References: 
  Referring: xEventGroupClearBitsFromISR/8 (addr) 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: xEventGroupClearBits/7 (1073741824 (estimated locally),1.00 per call) 
vEventGroupSetBitsCallback/12 (vEventGroupSetBitsCallback) @06942d20
  Type: function definition analyzed
  Visibility: externally_visible public
  Address is taken.
  References: 
  Referring: xEventGroupSetBitsFromISR/15 (addr) 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: xEventGroupSetBits/10 (1073741824 (estimated locally),1.00 per call) 
vEventGroupDelete/11 (vEventGroupDelete) @06942a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:22847857 (estimated locally) body optimize_size
  Called by: 
  Calls: vPortFree/29 (6281105 (estimated locally),0.27 per call) xTaskResumeAll/23 (6281105 (estimated locally),0.27 per call) vTaskRemoveFromUnorderedEventList/28 (101985162 (estimated locally),4.46 per call) vTaskSuspendAll/21 (12216749 (estimated locally),0.53 per call) 
xEventGroupSetBits/10 (xEventGroupSetBits) @06942700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:22667608 (estimated locally) body optimize_size
  Called by: vEventGroupSetBitsCallback/12 (1073741824 (estimated locally),1.00 per call) xEventGroupSync/5 (2332997 (estimated locally),0.11 per call) 
  Calls: xEventGroupSetBits.part.0/31 (5236217 (estimated locally),0.23 per call) 
xEventGroupGetBitsFromISR/9 (xEventGroupGetBitsFromISR) @069422a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
xEventGroupClearBitsFromISR/8 (xEventGroupClearBitsFromISR) @06942000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: vEventGroupClearBitsCallback/13 (addr) 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: xTimerPendFunctionCallFromISR/27 (1073741824 (estimated locally),1.00 per call) 
xEventGroupClearBits/7 (xEventGroupClearBits) @0692fa80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:22667608 (estimated locally) body optimize_size
  Called by: vEventGroupClearBitsCallback/13 (1073741824 (estimated locally),1.00 per call) 
  Calls: xEventGroupClearBits.part.0/30 (5236217 (estimated locally),0.23 per call) 
xEventGroupWaitBits/6 (xEventGroupWaitBits) @0692fe00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:30374594 (estimated locally) body optimize_size
  Called by: 
  Calls: vPortExitCritical/26 (384944 (estimated locally),0.01 per call) prvTestWaitCondition/14 (384944 (estimated locally),0.01 per call) vPortEnterCritical/25 (384944 (estimated locally),0.01 per call) uxTaskResetEventItemValue/24 (1166498 (estimated locally),0.04 per call) xTaskResumeAll/23 (2332997 (estimated locally),0.08 per call) vTaskPlaceOnUnorderedEventList/22 (583249 (estimated locally),0.02 per call) prvTestWaitCondition/14 (2332997 (estimated locally),0.08 per call) vTaskSuspendAll/21 (2332997 (estimated locally),0.08 per call) xTaskGetSchedulerState/20 (3508266 (estimated locally),0.12 per call) 
xEventGroupSync/5 (xEventGroupSync) @0692f9a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:21262216 (estimated locally) body optimize_size
  Called by: 
  Calls: vPortExitCritical/26 (384944 (estimated locally),0.02 per call) vPortEnterCritical/25 (384944 (estimated locally),0.02 per call) uxTaskResetEventItemValue/24 (1166498 (estimated locally),0.05 per call) xTaskResumeAll/23 (2332997 (estimated locally),0.11 per call) vTaskPlaceOnUnorderedEventList/22 (508127 (estimated locally),0.02 per call) xEventGroupSetBits/10 (2332997 (estimated locally),0.11 per call) vTaskSuspendAll/21 (2332997 (estimated locally),0.11 per call) xTaskGetSchedulerState/20 (3508266 (estimated locally),0.17 per call) 
xEventGroupCreate/4 (xEventGroupCreate) @0692f620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: vListInitialise/19 (574129753 (estimated locally),0.53 per call) pvPortMalloc/18 (1073741824 (estimated locally),1.00 per call) 

;; Function xEventGroupCreate (xEventGroupCreate, funcdef_no=4, decl_uid=6400, cgraph_uid=5, symbol_order=4)

Modification phase of node xEventGroupCreate/4
xEventGroupCreate ()
{
  struct EventGroup_t * pxEventBits;
  struct List_t * _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  pxEventBits_5 = pvPortMalloc (28);
  # DEBUG pxEventBits => pxEventBits_5
  # DEBUG BEGIN_STMT
  if (pxEventBits_5 != 0B)
    goto <bb 3>; [53.47%]
  else
    goto <bb 4>; [46.53%]

  <bb 3> [local count: 574129753]:
  # DEBUG BEGIN_STMT
  pxEventBits_5->uxEventBits = 0;
  # DEBUG BEGIN_STMT
  _1 = &pxEventBits_5->xTasksWaitingForBits;
  vListInitialise (_1);
  # DEBUG BEGIN_STMT

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return pxEventBits_5;

}



;; Function xEventGroupWaitBits (xEventGroupWaitBits, funcdef_no=6, decl_uid=6406, cgraph_uid=7, symbol_order=6)

Modification phase of node xEventGroupWaitBits/6
xEventGroupWaitBits (struct EventGroupDef_t * xEventGroup, const EventBits_t uxBitsToWaitFor, const BaseType_t xClearOnExit, const BaseType_t xWaitForAllBits, TickType_t xTicksToWait)
{
  const EventBits_t uxCurrentEventBits;
  BaseType_t xAlreadyYielded;
  BaseType_t xWaitConditionMet;
  EventBits_t uxControlBits;
  EventBits_t uxReturn;
  long unsigned int _1;
  long int _2;
  long unsigned int _3;
  long unsigned int _4;
  struct List_t * _5;
  long unsigned int _6;
  long unsigned int _7;
  long int _8;
  long unsigned int _9;
  long unsigned int _10;

  <bb 2> [local count: 30374594]:
  # DEBUG BEGIN_STMT
  # DEBUG pxEventBits => xEventGroup_22(D)
  # DEBUG BEGIN_STMT
  # DEBUG uxControlBits => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG xTimeoutOccurred => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (xEventGroup_22(D) == 0B)
    goto <bb 3>; [30.00%]
  else
    goto <bb 5>; [70.00%]

  <bb 3> [local count: 9112378]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i " :  :  : "memory");

  <bb 4> [local count: 920350123]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 34> [local count: 920350123]:
  goto <bb 4>; [100.00%]

  <bb 5> [local count: 21262216]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = uxBitsToWaitFor_23(D) & 4278190080;
  if (_1 != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 6> [local count: 10631108]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i " :  :  : "memory");

  <bb 7> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 35> [local count: 1073741824]:
  goto <bb 7>; [100.00%]

  <bb 8> [local count: 10631108]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (uxBitsToWaitFor_23(D) == 0)
    goto <bb 9>; [67.00%]
  else
    goto <bb 11>; [33.00%]

  <bb 9> [local count: 7122842]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i " :  :  : "memory");

  <bb 10> [local count: 719407025]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 36> [local count: 719407025]:
  goto <bb 10>; [100.00%]

  <bb 11> [local count: 3508266]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _2 = xTaskGetSchedulerState ();
  if (_2 != 0)
    goto <bb 15>; [33.00%]
  else
    goto <bb 12>; [67.00%]

  <bb 12> [local count: 2350538]:
  if (xTicksToWait_26(D) == 0)
    goto <bb 15>; [50.00%]
  else
    goto <bb 13>; [50.00%]

  <bb 13> [local count: 1175269]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i " :  :  : "memory");

  <bb 14> [local count: 118702158]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 37> [local count: 118702158]:
  goto <bb 14>; [100.00%]

  <bb 15> [local count: 2332997]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  vTaskSuspendAll ();
  # DEBUG BEGIN_STMT
  uxCurrentEventBits_28 = MEM[(struct EventGroup_t *)xEventGroup_22(D)].uxEventBits;
  # DEBUG uxCurrentEventBits => uxCurrentEventBits_28
  # DEBUG BEGIN_STMT
  xWaitConditionMet_30 = prvTestWaitCondition (uxCurrentEventBits_28, uxBitsToWaitFor_23(D), xWaitForAllBits_29(D));
  # DEBUG xWaitConditionMet => xWaitConditionMet_30
  # DEBUG BEGIN_STMT
  if (xWaitConditionMet_30 != 0)
    goto <bb 16>; [50.00%]
  else
    goto <bb 18>; [50.00%]

  <bb 16> [local count: 1166498]:
  # DEBUG BEGIN_STMT
  # DEBUG uxReturn => uxCurrentEventBits_28
  # DEBUG BEGIN_STMT
  # DEBUG xTicksToWait => 0
  # DEBUG BEGIN_STMT
  if (xClearOnExit_31(D) != 0)
    goto <bb 17>; [50.00%]
  else
    goto <bb 24>; [50.00%]

  <bb 17> [local count: 583249]:
  # DEBUG BEGIN_STMT
  _3 = ~uxBitsToWaitFor_23(D);
  _4 = _3 & uxCurrentEventBits_28;
  MEM[(struct EventGroup_t *)xEventGroup_22(D)].uxEventBits = _4;
  goto <bb 24>; [100.00%]

  <bb 18> [local count: 1166498]:
  # DEBUG BEGIN_STMT
  if (xTicksToWait_26(D) == 0)
    goto <bb 24>; [50.00%]
  else
    goto <bb 19>; [50.00%]

  <bb 19> [local count: 583249]:
  # DEBUG BEGIN_STMT
  if (xClearOnExit_31(D) != 0)
    goto <bb 20>; [50.00%]
  else
    goto <bb 21>; [50.00%]

  <bb 20> [local count: 291625]:
  # DEBUG BEGIN_STMT
  # DEBUG uxControlBits => 16777216

  <bb 21> [local count: 583249]:
  # uxControlBits_15 = PHI <0(19), 16777216(20)>
  # DEBUG uxControlBits => uxControlBits_15
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (xWaitForAllBits_29(D) != 0)
    goto <bb 22>; [50.00%]
  else
    goto <bb 23>; [50.00%]

  <bb 22> [local count: 291625]:
  # DEBUG BEGIN_STMT
  uxControlBits_32 = uxControlBits_15 | 67108864;
  # DEBUG uxControlBits => uxControlBits_32

  <bb 23> [local count: 583249]:
  # uxControlBits_16 = PHI <uxControlBits_15(21), uxControlBits_32(22)>
  # DEBUG uxControlBits => uxControlBits_16
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _5 = &MEM[(struct EventGroup_t *)xEventGroup_22(D)].xTasksWaitingForBits;
  _6 = uxControlBits_16 | uxBitsToWaitFor_23(D);
  vTaskPlaceOnUnorderedEventList (_5, _6, xTicksToWait_26(D));
  # DEBUG BEGIN_STMT
  # DEBUG uxReturn => 0

  <bb 24> [local count: 2332997]:
  # xTicksToWait_11 = PHI <0(17), xTicksToWait_26(D)(18), xTicksToWait_26(D)(23), 0(16)>
  # uxReturn_12 = PHI <uxCurrentEventBits_28(17), uxCurrentEventBits_28(18), 0(23), uxCurrentEventBits_28(16)>
  # DEBUG xTimeoutOccurred => NULL
  # DEBUG uxReturn => uxReturn_12
  # DEBUG xTicksToWait => xTicksToWait_11
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  xAlreadyYielded_36 = xTaskResumeAll ();
  # DEBUG xAlreadyYielded => xAlreadyYielded_36
  # DEBUG BEGIN_STMT
  if (xTicksToWait_11 != 0)
    goto <bb 25>; [50.00%]
  else
    goto <bb 33>; [50.00%]

  <bb 25> [local count: 1166498]:
  # DEBUG BEGIN_STMT
  if (xAlreadyYielded_36 == 0)
    goto <bb 26>; [50.00%]
  else
    goto <bb 27>; [50.00%]

  <bb 26> [local count: 583249]:
  # DEBUG BEGIN_STMT
  MEM[(volatile uint32_t *)3758157060B] ={v} 268435456;
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("dsb" :  :  : "memory");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("isb");
  # DEBUG BEGIN_STMT

  <bb 27> [local count: 1166498]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  uxReturn_41 = uxTaskResetEventItemValue ();
  # DEBUG uxReturn => uxReturn_41
  # DEBUG BEGIN_STMT
  _7 = uxReturn_41 & 33554432;
  if (_7 == 0)
    goto <bb 28>; [33.00%]
  else
    goto <bb 32>; [67.00%]

  <bb 28> [local count: 384944]:
  # DEBUG BEGIN_STMT
  vPortEnterCritical ();
  # DEBUG BEGIN_STMT
  uxReturn_43 = MEM[(struct EventGroup_t *)xEventGroup_22(D)].uxEventBits;
  # DEBUG uxReturn => uxReturn_43
  # DEBUG BEGIN_STMT
  _8 = prvTestWaitCondition (uxReturn_43, uxBitsToWaitFor_23(D), xWaitForAllBits_29(D));
  if (_8 != 0)
    goto <bb 29>; [50.00%]
  else
    goto <bb 31>; [50.00%]

  <bb 29> [local count: 192472]:
  # DEBUG BEGIN_STMT
  if (xClearOnExit_31(D) != 0)
    goto <bb 30>; [50.00%]
  else
    goto <bb 31>; [50.00%]

  <bb 30> [local count: 96236]:
  # DEBUG BEGIN_STMT
  _9 = ~uxBitsToWaitFor_23(D);
  _10 = _9 & uxReturn_43;
  MEM[(struct EventGroup_t *)xEventGroup_22(D)].uxEventBits = _10;

  <bb 31> [local count: 384944]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG xTimeoutOccurred => 1
  # DEBUG BEGIN_STMT
  vPortExitCritical ();

  <bb 32> [local count: 1166498]:
  # uxReturn_13 = PHI <uxReturn_41(27), uxReturn_43(31)>
  # DEBUG uxReturn => uxReturn_13
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  uxReturn_46 = uxReturn_13 & 16777215;
  # DEBUG uxReturn => uxReturn_46

  <bb 33> [local count: 2332997]:
  # uxReturn_14 = PHI <uxReturn_12(24), uxReturn_46(32)>
  # DEBUG uxReturn => uxReturn_14
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return uxReturn_14;

}



;; Function xEventGroupClearBits (xEventGroupClearBits, funcdef_no=7, decl_uid=6409, cgraph_uid=8, symbol_order=7)

Modification phase of node xEventGroupClearBits/7
xEventGroupClearBits (struct EventGroupDef_t * xEventGroup, const EventBits_t uxBitsToClear)
{
  EventBits_t D.6726;
  long unsigned int _1;

  <bb 2> [local count: 22667608]:
  # DEBUG BEGIN_STMT
  # DEBUG pxEventBits => xEventGroup_3(D)
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (xEventGroup_3(D) == 0B)
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
  _1 = uxBitsToClear_5(D) & 4278190080;
  if (_1 != 0)
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
  _2 = xEventGroupClearBits.part.0 (xEventGroup_3(D), uxBitsToClear_5(D));
  return _2;

}



;; Function vEventGroupClearBitsCallback (vEventGroupClearBitsCallback, funcdef_no=13, decl_uid=6434, cgraph_uid=14, symbol_order=13)

Modification phase of node vEventGroupClearBitsCallback/13
vEventGroupClearBitsCallback (void * pvEventGroup, uint32_t ulBitsToClear)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  xEventGroupClearBits (pvEventGroup_2(D), ulBitsToClear_3(D));
  # DEBUG BEGIN_STMT
  return;

}



;; Function xEventGroupClearBitsFromISR (xEventGroupClearBitsFromISR, funcdef_no=8, decl_uid=6412, cgraph_uid=9, symbol_order=8)

Modification phase of node xEventGroupClearBitsFromISR/8
xEventGroupClearBitsFromISR (struct EventGroupDef_t * xEventGroup, const EventBits_t uxBitsToClear)
{
  BaseType_t xReturn;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  xReturn_5 = xTimerPendFunctionCallFromISR (vEventGroupClearBitsCallback, xEventGroup_2(D), uxBitsToClear_3(D), 0B);
  # DEBUG xReturn => xReturn_5
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return xReturn_5;

}



;; Function xEventGroupGetBitsFromISR (xEventGroupGetBitsFromISR, funcdef_no=9, decl_uid=6426, cgraph_uid=10, symbol_order=9)

Modification phase of node xEventGroupGetBitsFromISR/9
xEventGroupGetBitsFromISR (struct EventGroupDef_t * xEventGroup)
{
  uint32_t ulOriginalBASEPRI;
  uint32_t ulNewBASEPRI;
  EventBits_t uxReturn;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG pxEventBits => xEventGroup_1(D)
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
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
" : "=r" ulOriginalBASEPRI_4, "=r" ulNewBASEPRI_5 : "i" 16 : "memory");
  # DEBUG ulNewBASEPRI => ulNewBASEPRI_5
  # DEBUG ulOriginalBASEPRI => ulOriginalBASEPRI_4
  # DEBUG BEGIN_STMT
  # DEBUG ulNewBASEPRI => NULL
  # DEBUG ulOriginalBASEPRI => NULL
  # DEBUG uxSavedInterruptStatus => ulOriginalBASEPRI_4
  # DEBUG BEGIN_STMT
  uxReturn_3 = MEM[(const struct EventGroup_t *)xEventGroup_1(D)].uxEventBits;
  # DEBUG uxReturn => uxReturn_3
  # DEBUG BEGIN_STMT
  # DEBUG ulNewMaskValue => ulOriginalBASEPRI_4
  # DEBUG INLINE_ENTRY vPortSetBASEPRI
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("   msr basepri, %0 " :  : "r" ulOriginalBASEPRI_4 : "memory");
  # DEBUG ulNewMaskValue => NULL
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return uxReturn_3;

}



;; Function xEventGroupSetBits (xEventGroupSetBits, funcdef_no=10, decl_uid=6415, cgraph_uid=11, symbol_order=10)

Modification phase of node xEventGroupSetBits/10
xEventGroupSetBits (struct EventGroupDef_t * xEventGroup, const EventBits_t uxBitsToSet)
{
  EventBits_t D.6749;
  long unsigned int _1;

  <bb 2> [local count: 22667608]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG uxBitsToClear => 0
  # DEBUG BEGIN_STMT
  # DEBUG pxEventBits => xEventGroup_3(D)
  # DEBUG BEGIN_STMT
  # DEBUG xMatchFound => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (xEventGroup_3(D) == 0B)
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
  _1 = uxBitsToSet_4(D) & 4278190080;
  if (_1 != 0)
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
  _6 = xEventGroupSetBits.part.0 (xEventGroup_3(D), uxBitsToSet_4(D));
  return _6;

}



;; Function xEventGroupSync (xEventGroupSync, funcdef_no=5, decl_uid=6424, cgraph_uid=6, symbol_order=5)

Modification phase of node xEventGroupSync/5
xEventGroupSync (struct EventGroupDef_t * xEventGroup, const EventBits_t uxBitsToSet, const EventBits_t uxBitsToWaitFor, TickType_t xTicksToWait)
{
  BaseType_t xAlreadyYielded;
  EventBits_t uxReturn;
  EventBits_t uxOriginalBitValue;
  long unsigned int _1;
  long int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  struct List_t * _8;
  long unsigned int _9;
  long unsigned int _10;
  long unsigned int _11;
  long unsigned int _12;
  long unsigned int _13;

  <bb 2> [local count: 21262216]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG pxEventBits => xEventGroup_23(D)
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG xTimeoutOccurred => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = uxBitsToWaitFor_24(D) & 4278190080;
  if (_1 != 0)
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

  <bb 26> [local count: 1073741824]:
  goto <bb 4>; [100.00%]

  <bb 5> [local count: 10631108]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (uxBitsToWaitFor_24(D) == 0)
    goto <bb 6>; [67.00%]
  else
    goto <bb 8>; [33.00%]

  <bb 6> [local count: 7122842]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i " :  :  : "memory");

  <bb 7> [local count: 719407024]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 27> [local count: 719407024]:
  goto <bb 7>; [100.00%]

  <bb 8> [local count: 3508266]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _2 = xTaskGetSchedulerState ();
  if (_2 != 0)
    goto <bb 12>; [33.00%]
  else
    goto <bb 9>; [67.00%]

  <bb 9> [local count: 2350538]:
  if (xTicksToWait_27(D) == 0)
    goto <bb 12>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 10> [local count: 1175269]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i " :  :  : "memory");

  <bb 11> [local count: 118702158]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 28> [local count: 118702158]:
  goto <bb 11>; [100.00%]

  <bb 12> [local count: 2332997]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  vTaskSuspendAll ();
  # DEBUG BEGIN_STMT
  uxOriginalBitValue_29 = MEM[(struct EventGroup_t *)xEventGroup_23(D)].uxEventBits;
  # DEBUG uxOriginalBitValue => uxOriginalBitValue_29
  # DEBUG BEGIN_STMT
  xEventGroupSetBits (xEventGroup_23(D), uxBitsToSet_30(D));
  # DEBUG BEGIN_STMT
  _3 = uxOriginalBitValue_29 | uxBitsToSet_30(D);
  _4 = _3 & uxBitsToWaitFor_24(D);
  if (_4 == uxBitsToWaitFor_24(D))
    goto <bb 13>; [34.00%]
  else
    goto <bb 14>; [66.00%]

  <bb 13> [local count: 793219]:
  # DEBUG BEGIN_STMT
  # DEBUG uxReturn => _3
  # DEBUG BEGIN_STMT
  _5 = MEM[(struct EventGroup_t *)xEventGroup_23(D)].uxEventBits;
  _6 = ~uxBitsToWaitFor_24(D);
  _7 = _5 & _6;
  MEM[(struct EventGroup_t *)xEventGroup_23(D)].uxEventBits = _7;
  # DEBUG BEGIN_STMT
  # DEBUG xTicksToWait => 0
  goto <bb 17>; [100.00%]

  <bb 14> [local count: 1539778]:
  # DEBUG BEGIN_STMT
  if (xTicksToWait_27(D) != 0)
    goto <bb 15>; [33.00%]
  else
    goto <bb 16>; [67.00%]

  <bb 15> [local count: 508127]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _8 = &MEM[(struct EventGroup_t *)xEventGroup_23(D)].xTasksWaitingForBits;
  _9 = uxBitsToWaitFor_24(D) | 83886080;
  vTaskPlaceOnUnorderedEventList (_8, _9, xTicksToWait_27(D));
  # DEBUG BEGIN_STMT
  # DEBUG uxReturn => 0
  goto <bb 17>; [100.00%]

  <bb 16> [local count: 1031651]:
  # DEBUG BEGIN_STMT
  uxReturn_32 = MEM[(struct EventGroup_t *)xEventGroup_23(D)].uxEventBits;
  # DEBUG uxReturn => uxReturn_32
  # DEBUG BEGIN_STMT
  # DEBUG xTimeoutOccurred => 1

  <bb 17> [local count: 2332997]:
  # xTicksToWait_14 = PHI <0(13), xTicksToWait_27(D)(15), 0(16)>
  # uxReturn_15 = PHI <_3(13), 0(15), uxReturn_32(16)>
  # DEBUG uxReturn => uxReturn_15
  # DEBUG xTicksToWait => xTicksToWait_14
  # DEBUG BEGIN_STMT
  xAlreadyYielded_36 = xTaskResumeAll ();
  # DEBUG xAlreadyYielded => xAlreadyYielded_36
  # DEBUG BEGIN_STMT
  if (xTicksToWait_14 != 0)
    goto <bb 18>; [50.00%]
  else
    goto <bb 25>; [50.00%]

  <bb 18> [local count: 1166498]:
  # DEBUG BEGIN_STMT
  if (xAlreadyYielded_36 == 0)
    goto <bb 19>; [50.00%]
  else
    goto <bb 20>; [50.00%]

  <bb 19> [local count: 583249]:
  # DEBUG BEGIN_STMT
  MEM[(volatile uint32_t *)3758157060B] ={v} 268435456;
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("dsb" :  :  : "memory");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("isb");
  # DEBUG BEGIN_STMT

  <bb 20> [local count: 1166498]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  uxReturn_41 = uxTaskResetEventItemValue ();
  # DEBUG uxReturn => uxReturn_41
  # DEBUG BEGIN_STMT
  _10 = uxReturn_41 & 33554432;
  if (_10 == 0)
    goto <bb 21>; [33.00%]
  else
    goto <bb 24>; [67.00%]

  <bb 21> [local count: 384944]:
  # DEBUG BEGIN_STMT
  vPortEnterCritical ();
  # DEBUG BEGIN_STMT
  uxReturn_43 = MEM[(struct EventGroup_t *)xEventGroup_23(D)].uxEventBits;
  # DEBUG uxReturn => uxReturn_43
  # DEBUG BEGIN_STMT
  _11 = uxBitsToWaitFor_24(D) & uxReturn_43;
  if (_11 == uxBitsToWaitFor_24(D))
    goto <bb 22>; [34.00%]
  else
    goto <bb 23>; [66.00%]

  <bb 22> [local count: 130881]:
  # DEBUG BEGIN_STMT
  _12 = ~uxBitsToWaitFor_24(D);
  _13 = _12 & uxReturn_43;
  MEM[(struct EventGroup_t *)xEventGroup_23(D)].uxEventBits = _13;

  <bb 23> [local count: 384944]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  vPortExitCritical ();
  # DEBUG BEGIN_STMT
  # DEBUG xTimeoutOccurred => 1

  <bb 24> [local count: 1166498]:
  # uxReturn_16 = PHI <uxReturn_41(20), uxReturn_43(23)>
  # DEBUG uxReturn => uxReturn_16
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  uxReturn_46 = uxReturn_16 & 16777215;
  # DEBUG uxReturn => uxReturn_46

  <bb 25> [local count: 2332997]:
  # uxReturn_17 = PHI <uxReturn_15(17), uxReturn_46(24)>
  # DEBUG uxReturn => uxReturn_17
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return uxReturn_17;

}



;; Function vEventGroupSetBitsCallback (vEventGroupSetBitsCallback, funcdef_no=12, decl_uid=6431, cgraph_uid=13, symbol_order=12)

Modification phase of node vEventGroupSetBitsCallback/12
vEventGroupSetBitsCallback (void * pvEventGroup, uint32_t ulBitsToSet)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  xEventGroupSetBits (pvEventGroup_2(D), ulBitsToSet_3(D));
  # DEBUG BEGIN_STMT
  return;

}



;; Function vEventGroupDelete (vEventGroupDelete, funcdef_no=11, decl_uid=6428, cgraph_uid=12, symbol_order=11)

Modification phase of node vEventGroupDelete/11
vEventGroupDelete (struct EventGroupDef_t * xEventGroup)
{
  struct xLIST_ITEM * _1;
  const struct MiniListItem_t * _2;
  long unsigned int _3;

  <bb 2> [local count: 22847857]:
  # DEBUG BEGIN_STMT
  # DEBUG pxEventBits => xEventGroup_5(D)
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (xEventGroup_5(D) == 0B)
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

  <bb 12> [local count: 1073741824]:
  goto <bb 4>; [100.00%]

  <bb 5> [local count: 12216749]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG D#2 => &MEM[(struct EventGroup_t *)xEventGroup_5(D)].xTasksWaitingForBits
  # DEBUG pxTasksWaitingForBits => D#2
  # DEBUG BEGIN_STMT
  vTaskSuspendAll ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  goto <bb 10>; [100.00%]

  <bb 6> [local count: 107920806]:
  # DEBUG BEGIN_STMT
  _1 = MEM[(const struct List_t *)xEventGroup_5(D) + 4B].xListEnd.pxNext;
  _2 = &MEM[(const struct List_t *)xEventGroup_5(D) + 4B].xListEnd;
  if (_1 == _2)
    goto <bb 7>; [5.50%]
  else
    goto <bb 9>; [94.50%]

  <bb 7> [local count: 5935644]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i " :  :  : "memory");

  <bb 8> [local count: 599500028]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 13> [local count: 599500028]:
  goto <bb 8>; [100.00%]

  <bb 9> [local count: 101985162]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  vTaskRemoveFromUnorderedEventList (_1, 33554432);

  <bb 10> [local count: 114201911]:
  # DEBUG BEGIN_STMT
  _3 = MEM[(const struct List_t *)xEventGroup_5(D) + 4B].uxNumberOfItems;
  if (_3 != 0)
    goto <bb 6>; [94.50%]
  else
    goto <bb 11>; [5.50%]

  <bb 11> [local count: 6281105]:
  # DEBUG BEGIN_STMT
  xTaskResumeAll ();
  # DEBUG BEGIN_STMT
  vPortFree (xEventGroup_5(D));
  # DEBUG BEGIN_STMT
  return;

}



;; Function xEventGroupSetBitsFromISR (xEventGroupSetBitsFromISR, funcdef_no=15, decl_uid=6419, cgraph_uid=16, symbol_order=15)

Modification phase of node xEventGroupSetBitsFromISR/15
xEventGroupSetBitsFromISR (struct EventGroupDef_t * xEventGroup, const EventBits_t uxBitsToSet, BaseType_t * pxHigherPriorityTaskWoken)
{
  BaseType_t xReturn;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  xReturn_6 = xTimerPendFunctionCallFromISR (vEventGroupSetBitsCallback, xEventGroup_2(D), uxBitsToSet_3(D), pxHigherPriorityTaskWoken_4(D));
  # DEBUG xReturn => xReturn_6
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return xReturn_6;

}



;; Function uxEventGroupGetNumber (uxEventGroupGetNumber, funcdef_no=16, decl_uid=6436, cgraph_uid=17, symbol_order=16)

Modification phase of node uxEventGroupGetNumber/16
uxEventGroupGetNumber (void * xEventGroup)
{
  UBaseType_t xReturn;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG pxEventBits => xEventGroup_2(D)
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (xEventGroup_2(D) == 0B)
    goto <bb 4>; [30.00%]
  else
    goto <bb 3>; [70.00%]

  <bb 3> [local count: 751619281]:
  # DEBUG BEGIN_STMT
  xReturn_4 = MEM[(const struct EventGroup_t *)xEventGroup_2(D)].uxEventGroupNumber;
  # DEBUG xReturn => xReturn_4

  <bb 4> [local count: 1073741824]:
  # xReturn_1 = PHI <0(2), xReturn_4(3)>
  # DEBUG xReturn => xReturn_1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return xReturn_1;

}



;; Function vEventGroupSetNumber (vEventGroupSetNumber, funcdef_no=17, decl_uid=6439, cgraph_uid=18, symbol_order=17)

Modification phase of node vEventGroupSetNumber/17
vEventGroupSetNumber (void * xEventGroup, UBaseType_t uxEventGroupNumber)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  MEM[(struct EventGroup_t *)xEventGroup_2(D)].uxEventGroupNumber = uxEventGroupNumber_3(D);
  # DEBUG BEGIN_STMT
  return;

}


