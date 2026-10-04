// Function: FUN_1000_60eb

uint __cdecl16near FUN_1000_60eb(void)

{
  uint in_AX;
  uint uVar1;
  int iVar2;
  undefined2 in_CX;
  undefined2 *in_BX;
  undefined2 *puVar3;
  undefined2 *unaff_DS;
  long lVar4;
  
  uVar1 = in_AX & 0xff;
  puVar3 = in_BX;
  if (((uint)in_BX & 1) == 0) {
    puVar3 = (undefined2 *)*in_BX;
  }
  if (uVar1 == 1) {
    FUN_1000_63e4(in_CX,puVar3);
    FUN_1000_2d31(in_CX,puVar3);
    uVar1 = FUN_1000_173e(in_CX,puVar3);
    if (unaff_DS != puVar3) {
      return uVar1;
    }
    DAT_1000_0002 = in_CX;
    return uVar1;
  }
  if (uVar1 != 2) {
    return uVar1;
  }
  lVar4 = FUN_1000_2e43(*in_BX);
  if (lVar4 == 0) {
    if ((DAT_1000_0006 == 0) || (iVar2 = (*(code *)*(undefined2 *)0x4)(0x1000,in_BX[1]), iVar2 == 0)
       ) {
      if ((*(byte *)(in_BX + 1) & 1) == 0) {
        return 0;
      }
    }
    else {
      *(byte *)(in_BX + 1) = *(byte *)(in_BX + 1) | 0x80;
    }
    FUN_1000_63e4(0,puVar3);
    FUN_1000_173e(0,puVar3);
    return 1;
  }
  return 0;
}

