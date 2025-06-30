
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  xTaskIncrementTick/25:
  Jump functions of caller  vTaskSwitchContext/24:
  Jump functions of caller  SVC_Handler/23:
  Jump functions of caller  vPortValidateInterruptPriority/22:
  Jump functions of caller  vPortEnableVFP/21:
  Jump functions of caller  vPortSetupTimerInterrupt/20:
  Jump functions of caller  SysTick_Handler/19:
    callsite  SysTick_Handler/19 -> xTaskIncrementTick/25 : 
       no arg info
  Jump functions of caller  PendSV_Handler/18:
  Jump functions of caller  vPortExitCritical/17:
  Jump functions of caller  vPortEnterCritical/16:
  Jump functions of caller  vPortEndScheduler/15:
  Jump functions of caller  xPortStartScheduler/14:
    callsite  xPortStartScheduler/14 -> prvTaskExitError/10 : 
    callsite  xPortStartScheduler/14 -> vTaskSwitchContext/24 : 
       no arg info
    callsite  xPortStartScheduler/14 -> prvPortStartFirstTask/13 : 
    callsite  xPortStartScheduler/14 -> vPortEnableVFP/21 : 
    callsite  xPortStartScheduler/14 -> vPortSetupTimerInterrupt/20 : 
  Jump functions of caller  prvPortStartFirstTask/13:
  Jump functions of caller  vPortSVCHandler/12:
    callsite  vPortSVCHandler/12 -> SVC_Handler/23 : 
       no arg info
  Jump functions of caller  prvTaskExitError/10:
  Jump functions of caller  pxPortInitialiseStack/9:

 Propagating constants:

Function vPortEnableVFP/21 is not versionable, reason: not a tree_versionable_function.
Function vPortSetupTimerInterrupt/20 is not versionable, reason: insufficient body availability.
Function PendSV_Handler/18 is not versionable, reason: not a tree_versionable_function.
Function prvPortStartFirstTask/13 is not versionable, reason: not a tree_versionable_function.
Function vPortSVCHandler/12 is not versionable, reason: not a tree_versionable_function.
Not considering pxPortInitialiseStack/9 for cloning; -fipa-cp-clone disabled.

overall_size: 275

IPA lattices after all propagation:

Lattices:
  Node: vPortValidateInterruptPriority/22:
  Node: vPortEnableVFP/21:
  Node: vPortSetupTimerInterrupt/20:
  Node: SysTick_Handler/19:
  Node: PendSV_Handler/18:
  Node: vPortExitCritical/17:
  Node: vPortEnterCritical/16:
  Node: vPortEndScheduler/15:
  Node: xPortStartScheduler/14:
  Node: prvPortStartFirstTask/13:
  Node: vPortSVCHandler/12:
  Node: prvTaskExitError/10:
  Node: pxPortInitialiseStack/9:
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

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

xTaskIncrementTick/25 (xTaskIncrementTick) @069671c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: SysTick_Handler/19 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
vTaskSwitchContext/24 (vTaskSwitchContext) @06913a80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: xPortStartScheduler/14 (341714 (estimated locally),0.02 per call) 
  Calls: 
SVC_Handler/23 (SVC_Handler) @06913700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: vPortSVCHandler/12 (524845000 (estimated locally),0.49 per call) 
  Calls: 
vPortValidateInterruptPriority/22 (vPortValidateInterruptPriority) @06913000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: ucMaxSysCallPriority/6 (read) ulMaxPRIGROUPValue/7 (read) 
  Referring: 
  Availability: available
  Function flags: count:28349621 (estimated locally) body optimize_size
  Called by: 
  Calls: 
vPortEnableVFP/21 (vPortEnableVFP) @069049a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: xPortStartScheduler/14 (341714 (estimated locally),0.02 per call) 
  Calls: 
vPortSetupTimerInterrupt/20 (vPortSetupTimerInterrupt) @06904460
  Type: function definition analyzed
  Visibility: externally_visible public weak
  References: 
  Referring: 
  Availability: overwritable
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: xPortStartScheduler/14 (341714 (estimated locally),0.02 per call) 
  Calls: 
SysTick_Handler/19 (SysTick_Handler) @06904ee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: xTaskIncrementTick/25 (1073741824 (estimated locally),1.00 per call) 
PendSV_Handler/18 (PendSV_Handler) @06904c40
  Type: function definition analyzed
  Visibility: externally_visible public
  Address is taken.
  References: 
  Referring: xPortStartScheduler/14 (addr) 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
vPortExitCritical/17 (vPortExitCritical) @069048c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: uxCriticalNesting/4 (read) uxCriticalNesting/4 (write) 
  Referring: 
  Availability: available
  Function flags: count:21262216 (estimated locally) body optimize_size
  Called by: 
  Calls: 
vPortEnterCritical/16 (vPortEnterCritical) @06904620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: uxCriticalNesting/4 (read) uxCriticalNesting/4 (write) 
  Referring: 
  Availability: available
  Function flags: count:62535929 (estimated locally) body optimize_size
  Called by: 
  Calls: 
vPortEndScheduler/15 (vPortEndScheduler) @06904380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: uxCriticalNesting/4 (read) 
  Referring: 
  Availability: available
  Function flags: count:16107739 (estimated locally) body optimize_size
  Called by: 
  Calls: 
xPortStartScheduler/14 (xPortStartScheduler) @069040e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: vPortSVCHandler/12 (addr) PendSV_Handler/18 (addr) ucMaxSysCallPriority/6 (write) ulMaxPRIGROUPValue/7 (write) ulMaxPRIGROUPValue/7 (write) ulMaxPRIGROUPValue/7 (read) ulMaxPRIGROUPValue/7 (write) uxCriticalNesting/4 (write) 
  Referring: 
  Availability: available
  Function flags: count:15187297 (estimated locally) body optimize_size
  Called by: 
  Calls: prvTaskExitError/10 (341714 (estimated locally),0.02 per call) vTaskSwitchContext/24 (341714 (estimated locally),0.02 per call) prvPortStartFirstTask/13 (341714 (estimated locally),0.02 per call) vPortEnableVFP/21 (341714 (estimated locally),0.02 per call) vPortSetupTimerInterrupt/20 (341714 (estimated locally),0.02 per call) 
prvPortStartFirstTask/13 (prvPortStartFirstTask) @069499a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: xPortStartScheduler/14 (341714 (estimated locally),0.02 per call) 
  Calls: 
vPortSVCHandler/12 (vPortSVCHandler) @06949460
  Type: function definition analyzed
  Visibility: externally_visible public
  Address is taken.
  References: svc_id/11 (read) 
  Referring: xPortStartScheduler/14 (addr) 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SVC_Handler/23 (524845000 (estimated locally),0.49 per call) 
svc_id/11 (svc_id) @06943948
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: vPortSVCHandler/12 (read) 
  Availability: available
  Varpool flags: initialized
prvTaskExitError/10 (prvTaskExitError) @06949b60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: uxCriticalNesting/4 (read) 
  Referring: pxPortInitialiseStack/9 (addr) 
  Availability: available
  Function flags: count:16107739 (estimated locally) body optimize_size
  Called by: xPortStartScheduler/14 (341714 (estimated locally),0.02 per call) 
  Calls: 
pxPortInitialiseStack/9 (pxPortInitialiseStack) @069498c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: prvTaskExitError/10 (addr) 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
ulMaxPRIGROUPValue/7 (ulMaxPRIGROUPValue) @06943438
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: xPortStartScheduler/14 (write) xPortStartScheduler/14 (write) xPortStartScheduler/14 (write) xPortStartScheduler/14 (read) vPortValidateInterruptPriority/22 (read) 
  Availability: available
  Varpool flags: initialized
ucMaxSysCallPriority/6 (ucMaxSysCallPriority) @069433a8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: xPortStartScheduler/14 (write) vPortValidateInterruptPriority/22 (read) 
  Availability: available
  Varpool flags: initialized
flagCheckStartFirstTask/5 (flagCheckStartFirstTask) @069431f8
  Type: variable definition analyzed
  Visibility: force_output prevailing_def_ironly
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized
uxCriticalNesting/4 (uxCriticalNesting) @06943168
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: vPortEndScheduler/15 (read) vPortEnterCritical/16 (write) vPortExitCritical/17 (write) prvTaskExitError/10 (read) vPortEnterCritical/16 (read) vPortExitCritical/17 (read) xPortStartScheduler/14 (write) 
  Availability: available
  Varpool flags: initialized

;; Function prvTaskExitError (prvTaskExitError, funcdef_no=5, decl_uid=5892, cgraph_uid=6, symbol_order=10)

Modification phase of node prvTaskExitError/10
prvTaskExitError ()
{
  uint32_t ulNewBASEPRI;
  volatile uint32_t ulDummy;
  long unsigned int _1;
  long unsigned int ulDummy.3_2;

  <bb 2> [local count: 16107739]:
  # DEBUG BEGIN_STMT
  ulDummy ={v} 0;
  # DEBUG BEGIN_STMT
  _1 = uxCriticalNesting[0];
  if (_1 != 4294967295)
    goto <bb 3>; [66.00%]
  else
    goto <bb 5>; [34.00%]

  <bb 3> [local count: 10631108]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i " :  :  : "memory");

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 8> [local count: 1073741824]:
  goto <bb 4>; [100.00%]

  <bb 5> [local count: 5476631]:
  # DEBUG BEGIN_STMT
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
" : "=r" ulNewBASEPRI_6 : "i" 16 : "memory");
  # DEBUG ulNewBASEPRI => ulNewBASEPRI_6

  <bb 6> [local count: 49787559]:
  # DEBUG ulNewBASEPRI => NULL
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ulDummy.3_2 ={v} ulDummy;
  if (ulDummy.3_2 == 0)
    goto <bb 9>; [89.00%]
  else
    goto <bb 7>; [11.00%]

  <bb 9> [local count: 44310928]:
  goto <bb 6>; [100.00%]

  <bb 7> [local count: 5476631]:
  return;

}



;; Function prvPortStartFirstTask (prvPortStartFirstTask, funcdef_no=7, decl_uid=5888, cgraph_uid=8, symbol_order=13)

Modification phase of node prvPortStartFirstTask/13
__attribute__((naked, noinline, noclone))
prvPortStartFirstTask ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" ldr r0, =0xE000ED08   
 ldr r0, [r0]          
 ldr r0, [r0]          
 msr msp, r0           
 mov r0, #0            
 msr control, r0       
 cpsie i               
 cpsie f               
 dsb                   
 isb                   
 svc 0xFF              
 nop                   
 .ltorg                
");
  return;

}



;; Function PendSV_Handler (PendSV_Handler, funcdef_no=12, decl_uid=5882, cgraph_uid=13, symbol_order=18)

Modification phase of node PendSV_Handler/18
__attribute__((naked, noinline, noclone))
PendSV_Handler ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("   mrs r0, psp                         
   isb                                 
                                       
 ldr  r3, =pxCurrentTCB                         	
   ldr r2, [r3]                        
                                       
   tst r14, #0x10                      
   it eq                               
   vstmdbeq r0!, {s16-s31}             
                                       
   stmdb r0!, {r4-r11, r14}            
   str r0, [r2]                        
                                       
   stmdb sp!, {r0, r3}                 
   mov r0, %0                          
   cpsid i                             
   msr basepri, r0                     
   dsb                                 
   isb                                 
   cpsie i                             
   bl vTaskSwitchContext               
   mov r0, #0                          
   msr basepri, r0                     
   ldmia sp!, {r0, r3}                 
                                       
   ldr r1, [r3]                        
   ldr r0, [r1]                        
                                       
   ldmia r0!, {r4-r11, r14}            
                                       
   tst r14, #0x10                      
   it eq                               
   vldmiaeq r0!, {s16-s31}             
                                       
   msr psp, r0                         
   isb                                 
                                       
                                       
   bx r14                              
                                       
" :  : "i" 16);
  return;

}



;; Function vPortEnableVFP (vPortEnableVFP, funcdef_no=15, decl_uid=5890, cgraph_uid=16, symbol_order=21)

Modification phase of node vPortEnableVFP/21
__attribute__((naked, noinline, noclone))
vPortEnableVFP ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("   ldr.w r0, =0xE000ED88       
   ldr r1, [r0]                
                               
   orr r1, r1, #( 0xf << 20 )  
   str r1, [r0]                
   bx r14                      
   .ltorg                      
");
  return;

}



;; Function vPortSVCHandler (vPortSVCHandler, funcdef_no=6, decl_uid=5886, cgraph_uid=7, symbol_order=12)

Modification phase of node vPortSVCHandler/12
__attribute__((naked, noinline, noclone))
vPortSVCHandler ()
{
  long unsigned int svc_id.4_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("tst lr, #4");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("ite eq");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("mrseq r0, MSP");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("mrsne r0, PSP");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("add r0, r0, #0x18");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("ldr r0, [r0]");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("sub r0, r0, #2");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("ldr r0, [r0]");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("and r1, r0, 0xFF");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("ldr r2, =svc_id");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("str r1, [r2]");
  # DEBUG BEGIN_STMT
  svc_id.4_1 = svc_id;
  if (svc_id.4_1 == 255)
    goto <bb 3>; [51.12%]
  else
    goto <bb 4>; [48.88%]

  <bb 3> [local count: 548896825]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" ldr  r3, =pxCurrentTCB                         	
   ldr r1, [r3]                    
   ldr r0, [r1]                    
   ldmia r0!, {r4-r11, r14}        
   msr psp, r0                     
   isb                             
   mov r0, #0                      
   msr basepri, r0                 
   bx r14                          
");
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 524845000]:
  # DEBUG BEGIN_STMT
  SVC_Handler ();

  <bb 5> [local count: 1073741824]:
  return;

}



;; Function pxPortInitialiseStack (pxPortInitialiseStack, funcdef_no=4, decl_uid=5537, cgraph_uid=5, symbol_order=9)

Modification phase of node pxPortInitialiseStack/9
pxPortInitialiseStack (StackType_t * pxTopOfStack, void (*TaskFunction_t) (void *) pxCode, void * pvParameters)
{
  long unsigned int pxCode.0_1;
  long unsigned int _2;
  long unsigned int prvTaskExitError.1_3;
  long unsigned int pvParameters.2_4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG pxTopOfStack => pxTopOfStack_5(D) + 4294967292
  # DEBUG BEGIN_STMT
  MEM[(StackType_t *)pxTopOfStack_5(D) + 4294967292B] = 16777216;
  # DEBUG BEGIN_STMT
  # DEBUG D#4 => &MEM <StackType_t> [(void *)pxTopOfStack_5(D) + 4294967288B]
  # DEBUG pxTopOfStack => D#4
  # DEBUG BEGIN_STMT
  pxCode.0_1 = (long unsigned int) pxCode_8(D);
  _2 = pxCode.0_1 & 4294967294;
  MEM[(StackType_t *)pxTopOfStack_5(D) + 4294967288B] = _2;
  # DEBUG BEGIN_STMT
  # DEBUG D#3 => &MEM <StackType_t> [(void *)pxTopOfStack_5(D) + 4294967284B]
  # DEBUG pxTopOfStack => D#3
  # DEBUG BEGIN_STMT
  prvTaskExitError.1_3 = (long unsigned int) prvTaskExitError;
  MEM[(StackType_t *)pxTopOfStack_5(D) + 4294967284B] = prvTaskExitError.1_3;
  # DEBUG BEGIN_STMT
  # DEBUG D#2 => &MEM <StackType_t> [(void *)pxTopOfStack_5(D) + 4294967264B]
  # DEBUG pxTopOfStack => D#2
  # DEBUG BEGIN_STMT
  pvParameters.2_4 = (long unsigned int) pvParameters_11(D);
  MEM[(StackType_t *)pxTopOfStack_5(D) + 4294967264B] = pvParameters.2_4;
  # DEBUG BEGIN_STMT
  # DEBUG D#1 => &MEM <StackType_t> [(void *)pxTopOfStack_5(D) + 4294967260B]
  # DEBUG pxTopOfStack => D#1
  # DEBUG BEGIN_STMT
  MEM[(StackType_t *)pxTopOfStack_5(D) + 4294967260B] = 4294967293;
  # DEBUG BEGIN_STMT
  pxTopOfStack_14 = &MEM <StackType_t> [(void *)pxTopOfStack_5(D) + 4294967228B];
  # DEBUG pxTopOfStack => pxTopOfStack_14
  # DEBUG BEGIN_STMT
  return pxTopOfStack_14;

}



;; Function vPortEndScheduler (vPortEndScheduler, funcdef_no=9, decl_uid=5575, cgraph_uid=10, symbol_order=15)

Modification phase of node vPortEndScheduler/15
vPortEndScheduler ()
{
  long unsigned int _1;

  <bb 2> [local count: 16107739]:
  # DEBUG BEGIN_STMT
  _1 = uxCriticalNesting[0];
  if (_1 != 1000)
    goto <bb 3>; [66.00%]
  else
    goto <bb 5>; [34.00%]

  <bb 3> [local count: 10631108]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i " :  :  : "memory");

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 6> [local count: 1073741824]:
  goto <bb 4>; [100.00%]

  <bb 5> [local count: 5476631]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function vPortEnterCritical (vPortEnterCritical, funcdef_no=10, decl_uid=5510, cgraph_uid=11, symbol_order=16)

Modification phase of node vPortEnterCritical/16
vPortEnterCritical ()
{
  uint32_t ulNewBASEPRI;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;

  <bb 2> [local count: 62535929]:
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
" : "=r" ulNewBASEPRI_8 : "i" 16 : "memory");
  # DEBUG ulNewBASEPRI => NULL
  # DEBUG BEGIN_STMT
  _1 = uxCriticalNesting[0];
  _2 = _1 + 1;
  uxCriticalNesting[0] = _2;
  # DEBUG BEGIN_STMT
  if (_2 == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 3> [local count: 21262216]:
  # DEBUG BEGIN_STMT
  _3 ={v} MEM[(volatile uint32_t *)3758157060B];
  _4 = _3 & 255;
  if (_4 != 0)
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

  <bb 7> [local count: 1073741824]:
  goto <bb 5>; [100.00%]

  <bb 6> [local count: 51904821]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function vPortExitCritical (vPortExitCritical, funcdef_no=11, decl_uid=5512, cgraph_uid=12, symbol_order=17)

Modification phase of node vPortExitCritical/17
vPortExitCritical ()
{
  long unsigned int _1;
  long unsigned int _2;

  <bb 2> [local count: 21262216]:
  # DEBUG BEGIN_STMT
  _1 = uxCriticalNesting[0];
  if (_1 == 0)
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
  _2 = _1 + 4294967295;
  uxCriticalNesting[0] = _2;
  # DEBUG BEGIN_STMT
  if (_2 == 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 6> [local count: 5315554]:
  # DEBUG BEGIN_STMT
  # DEBUG ulNewMaskValue => 0
  # DEBUG INLINE_ENTRY vPortSetBASEPRI
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("   msr basepri, %0 " :  : "r" 0 : "memory");

  <bb 7> [local count: 10631108]:
  # DEBUG ulNewMaskValue => NULL
  return;

}



;; Function SysTick_Handler (SysTick_Handler, funcdef_no=13, decl_uid=5884, cgraph_uid=14, symbol_order=19)

Modification phase of node SysTick_Handler/19
SysTick_Handler ()
{
  uint32_t ulNewBASEPRI;
  long int _1;

  <bb 2> [local count: 1073741824]:
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
" : "=r" ulNewBASEPRI_6 : "i" 16 : "memory");
  # DEBUG ulNewBASEPRI => NULL
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = xTaskIncrementTick ();
  if (_1 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  MEM[(volatile uint32_t *)3758157060B] ={v} 268435456;

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG ulNewMaskValue => 0
  # DEBUG INLINE_ENTRY vPortSetBASEPRI
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("   msr basepri, %0 " :  : "r" 0 : "memory");
  # DEBUG ulNewMaskValue => NULL
  return;

}



;; Function vPortSetupTimerInterrupt (vPortSetupTimerInterrupt, funcdef_no=14, decl_uid=5880, cgraph_uid=15, symbol_order=20)

Modification phase of node vPortSetupTimerInterrupt/20
__attribute__((weak))
vPortSetupTimerInterrupt ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  MEM[(volatile uint32_t *)3758153744B] ={v} 0;
  # DEBUG BEGIN_STMT
  MEM[(volatile uint32_t *)3758153752B] ={v} 0;
  # DEBUG BEGIN_STMT
  MEM[(volatile uint32_t *)3758153748B] ={v} 23999;
  # DEBUG BEGIN_STMT
  MEM[(volatile uint32_t *)3758153744B] ={v} 7;
  return;

}



;; Function xPortStartScheduler (xPortStartScheduler, funcdef_no=8, decl_uid=5573, cgraph_uid=9, symbol_order=14)

Modification phase of node xPortStartScheduler/14
xPortStartScheduler ()
{
  volatile uint8_t ucMaxPriorityValue;
  volatile uint32_t ulImplementedPrioBits;
  volatile uint8_t ucOriginalPriority;
  void (*portISR_t) (void) * const pxVectorTable;
  void (*<T58d>) (void) _1;
  void (*<T58d>) (void) _2;
  unsigned char _3;
  unsigned char _4;
  unsigned char ucMaxPriorityValue.5_5;
  unsigned char _6;
  unsigned char ucMaxPriorityValue.7_7;
  int _8;
  int _9;
  unsigned int _10;
  unsigned int _11;
  long unsigned int ulImplementedPrioBits.8_12;
  long unsigned int _13;
  unsigned char ucMaxPriorityValue.9_14;
  unsigned char _15;
  unsigned char ucMaxPriorityValue.10_16;
  long unsigned int ulImplementedPrioBits.11_17;
  long unsigned int ulImplementedPrioBits.12_18;
  long unsigned int _19;
  long unsigned int ulMaxPRIGROUPValue.13_20;
  long unsigned int _21;
  long unsigned int _22;
  unsigned char ucOriginalPriority.15_23;
  long unsigned int _24;
  long unsigned int _25;
  long unsigned int _26;
  long unsigned int _27;
  long unsigned int _28;
  long unsigned int _29;
  signed char _35;

  <bb 2> [local count: 15187297]:
  # DEBUG BEGIN_STMT
  pxVectorTable_33 = MEM[(void (*portISR_t) (void) * *)3758157064B];
  # DEBUG pxVectorTable => pxVectorTable_33
  # DEBUG BEGIN_STMT
  _1 = MEM[(void (*portISR_t) (void) *)pxVectorTable_33 + 44B];
  if (_1 != vPortSVCHandler)
    goto <bb 3>; [70.00%]
  else
    goto <bb 5>; [30.00%]

  <bb 3> [local count: 10631108]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i " :  :  : "memory");

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 21> [local count: 1073741824]:
  goto <bb 4>; [100.00%]

  <bb 5> [local count: 4556189]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _2 = MEM[(void (*portISR_t) (void) *)pxVectorTable_33 + 56B];
  if (_2 != PendSV_Handler)
    goto <bb 6>; [70.00%]
  else
    goto <bb 8>; [30.00%]

  <bb 6> [local count: 3189332]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i " :  :  : "memory");

  <bb 7> [local count: 322122544]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 22> [local count: 322122544]:
  goto <bb 7>; [100.00%]

  <bb 8> [local count: 1366857]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ulImplementedPrioBits ={v} 0;
  # DEBUG BEGIN_STMT
  # DEBUG pucFirstUserPriorityRegister => 3758154752B
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _3 ={v} MEM[(volatile uint8_t *)3758154752B];
  ucOriginalPriority ={v} _3;
  # DEBUG BEGIN_STMT
  MEM[(volatile uint8_t *)3758154752B] ={v} 255;
  # DEBUG BEGIN_STMT
  _4 ={v} MEM[(volatile uint8_t *)3758154752B];
  ucMaxPriorityValue ={v} _4;
  # DEBUG BEGIN_STMT
  ucMaxPriorityValue.5_5 ={v} ucMaxPriorityValue;
  _6 = ucMaxPriorityValue.5_5 & 16;
  ucMaxSysCallPriority = _6;
  # DEBUG BEGIN_STMT
  if (_6 == 0)
    goto <bb 9>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 9> [local count: 683428]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i " :  :  : "memory");

  <bb 10> [local count: 69026259]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 23> [local count: 69026259]:
  goto <bb 10>; [100.00%]

  <bb 11> [local count: 683428]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ucMaxPriorityValue.7_7 ={v} ucMaxPriorityValue;
  _8 = (int) ucMaxPriorityValue.7_7;
  _9 = ~_8;
  _10 = (unsigned int) _9;
  _11 = _10 & 16;
  if (_11 != 0)
    goto <bb 12>; [50.00%]
  else
    goto <bb 20>; [50.00%]

  <bb 20> [local count: 341714]:
  goto <bb 15>; [100.00%]

  <bb 12> [local count: 341714]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i " :  :  : "memory");

  <bb 13> [local count: 34513129]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 24> [local count: 34513129]:
  goto <bb 13>; [100.00%]

  <bb 14> [local count: 2764778]:
  # DEBUG BEGIN_STMT
  ulImplementedPrioBits.8_12 ={v} ulImplementedPrioBits;
  _13 = ulImplementedPrioBits.8_12 + 1;
  ulImplementedPrioBits ={v} _13;
  # DEBUG BEGIN_STMT
  ucMaxPriorityValue.9_14 ={v} ucMaxPriorityValue;
  _15 = ucMaxPriorityValue.9_14 << 1;
  ucMaxPriorityValue ={v} _15;

  <bb 15> [local count: 3106493]:
  # DEBUG BEGIN_STMT
  ucMaxPriorityValue.10_16 ={v} ucMaxPriorityValue;
  _35 = (signed char) ucMaxPriorityValue.10_16;
  if (_35 < 0)
    goto <bb 14>; [89.00%]
  else
    goto <bb 16>; [11.00%]

  <bb 16> [local count: 341714]:
  # DEBUG BEGIN_STMT
  ulImplementedPrioBits.11_17 ={v} ulImplementedPrioBits;
  if (ulImplementedPrioBits.11_17 == 8)
    goto <bb 17>; [34.00%]
  else
    goto <bb 18>; [66.00%]

  <bb 17> [local count: 116183]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ulMaxPRIGROUPValue = 0;
  goto <bb 19>; [100.00%]

  <bb 18> [local count: 225531]:
  # DEBUG BEGIN_STMT
  ulImplementedPrioBits.12_18 ={v} ulImplementedPrioBits;
  _19 = 7 - ulImplementedPrioBits.12_18;
  ulMaxPRIGROUPValue = _19;

  <bb 19> [local count: 341714]:
  # DEBUG BEGIN_STMT
  ulMaxPRIGROUPValue.13_20 = ulMaxPRIGROUPValue;
  _21 = ulMaxPRIGROUPValue.13_20 << 8;
  # DEBUG BEGIN_STMT
  _22 = _21 & 1792;
  ulMaxPRIGROUPValue = _22;
  # DEBUG BEGIN_STMT
  ucOriginalPriority.15_23 ={v} ucOriginalPriority;
  MEM[(volatile uint8_t *)3758154752B] ={v} ucOriginalPriority.15_23;
  # DEBUG BEGIN_STMT
  _24 ={v} MEM[(volatile uint32_t *)3758157088B];
  _25 = _24 | 16711680;
  MEM[(volatile uint32_t *)3758157088B] ={v} _25;
  # DEBUG BEGIN_STMT
  _26 ={v} MEM[(volatile uint32_t *)3758157088B];
  _27 = _26 | 4278190080;
  MEM[(volatile uint32_t *)3758157088B] ={v} _27;
  # DEBUG BEGIN_STMT
  MEM[(volatile uint32_t *)3758157084B] ={v} 0;
  # DEBUG BEGIN_STMT
  vPortSetupTimerInterrupt ();
  # DEBUG BEGIN_STMT
  uxCriticalNesting[0] = 0;
  # DEBUG BEGIN_STMT
  vPortEnableVFP ();
  # DEBUG BEGIN_STMT
  _28 ={v} MEM[(volatile uint32_t *)3758157620B];
  _29 = _28 | 3221225472;
  MEM[(volatile uint32_t *)3758157620B] ={v} _29;
  # DEBUG BEGIN_STMT
  prvPortStartFirstTask ();
  # DEBUG BEGIN_STMT
  vTaskSwitchContext ();
  # DEBUG BEGIN_STMT
  prvTaskExitError ();
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function vPortValidateInterruptPriority (vPortValidateInterruptPriority, funcdef_no=16, decl_uid=5516, cgraph_uid=17, symbol_order=22)

Modification phase of node vPortValidateInterruptPriority/22
vPortValidateInterruptPriority ()
{
  uint8_t ucCurrentPriority;
  uint32_t ulCurrentInterrupt;
  const uint8_t * _1;
  unsigned char ucMaxSysCallPriority.16_2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int ulMaxPRIGROUPValue.17_5;

  <bb 2> [local count: 28349621]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("mrs %0, ipsr" : "=r" ulCurrentInterrupt_8 :  : "memory");
  # DEBUG ulCurrentInterrupt => ulCurrentInterrupt_8
  # DEBUG BEGIN_STMT
  if (ulCurrentInterrupt_8 > 15)
    goto <bb 3>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 3> [local count: 14174811]:
  # DEBUG BEGIN_STMT
  _1 = 3758154736B + ulCurrentInterrupt_8;
  ucCurrentPriority_9 ={v} *_1;
  # DEBUG ucCurrentPriority => ucCurrentPriority_9
  # DEBUG BEGIN_STMT
  ucMaxSysCallPriority.16_2 = ucMaxSysCallPriority;
  if (ucMaxSysCallPriority.16_2 > ucCurrentPriority_9)
    goto <bb 4>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 4> [local count: 7087405]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i " :  :  : "memory");

  <bb 5> [local count: 715827884]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 10> [local count: 715827884]:
  goto <bb 5>; [100.00%]

  <bb 6> [local count: 21262216]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _3 ={v} MEM[(volatile uint32_t *)3758157068B];
  _4 = _3 & 1792;
  ulMaxPRIGROUPValue.17_5 = ulMaxPRIGROUPValue;
  if (_4 > ulMaxPRIGROUPValue.17_5)
    goto <bb 7>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 7> [local count: 10631108]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i " :  :  : "memory");

  <bb 8> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 11> [local count: 1073741824]:
  goto <bb 8>; [100.00%]

  <bb 9> [local count: 10631108]:
  # DEBUG BEGIN_STMT
  return;

}


