// Function: FUN_2000_6ee7

int FUN_2000_6ee7(int param_1,undefined2 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined2 unaff_DS;
  int local_4;
  
  piVar5 = (int *)(param_1 * 2 + param_2[0x1c]);
  iVar1 = piVar5[1] - *piVar5;
  iVar2 = func_0x0000059f(0x1000,*param_2);
  iVar4 = piVar5[1];
  iVar3 = FUN_2000_79c7(iVar2 + iVar4 + -2);
  local_4 = iVar1;
  if (iVar3 != 0) {
    local_4 = iVar1 + -2;
    iVar4 = FUN_2000_79c7(iVar2 + iVar4 + -3);
    if (iVar4 != 0) {
      local_4 = iVar1 + -3;
    }
  }
  func_0x00000653(0,*param_2);
  if (param_2[0x10] + -1 <= param_1) {
    local_4 = local_4 + -1;
  }
  if (local_4 < 0) {
    local_4 = 0;
  }
  return local_4;
}

