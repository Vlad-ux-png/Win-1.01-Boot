// Function: FUN_1000_1922

void FUN_1000_1922(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined2 unaff_DS;
  
  if (param_1 != 0) {
    if (*(int *)(param_3 + 0x10) == 0) {
      *(int *)(param_3 + 0xe) = param_2;
    }
    iVar1 = *(int *)(param_3 + 0xe) + *(int *)(param_3 + 0x10);
    param_1 = param_2 + param_1;
    if (*(int *)(param_3 + 0xe) <= param_2) {
      param_2 = *(int *)(param_3 + 0xe);
    }
    *(int *)(param_3 + 0xe) = param_2;
    if (param_1 < iVar1) {
      param_1 = iVar1;
    }
    *(int *)(param_3 + 0x10) = param_1 - *(int *)(param_3 + 0xe);
    if ((param_3 != *(int *)0x1a) && (*(int *)0x1a != 0)) {
      FUN_1000_1846(param_3);
      FUN_1000_1867(*(undefined2 *)0x1a,param_3);
    }
    *(int *)0x1a = param_3;
  }
  return;
}

