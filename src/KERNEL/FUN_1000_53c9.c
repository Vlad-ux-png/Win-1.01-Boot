// Function: FUN_1000_53c9

undefined2 __cdecl16near FUN_1000_53c9(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 *unaff_SI;
  int unaff_DI;
  undefined2 unaff_DS;
  
  if (unaff_SI != (undefined2 *)0x0) {
    LOCK();
    iVar1 = unaff_SI[1];
    unaff_SI[1] = -1;
    UNLOCK();
    if (iVar1 == -1) {
      return 0xffff;
    }
    LOCK();
    uVar2 = *(undefined2 *)(unaff_DI + 0x10);
    *(undefined2 *)(unaff_DI + 0x10) = unaff_SI;
    UNLOCK();
    *unaff_SI = uVar2;
  }
  return 0;
}

