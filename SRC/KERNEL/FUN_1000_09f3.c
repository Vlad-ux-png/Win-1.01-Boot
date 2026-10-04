// Function: FUN_1000_09f3

void FUN_1000_09f3(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = FUN_1000_09e1(param_1);
    if (iVar1 != 0) {
      if ((*(byte *)0x5 & 4) != 0) {
        FUN_1000_173e(0,iVar1);
      }
      FUN_1000_6407(iVar1);
    }
  }
  GLOBALFREE(param_1);
  return;
}

