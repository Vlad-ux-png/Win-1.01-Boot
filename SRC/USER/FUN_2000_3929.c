// Function: FUN_2000_3929

void FUN_2000_3929(undefined2 *param_1,undefined2 *param_2)

{
  undefined2 unaff_DS;
  
  if (param_2 != param_1) {
    FUN_2000_3929(param_1,*param_2);
    func_0x000008d4(0x1000,param_2);
  }
  return;
}

