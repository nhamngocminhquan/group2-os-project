Creating summary for vPortHeapResetState/21:


Creating summary for vPortGetHeapStats/20:
  Descriptor for parameter 0 pxHeapStatsD.6488
    not a candidate for splitting


Creating summary for prvInsertBlockIntoFreeList/19:
  Descriptor for parameter 0 pxBlockToInsertD.6479
    not a candidate for splitting


Creating summary for prvHeapInit/18:


Creating summary for pvPortCalloc/17:
  Descriptor for parameter 0 xNumD.6467
    not a candidate for splitting
  Descriptor for parameter 1 xSizeD.6468
    not a candidate for splitting


Creating summary for vPortInitialiseBlocks/16:


Creating summary for xPortGetMinimumEverFreeHeapSize/15:


Creating summary for xPortGetFreeHeapSize/14:


Creating summary for vPortFree/13:
  Descriptor for parameter 0 pvD.6450
    not a candidate for splitting


Creating summary for pvPortMalloc/12:
  Descriptor for parameter 0 xWantedSizeD.6433
    not a candidate for splitting



========== IPA-SRA IPA stage ==========

Summary for node vPortHeapResetState/21:
  No parameter information. 


Summary for node vPortGetHeapStats/20:
  Descriptor for parameter 0:
    not a candidate for splitting

  Summary for edge vPortGetHeapStats/20->vPortExitCritical/27:
    return value ignored
  Summary for edge vPortGetHeapStats/20->vPortEnterCritical/26:
    return value ignored
  Summary for edge vPortGetHeapStats/20->xTaskResumeAll/23:
    return value ignored
  Summary for edge vPortGetHeapStats/20->vTaskSuspendAll/22:
    return value ignored

Summary for node prvInsertBlockIntoFreeList/19:
  Descriptor for parameter 0:
    not a candidate for splitting


Summary for node prvHeapInit/18:
  No parameter information. 


Summary for node pvPortCalloc/17:
  Returns value
  Descriptor for parameter 0:
    not a candidate for splitting
  Descriptor for parameter 1:
    not a candidate for splitting

  Summary for edge pvPortCalloc/17->memset/25:
    return value ignored
  Summary for edge pvPortCalloc/17->pvPortMalloc/12:

Summary for node vPortInitialiseBlocks/16:
  No parameter information. 


Summary for node xPortGetMinimumEverFreeHeapSize/15:
  Returns value
  No parameter information. 


Summary for node xPortGetFreeHeapSize/14:
  Returns value
  No parameter information. 


Summary for node vPortFree/13:
  Descriptor for parameter 0:
    not a candidate for splitting

  Summary for edge vPortFree/13->xTaskResumeAll/23:
    return value ignored
  Summary for edge vPortFree/13->prvInsertBlockIntoFreeList/19:
    return value ignored
  Summary for edge vPortFree/13->vTaskSuspendAll/22:
    return value ignored

Summary for node pvPortMalloc/12:
  Returns value
  Descriptor for parameter 0:
    not a candidate for splitting

  Summary for edge pvPortMalloc/12->vApplicationMallocFailedHook/24:
    return value ignored
  Summary for edge pvPortMalloc/12->xTaskResumeAll/23:
    return value ignored
  Summary for edge pvPortMalloc/12->xTaskResumeAll/23:
    return value ignored
  Summary for edge pvPortMalloc/12->xTaskResumeAll/23:
    return value ignored
  Summary for edge pvPortMalloc/12->xTaskResumeAll/23:
    return value ignored
  Summary for edge pvPortMalloc/12->xTaskResumeAll/23:
    return value ignored
  Summary for edge pvPortMalloc/12->prvHeapInit/18:
    return value ignored
  Summary for edge pvPortMalloc/12->vTaskSuspendAll/22:
    return value ignored


Function pvPortMalloc/12 disqualified because it cannot be made local.
Function vPortFree/13 disqualified because it cannot be made local.
Function xPortGetFreeHeapSize/14 disqualified because it cannot be made local.
Function xPortGetMinimumEverFreeHeapSize/15 disqualified because it cannot be made local.
Function vPortInitialiseBlocks/16 disqualified because it cannot be made local.
Function pvPortCalloc/17 disqualified because it cannot be made local.
Function vPortGetHeapStats/20 disqualified because it cannot be made local.
Function vPortHeapResetState/21 disqualified because it cannot be made local.

========== IPA-SRA decisions ==========

========== IPA SRA IPA analysis done ==========


Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

vPortExitCritical/27 (vPortExitCritical) @069c8700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: vPortGetHeapStats/20 (168730857 (estimated locally),1.00 per call) 
  Calls: 
vPortEnterCritical/26 (vPortEnterCritical) @069c8540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: vPortGetHeapStats/20 (168730857 (estimated locally),1.00 per call) 
  Calls: 
memset/25 (memset) @069c8380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: pvPortCalloc/17 (462576341 (estimated locally),0.43 per call) 
  Calls: 
vApplicationMallocFailedHook/24 (vApplicationMallocFailedHook) @06999d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: pvPortMalloc/12 (9282930 (estimated locally),0.40 per call) 
  Calls: 
xTaskResumeAll/23 (xTaskResumeAll) @06999c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: vPortGetHeapStats/20 (168730857 (estimated locally),1.00 per call) vPortFree/13 (253244 (estimated locally),0.01 per call) pvPortMalloc/12 (157185 (estimated locally),0.01 per call) pvPortMalloc/12 (144607 (estimated locally),0.01 per call) pvPortMalloc/12 (2851989 (estimated locally),0.12 per call) pvPortMalloc/12 (3425812 (estimated locally),0.15 per call) pvPortMalloc/12 (2860521 (estimated locally),0.12 per call) 
  Calls: 
vTaskSuspendAll/22 (vTaskSuspendAll) @06999a80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: vPortGetHeapStats/20 (168730857 (estimated locally),1.00 per call) vPortFree/13 (253244 (estimated locally),0.01 per call) pvPortMalloc/12 (23313133 (estimated locally),1.00 per call) 
  Calls: 
vPortHeapResetState/21 (vPortHeapResetState) @06999460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: pxEnd/7 (write) xFreeBytesRemaining/8 (write) xMinimumEverFreeBytesRemaining/9 (write) xNumberOfSuccessfulAllocations/10 (write) xNumberOfSuccessfulFrees/11 (write) 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
vPortGetHeapStats/20 (vPortGetHeapStats) @069991c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: xStart/6 (read) pxEnd/7 (read) xFreeBytesRemaining/8 (read) xNumberOfSuccessfulAllocations/10 (read) xNumberOfSuccessfulFrees/11 (read) xMinimumEverFreeBytesRemaining/9 (read) 
  Referring: 
  Availability: available
  Function flags: count:168730857 (estimated locally) body optimize_size
  Called by: 
  Calls: vPortExitCritical/27 (168730857 (estimated locally),1.00 per call) vPortEnterCritical/26 (168730857 (estimated locally),1.00 per call) xTaskResumeAll/23 (168730857 (estimated locally),1.00 per call) vTaskSuspendAll/22 (168730857 (estimated locally),1.00 per call) 
prvInsertBlockIntoFreeList/19 (prvInsertBlockIntoFreeList) @0698be00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: xStart/6 (addr) xStart/6 (addr) ucHeap/4 (addr) ucHeap/4 (addr) pxEnd/7 (read) 
  Referring: 
  Availability: local
  Function flags: count:20249729 (estimated locally) body local optimize_size
  Called by: vPortFree/13 (253244 (estimated locally),0.01 per call) 
  Calls: 
prvHeapInit/18 (prvHeapInit) @0698b8c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: ucHeap/4 (addr) xStart/6 (write) xStart/6 (write) pxEnd/7 (write) xMinimumEverFreeBytesRemaining/9 (write) xFreeBytesRemaining/8 (write) 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: pvPortMalloc/12 (4063479 (estimated locally),0.17 per call) 
  Calls: 
pvPortCalloc/17 (pvPortCalloc) @0698b0e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: memset/25 (462576341 (estimated locally),0.43 per call) pvPortMalloc/12 (865113787 (estimated locally),0.81 per call) 
vPortInitialiseBlocks/16 (vPortInitialiseBlocks) @0698bd20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
xPortGetMinimumEverFreeHeapSize/15 (xPortGetMinimumEverFreeHeapSize) @0698ba80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: xMinimumEverFreeBytesRemaining/9 (read) 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
xPortGetFreeHeapSize/14 (xPortGetFreeHeapSize) @0698b7e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: xFreeBytesRemaining/8 (read) 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
vPortFree/13 (vPortFree) @0698b540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: ucHeap/4 (addr) ucHeap/4 (addr) xFreeBytesRemaining/8 (read) xFreeBytesRemaining/8 (write) xNumberOfSuccessfulFrees/11 (read) xNumberOfSuccessfulFrees/11 (write) 
  Referring: 
  Availability: available
  Function flags: count:20249729 (estimated locally) body optimize_size
  Called by: 
  Calls: xTaskResumeAll/23 (253244 (estimated locally),0.01 per call) prvInsertBlockIntoFreeList/19 (253244 (estimated locally),0.01 per call) vTaskSuspendAll/22 (253244 (estimated locally),0.01 per call) 
pvPortMalloc/12 (pvPortMalloc) @0698b000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: pxEnd/7 (read) xFreeBytesRemaining/8 (read) xStart/6 (read) ucHeap/4 (addr) ucHeap/4 (addr) ucHeap/4 (addr) ucHeap/4 (addr) xStart/6 (addr) pxEnd/7 (read) ucHeap/4 (addr) ucHeap/4 (addr) xFreeBytesRemaining/8 (write) xMinimumEverFreeBytesRemaining/9 (read) xMinimumEverFreeBytesRemaining/9 (write) xNumberOfSuccessfulAllocations/10 (read) xNumberOfSuccessfulAllocations/10 (write) 
  Referring: 
  Availability: available
  Function flags: count:23313133 (estimated locally) body optimize_size
  Called by: pvPortCalloc/17 (865113787 (estimated locally),0.81 per call) 
  Calls: vApplicationMallocFailedHook/24 (9282930 (estimated locally),0.40 per call) xTaskResumeAll/23 (157185 (estimated locally),0.01 per call) xTaskResumeAll/23 (144607 (estimated locally),0.01 per call) xTaskResumeAll/23 (2851989 (estimated locally),0.12 per call) xTaskResumeAll/23 (3425812 (estimated locally),0.15 per call) xTaskResumeAll/23 (2860521 (estimated locally),0.12 per call) prvHeapInit/18 (4063479 (estimated locally),0.17 per call) vTaskSuspendAll/22 (23313133 (estimated locally),1.00 per call) 
xNumberOfSuccessfulFrees/11 (xNumberOfSuccessfulFrees) @069b8438
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: vPortGetHeapStats/20 (read) vPortFree/13 (write) vPortFree/13 (read) vPortHeapResetState/21 (write) 
  Availability: available
  Varpool flags: initialized
xNumberOfSuccessfulAllocations/10 (xNumberOfSuccessfulAllocations) @069b83f0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: vPortGetHeapStats/20 (read) pvPortMalloc/12 (write) pvPortMalloc/12 (read) vPortHeapResetState/21 (write) 
  Availability: available
  Varpool flags: initialized
xMinimumEverFreeBytesRemaining/9 (xMinimumEverFreeBytesRemaining) @069b83a8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: pvPortMalloc/12 (write) vPortGetHeapStats/20 (read) xPortGetMinimumEverFreeHeapSize/15 (read) prvHeapInit/18 (write) pvPortMalloc/12 (read) vPortHeapResetState/21 (write) 
  Availability: available
  Varpool flags: initialized
xFreeBytesRemaining/8 (xFreeBytesRemaining) @069b8360
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: pvPortMalloc/12 (read) prvHeapInit/18 (write) pvPortMalloc/12 (write) vPortFree/13 (write) vPortGetHeapStats/20 (read) xPortGetFreeHeapSize/14 (read) vPortFree/13 (read) vPortHeapResetState/21 (write) 
  Availability: available
  Varpool flags: initialized
pxEnd/7 (pxEnd) @069b82d0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: pvPortMalloc/12 (read) prvHeapInit/18 (write) prvInsertBlockIntoFreeList/19 (read) vPortGetHeapStats/20 (read) pvPortMalloc/12 (read) vPortHeapResetState/21 (write) 
  Availability: available
  Varpool flags: initialized
xStart/6 (xStart) @069b8240
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: prvHeapInit/18 (write) prvHeapInit/18 (write) pvPortMalloc/12 (addr) prvInsertBlockIntoFreeList/19 (addr) prvInsertBlockIntoFreeList/19 (addr) pvPortMalloc/12 (read) vPortGetHeapStats/20 (read) 
  Availability: available
  Varpool flags:
ucHeap/4 (ucHeap) @069b1dc8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: pvPortMalloc/12 (addr) pvPortMalloc/12 (addr) prvInsertBlockIntoFreeList/19 (addr) prvInsertBlockIntoFreeList/19 (addr) prvHeapInit/18 (addr) pvPortMalloc/12 (addr) pvPortMalloc/12 (addr) pvPortMalloc/12 (addr) pvPortMalloc/12 (addr) vPortFree/13 (addr) vPortFree/13 (addr) 
  Availability: available
  Varpool flags:
vPortHeapResetState ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  pxEnd = 0B;
  # DEBUG BEGIN_STMT
  xFreeBytesRemaining = 0;
  # DEBUG BEGIN_STMT
  xMinimumEverFreeBytesRemaining = 0;
  # DEBUG BEGIN_STMT
  xNumberOfSuccessfulAllocations = 0;
  # DEBUG BEGIN_STMT
  xNumberOfSuccessfulFrees = 0;
  return;

}


vPortGetHeapStats (struct HeapStats_t * pxHeapStats)
{
  size_t xMinSize;
  size_t xMaxSize;
  size_t xBlocks;
  struct BlockLink_t * pxBlock;
  unsigned int _1;
  struct BlockLink_t * pxEnd.28_3;
  unsigned int xFreeBytesRemaining.29_4;
  unsigned int xNumberOfSuccessfulAllocations.30_5;
  unsigned int xNumberOfSuccessfulFrees.31_6;
  unsigned int xMinimumEverFreeBytesRemaining.32_7;

  <bb 2> [local count: 168730857]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG xBlocks => 0
  # DEBUG xMaxSize => 0
  # DEBUG xMinSize => 4294967295
  # DEBUG BEGIN_STMT
  vTaskSuspendAll ();
  # DEBUG BEGIN_STMT
  pxBlock_17 = xStart.pxNextFreeBlock;
  # DEBUG pxBlock => pxBlock_17
  # DEBUG BEGIN_STMT
  if (pxBlock_17 != 0B)
    goto <bb 6>; [70.00%]
  else
    goto <bb 5>; [30.00%]

  <bb 6> [local count: 118111600]:
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 955630226]:
  # DEBUG BEGIN_STMT
  xBlocks_18 = xBlocks_9 + 1;
  # DEBUG xBlocks => xBlocks_18
  # DEBUG BEGIN_STMT
  _1 = pxBlock_8->xBlockSize;
  xMaxSize_2 = MAX_EXPR <_1, xMaxSize_11>;
  # DEBUG xMaxSize => xMaxSize_2
  # DEBUG BEGIN_STMT
  xMinSize_19 = MIN_EXPR <_1, xMinSize_13>;
  # DEBUG xMinSize => xMinSize_19
  # DEBUG BEGIN_STMT
  pxBlock_20 = pxBlock_8->pxNextFreeBlock;
  # DEBUG pxBlock => pxBlock_20

  <bb 4> [local count: 1073741824]:
  # pxBlock_8 = PHI <pxBlock_20(3), pxBlock_17(6)>
  # xBlocks_9 = PHI <xBlocks_18(3), 0(6)>
  # xMaxSize_11 = PHI <xMaxSize_2(3), 0(6)>
  # xMinSize_13 = PHI <xMinSize_19(3), 4294967295(6)>
  # DEBUG xMinSize => xMinSize_13
  # DEBUG xMaxSize => xMaxSize_11
  # DEBUG xBlocks => xBlocks_9
  # DEBUG pxBlock => pxBlock_8
  # DEBUG BEGIN_STMT
  pxEnd.28_3 = pxEnd;
  if (pxEnd.28_3 != pxBlock_8)
    goto <bb 3>; [89.00%]
  else
    goto <bb 5>; [11.00%]

  <bb 5> [local count: 168730857]:
  # xBlocks_10 = PHI <0(2), xBlocks_9(4)>
  # xMaxSize_12 = PHI <0(2), xMaxSize_11(4)>
  # xMinSize_14 = PHI <4294967295(2), xMinSize_13(4)>
  # DEBUG xMinSize => xMinSize_14
  # DEBUG xMaxSize => xMaxSize_12
  # DEBUG xBlocks => xBlocks_10
  # DEBUG BEGIN_STMT
  xTaskResumeAll ();
  # DEBUG BEGIN_STMT
  pxHeapStats_22(D)->xSizeOfLargestFreeBlockInBytes = xMaxSize_12;
  # DEBUG BEGIN_STMT
  pxHeapStats_22(D)->xSizeOfSmallestFreeBlockInBytes = xMinSize_14;
  # DEBUG BEGIN_STMT
  pxHeapStats_22(D)->xNumberOfFreeBlocks = xBlocks_10;
  # DEBUG BEGIN_STMT
  vPortEnterCritical ();
  # DEBUG BEGIN_STMT
  xFreeBytesRemaining.29_4 = xFreeBytesRemaining;
  pxHeapStats_22(D)->xAvailableHeapSpaceInBytes = xFreeBytesRemaining.29_4;
  # DEBUG BEGIN_STMT
  xNumberOfSuccessfulAllocations.30_5 = xNumberOfSuccessfulAllocations;
  pxHeapStats_22(D)->xNumberOfSuccessfulAllocations = xNumberOfSuccessfulAllocations.30_5;
  # DEBUG BEGIN_STMT
  xNumberOfSuccessfulFrees.31_6 = xNumberOfSuccessfulFrees;
  pxHeapStats_22(D)->xNumberOfSuccessfulFrees = xNumberOfSuccessfulFrees.31_6;
  # DEBUG BEGIN_STMT
  xMinimumEverFreeBytesRemaining.32_7 = xMinimumEverFreeBytesRemaining;
  pxHeapStats_22(D)->xMinimumEverFreeBytesRemaining = xMinimumEverFreeBytesRemaining.32_7;
  # DEBUG BEGIN_STMT
  vPortExitCritical ();
  return;

}


prvInsertBlockIntoFreeList (struct BlockLink_t * pxBlockToInsert)
{
  struct BlockLink_t * pxIterator;
  struct A_BLOCK_LINK * _1;
  unsigned int _2;
  uint8_t * _3;
  unsigned int _4;
  unsigned int _5;
  unsigned int _6;
  uint8_t * _7;
  struct BlockLink_t * pxEnd.25_8;
  unsigned int _9;
  unsigned int _10;
  struct A_BLOCK_LINK * _11;
  struct A_BLOCK_LINK * _20;

  <bb 2> [local count: 20249729]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG pxIterator => &xStart

  <bb 3> [local count: 184088451]:
  # pxIterator_13 = PHI <&xStart(2), _1(20)>
  # DEBUG pxIterator => pxIterator_13
  # DEBUG BEGIN_STMT
  _1 = pxIterator_13->pxNextFreeBlock;
  if (_1 < pxBlockToInsert_18(D))
    goto <bb 20>; [89.00%]
  else
    goto <bb 4>; [11.00%]

  <bb 20> [local count: 163838721]:
  goto <bb 3>; [100.00%]

  <bb 4> [local count: 20249729]:
  # _20 = PHI <_1(3)>
  # pxIterator_22 = PHI <pxIterator_13(3)>
  # DEBUG BEGIN_STMT
  if (pxIterator_22 != &xStart)
    goto <bb 5>; [70.00%]
  else
    goto <bb 9>; [30.00%]

  <bb 5> [local count: 14174811]:
  # DEBUG BEGIN_STMT
  if (pxIterator_22 >= &ucHeap[0])
    goto <bb 6>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 6> [local count: 7087405]:
  if (pxIterator_22 <= &ucHeap[8191])
    goto <bb 9>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 7> [local count: 10631108]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i " :  :  : "memory");

  <bb 8> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 19> [local count: 1073741824]:
  goto <bb 8>; [100.00%]

  <bb 9> [local count: 9618621]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG puc => pxIterator_22
  # DEBUG BEGIN_STMT
  _2 = pxIterator_22->xBlockSize;
  _3 = pxIterator_22 + _2;
  if (_3 == pxBlockToInsert_18(D))
    goto <bb 10>; [30.00%]
  else
    goto <bb 11>; [70.00%]

  <bb 10> [local count: 2885586]:
  # DEBUG BEGIN_STMT
  _4 = pxBlockToInsert_18(D)->xBlockSize;
  _5 = _2 + _4;
  pxIterator_22->xBlockSize = _5;
  # DEBUG BEGIN_STMT
  # DEBUG pxBlockToInsert => pxIterator_22

  <bb 11> [local count: 9618621]:
  # pxBlockToInsert_12 = PHI <pxBlockToInsert_18(D)(9), pxIterator_22(10)>
  # DEBUG pxBlockToInsert => pxBlockToInsert_12
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG puc => pxBlockToInsert_12
  # DEBUG BEGIN_STMT
  _6 = pxBlockToInsert_12->xBlockSize;
  _7 = pxBlockToInsert_12 + _6;
  if (_7 == _20)
    goto <bb 12>; [30.00%]
  else
    goto <bb 15>; [70.00%]

  <bb 12> [local count: 2885586]:
  # DEBUG BEGIN_STMT
  pxEnd.25_8 = pxEnd;
  if (pxEnd.25_8 != _20)
    goto <bb 13>; [70.00%]
  else
    goto <bb 14>; [30.00%]

  <bb 13> [local count: 2019910]:
  # DEBUG BEGIN_STMT
  _9 = _20->xBlockSize;
  _10 = _6 + _9;
  pxBlockToInsert_12->xBlockSize = _10;
  # DEBUG BEGIN_STMT
  _11 = _20->pxNextFreeBlock;
  pxBlockToInsert_12->pxNextFreeBlock = _11;
  goto <bb 16>; [100.00%]

  <bb 14> [local count: 865676]:
  # DEBUG BEGIN_STMT
  pxBlockToInsert_12->pxNextFreeBlock = pxEnd.25_8;
  goto <bb 16>; [100.00%]

  <bb 15> [local count: 6733035]:
  # DEBUG BEGIN_STMT
  pxBlockToInsert_12->pxNextFreeBlock = _20;

  <bb 16> [local count: 9618621]:
  # DEBUG BEGIN_STMT
  if (pxBlockToInsert_12 != pxIterator_22)
    goto <bb 17>; [70.00%]
  else
    goto <bb 18>; [30.00%]

  <bb 17> [local count: 6733035]:
  # DEBUG BEGIN_STMT
  pxIterator_22->pxNextFreeBlock = pxBlockToInsert_12;

  <bb 18> [local count: 9618621]:
  # DEBUG BEGIN_STMT
  return;

}


prvHeapInit ()
{
  size_t xTotalHeapSize;
  uint32_t uxEndAddress;
  uint32_t uxStartAddress;
  long unsigned int _1;
  unsigned int _2;
  struct A_BLOCK_LINK * uxStartAddress.15_3;
  struct BlockLink_t * uxEndAddress.16_4;
  long unsigned int _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG xTotalHeapSize => 8192
  # DEBUG BEGIN_STMT
  uxStartAddress_8 = (uint32_t) &ucHeap;
  # DEBUG uxStartAddress => uxStartAddress_8
  # DEBUG BEGIN_STMT
  _1 = uxStartAddress_8 & 7;
  if (_1 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  uxStartAddress_9 = uxStartAddress_8 + 7;
  # DEBUG uxStartAddress => uxStartAddress_9
  # DEBUG BEGIN_STMT
  uxStartAddress_10 = uxStartAddress_9 & 4294967288;
  # DEBUG uxStartAddress => uxStartAddress_10
  # DEBUG BEGIN_STMT
  _2 = 8192 - uxStartAddress_10;
  xTotalHeapSize_11 = _2 + uxStartAddress_8;
  # DEBUG xTotalHeapSize => xTotalHeapSize_11

  <bb 4> [local count: 1073741824]:
  # uxStartAddress_6 = PHI <uxStartAddress_8(2), uxStartAddress_10(3)>
  # xTotalHeapSize_7 = PHI <8192(2), xTotalHeapSize_11(3)>
  # DEBUG xTotalHeapSize => xTotalHeapSize_7
  # DEBUG uxStartAddress => uxStartAddress_6
  # DEBUG BEGIN_STMT
  uxStartAddress.15_3 = (struct A_BLOCK_LINK *) uxStartAddress_6;
  xStart.pxNextFreeBlock = uxStartAddress.15_3;
  # DEBUG BEGIN_STMT
  xStart.xBlockSize = 0;
  # DEBUG BEGIN_STMT
  uxEndAddress_15 = uxStartAddress_6 + xTotalHeapSize_7;
  # DEBUG uxEndAddress => uxEndAddress_15
  # DEBUG BEGIN_STMT
  uxEndAddress_16 = uxEndAddress_15 + 4294967288;
  # DEBUG uxEndAddress => uxEndAddress_16
  # DEBUG BEGIN_STMT
  uxEndAddress_17 = uxEndAddress_16 & 4294967288;
  # DEBUG uxEndAddress => uxEndAddress_17
  # DEBUG BEGIN_STMT
  uxEndAddress.16_4 = (struct BlockLink_t *) uxEndAddress_17;
  pxEnd = uxEndAddress.16_4;
  # DEBUG BEGIN_STMT
  uxEndAddress.16_4->xBlockSize = 0;
  # DEBUG BEGIN_STMT
  uxEndAddress.16_4->pxNextFreeBlock = 0B;
  # DEBUG BEGIN_STMT
  # DEBUG pxFirstFreeBlock => uxStartAddress.15_3
  # DEBUG BEGIN_STMT
  _5 = uxEndAddress_17 - uxStartAddress_6;
  MEM[(struct BlockLink_t *)uxStartAddress.15_3].xBlockSize = _5;
  # DEBUG BEGIN_STMT
  MEM[(struct BlockLink_t *)uxStartAddress.15_3].pxNextFreeBlock = uxEndAddress.16_4;
  # DEBUG BEGIN_STMT
  xMinimumEverFreeBytesRemaining = _5;
  # DEBUG BEGIN_STMT
  xFreeBytesRemaining = _5;
  return;

}


pvPortCalloc (size_t xNum, size_t xSize)
{
  void * pv;
  unsigned int _1;
  __complex__ unsigned int _4;
  unsigned int _7;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG pv => 0B
  # DEBUG BEGIN_STMT
  if (xNum_5(D) != 0)
    goto <bb 3>; [67.00%]
  else
    goto <bb 4>; [33.00%]

  <bb 3> [local count: 719407024]:
  _4 = .MUL_OVERFLOW (xSize_6(D), xNum_5(D));
  _7 = IMAGPART_EXPR <_4>;
  if (_7 != 0)
    goto <bb 6>; [29.00%]
  else
    goto <bb 4>; [71.00%]

  <bb 4> [local count: 865113787]:
  # DEBUG BEGIN_STMT
  _1 = xNum_5(D) * xSize_6(D);
  pv_10 = pvPortMalloc (_1);
  # DEBUG pv => pv_10
  # DEBUG BEGIN_STMT
  if (pv_10 != 0B)
    goto <bb 5>; [53.47%]
  else
    goto <bb 6>; [46.53%]

  <bb 5> [local count: 462576341]:
  # DEBUG BEGIN_STMT
  memset (pv_10, 0, _1);

  <bb 6> [local count: 1073741824]:
  # pv_2 = PHI <0B(3), pv_10(4), pv_10(5)>
  # DEBUG pv => pv_2
  # DEBUG BEGIN_STMT
  return pv_2;

}


vPortInitialiseBlocks ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}


xPortGetMinimumEverFreeHeapSize ()
{
  size_t _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _2 = xMinimumEverFreeBytesRemaining;
  return _2;

}


xPortGetFreeHeapSize ()
{
  size_t _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _2 = xFreeBytesRemaining;
  return _2;

}


vPortFree (void * pv)
{
  uint8_t * puc;
  unsigned int _1;
  signed int _2;
  struct A_BLOCK_LINK * _3;
  unsigned int _4;
  unsigned int _5;
  unsigned int xFreeBytesRemaining.22_6;
  unsigned int _7;
  unsigned int xNumberOfSuccessfulFrees.23_8;
  unsigned int _9;

  <bb 2> [local count: 20249729]:
  # DEBUG BEGIN_STMT
  # DEBUG puc => pv_11(D)
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (pv_11(D) != 0B)
    goto <bb 3>; [70.00%]
  else
    goto <bb 14>; [30.00%]

  <bb 3> [local count: 14174811]:
  # DEBUG BEGIN_STMT
  puc_13 = pv_11(D) + 4294967288;
  # DEBUG puc => puc_13
  # DEBUG BEGIN_STMT
  # DEBUG pxLink => puc_13
  # DEBUG BEGIN_STMT
  if (puc_13 >= &ucHeap[0])
    goto <bb 4>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 4> [local count: 7087405]:
  if (puc_13 <= &ucHeap[8191])
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 3543703]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = MEM[(struct BlockLink_t *)pv_11(D) + 4294967288B].xBlockSize;
  _2 = (signed int) _1;
  if (_2 >= 0)
    goto <bb 8>; [59.00%]
  else
    goto <bb 10>; [41.00%]

  <bb 6> [local count: 10631108]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i " :  :  : "memory");

  <bb 7> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 17> [local count: 1073741824]:
  goto <bb 7>; [100.00%]

  <bb 8> [local count: 2090785]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i " :  :  : "memory");

  <bb 9> [local count: 211169227]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 15> [local count: 211169227]:
  goto <bb 9>; [100.00%]

  <bb 10> [local count: 1452918]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _3 = MEM[(struct BlockLink_t *)pv_11(D) + 4294967288B].pxNextFreeBlock;
  if (_3 != 0B)
    goto <bb 11>; [82.57%]
  else
    goto <bb 13>; [17.43%]

  <bb 11> [local count: 1199674]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i " :  :  : "memory");

  <bb 12> [local count: 121167111]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 16> [local count: 121167111]:
  goto <bb 12>; [100.00%]

  <bb 13> [local count: 253244]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _4 = _1 & 2147483647;
  MEM[(struct BlockLink_t *)pv_11(D) + 4294967288B].xBlockSize = _4;
  # DEBUG BEGIN_STMT
  vTaskSuspendAll ();
  # DEBUG BEGIN_STMT
  _5 = MEM[(struct BlockLink_t *)pv_11(D) + 4294967288B].xBlockSize;
  xFreeBytesRemaining.22_6 = xFreeBytesRemaining;
  _7 = _5 + xFreeBytesRemaining.22_6;
  xFreeBytesRemaining = _7;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  prvInsertBlockIntoFreeList (puc_13);
  # DEBUG BEGIN_STMT
  xNumberOfSuccessfulFrees.23_8 = xNumberOfSuccessfulFrees;
  _9 = xNumberOfSuccessfulFrees.23_8 + 1;
  xNumberOfSuccessfulFrees = _9;
  # DEBUG BEGIN_STMT
  xTaskResumeAll ();

  <bb 14> [local count: 6328162]:
  # DEBUG BEGIN_STMT
  return;

}


pvPortMalloc (size_t xWantedSize)
{
  size_t xAdditionalRequiredSize;
  void * pvReturn;
  struct BlockLink_t * pxNewBlockLink;
  struct BlockLink_t * pxPreviousBlock;
  struct BlockLink_t * pxBlock;
  unsigned int _1;
  unsigned int _2;
  unsigned int _3;
  struct BlockLink_t * pxEnd.0_4;
  signed int xWantedSize.1_5;
  unsigned int xFreeBytesRemaining.2_6;
  unsigned int _7;
  struct A_BLOCK_LINK * _8;
  struct BlockLink_t * pxEnd.5_9;
  struct A_BLOCK_LINK * _10;
  struct A_BLOCK_LINK * _11;
  unsigned int _12;
  unsigned int pxNewBlockLink.7_13;
  unsigned int _14;
  unsigned int _15;
  unsigned int _16;
  unsigned int xMinimumEverFreeBytesRemaining.10_17;
  unsigned int _18;
  unsigned int xNumberOfSuccessfulAllocations.12_19;
  unsigned int _20;
  unsigned int pvReturn.13_21;
  unsigned int _22;

  <bb 2> [local count: 23313133]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG pvReturn => 0B
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (xWantedSize_30(D) != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 3> [local count: 11656567]:
  # DEBUG BEGIN_STMT
  if (xWantedSize_30(D) <= 4294967287)
    goto <bb 4>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 4> [local count: 5828283]:
  # DEBUG BEGIN_STMT
  xWantedSize_31 = xWantedSize_30(D) + 8;
  # DEBUG xWantedSize => xWantedSize_31
  # DEBUG BEGIN_STMT
  _1 = xWantedSize_31 & 7;
  if (_1 != 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 5> [local count: 2914142]:
  # DEBUG BEGIN_STMT
  xAdditionalRequiredSize_32 = 8 - _1;
  # DEBUG xAdditionalRequiredSize => xAdditionalRequiredSize_32
  # DEBUG BEGIN_STMT
  _3 = ~xAdditionalRequiredSize_32;
  if (_3 >= xWantedSize_31)
    goto <bb 6>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 6> [local count: 1457071]:
  # DEBUG BEGIN_STMT
  xWantedSize_34 = xWantedSize_31 + xAdditionalRequiredSize_32;
  # DEBUG xWantedSize => xWantedSize_34

  <bb 7> [local count: 23313133]:
  # xWantedSize_23 = PHI <xWantedSize_30(D)(2), 0(3), 0(5), xWantedSize_34(6), xWantedSize_31(4)>
  # DEBUG xWantedSize => xWantedSize_23
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  vTaskSuspendAll ();
  # DEBUG BEGIN_STMT
  pxEnd.0_4 = pxEnd;
  if (pxEnd.0_4 == 0B)
    goto <bb 8>; [17.43%]
  else
    goto <bb 9>; [82.57%]

  <bb 8> [local count: 4063479]:
  # DEBUG BEGIN_STMT
  prvHeapInit ();

  <bb 9> [local count: 23313133]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  xWantedSize.1_5 = (signed int) xWantedSize_23;
  if (xWantedSize.1_5 >= 0)
    goto <bb 11>; [87.73%]
  else
    goto <bb 10>; [12.27%]

  <bb 10> [local count: 2860521]:
  # DEBUG pvReturn => 0B
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  xTaskResumeAll ();
  # DEBUG BEGIN_STMT
  goto <bb 42>; [100.00%]

  <bb 11> [local count: 20452612]:
  # DEBUG BEGIN_STMT
  if (xWantedSize_23 != 0)
    goto <bb 13>; [83.25%]
  else
    goto <bb 12>; [16.75%]

  <bb 12> [local count: 3425812]:
  # DEBUG pvReturn => 0B
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  xTaskResumeAll ();
  # DEBUG BEGIN_STMT
  goto <bb 42>; [100.00%]

  <bb 13> [local count: 17026800]:
  xFreeBytesRemaining.2_6 = xFreeBytesRemaining;
  if (xFreeBytesRemaining.2_6 >= xWantedSize_23)
    goto <bb 15>; [83.25%]
  else
    goto <bb 14>; [16.75%]

  <bb 14> [local count: 2851989]:
  # DEBUG pvReturn => 0B
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  xTaskResumeAll ();
  # DEBUG BEGIN_STMT
  goto <bb 42>; [100.00%]

  <bb 15> [local count: 14174811]:
  # DEBUG BEGIN_STMT
  # DEBUG pxPreviousBlock => &xStart
  # DEBUG BEGIN_STMT
  pxBlock_39 = xStart.pxNextFreeBlock;
  # DEBUG pxBlock => pxBlock_39
  # DEBUG BEGIN_STMT
  if (pxBlock_39 >= &ucHeap[0])
    goto <bb 16>; [50.00%]
  else
    goto <bb 17>; [50.00%]

  <bb 16> [local count: 7087405]:
  if (pxBlock_39 <= &ucHeap[8191])
    goto <bb 47>; [50.00%]
  else
    goto <bb 17>; [50.00%]

  <bb 17> [local count: 10631108]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i " :  :  : "memory");

  <bb 18> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 54> [local count: 1073741824]:
  goto <bb 18>; [100.00%]

  <bb 19> [local count: 31753989]:
  # DEBUG BEGIN_STMT
  # DEBUG pxPreviousBlock => pxBlock_24
  # DEBUG BEGIN_STMT
  # DEBUG pxBlock => _8
  # DEBUG BEGIN_STMT
  if (_8 >= &ucHeap[0])
    goto <bb 20>; [97.25%]
  else
    goto <bb 21>; [2.75%]

  <bb 20> [local count: 30880755]:
  if (_8 <= &ucHeap[8191])
    goto <bb 53>; [97.25%]
  else
    goto <bb 21>; [2.75%]

  <bb 53> [local count: 30031534]:
  goto <bb 23>; [100.00%]

  <bb 21> [local count: 1722456]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i " :  :  : "memory");

  <bb 22> [local count: 173968010]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 48> [local count: 173968010]:
  goto <bb 22>; [100.00%]

  <bb 47> [local count: 3543703]:

  <bb 23> [local count: 33575236]:
  # pxBlock_24 = PHI <pxBlock_39(47), _8(53)>
  # pxPreviousBlock_25 = PHI <&xStart(47), pxBlock_24(53)>
  # DEBUG pxPreviousBlock => pxPreviousBlock_25
  # DEBUG pxBlock => pxBlock_24
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _7 = pxBlock_24->xBlockSize;
  if (_7 < xWantedSize_23)
    goto <bb 24>; [97.25%]
  else
    goto <bb 25>; [2.75%]

  <bb 24> [local count: 32651917]:
  _8 = pxBlock_24->pxNextFreeBlock;
  if (_8 != 0B)
    goto <bb 19>; [97.25%]
  else
    goto <bb 25>; [2.75%]

  <bb 25> [local count: 1821247]:
  # _2 = PHI <_7(23), _7(24)>
  # pxBlock_44 = PHI <pxBlock_24(23), pxBlock_24(24)>
  # pxPreviousBlock_38 = PHI <pxPreviousBlock_25(23), pxPreviousBlock_25(24)>
  # DEBUG BEGIN_STMT
  pxEnd.5_9 = pxEnd;
  if (pxEnd.5_9 != pxBlock_44)
    goto <bb 27>; [92.06%]
  else
    goto <bb 26>; [7.94%]

  <bb 26> [local count: 144607]:
  # DEBUG pvReturn => 0B
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  xTaskResumeAll ();
  # DEBUG BEGIN_STMT
  goto <bb 42>; [100.00%]

  <bb 27> [local count: 1676640]:
  # DEBUG BEGIN_STMT
  _10 = pxPreviousBlock_38->pxNextFreeBlock;
  pvReturn_42 = _10 + 8;
  # DEBUG pvReturn => pvReturn_42
  # DEBUG BEGIN_STMT
  if (pvReturn_42 >= &ucHeap[0])
    goto <bb 28>; [50.00%]
  else
    goto <bb 29>; [50.00%]

  <bb 28> [local count: 838320]:
  if (pvReturn_42 <= &ucHeap[8191])
    goto <bb 30>; [50.00%]
  else
    goto <bb 29>; [50.00%]

  <bb 29> [local count: 1257480]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i " :  :  : "memory");
  goto <bb 31>; [100.00%]

  <bb 30> [local count: 419160]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _11 = pxBlock_44->pxNextFreeBlock;
  pxPreviousBlock_38->pxNextFreeBlock = _11;
  # DEBUG BEGIN_STMT
  if (_2 < xWantedSize_23)
    goto <bb 32>; [50.00%]
  else
    goto <bb 34>; [50.00%]

  <bb 52> [local count: 127005466]:

  <bb 31> [local count: 127005466]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  goto <bb 52>; [100.00%]

  <bb 32> [local count: 209580]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i " :  :  : "memory");

  <bb 33> [local count: 21167578]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 49> [local count: 21167578]:
  goto <bb 33>; [100.00%]

  <bb 34> [local count: 209580]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _12 = _2 - xWantedSize_23;
  if (_12 > 16)
    goto <bb 35>; [50.00%]
  else
    goto <bb 39>; [50.00%]

  <bb 35> [local count: 104790]:
  # DEBUG BEGIN_STMT
  pxNewBlockLink_46 = pxBlock_44 + xWantedSize_23;
  # DEBUG pxNewBlockLink => pxNewBlockLink_46
  # DEBUG BEGIN_STMT
  pxNewBlockLink.7_13 = (unsigned int) pxNewBlockLink_46;
  _14 = pxNewBlockLink.7_13 & 7;
  if (_14 != 0)
    goto <bb 36>; [50.00%]
  else
    goto <bb 38>; [50.00%]

  <bb 36> [local count: 52395]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i " :  :  : "memory");

  <bb 37> [local count: 5291894]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 50> [local count: 5291894]:
  goto <bb 37>; [100.00%]

  <bb 38> [local count: 52395]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  pxNewBlockLink_46->xBlockSize = _12;
  # DEBUG BEGIN_STMT
  pxBlock_44->xBlockSize = xWantedSize_23;
  # DEBUG BEGIN_STMT
  pxNewBlockLink_46->pxNextFreeBlock = _11;
  # DEBUG BEGIN_STMT
  pxPreviousBlock_38->pxNextFreeBlock = pxNewBlockLink_46;

  <bb 39> [local count: 157185]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _15 = pxBlock_44->xBlockSize;
  _16 = xFreeBytesRemaining.2_6 - _15;
  xFreeBytesRemaining = _16;
  # DEBUG BEGIN_STMT
  xMinimumEverFreeBytesRemaining.10_17 = xMinimumEverFreeBytesRemaining;
  if (_16 < xMinimumEverFreeBytesRemaining.10_17)
    goto <bb 40>; [50.00%]
  else
    goto <bb 41>; [50.00%]

  <bb 40> [local count: 78592]:
  # DEBUG BEGIN_STMT
  xMinimumEverFreeBytesRemaining = _16;

  <bb 41> [local count: 157185]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _18 = _15 | 2147483648;
  pxBlock_44->xBlockSize = _18;
  # DEBUG BEGIN_STMT
  pxBlock_44->pxNextFreeBlock = 0B;
  # DEBUG BEGIN_STMT
  xNumberOfSuccessfulAllocations.12_19 = xNumberOfSuccessfulAllocations;
  _20 = xNumberOfSuccessfulAllocations.12_19 + 1;
  xNumberOfSuccessfulAllocations = _20;
  # DEBUG pvReturn => pvReturn_42
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  xTaskResumeAll ();
  # DEBUG BEGIN_STMT
  goto <bb 43>; [100.00%]

  <bb 42> [local count: 9282930]:
  # DEBUG BEGIN_STMT
  vApplicationMallocFailedHook ();

  <bb 43> [local count: 9440115]:
  # pvReturn_64 = PHI <pvReturn_42(41), 0B(42)>
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  pvReturn.13_21 = (unsigned int) pvReturn_64;
  _22 = pvReturn.13_21 & 7;
  if (_22 != 0)
    goto <bb 44>; [50.00%]
  else
    goto <bb 46>; [50.00%]

  <bb 44> [local count: 4720057]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i " :  :  : "memory");

  <bb 45> [local count: 476725758]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 51> [local count: 476725758]:
  goto <bb 45>; [100.00%]

  <bb 46> [local count: 4720057]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return pvReturn_64;

}


