// Function: FUN_1000_5a42

void __cdecl16near FUN_1000_5a42(void)

{
  undefined2 uVar1;
  int unaff_DI;
  int unaff_ES;
  
  if (unaff_ES != 0) {
    *(int *)(unaff_DI + 1) = unaff_DI;
    LOCK();
    *(undefined2 *)(unaff_DI + 10) = 0;
    UNLOCK();
    uVar1 = *(undefined2 *)(unaff_DI + 6);
    if (*(int *)(unaff_DI + 1) == unaff_DI) {
      FUN_1000_58fc();
    }
    if (*(int *)(unaff_DI + 1) == unaff_DI) {
      FUN_1000_58fc();
    }
  }
  return;
}

