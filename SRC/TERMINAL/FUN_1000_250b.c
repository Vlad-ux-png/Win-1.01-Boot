// Function: FUN_1000_250b

int * FUN_1000_250b(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined2 unaff_DS;
  
  if ((param_5 < param_3) || ((param_5 == param_3 && (param_4 < param_2)))) {
    param_2 = param_4;
    param_3 = param_5;
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  return param_1;
}

