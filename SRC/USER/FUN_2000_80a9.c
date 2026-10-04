// Function: FUN_2000_80a9

int FUN_2000_80a9(int param_1,int param_2)

{
  int *piVar1;
  undefined2 unaff_DS;
  
  if ((param_1 != 0) &&
     (piVar1 = (int *)(param_1 * 2 + *(int *)(param_2 + 0x38)),
     *(int *)(param_2 + 0x10) - *piVar1 <= (*(int *)(param_2 + 0x28) + piVar1[-1]) - *piVar1)) {
    param_1 = param_1 + -1;
  }
  return param_1;
}

