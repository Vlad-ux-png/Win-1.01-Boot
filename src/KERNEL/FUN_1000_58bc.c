// Function: FUN_1000_58bc

void __cdecl16near FUN_1000_58bc(void)

{
  int iVar1;
  int unaff_SI;
  undefined1 *unaff_DI;
  int unaff_ES;
  undefined2 unaff_DS;
  
  *(int *)(unaff_DI + 4) = *(int *)(unaff_DI + 4) + 1;
  LOCK();
  iVar1 = *(int *)(unaff_DI + 8);
  *(int *)(unaff_DI + 8) = unaff_SI;
  UNLOCK();
  *(int *)(unaff_DI + 6) = unaff_SI;
  *(int *)(unaff_DI + 8) = iVar1;
  *(int *)(unaff_DI + 3) = -1 - (unaff_SI - iVar1);
  *(int *)(unaff_DI + 6) = unaff_ES;
  *(undefined1 **)(unaff_DI + 1) = unaff_DI;
  *(undefined1 **)(unaff_DI + 10) = unaff_DI;
  *unaff_DI = 0x4d;
  *(int *)(unaff_DI + 3) = -1 - (unaff_ES - *(int *)(unaff_DI + 8));
  return;
}

