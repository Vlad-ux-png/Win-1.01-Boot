// Function: GLOBALFREEALL

void __stdcall16far GLOBALFREEALL(int param_1)

{
  int iVar1;
  int unaff_DI;
  int iVar2;
  undefined2 unaff_DS;
  
  FUN_1000_5f78();
  if (param_1 == 0) {
    param_1 = *DAT_1000_0038;
  }
  iVar2 = *(int *)(unaff_DI + 6);
  iVar1 = *(int *)(unaff_DI + 4);
  do {
    if (*(int *)(unaff_DI + 1) == param_1) {
      FUN_1000_6407(iVar2 + 1);
    }
    iVar2 = *(int *)(unaff_DI + 8);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_1000_575d();
  FUN_1000_5f83();
  return;
}

