// Function: GLOBALSIZE

void __stdcall16far GLOBALSIZE(void)

{
  int iVar1;
  int extraout_DX;
  int unaff_DI;
  undefined2 unaff_DS;
  
  FUN_1000_62b0();
  if (extraout_DX != 0) {
    iVar1 = 4;
    do {
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  *(int *)(unaff_DI + 0x18) = *(int *)(unaff_DI + 0x18) + -1;
  return;
}

