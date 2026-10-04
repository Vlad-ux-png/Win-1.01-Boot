// Function: FUN_2000_af8f

int FUN_2000_af8f(undefined2 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined2 unaff_DS;
  
  iVar1 = func_0x0000014a(0x1000,param_1,param_2,param_3 + 0x14);
  if ((iVar1 != 0) &&
     (param_2 = param_2 / *(int *)(param_3 + 0x24),
     param_2 < *(int *)(param_3 + 0x10) - *(int *)(param_3 + 6))) {
    return param_2 + *(int *)(param_3 + 6);
  }
  return -1;
}

