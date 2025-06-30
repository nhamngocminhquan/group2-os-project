
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  vTaskStartScheduler/38:
  Jump functions of caller  xTaskCreate/37:
  Jump functions of caller  xQueueGenericCreate/36:
  Jump functions of caller  vInitInterruptTable/35:
  Jump functions of caller  xQueueGenericSend/34:
  Jump functions of caller  xQueueSemaphoreTake/33:
  Jump functions of caller  main/32:
    callsite  main/32 -> vTaskStartScheduler/38 : 
       no arg info
    callsite  main/32 -> xTaskCreate/37 : 
       no arg info
    callsite  main/32 -> xTaskCreate/37 : 
       no arg info
    callsite  main/32 -> xTaskCreate/37 : 
       no arg info
    callsite  main/32 -> xQueueGenericCreate/36 : 
       no arg info
    callsite  main/32 -> xQueueGenericCreate/36 : 
       no arg info
    callsite  main/32 -> xQueueGenericCreate/36 : 
       no arg info
  Jump functions of caller  PIT0_Handler/31:
  Jump functions of caller  timerDisable/30:
  Jump functions of caller  timerSetUp/29:
    callsite  timerSetUp/29 -> vInitInterruptTable/35 : 
       no arg info
  Jump functions of caller  task2/28:
    callsite  task2/28 -> xQueueGenericSend/34 : 
       no arg info
    callsite  task2/28 -> xQueueSemaphoreTake/33 : 
       no arg info
    callsite  task2/28 -> timerSetUp/29 : 
  Jump functions of caller  task1/27:
    callsite  task1/27 -> xQueueGenericSend/34 : 
       no arg info
    callsite  task1/27 -> xQueueSemaphoreTake/33 : 
       no arg info
  Jump functions of caller  task0/26:
    callsite  task0/26 -> xQueueSemaphoreTake/33 : 
       no arg info
  Jump functions of caller  vApplicationMallocFailedHook/22:
  Jump functions of caller  vApplicationStackOverflowHook/21:
  Jump functions of caller  vAssertCalled/20:
  Jump functions of caller  vApplicationTickHook/19:

 Propagating constants:

Not considering task2/28 for cloning; -fipa-cp-clone disabled.
Not considering task1/27 for cloning; -fipa-cp-clone disabled.
Not considering task0/26 for cloning; -fipa-cp-clone disabled.
Not considering vApplicationStackOverflowHook/21 for cloning; -fipa-cp-clone disabled.
Not considering vAssertCalled/20 for cloning; -fipa-cp-clone disabled.

overall_size: 153
 - context independent values, size: 19, time_benefit: 1.000000
 - context independent values, size: 18, time_benefit: 1.000000
 - context independent values, size: 12, time_benefit: 1.000000
 - context independent values, size: 3, time_benefit: 2.000000
 - context independent values, size: 3, time_benefit: 2.000000

IPA lattices after all propagation:

Lattices:
  Node: main/32:
  Node: PIT0_Handler/31:
  Node: timerDisable/30:
  Node: timerSetUp/29:
  Node: task2/28:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: task1/27:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: task0/26:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: vApplicationMallocFailedHook/22:
  Node: vApplicationStackOverflowHook/21:
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
  Node: vAssertCalled/20:
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
  Node: vApplicationTickHook/19:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

vTaskStartScheduler/38 (vTaskStartScheduler) @069aeee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/32 (10631108 (estimated locally),1.00 per call) 
  Calls: 
xTaskCreate/37 (xTaskCreate) @069aee00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/32 (10631108 (estimated locally),1.00 per call) main/32 (10631108 (estimated locally),1.00 per call) main/32 (10631108 (estimated locally),1.00 per call) 
  Calls: 
xQueueGenericCreate/36 (xQueueGenericCreate) @069aed20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/32 (10631108 (estimated locally),1.00 per call) main/32 (10631108 (estimated locally),1.00 per call) main/32 (10631108 (estimated locally),1.00 per call) 
  Calls: 
vInitInterruptTable/35 (vInitInterruptTable) @069ae9a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: timerSetUp/29 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
xQueueGenericSend/34 (xQueueGenericSend) @069ae540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: task2/28 (1073741824 (estimated locally),101.00 per call) task1/27 (1073741824 (estimated locally),101.00 per call) 
  Calls: 
xQueueSemaphoreTake/33 (xQueueSemaphoreTake) @069ae380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: task2/28 (1073741824 (estimated locally),101.00 per call) task1/27 (1073741824 (estimated locally),101.00 per call) task0/26 (1073741824 (estimated locally),297.06 per call) 
  Calls: 
main/32 (main) @06a14d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: xSemaphore0/8 (write) xSemaphore1/9 (write) xSemaphore2/10 (write) task0/26 (addr) taskH0/11 (write) task1/27 (addr) taskH1/12 (write) task2/28 (addr) taskH2/13 (write) 
  Referring: 
  Availability: available
  Function flags: count:10631108 (estimated locally) body only_called_at_startup executed_once optimize_size
  Called by: 
  Calls: vTaskStartScheduler/38 (10631108 (estimated locally),1.00 per call) xTaskCreate/37 (10631108 (estimated locally),1.00 per call) xTaskCreate/37 (10631108 (estimated locally),1.00 per call) xTaskCreate/37 (10631108 (estimated locally),1.00 per call) xQueueGenericCreate/36 (10631108 (estimated locally),1.00 per call) xQueueGenericCreate/36 (10631108 (estimated locally),1.00 per call) xQueueGenericCreate/36 (10631108 (estimated locally),1.00 per call) 
PIT0_Handler/31 (PIT0_Handler) @06a149a0
  Type: function definition analyzed
  Visibility: externally_visible public
  Address is taken.
  References: counter/17 (read) counter/17 (write) 
  Referring: timerSetUp/29 (addr) 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
timerDisable/30 (timerDisable) @06a14540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
timerSetUp/29 (timerSetUp) @06a142a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: PIT0_Handler/31 (addr) 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: task2/28 (10631108 (estimated locally),1.00 per call) 
  Calls: vInitInterruptTable/35 (1073741824 (estimated locally),1.00 per call) 
task2/28 (task2) @06a08c40
  Type: function definition analyzed
  Visibility: externally_visible public
  Address is taken.
  References: xSemaphore2/10 (read) task2_count/25 (read) task2_count/25 (write) xSemaphore1/9 (read) 
  Referring: main/32 (addr) 
  Availability: available
  Function flags: count:10631108 (estimated locally) body executed_once optimize_size
  Called by: 
  Calls: xQueueGenericSend/34 (1073741824 (estimated locally),101.00 per call) xQueueSemaphoreTake/33 (1073741824 (estimated locally),101.00 per call) timerSetUp/29 (10631108 (estimated locally),1.00 per call) 
task1/27 (task1) @06a087e0
  Type: function definition analyzed
  Visibility: externally_visible public
  Address is taken.
  References: xSemaphore1/9 (read) task1_count/24 (read) task1_count/24 (write) xSemaphore0/8 (read) 
  Referring: main/32 (addr) 
  Availability: available
  Function flags: count:10631108 (estimated locally) body executed_once optimize_size
  Called by: 
  Calls: xQueueGenericSend/34 (1073741824 (estimated locally),101.00 per call) xQueueSemaphoreTake/33 (1073741824 (estimated locally),101.00 per call) 
task0/26 (task0) @06a08380
  Type: function definition analyzed
  Visibility: externally_visible public
  Address is taken.
  References: xSemaphore0/8 (read) task0_count/23 (read) task0_count/23 (write) 
  Referring: main/32 (addr) 
  Availability: available
  Function flags: count:3614577 (estimated locally) body executed_once optimize_size
  Called by: 
  Calls: xQueueSemaphoreTake/33 (1073741824 (estimated locally),297.06 per call) 
task2_count/25 (task2_count) @06a026c0
  Type: variable definition analyzed
  Visibility: force_output externally_visible public
  References: 
  Referring: task2/28 (read) task2/28 (write) 
  Availability: available
  Varpool flags: initialized
task1_count/24 (task1_count) @06a02630
  Type: variable definition analyzed
  Visibility: force_output externally_visible public
  References: 
  Referring: task1/27 (read) task1/27 (write) 
  Availability: available
  Varpool flags: initialized
task0_count/23 (task0_count) @06a025a0
  Type: variable definition analyzed
  Visibility: force_output externally_visible public
  References: 
  Referring: task0/26 (read) task0/26 (write) 
  Availability: available
  Varpool flags: initialized
vApplicationMallocFailedHook/22 (vApplicationMallocFailedHook) @06a042a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
vApplicationStackOverflowHook/21 (vApplicationStackOverflowHook) @06a04d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
vAssertCalled/20 (vAssertCalled) @06a04a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
vApplicationTickHook/19 (vApplicationTickHook) @06a047e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: ui32_ms_cnt/15 (read) ui32_ms_cnt/15 (write) 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
handlerFlag/18 (handlerFlag) @06a02240
  Type: variable definition analyzed
  Visibility: force_output externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized
counter/17 (counter) @06a021b0
  Type: variable definition analyzed
  Visibility: force_output externally_visible public
  References: 
  Referring: PIT0_Handler/31 (read) PIT0_Handler/31 (write) 
  Availability: available
  Varpool flags: initialized
ui32_get_ID_core2/16 (ui32_get_ID_core2) @06a02168
  Type: variable definition analyzed
  Visibility: force_output externally_visible public section:privileged_data
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized
ui32_ms_cnt/15 (ui32_ms_cnt) @06a020d8
  Type: variable definition analyzed
  Visibility: force_output externally_visible public section:privileged_data
  References: 
  Referring: vApplicationTickHook/19 (read) vApplicationTickHook/19 (write) 
  Availability: available
  Varpool flags: initialized
svcCnt/14 (svcCnt) @06a02048
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized
taskH2/13 (taskH2) @069fcf78
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: main/32 (write) 
  Availability: available
  Varpool flags: write-only
taskH1/12 (taskH1) @069fcee8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: main/32 (write) 
  Availability: available
  Varpool flags: write-only
taskH0/11 (taskH0) @069fce58
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: main/32 (write) 
  Availability: available
  Varpool flags: write-only
xSemaphore2/10 (xSemaphore2) @069fcdc8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: task2/28 (read) main/32 (write) 
  Availability: available
  Varpool flags:
xSemaphore1/9 (xSemaphore1) @069fcd38
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: task1/27 (read) task2/28 (read) main/32 (write) 
  Availability: available
  Varpool flags:
xSemaphore0/8 (xSemaphore0) @069fcca8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: task0/26 (read) task1/27 (read) main/32 (write) 
  Availability: available
  Varpool flags:

;; Function PIT0_Handler (PIT0_Handler, funcdef_no=17, decl_uid=7077, cgraph_uid=18, symbol_order=31)

Modification phase of node PIT0_Handler/31
PIT0_Handler ()
{
  long unsigned int counter.9_1;
  long unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG xHigherPriorityTaskWoken => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG baseAddr => 1074462720
  # DEBUG BEGIN_STMT
  MEM[(volatile uint32_t *)1074463004B] ={v} 1;
  # DEBUG BEGIN_STMT
  counter.9_1 ={v} counter;
  _2 = counter.9_1 + 1;
  counter ={v} _2;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return;

}



;; Function task0 (task0, funcdef_no=12, decl_uid=7100, cgraph_uid=13, symbol_order=26) (executed once)

Modification phase of node task0/26
task0 (void * p1)
{
  struct QueueDefinition * xSemaphore0.1_1;
  long int _2;
  long unsigned int task0_count.2_3;
  long unsigned int _4;

  <bb 2> [local count: 3614577]:

  <bb 3> [local count: 365072224]:

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  xSemaphore0.1_1 = xSemaphore0;
  _2 = xQueueSemaphoreTake (xSemaphore0.1_1, 4294967295);
  if (_2 == 1)
    goto <bb 5>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 6> [local count: 708669601]:
  goto <bb 4>; [100.00%]

  <bb 5> [local count: 365072224]:
  # DEBUG BEGIN_STMT
  task0_count.2_3 ={v} task0_count;
  _4 = task0_count.2_3 + 1;
  task0_count ={v} _4;
  goto <bb 3>; [100.00%]

}



;; Function task1 (task1, funcdef_no=13, decl_uid=7104, cgraph_uid=14, symbol_order=27) (executed once)

Modification phase of node task1/27
task1 (void * p2)
{
  struct QueueDefinition * xSemaphore1.3_1;
  long int _2;
  long unsigned int task1_count.4_3;
  long unsigned int _4;
  struct QueueDefinition * xSemaphore0.5_5;

  <bb 2> [local count: 10631108]:

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  xSemaphore1.3_1 = xSemaphore1;
  _2 = xQueueSemaphoreTake (xSemaphore1.3_1, 4294967295);
  if (_2 == 1)
    goto <bb 4>; [51.12%]
  else
    goto <bb 5>; [48.88%]

  <bb 4> [local count: 548896825]:
  # DEBUG BEGIN_STMT
  task1_count.4_3 ={v} task1_count;
  _4 = task1_count.4_3 + 1;
  task1_count ={v} _4;

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  xSemaphore0.5_5 = xSemaphore0;
  xQueueGenericSend (xSemaphore0.5_5, 0B, 0, 0);
  # DEBUG BEGIN_STMT
  goto <bb 3>; [100.00%]

}



;; Function vApplicationTickHook (vApplicationTickHook, funcdef_no=8, decl_uid=6868, cgraph_uid=9, symbol_order=19)

Modification phase of node vApplicationTickHook/19
vApplicationTickHook ()
{
  long unsigned int ui32_ms_cnt.0_1;
  long unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  ui32_ms_cnt.0_1 ={v} ui32_ms_cnt;
  _2 = ui32_ms_cnt.0_1 + 1;
  ui32_ms_cnt ={v} _2;
  return;

}



;; Function vAssertCalled (vAssertCalled, funcdef_no=9, decl_uid=7087, cgraph_uid=10, symbol_order=20)

Modification phase of node vAssertCalled/20
vAssertCalled (uint32_t ulLine, const char * pcFile)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function vApplicationStackOverflowHook (vApplicationStackOverflowHook, funcdef_no=10, decl_uid=7091, cgraph_uid=11, symbol_order=21)

Modification phase of node vApplicationStackOverflowHook/21
vApplicationStackOverflowHook (struct tskTaskControlBlock * pxTask, char * pcTaskName)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function vApplicationMallocFailedHook (vApplicationMallocFailedHook, funcdef_no=11, decl_uid=6659, cgraph_uid=12, symbol_order=22)

Modification phase of node vApplicationMallocFailedHook/22
vApplicationMallocFailedHook ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function timerSetUp (timerSetUp, funcdef_no=15, decl_uid=7081, cgraph_uid=16, symbol_order=29)

Modification phase of node timerSetUp/29
timerSetUp ()
{
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _10;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG baseAddr => 1074462720
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(volatile uint32_t *)1074462720B];
  _2 = _1 | 2;
  MEM[(volatile uint32_t *)1074462720B] ={v} _2;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG baseAddr => 1074462720
  # DEBUG BEGIN_STMT
  _3 ={v} MEM[(volatile uint32_t *)1074463000B];
  _4 = _3 & 4294967294;
  MEM[(volatile uint32_t *)1074463000B] ={v} _4;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG baseAddr => 1074462720
  # DEBUG BEGIN_STMT
  MEM[(volatile uint32_t *)1074462992B] ={v} 155072;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG baseAddr => 1074462720
  # DEBUG BEGIN_STMT
  _5 ={v} MEM[(volatile uint32_t *)1074463000B];
  _6 = _5 | 2;
  MEM[(volatile uint32_t *)1074463000B] ={v} _6;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG baseAddr => 1074462720
  # DEBUG BEGIN_STMT
  MEM[(volatile uint32_t *)1074462720B] ={v} 1;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG baseAddr => 1074462720
  # DEBUG BEGIN_STMT
  _7 ={v} MEM[(volatile uint32_t *)1074463000B];
  _8 = _7 | 1;
  MEM[(volatile uint32_t *)1074463000B] ={v} _8;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG baseAddr => 1074462720
  # DEBUG BEGIN_STMT
  _9 ={v} MEM[(volatile uint32_t *)1074462720B];
  _10 = _9 & 4294967293;
  MEM[(volatile uint32_t *)1074462720B] ={v} _10;
  # DEBUG BEGIN_STMT
  vInitInterruptTable (96, PIT0_Handler);
  # DEBUG BEGIN_STMT
  MEM[(volatile uint32_t *)3758153996B] ={v} 1;
  # DEBUG BEGIN_STMT
  MEM[(volatile uint8_t *)3758154848B] ={v} 192;
  # DEBUG BEGIN_STMT
  return;

}



;; Function task2 (task2, funcdef_no=14, decl_uid=7108, cgraph_uid=15, symbol_order=28) (executed once)

Modification phase of node task2/28
task2 (void * p2)
{
  struct QueueDefinition * xSemaphore2.6_1;
  long int _2;
  long unsigned int task2_count.7_3;
  long unsigned int _4;
  struct QueueDefinition * xSemaphore1.8_5;

  <bb 2> [local count: 10631108]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  timerSetUp ();

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  xSemaphore2.6_1 = xSemaphore2;
  _2 = xQueueSemaphoreTake (xSemaphore2.6_1, 4294967295);
  if (_2 == 1)
    goto <bb 4>; [51.12%]
  else
    goto <bb 5>; [48.88%]

  <bb 4> [local count: 548896825]:
  # DEBUG BEGIN_STMT
  task2_count.7_3 ={v} task2_count;
  _4 = task2_count.7_3 + 1;
  task2_count ={v} _4;

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  xSemaphore1.8_5 = xSemaphore1;
  xQueueGenericSend (xSemaphore1.8_5, 0B, 0, 0);
  # DEBUG BEGIN_STMT
  goto <bb 3>; [100.00%]

}



;; Function timerDisable (timerDisable, funcdef_no=16, decl_uid=7079, cgraph_uid=17, symbol_order=30)

Modification phase of node timerDisable/30
timerDisable ()
{
  long unsigned int _1;
  long unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG baseAddr => 1074462720
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(volatile uint32_t *)1074462720B];
  _2 = _1 | 2;
  MEM[(volatile uint32_t *)1074462720B] ={v} _2;
  return;

}



;; Function main (main, funcdef_no=18, decl_uid=7139, cgraph_uid=19, symbol_order=32) (executed once)

Modification phase of node main/32
main ()
{
  long unsigned int _1;
  long unsigned int _2;
  struct QueueDefinition * _3;
  struct QueueDefinition * _4;
  struct QueueDefinition * _5;
  long int _6;
  struct tskTaskControlBlock * _7;
  long int _8;
  struct tskTaskControlBlock * _9;
  long int _10;
  struct tskTaskControlBlock * _11;

  <bb 2> [local count: 10631108]:
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(volatile uint32_t *)3758157076B];
  _2 = _1 | 2;
  MEM[(volatile uint32_t *)3758157076B] ={v} _2;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _3 = xQueueGenericCreate (1, 0, 3);
  xSemaphore0 = _3;
  # DEBUG BEGIN_STMT
  _4 = xQueueGenericCreate (1, 0, 3);
  xSemaphore1 = _4;
  # DEBUG BEGIN_STMT
  _5 = xQueueGenericCreate (1, 0, 3);
  xSemaphore2 = _5;
  # DEBUG BEGIN_STMT
  _6 = xTaskCreate (task0, "task0", 90, 0B, 4, 0B);
  _7 = (struct tskTaskControlBlock *) _6;
  taskH0 = _7;
  # DEBUG BEGIN_STMT
  _8 = xTaskCreate (task1, "task1", 90, 1B, 3, 0B);
  _9 = (struct tskTaskControlBlock *) _8;
  taskH1 = _9;
  # DEBUG BEGIN_STMT
  _10 = xTaskCreate (task2, "task2", 90, 2B, 2, 0B);
  _11 = (struct tskTaskControlBlock *) _10;
  taskH2 = _11;
  # DEBUG BEGIN_STMT
  vTaskStartScheduler ();

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 4> [local count: 1073741824]:
  goto <bb 3>; [100.00%]

}


