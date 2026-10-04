// Function: FUN_2000_a705

int FUN_2000_a705(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined2 unaff_DS;
  int local_1a;
  int local_18;
  int local_12;
  int local_10;
  int local_e;
  int local_8;
  int local_6;
  int local_4;
  
  local_4 = 0;
  local_6 = 0;
  local_12 = 0;
  local_8 = 0;
  iVar1 = param_1 / *(int *)(param_3 + 0x24);
  if (param_1 % *(int *)(param_3 + 0x24) != 0) {
    if ((*(byte *)(*(int *)(param_3 + 2) + 0x32) & 0x80) != 0) {
      local_4 = *(int *)0x198;
      local_6 = *(int *)0x19a;
    }
    if ((*(byte *)(*(int *)(param_3 + 2) + 0x32) & 0xc0) == 0xc0) {
      local_8 = *(int *)0x196 - local_6;
    }
    if ((*(byte *)(*(int *)(param_3 + 2) + 0x32) & 0x20) != 0) {
      local_12 = *(int *)0x192 - local_4;
    }
    func_0x000008fa(0x1000,&local_10);
    func_0x00000906(0,&local_10);
    if ((*(byte *)(*(int *)(param_3 + 2) + 0x33) & 0x40) != 0) {
      func_0x0000013d(0,&local_1a);
      func_0x0000ffff(0,&local_1a);
      local_10 = local_10 - local_1a;
      local_e = local_e - local_18;
    }
    iVar1 = func_0x0000021a(0,1,(param_1 / *(int *)(param_3 + 0x24)) * *(int *)(param_3 + 0x24) +
                                local_6 * 2 + local_8,local_4 * 2 + param_2 + local_12,
                            (local_e - local_6) - local_8,local_10 - local_4,
                            *(undefined2 *)(param_3 + 2));
  }
  return iVar1;
}

