// Function: FUN_1000_e4d3

void FUN_1000_e4d3(int param_1,uint param_2,undefined4 param_3,uint *param_4)

{
  uint *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  undefined1 *puVar9;
  
  puVar8 = (uint *)param_4;
  uVar3 = param_2 >> 1 & 1;
  puVar9 = (undefined1 *)((int)param_3 - uVar3);
  while (iVar7 = param_1 + -1, 0 < param_1) {
    puVar9 = puVar9 + uVar3;
    uVar5 = param_2 >> 1;
    do {
      puVar1 = puVar8;
      puVar8 = puVar8 + 1;
      uVar6 = *puVar1 & *puVar1 << 1;
      iVar4 = (uVar6 & 0xff) << 1;
      iVar4 = CONCAT11((char)((uint)iVar4 >> 8),(char)iVar4 << 1) << 1;
      iVar4 = CONCAT11((char)((uint)iVar4 >> 8),(char)iVar4 << 1) << 1;
      iVar4 = CONCAT11((char)((uint)(CONCAT11((char)((uint)iVar4 >> 8),(char)iVar4 << 1) << 1) >> 8)
                       ,(char)(uVar6 >> 8)) << 1;
      iVar4 = CONCAT11((char)((uint)iVar4 >> 8),(char)iVar4 << 1) << 1;
      iVar4 = CONCAT11((char)((uint)iVar4 >> 8),(char)iVar4 << 1) << 1;
      puVar2 = puVar9;
      puVar9 = puVar9 + 1;
      *puVar2 = (char)((uint)(CONCAT11((char)((uint)iVar4 >> 8),(char)iVar4 << 1) << 1) >> 8);
      uVar5 = uVar5 - 1;
      param_1 = iVar7;
    } while (uVar5 != 0);
  }
  return;
}

