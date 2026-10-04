// Function: FUN_1000_2961

void FUN_1000_2961(undefined2 param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined1 local_a [2];
  int local_8;
  int local_4;
  
  iVar1 = func_0x00001e22(0x1000,param_1);
  if (iVar1 != 0) {
    FUN_1000_35d9(local_a);
    func_0x00001e44(0,local_a);
  }
  if (*(int *)0x28 != 0) {
    iVar1 = func_0x00001e6c(0,param_1);
    if (iVar1 != 0) {
      local_8 = *(int *)0x3a;
      local_4 = local_8 + 1;
      FUN_1000_35d9(local_a);
      func_0x0000ffff(0,local_a);
    }
  }
  return;
}

