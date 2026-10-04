// Function: FUN_1000_5531

long __cdecl16near FUN_1000_5531(void)

{
  int iVar1;
  undefined2 uVar2;
  long lVar3;
  
  lVar3 = FUN_1000_67ad();
  uVar2 = (undefined2)((ulong)lVar3 >> 0x10);
  iVar1 = (int)lVar3;
  if (lVar3 != 0) {
    *(undefined2 *)(iVar1 + 10) = 0x50;
    FUN_1000_66e8(*(undefined2 *)(iVar1 + 10),iVar1 + 0xc,uVar2);
  }
  return lVar3;
}

