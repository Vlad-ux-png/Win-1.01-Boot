// Function: FUN_2000_1c76

void FUN_2000_1c76(int param_1,int param_2,int param_3,undefined2 param_4)

{
  undefined2 unaff_DS;
  int local_6;
  int local_4;
  
  local_4 = FUN_2000_2bae(param_3);
  local_6 = FUN_2000_2baa(param_2);
  local_6 = local_6 - local_4;
  if (local_6 / ((param_2 - param_3) + 1) < *(int *)&SUB_0000_0462) {
    local_4 = *(int *)0x512;
    param_3 = 0;
    param_2 = *(int *)0x51c + -1;
    local_6 = *(int *)0x516 - local_4;
  }
  FUN_2000_1b3e(local_6,local_4,param_2 + 1,param_3);
  if (param_1 != 0) {
    *(byte *)(param_1 + 0x2e) = *(byte *)(param_1 + 0x2e) & 0xef;
  }
  FUN_2000_398b(param_2 + 1,param_4);
  FUN_2000_39b9(param_4,param_3);
  return;
}

