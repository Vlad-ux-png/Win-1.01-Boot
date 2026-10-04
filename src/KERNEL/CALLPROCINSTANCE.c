// Function: CALLPROCINSTANCE

void CALLPROCINSTANCE(void)

{
  int in_BX;
  undefined2 unaff_ES;
  
                    /* WARNING: Could not recover jumptable at 0x10001998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)*(uint *)(in_BX + 2))();
  return;
}

