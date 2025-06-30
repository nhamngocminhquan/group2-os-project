
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  vInitInterruptTable/1:

 Propagating constants:

Not considering vInitInterruptTable/1 for cloning; -fipa-cp-clone disabled.

overall_size: 5

IPA lattices after all propagation:

Lattices:
  Node: vInitInterruptTable/1:
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

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

vInitInterruptTable/1 (vInitInterruptTable) @0683b8c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: __vector_table__/0 (write) 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
__vector_table__/0 (__vector_table__) @0684fab0
  Type: variable definition analyzed
  Visibility: externally_visible public section:.irq_handler
  References: 
  Referring: vInitInterruptTable/1 (write) 
  Availability: available
  Varpool flags:

;; Function vInitInterruptTable (vInitInterruptTable, funcdef_no=0, decl_uid=5451, cgraph_uid=1, symbol_order=1)

Modification phase of node vInitInterruptTable/1
vInitInterruptTable (int id, void * vector)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  __vector_table__[id_2(D)] = vector_3(D);
  return;

}


