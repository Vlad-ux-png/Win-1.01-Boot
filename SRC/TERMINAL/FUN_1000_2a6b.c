// Function: FUN_1000_2a6b

void FUN_1000_2a6b(int param_1,int param_2)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined1 local_c [2];
  int local_a;
  int local_6;
  int local_4;
  
  if (param_1 == 0) {
    return;
  }
  if (*(int *)0x162 != 0) {
    return;
  }
  local_4 = 1;
  iVar1 = func_0x00001f47(0x1000,param_2);
  if (iVar1 == 0) {
    if ((*(int *)0x28 == 0) || (iVar1 = func_0x00001a71(0,param_2), iVar1 == 0)) goto LAB_1000_2ae6;
    local_a = *(int *)0x3a;
    local_6 = local_a + 1;
  }
  else if ((*(int *)0x28 != 0) && (*(int *)0x42 <= *(int *)(param_2 + 6))) {
    local_6 = local_6 + 1;
  }
  local_4 = 0;
LAB_1000_2ae6:
  if (local_4 == 0) {
    FUN_1000_35d9(local_c);
    func_0x00001f97(0,*(undefined2 *)0x1530);
    func_0x0000ffff(0,local_c);
    func_0x0000ffff(0,*(undefined2 *)0x1530);
  }
  return;
}

