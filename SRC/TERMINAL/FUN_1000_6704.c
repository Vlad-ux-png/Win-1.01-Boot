// Function: FUN_1000_6704

void FUN_1000_6704(uint param_1,uint param_2,undefined2 *param_3)

{
  undefined1 *puVar1;
  undefined2 *puVar2;
  undefined1 *puVar3;
  undefined2 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined2 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined2 *puVar11;
  undefined2 uVar12;
  
  uVar5 = (param_1 ^ (int)param_1 >> 0xf) - ((int)param_1 >> 0xf);
  if ((int)param_2 < (int)uVar5) {
    uVar5 = param_2;
  }
  uVar6 = param_2 - uVar5;
  uVar12 = (undefined2)((ulong)param_3 >> 0x10);
  puVar8 = (undefined2 *)param_3;
  if ((int)param_1 < 0) {
    puVar11 = (undefined2 *)((int)puVar8 + uVar5);
    uVar7 = uVar6 >> 1;
    if ((uVar6 & 1) != 0) {
      puVar8 = (undefined2 *)((int)puVar8 + 1);
      puVar2 = puVar11;
      puVar11 = (undefined2 *)((int)puVar11 + 1);
      *(undefined1 *)param_3 = *(undefined1 *)puVar2;
    }
    for (; uVar7 != 0; uVar7 = uVar7 - 1) {
      puVar4 = puVar8;
      puVar8 = puVar8 + 1;
      puVar2 = puVar11;
      puVar11 = puVar11 + 1;
      *puVar4 = *puVar2;
    }
    uVar6 = uVar5 >> 1;
    if ((uVar5 & 1) != 0) {
      puVar2 = puVar8;
      puVar8 = (undefined2 *)((int)puVar8 + 1);
      *(undefined1 *)puVar2 = 0x20;
    }
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      puVar2 = puVar8;
      puVar8 = puVar8 + 1;
      *puVar2 = 0x2020;
    }
  }
  else {
    puVar9 = (undefined1 *)((int)puVar8 + (param_2 - 1));
    puVar10 = puVar9 + -uVar5;
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      puVar3 = puVar9;
      puVar9 = puVar9 + -1;
      puVar1 = puVar10;
      puVar10 = puVar10 + -1;
      *puVar3 = *puVar1;
    }
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      puVar1 = puVar9;
      puVar9 = puVar9 + -1;
      *puVar1 = 0x20;
    }
  }
  return;
}

