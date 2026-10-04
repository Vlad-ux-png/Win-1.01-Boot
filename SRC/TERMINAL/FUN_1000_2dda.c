// Function: FUN_1000_2dda

void FUN_1000_2dda(int param_1,int param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  int local_c;
  int local_a;
  int local_8;
  int local_6;
  int local_4;
  
  uVar2 = 0x1000;
  local_c = *(int *)0x34;
  local_a = *(int *)0x36;
  local_8 = *(int *)0x38;
  local_6 = *(int *)0x3a;
  *(int *)0x32 = param_1;
  *(int *)0x30 = param_2;
  *(int *)0x38 = param_2 + *(int *)0x34;
  if ((*(int *)0x28 == 0) || (param_1 < 1)) {
    *(undefined2 *)0x3e = 0x19;
    *(undefined2 *)0x42 = 0x19;
    *(undefined2 *)0x3c = *(undefined2 *)0x34;
    *(undefined2 *)0x40 = *(undefined2 *)0x38;
    *(undefined2 *)0x28 = 0;
  }
  else {
    param_1 = param_1 + -1;
    *(undefined2 *)0x3e = 0x18;
    *(undefined2 *)0x42 = 0x19;
    *(undefined2 *)0x3c = *(undefined2 *)0x34;
    *(undefined2 *)0x40 = *(undefined2 *)0x38;
  }
  if (0x18 < param_1) {
    param_1 = 0x18;
  }
  iVar1 = *(int *)0x36;
  *(int *)0x3a = param_1 + iVar1;
  if (0x18 < param_1 + iVar1) {
    *(undefined2 *)0x3a = 0x18;
    *(int *)0x36 = 0x18 - param_1;
  }
  local_4 = *(int *)0x36 - local_a;
  if (local_4 < 0) {
    local_a = *(int *)0x36;
    uVar2 = 0;
    func_0x00001d4d(0x1000,0,0,0,0,-local_4 * *(int *)0xea6,0,*(undefined2 *)0x1530);
  }
  if (local_6 < *(int *)0x3a) {
    if (*(int *)0x28 == 0) {
      return;
    }
    local_a = (local_6 - local_a) * *(int *)0xea6;
    local_6 = local_a + *(int *)0xea6;
    local_8 = (local_8 - local_c) * *(int *)0xea6;
  }
  else {
    if (local_6 <= *(int *)0x3a) {
      return;
    }
    if (*(int *)0x28 == 0) {
      return;
    }
    local_a = (*(int *)0x3a - *(int *)0x36) * *(int *)0xea6;
    local_6 = local_a + *(int *)0xea6;
    local_8 = (*(int *)0x38 - *(int *)0x34) * *(int *)0xea6;
  }
  local_c = 0;
  func_0x000020b6(uVar2,1,&local_c);
  return;
}

