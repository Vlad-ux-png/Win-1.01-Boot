// Function: FUN_1000_e536

void FUN_1000_e536(uint param_1,uint param_2,uint param_3,uint *param_4,uint *param_5)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  uint local_8;
  uint local_4;
  
  uVar11 = (undefined2)((ulong)param_5 >> 0x10);
  puVar7 = (uint *)param_5;
  uVar10 = (undefined2)((ulong)param_4 >> 0x10);
  puVar9 = (uint *)param_4;
  if ((int)param_1 < 2) {
    for (uVar5 = param_2 * param_3 >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
      puVar2 = puVar9;
      puVar9 = puVar9 + 1;
      puVar1 = puVar7;
      puVar7 = puVar7 + 1;
      *puVar2 = *puVar1;
    }
  }
  else {
    iVar3 = (param_1 - 1) * param_3;
    puVar7 = (uint *)((int)puVar7 + (-2 - iVar3));
    local_4 = param_2 / param_1;
    while( true ) {
      uVar5 = local_4 - 1;
      if ((int)local_4 < 1) break;
      puVar7 = (uint *)((int)puVar7 + iVar3);
      local_8 = param_3 >> 1;
      while( true ) {
        local_4 = uVar5;
        if ((int)local_8 < 1) break;
        puVar7 = puVar7 + 1;
        uVar4 = *puVar7;
        iVar6 = param_1 - 1;
        puVar8 = puVar7;
        do {
          puVar8 = (uint *)((int)puVar8 + param_3);
          uVar4 = uVar4 & *puVar8;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        puVar1 = puVar9;
        puVar9 = puVar9 + 1;
        *puVar1 = uVar4;
        local_8 = local_8 - 1;
      }
    }
  }
  return;
}

