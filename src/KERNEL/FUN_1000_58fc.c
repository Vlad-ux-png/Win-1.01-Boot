// Function: FUN_1000_58fc

void __cdecl16near FUN_1000_58fc(void)

{
  undefined2 uVar1;
  int iVar2;
  int unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  *(int *)(unaff_DI + 4) = *(int *)(unaff_DI + 4) + -1;
  iVar2 = *(int *)(unaff_DI + 6);
  uVar1 = *(undefined2 *)(unaff_DI + 8);
  *(int *)(unaff_DI + 6) = iVar2;
  *(undefined2 *)(unaff_DI + 8) = uVar1;
  *(int *)(unaff_DI + 3) = -1 - (iVar2 - *(int *)(unaff_DI + 8));
  return;
}

