Creating summary for vInitInterruptTable/1:
  Descriptor for parameter 0 idD.5449
    not a candidate for splitting
  Descriptor for parameter 1 vectorD.5450
    not a candidate for splitting



========== IPA-SRA IPA stage ==========

Summary for node vInitInterruptTable/1:
  Descriptor for parameter 0:
    not a candidate for splitting
  Descriptor for parameter 1:
    not a candidate for splitting



Function vInitInterruptTable/1 disqualified because it cannot be made local.

========== IPA-SRA decisions ==========

========== IPA SRA IPA analysis done ==========


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
vInitInterruptTable (int id, void * vector)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  __vector_table__[id_2(D)] = vector_3(D);
  return;

}


