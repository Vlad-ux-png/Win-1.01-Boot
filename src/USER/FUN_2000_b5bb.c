// Function: FUN_2000_b5bb

int FUN_2000_b5bb(undefined2 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined1 local_e [6];
  int local_8;
  int local_4;
  
  func_0x000017d1(0x1000,local_e);
  if (param_2 < 0) {
    iVar1 = *(int *)(param_3 + 6);
  }
  else {
    local_4 = param_2;
    if (local_8 < param_2) {
      local_4 = local_8;
    }
    iVar1 = func_0x000011f8(0,(*(int *)(param_3 + 0x10) - *(int *)(param_3 + 6)) + -1,
                            local_4 / *(int *)(param_3 + 0x24));
    iVar1 = iVar1 + *(int *)(param_3 + 6);
  }
  return iVar1;
}

