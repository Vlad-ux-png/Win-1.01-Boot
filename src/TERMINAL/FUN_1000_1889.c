// Function: FUN_1000_1889

void FUN_1000_1889(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  undefined2 unaff_DS;
  
  if (0 < param_3[8]) {
    iVar1 = param_3[7];
    param_1 = param_2 + param_1;
    if ((iVar1 < param_2) || (param_1 <= iVar1)) {
      if ((param_2 < param_3[8] + iVar1) && (param_3[8] + iVar1 <= param_1)) {
        param_3[8] = param_2 - param_3[7];
      }
    }
    else {
      param_1 = param_1 - iVar1;
      if (param_1 < param_3[8]) {
        param_3[7] = param_3[7] + param_1;
        param_3[8] = param_3[8] - param_1;
      }
      else {
        param_3[8] = 0;
        param_3[7] = 0;
      }
    }
  }
  if (param_3[8] < 1) {
    if ((param_3 == (int *)*(int *)0x1a) &&
       (piVar2 = (int *)*(int *)*(int *)0x1a, *(int *)0x1a = (int)piVar2, param_3 == piVar2)) {
      *(undefined2 *)0x1a = 0;
    }
    FUN_1000_1846(param_3);
  }
  return;
}

