// Function: FUN_1000_610f

void __cdecl16near FUN_1000_610f(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  long lVar3;
  
  lVar3 = FUN_1000_5de9();
  uVar2 = (undefined2)((ulong)lVar3 >> 0x10);
  if (lVar3 != 0) {
    uVar1 = FUN_1000_19a1(0x50,(int)lVar3 + 0xc,uVar2,*(undefined2 *)0x43c,*(undefined2 *)0x43e);
    *(undefined2 *)((int)lVar3 + 10) = uVar1;
    FUN_1000_5d7b(lVar3);
  }
  return;
}

