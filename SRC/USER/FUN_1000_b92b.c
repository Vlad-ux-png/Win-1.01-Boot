// Function: FUN_1000_b92b

int FUN_1000_b92b(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined2 unaff_DS;
  
  iVar1 = param_2;
  if (param_2 < 0) {
    if (param_1 < 1) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(param_3 + 10) + -1;
    }
  }
  do {
    param_2 = param_2 + param_1;
    if (param_2 < *(int *)(param_3 + 10)) {
      if (param_2 < 0) {
        param_2 = *(int *)(param_3 + 10) + -1;
      }
    }
    else {
      param_2 = 0;
    }
  } while ((param_2 != iVar1) && (*(int *)(param_2 * 0x10 + param_3 + 0x1a) == 0));
  return param_2;
}

