// Function: GLOBALUNLOCK

undefined2 __stdcall16far GLOBALUNLOCK(void)

{
  undefined2 uVar1;
  undefined2 in_CX;
  int unaff_DI;
  undefined2 unaff_DS;
  undefined1 in_ZF;
  
  uVar1 = FUN_1000_62b0();
  if (!(bool)in_ZF) {
    uVar1 = in_CX;
    FUN_1000_579a();
  }
  *(int *)(unaff_DI + 0x18) = *(int *)(unaff_DI + 0x18) + -1;
  return uVar1;
}

