// Function: FUN_1000_0b1f

undefined2 FUN_1000_0b1f(undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  iVar6 = (int)param_1;
  uVar5 = *(uint *)(iVar6 + 4);
  uVar2 = *(uint *)(iVar6 + 6);
  if (iVar6 == *(int *)0x8) {
    if ((DAT_1000_008e == '\0') && ((*(uint *)0xc & 0x80) != 0)) {
      uVar5 = uVar5 | 0x10;
    }
    uVar1 = uVar2 + *(uint *)0x12;
    if ((CARRY2(uVar2,*(uint *)0x12)) ||
       (uVar2 = uVar1 + *(uint *)0x10, CARRY2(uVar1,*(uint *)0x10))) {
      return 0;
    }
  }
  if ((uVar5 & 2) == 0) {
    uVar8 = FUN_1000_098a(0,uVar2,uVar5);
    iVar4 = (int)((ulong)uVar8 >> 0x10);
    iVar3 = (int)uVar8;
    if (iVar3 == 0) {
      return 0;
    }
    *(int *)(iVar6 + 8) = iVar4;
    *(byte *)(iVar6 + 4) = *(byte *)(iVar6 + 4) & 0xfb;
    *(byte *)(iVar6 + 4) = *(byte *)(iVar6 + 4) | 2;
    *(undefined2 *)0x1 = uVar7;
    if ((iVar3 != iVar4) && ((*(byte *)(iVar6 + 4) & 0x10) == 0)) {
      LOCKSEGMENT(iVar3);
    }
  }
  return *(undefined2 *)(iVar6 + 8);
}

