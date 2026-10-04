// Function: FUN_2000_b042

void FUN_2000_b042(int param_1,int param_2)

{
  int iVar1;
  undefined2 unaff_DS;
  
  if (*(int *)(param_2 + 6) <= param_1) {
    iVar1 = FUN_2000_b56b(param_2);
    if (param_1 <= iVar1) {
      return;
    }
    param_1 = func_0x000011f2(0x1000,(param_1 - *(int *)(param_2 + 0xe)) + 1,0,param_2);
  }
  FUN_2000_b07a(param_1,param_2);
  return;
}

