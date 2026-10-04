// Function: FUN_2000_7225

void __stdcall16far
FUN_2000_7225(undefined2 param_1,undefined2 param_2,undefined2 param_3,int param_4)

{
  int iVar1;
  undefined2 unaff_DS;
  
  iVar1 = FUN_2000_6cde(*(undefined2 *)(param_4 + 0x12),param_4);
  iVar1 = *(int *)(param_4 + 0x12) - *(int *)(iVar1 * 2 + *(int *)(param_4 + 0x38));
  if (*(int *)(param_4 + 0x26) < iVar1) {
    *(int *)(param_4 + 0x26) = iVar1;
  }
  func_0x0000ffff(0x1000,0,param_1,param_2,param_3,param_4);
  return;
}

