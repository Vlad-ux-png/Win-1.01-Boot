// Function: FUN_1000_b293

undefined2 FUN_1000_b293(int param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_DS;
  undefined2 local_6;
  
  local_6 = 0;
  iVar2 = func_0x00000c68(0x1000,param_2);
  iVar1 = *(int *)(iVar2 + 2);
  if (-1 < iVar1) {
    local_6 = *(undefined2 *)(iVar1 * 0x10 + iVar2 + 0xe);
  }
  if (param_1 != 0) {
    FUN_1000_bc31(0,iVar1,param_2,param_3);
  }
  *(undefined2 *)(iVar2 + 2) = 0xffff;
  func_0x00000d47(0,param_2);
  return local_6;
}

