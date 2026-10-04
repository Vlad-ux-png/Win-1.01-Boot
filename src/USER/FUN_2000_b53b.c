// Function: FUN_2000_b53b

int FUN_2000_b53b(int param_1,int param_2,int param_3)

{
  undefined2 unaff_DS;
  
  param_2 = param_2 + param_1;
  if (param_2 < 0) {
    param_2 = 0;
  }
  else if (*(int *)(param_3 + 0x10) <= param_2) {
    param_2 = *(int *)(param_3 + 0x10) + -1;
  }
  return param_2;
}

