// Function: FUN_2000_0923

void FUN_2000_0923(int param_1)

{
  undefined2 unaff_DS;
  
  func_0x0000ffff(0x1000,param_1);
  *(undefined2 *)(param_1 + 0x2a) = *(undefined2 *)(param_1 + 0x26);
  *(undefined2 *)(param_1 + 0x2c) = *(undefined2 *)(param_1 + 0x28);
  func_0x0000ffff(0,0,param_1);
  return;
}

