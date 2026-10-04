// Function: FUN_1000_b9d7

int FUN_1000_b9d7(int param_1)

{
  undefined2 unaff_DS;
  int local_4;
  
  local_4 = 0;
  if ((*(byte *)(param_1 + 0x33) & 0xc0) == 0x40) {
    local_4 = *(int *)&SUB_0000_03dc;
  }
  else if (((*(byte *)(param_1 + 0x32) & 8) != 0) &&
          (local_4 = *(int *)(param_1 + 0x12), local_4 == 0)) {
    local_4 = *(int *)0x420;
  }
  return local_4;
}

