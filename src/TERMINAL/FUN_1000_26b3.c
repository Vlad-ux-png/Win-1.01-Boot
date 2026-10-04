// Function: FUN_1000_26b3

void FUN_1000_26b3(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                  undefined2 param_5)

{
  int *piVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  int iVar5;
  int iVar6;
  undefined2 uVar7;
  int iVar8;
  undefined2 uVar9;
  undefined1 local_22 [4];
  undefined1 local_1e [4];
  undefined1 local_1a [4];
  undefined1 local_16 [4];
  int local_12;
  int local_10;
  int local_e;
  int local_c;
  undefined1 local_a [8];
  
  func_0x0000ffff(0x1000,0x50,0x19,0,0,local_a);
  if (*(int *)0x16 != 0) {
    FUN_1000_1ca6(param_5);
  }
  piVar1 = (int *)FUN_1000_250b(local_16,param_1,param_2,param_3,param_4);
  local_12 = *piVar1;
  local_10 = piVar1[1];
  piVar1 = (int *)FUN_1000_24c7(local_1a,param_1,param_2,param_3,param_4);
  local_e = *piVar1;
  local_c = piVar1[1];
  FUN_1000_250b(local_1e,*(undefined2 *)0x1c,*(undefined2 *)0x1e,local_e,local_c);
  FUN_1000_24c7(local_22,*(undefined2 *)0x20,*(undefined2 *)0x22,local_12,local_10);
  iVar2 = FUN_1000_2494(local_e,local_c,*(undefined2 *)0x1c,*(undefined2 *)0x1e);
  if (iVar2 == 0) {
    iVar2 = FUN_1000_2494(*(undefined2 *)0x20,*(undefined2 *)0x22,local_12,local_10);
    if (iVar2 == 0) {
      uVar9 = param_5;
      puVar3 = (undefined2 *)
               FUN_1000_250b(local_1a,*(undefined2 *)0x1c,*(undefined2 *)0x1e,local_12,local_10);
      uVar4 = puVar3[1];
      uVar7 = *puVar3;
      puVar3 = (undefined2 *)
               FUN_1000_24c7(local_16,*(undefined2 *)0x1c,*(undefined2 *)0x1e,local_12,local_10);
      FUN_1000_254f(local_a,*puVar3,puVar3[1],uVar7,uVar4,uVar9);
      piVar1 = (int *)FUN_1000_250b(local_22,*(undefined2 *)0x20,*(undefined2 *)0x22,local_e,local_c
                                   );
      iVar2 = piVar1[1];
      iVar8 = *piVar1;
      piVar1 = (int *)FUN_1000_24c7(local_1e,*(undefined2 *)0x20,*(undefined2 *)0x22,local_e,local_c
                                   );
      iVar6 = piVar1[1];
      iVar5 = *piVar1;
      goto LAB_1000_282e;
    }
  }
  FUN_1000_254f(local_a,*(undefined2 *)0x20,*(undefined2 *)0x22,*(undefined2 *)0x1c,
                *(undefined2 *)0x1e,param_5);
  iVar5 = local_e;
  iVar6 = local_c;
  iVar8 = local_12;
  iVar2 = local_10;
LAB_1000_282e:
  FUN_1000_254f(local_a,iVar5,iVar6,iVar8,iVar2,param_5);
  *(int *)0x1c = local_12;
  *(int *)0x1e = local_10;
  *(int *)0x20 = local_e;
  *(int *)0x22 = local_c;
  if ((local_12 == local_e) && (local_10 == local_c)) {
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  *(undefined2 *)0x24 = uVar4;
  return;
}

