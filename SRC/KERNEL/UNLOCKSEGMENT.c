// Function: UNLOCKSEGMENT

void __stdcall16far UNLOCKSEGMENT(void)

{
  int unaff_DI;
  undefined2 unaff_DS;
  undefined1 in_ZF;
  
  FUN_1000_62b0();
  if (!(bool)in_ZF) {
    FUN_1000_579a();
  }
  *(int *)(unaff_DI + 0x18) = *(int *)(unaff_DI + 0x18) + -1;
  return;
}

