// Function: FUN_1000_f1b8

void FUN_1000_f1b8(int param_1,int param_2)

{
  int iVar1;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int local_c;
  int local_a;
  int local_8;
  int local_6;
  undefined2 *local_4;
  
  local_4 = (undefined2 *)*(int *)(param_2 + 10);
  if (param_1 != 0) {
    local_4 = local_4 + 3;
  }
  func_0x0000ffff(0x1000,&local_c);
  func_0x000002c9(0,-*(int *)(param_2 + 0x20),-*(int *)(param_2 + 0x1e),&local_c);
  if (param_1 == 0) {
    local_a = local_6 - *(int *)0x440;
    if ((*(byte *)(param_2 + 0x32) & 0x20) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)0x432 - *(int *)0x47e;
    }
    local_8 = local_8 - iVar1;
  }
  else {
    iVar1 = *(int *)(param_2 + 0x28) - *(int *)(param_2 + 0x20);
    if (iVar1 != 0) {
      local_a = local_a + (iVar1 - *(int *)0x480);
    }
    if ((*(byte *)(param_2 + 0x32) & 0x10) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)0x440 - *(int *)0x480;
    }
    local_6 = local_6 - iVar1;
    local_c = local_8 - *(int *)0x432;
  }
  FUN_1000_f269(param_1,local_4[2],local_4[1],*local_4,&local_c,unaff_SS);
  return;
}

