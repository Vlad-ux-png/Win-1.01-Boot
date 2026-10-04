// Function: FUN_1000_b99d

int FUN_1000_b99d(int param_1,int param_2,int param_3)

{
  undefined2 unaff_DS;
  undefined2 local_4;
  
  local_4 = *(int *)(param_3 + 0x34);
  if (((local_4 == 0) || ((*(byte *)(param_3 + 0x33) & 0xc0) == 0x40)) ||
     ((param_1 != 0 && (param_2 != 0)))) {
    local_4 = FUN_1000_b9d7(param_3);
  }
  return local_4;
}

