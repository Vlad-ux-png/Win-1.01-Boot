// Function: FUN_1000_f85d

void FUN_1000_f85d(undefined2 param_1,undefined2 param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 unaff_DS;
  int iVar7;
  int iVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  int local_1e;
  int local_1c;
  int local_18;
  undefined2 *local_16;
  undefined2 *local_12;
  int local_10;
  int local_e;
  int local_c;
  
  local_c = *(int *)0x638 - *(int *)0x5ea >> 1;
  if (0 < local_c) {
    uVar1 = FUN_1000_fcf2(1,param_1,param_2);
    if (*(int *)(*(int *)0x5b8 + 8) < local_c) {
      local_c = *(int *)(*(int *)0x5b8 + 8);
    }
    puVar5 = (undefined2 *)0x4fa;
    puVar6 = (undefined2 *)0x4fc;
    if (*(int *)0x3a4 == 0) {
      puVar6 = (undefined2 *)0x4fa;
      puVar5 = (undefined2 *)0x4fc;
    }
    *puVar5 = *(undefined2 *)0x3d0;
    *puVar6 = *(undefined2 *)0x5ea;
    puVar5[2] = *(undefined2 *)&SUB_0000_0616;
    puVar6[2] = *(undefined2 *)0x638;
    if (*(int *)0x3a4 == 0) {
      local_12 = (undefined2 *)0x442;
      local_16 = (undefined2 *)0x43c;
      local_18 = *(int *)0x444;
      iVar2 = *(int *)0x500 - *(int *)0x4fc;
      local_e = local_c + *(int *)0x4fa;
      local_10 = *(int *)0x4fc + *(int *)0x480;
      local_1e = *(int *)0x47e;
      local_1c = iVar2;
    }
    else {
      local_12 = (undefined2 *)0x430;
      local_16 = (undefined2 *)0x436;
      local_1e = *(int *)0x4fe - *(int *)0x4fa;
      local_e = *(int *)0x4fa + *(int *)0x47e;
      local_10 = local_c + *(int *)0x4fc;
      iVar2 = *(int *)0x480;
      local_1c = *(int *)0x434;
      local_18 = local_1e;
    }
    uVar3 = func_0x000007e7(0x1000,*local_12,*(undefined2 *)0x3b2);
    uVar4 = func_0x0000086e(0,*(undefined2 *)0x3c8,param_1);
    if (*(int *)0x3a4 == 0) {
      uVar11 = *(undefined2 *)0x4fa;
      uVar10 = *(undefined2 *)0x4fc;
      uVar9 = *(undefined2 *)0x3b2;
      iVar7 = local_12[2];
      iVar8 = local_c;
      local_18 = local_c;
    }
    else {
      uVar11 = *(undefined2 *)0x4fa;
      uVar10 = *(undefined2 *)0x4fc;
      uVar9 = *(undefined2 *)0x3b2;
      iVar7 = local_c;
      iVar8 = local_12[1];
      local_1c = local_c;
    }
    func_0x000008b8(0,0x20,0xcc,iVar7,iVar8,0,0,uVar9,local_1c,local_18,uVar10,uVar11,param_1);
    func_0x00000934(0,0x21,0xf0,iVar2,local_1e,local_10,local_e,param_1);
    func_0x00000940(0,*local_16,*(undefined2 *)0x3b2);
    if (*(int *)0x3a4 == 0) {
      iVar7 = *(int *)0x638;
      func_0x0000ffff(0,0x20,0xcc,local_16[2],local_c,0,local_16[1] - local_c,*(undefined2 *)0x3b2,
                      *(int *)0x500 - *(int *)0x4fc,local_c,*(undefined2 *)0x3d0,iVar7 - local_c,
                      param_1);
      local_e = (iVar7 - local_c) - *(int *)0x47e;
      local_1e = *(int *)0x47e;
    }
    else {
      iVar2 = *(int *)0x638;
      func_0x00000912(0,0x20,0xcc,local_c,local_16[1],local_16[2] - local_c,0,*(undefined2 *)0x3b2,
                      local_c,*(int *)0x4fe - *(int *)0x4fa,iVar2 - local_c,*(undefined2 *)0x3d0,
                      param_1);
      local_10 = (iVar2 - local_c) - *(int *)0x480;
      iVar2 = *(int *)0x480;
    }
    func_0x0000ffff(0,0x21,0xf0,iVar2,local_1e,local_10,local_e,param_1);
    func_0x0000094b(0,uVar3,*(undefined2 *)0x3b2);
    func_0x0000ffff(0,uVar4,param_1);
    FUN_1000_fafb(param_1);
    func_0x000009a2(0,0,0x4fa);
    FUN_1000_fb6d(uVar1,param_1,param_2);
    FUN_1000_fafb(param_1);
    FUN_1000_fcf2(0,param_1,param_2);
  }
  return;
}

