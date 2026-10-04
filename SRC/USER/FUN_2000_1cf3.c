// Function: FUN_2000_1cf3

void FUN_2000_1cf3(undefined2 param_1,undefined2 param_2,int param_3,undefined2 *param_4,int param_5
                  )

{
  undefined2 unaff_DS;
  
  if (param_3 == 0) {
    param_3 = *(int *)(param_5 + 0xc);
  }
  if (param_3 == 1) {
    param_3 = func_0x0000040f(0x1000,param_4,param_5);
  }
  FUN_2000_1d61(param_1,param_2,*param_4,param_3,param_5);
  return;
}

