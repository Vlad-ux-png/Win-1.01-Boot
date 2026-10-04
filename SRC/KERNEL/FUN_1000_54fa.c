// Function: FUN_1000_54fa

undefined2 __cdecl16near FUN_1000_54fa(void)

{
  uint in_AX;
  undefined2 uVar1;
  int in_CX;
  uint uVar2;
  undefined1 extraout_DH;
  int *in_BX;
  int unaff_DI;
  undefined2 unaff_DS;
  bool bVar3;
  ulong uVar4;
  
  bVar3 = in_BX == (int *)0x0;
  if (bVar3) {
    if (((in_AX & 2) != 0) && (uVar2 = in_AX, uVar1 = FUN_1000_5389(), uVar2 != 0)) {
      *(byte *)(in_BX + 1) = (byte)(in_AX >> 8) | 0x40;
      return uVar1;
    }
  }
  else {
    uVar4 = FUN_1000_594f();
    if (bVar3) {
      return (int)uVar4;
    }
    if ((uVar4 & 0x20000) == 0) {
      return (int)uVar4;
    }
    FUN_1000_5389();
    if (in_CX != 0) {
      *(undefined2 *)(unaff_DI + 10) = in_BX;
      *(undefined1 *)(in_BX + 1) = extraout_DH;
      uVar1 = FUN_1000_5811();
      return uVar1;
    }
    FUN_1000_5a42();
  }
  return 0;
}

