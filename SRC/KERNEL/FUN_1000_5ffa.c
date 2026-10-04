// Function: FUN_1000_5ffa

void __cdecl16near FUN_1000_5ffa(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int unaff_DI;
  undefined2 unaff_DS;
  undefined1 uVar4;
  
  iVar2 = FUN_1000_5f78();
  uVar3 = iVar2 + 2U & 0xfffe;
  LOCK();
  uVar1 = *(uint *)(unaff_DI + 0x1e);
  *(uint *)(unaff_DI + 0x1e) = uVar3;
  UNLOCK();
  if ((uVar1 < uVar3) && (uVar4 = uVar1 == 0, !(bool)uVar4)) {
    *(undefined1 *)(unaff_DI + 0xb) = 0;
    FUN_1000_6035();
    if ((bool)uVar4) {
      FUN_1000_5c27();
      FUN_1000_6035();
      if ((bool)uVar4) {
        *(uint *)(unaff_DI + 0x1e) = uVar1;
      }
    }
  }
  FUN_1000_5f83();
  return;
}

