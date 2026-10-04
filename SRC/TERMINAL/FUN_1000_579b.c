// Function: FUN_1000_579b

void FUN_1000_579b(undefined2 param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  int local_8;
  int local_6;
  int local_4;
  
  if ((*(int *)0x422 != 0) && (*(int *)0x43a == 0)) {
    *(undefined2 *)0x43a = 1;
    local_6 = (*(int *)0x34 - *(int *)0x38) + 0x4f;
    if (local_6 < 0) {
      local_6 = 0;
    }
    iVar1 = func_0x00004cf9(0x1000,0,param_1);
    if (local_6 < iVar1) {
      FUN_1000_563d(param_1,4,local_6);
    }
    func_0x00004cc9(0,&local_4);
    if ((local_8 != 0) || (local_4 != local_6)) {
      func_0x00004ced(0,1,local_6,0,0,param_1);
    }
    local_6 = (*(int *)0x432 - *(int *)0x3a) + *(int *)0x36 + -1;
    if (local_6 < 0) {
      local_6 = 0;
    }
    func_0x0000ffff(0,&local_4);
    if ((local_8 != 0) || (local_4 != local_6)) {
      func_0x0000ffff(0,1,local_6,0,1,param_1);
    }
    iVar1 = func_0x0000ffff(0,1,param_1);
    if (*(int *)0x36 + *(int *)0x430 != iVar1) {
      func_0x00004df1(0,1,*(int *)0x36 + *(int *)0x430,1,param_1);
    }
    *(undefined2 *)0x43a = 0;
  }
  return;
}

