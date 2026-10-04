// Function: FUN_1000_3e12

undefined2 __stdcall16far FUN_1000_3e12(undefined2 *param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  undefined1 extraout_AH;
  undefined1 uVar5;
  uint uVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined2 uVar9;
  undefined2 unaff_DS;
  
  uVar9 = (undefined2)((ulong)param_1 >> 0x10);
  puVar8 = (undefined2 *)param_1;
  uVar2 = 0;
  iVar4 = puVar8[1];
  if ((((iVar4 == 0x100) || (iVar4 == 0x101)) || (iVar4 == 0x104)) || (iVar4 == 0x105)) {
    uVar2 = *param_1;
    uVar3 = FUN_1000_414e(*(undefined2 *)0x416);
    uVar3 = uVar3 & 0x10 | *(uint *)0x32;
    iVar4 = func_0x0000ffff(0x1000,uVar3);
    uVar5 = 0;
    if (iVar4 != 0) {
      uVar6 = 0x102;
      if (iVar4 < 0) {
        iVar4 = -iVar4;
        uVar6 = 0x103;
      }
      uVar3 = uVar3 & 4;
      if ((iVar4 != 0) && ((puVar8[1] & 0xfffb) != 0x100)) {
        uVar3 = 0;
      }
      puVar7 = (undefined2 *)*(undefined2 *)0x416;
      do {
        uVar1 = *puVar7;
        *puVar7 = 0;
        FUN_1000_3c0a(puVar8[3],puVar8[4],uVar1,uVar6 | uVar3,uVar2);
        puVar7 = puVar7 + 1;
        iVar4 = iVar4 + -1;
        uVar5 = extraout_AH;
      } while (iVar4 != 0);
    }
    uVar2 = CONCAT11(uVar5,1);
  }
  return uVar2;
}

