// Function: FUN_1000_1846

void FUN_1000_1846(int *param_1)

{
  int *piVar1;
  undefined2 unaff_DS;
  
  piVar1 = (int *)param_1[1];
  *(undefined2 *)(*param_1 + 2) = piVar1;
  *piVar1 = *param_1;
  *param_1 = (int)param_1;
  param_1[1] = (int)param_1;
  return;
}

