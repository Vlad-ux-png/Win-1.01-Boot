// Function: LOCKSEGMENT

void __stdcall16far LOCKSEGMENT(void)

{
  int unaff_DI;
  undefined2 unaff_DS;
  undefined1 in_ZF;
  
  FUN_1000_62b0();
  if (!(bool)in_ZF) {
    FUN_1000_5792();
  }
  *(int *)(unaff_DI + 0x18) = *(int *)(unaff_DI + 0x18) + -1;
  return;
}

