// Function: FUN_1000_1b5a

void FUN_1000_1b5a(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  if (0 < *(int *)(param_4 + 0xc)) {
    iVar1 = *(int *)(param_4 + 10);
    iVar2 = param_3 + param_2;
    iVar3 = *(int *)(param_4 + 0xc) + iVar1;
    if ((iVar1 < param_3) || (iVar2 <= iVar1)) {
      if ((param_3 < iVar3) && (iVar3 <= iVar2)) {
        param_2 = iVar3 - param_3;
        *(int *)(param_4 + 0xc) = param_3 - *(int *)(param_4 + 10);
      }
      else if ((iVar2 < *(int *)(param_4 + 10)) || (iVar3 <= param_3)) {
        param_2 = 0;
      }
    }
    else {
      param_2 = iVar2 - iVar1;
      param_3 = iVar1;
      if (param_2 < *(int *)(param_4 + 0xc)) {
        *(int *)(param_4 + 10) = *(int *)(param_4 + 10) + param_2;
        *(int *)(param_4 + 0xc) = *(int *)(param_4 + 0xc) - param_2;
      }
      else {
        param_2 = *(int *)(param_4 + 0xc);
        *(undefined2 *)(param_4 + 0xc) = 0;
        *(undefined2 *)(param_4 + 10) = 0;
      }
    }
    if (0 < param_2) {
      if (param_1 != 0) {
        FUN_1000_1922(param_2,param_3,param_4);
      }
      FUN_1000_66e8(param_2,param_3 + param_4 + 0x12,unaff_DS);
    }
  }
  return;
}

