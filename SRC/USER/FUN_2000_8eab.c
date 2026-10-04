// Function: FUN_2000_8eab

long FUN_2000_8eab(int param_1,int param_2,int param_3)

{
  long lVar1;
  undefined2 unaff_DS;
  
  if (param_1 == 0x114) {
    *(int *)(param_3 + 0x2a) = *(int *)(param_3 + 0x2a) + param_2;
    if (*(int *)(param_3 + 0x2a) < 0) {
      param_2 = param_2 - *(int *)(param_3 + 0x2a);
      *(undefined2 *)(param_3 + 0x2a) = 0;
    }
    lVar1 = (long)-param_2 * (long)*(int *)(param_3 + 0x1e);
  }
  else {
    *(int *)(param_3 + 0x24) = *(int *)(param_3 + 0x24) + param_2;
    if (*(int *)(param_3 + 0x24) < 0) {
      param_2 = param_2 - *(int *)(param_3 + 0x24);
      *(undefined2 *)(param_3 + 0x24) = 0;
    }
    lVar1 = (long)-param_2 * (long)*(int *)(param_3 + 0xe);
  }
  return lVar1;
}

