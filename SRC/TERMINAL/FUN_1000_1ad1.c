// Function: FUN_1000_1ad1

int FUN_1000_1ad1(int param_1,undefined1 *param_2,int *param_3)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined2 uVar7;
  int local_6;
  
  iVar6 = 0;
  uVar7 = (undefined2)((ulong)param_3 >> 0x10);
  piVar5 = (int *)param_3;
  iVar1 = *param_3;
  iVar3 = piVar5[2] - iVar1;
  local_6 = piVar5[1];
  while( true ) {
    if (piVar5[3] <= local_6) {
      return iVar6;
    }
    iVar4 = param_1;
    if (iVar3 < param_1) {
      iVar4 = iVar3;
    }
    iVar4 = FUN_1000_19a1(iVar4,(undefined1 *)param_2,param_2._2_2_,iVar1,local_6);
    iVar6 = iVar6 + iVar4;
    param_2._0_2_ = (undefined1 *)param_2 + iVar4;
    puVar2 = param_2;
    param_1 = param_1 - iVar4;
    if (0 < param_1) {
      param_2 = (undefined1 *)CONCAT22(param_2._2_2_,(undefined1 *)param_2 + 1);
      *puVar2 = 10;
      param_1 = param_1 + -1;
      iVar6 = iVar6 + 1;
    }
    if (param_1 < 1) break;
    local_6 = local_6 + 1;
  }
  return iVar6;
}

