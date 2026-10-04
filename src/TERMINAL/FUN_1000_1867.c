// Function: FUN_1000_1867

void FUN_1000_1867(int param_1,int *param_2)

{
  undefined2 *puVar1;
  undefined2 unaff_DS;
  
  puVar1 = (undefined2 *)*(undefined2 *)(param_1 + 2);
  param_2[1] = (int)puVar1;
  *param_2 = param_1;
  *(undefined2 *)(param_1 + 2) = param_2;
  *puVar1 = param_2;
  return;
}

