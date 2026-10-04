// Function: FUN_2000_6d5e

bool FUN_2000_6d5e(int *param_1,uint param_2,uint param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined2 unaff_DS;
  
  iVar1 = FUN_2000_6ee7(param_4,param_5);
  uVar3 = *(int *)(param_4 * 2 + *(int *)(param_5 + 0x38)) + iVar1;
  uVar2 = *(uint *)(param_4 * 2 + *(int *)(param_5 + 0x38));
  if (uVar2 < param_3) {
    uVar2 = param_3;
  }
  if (uVar3 <= param_2) {
    param_2 = uVar3;
  }
  if (uVar2 < param_2) {
    FUN_2000_6c6b((int *)param_1,param_1._2_2_,uVar2,param_5);
    ((int *)param_1)[3] = ((int *)param_1)[1] + *(int *)(param_5 + 0xe);
    ((int *)param_1)[2] = (param_2 - uVar2) * *(int *)(param_5 + 0x1e) + *param_1;
  }
  return uVar2 < param_2;
}

