// Function: FUN_2000_3908

void FUN_2000_3908(undefined2 *param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  uVar1 = 0x1000;
  for (; param_2 != param_1; param_2 = (undefined2 *)*param_2) {
    func_0x00002010(uVar1,param_2);
    uVar1 = 0;
  }
  return;
}

