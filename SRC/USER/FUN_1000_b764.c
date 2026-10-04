// Function: FUN_1000_b764

undefined2 FUN_1000_b764(int param_1,int param_2,undefined2 param_3)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined2 local_6;
  int local_4;
  
  local_4 = 0;
  local_6 = param_3;
  if (param_1 != 1) {
    local_6 = 0;
  }
  if (*(int *)0x3a == 0) {
    iVar1 = *(int *)0x64;
    if (((*(byte *)(iVar1 + 0x32) & 8) != 0) && ((*(byte *)(iVar1 + 0x33) & 0x40) == 0)) {
      local_4 = 1;
      local_6 = FUN_1000_b99d(1,1,iVar1);
    }
  }
  else if (*(int *)(*(int *)0x64 + 0x34) != 0) {
    local_6 = *(undefined2 *)(*(int *)0x64 + 0x34);
  }
  if ((param_1 == 1) && (param_2 != local_4)) {
    *(int *)0x3a = local_4;
    FUN_1000_b222(1,param_3,*(undefined2 *)0x64);
    func_0x000010a5(0x1000,param_3);
  }
  return local_6;
}

