// Function: FUN_2000_39e9

void FUN_2000_39e9(int param_1)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  undefined2 local_6;
  
  uVar1 = 0x1000;
  local_6 = param_1 * 0xe + *(int *)0x4dc;
  while( true ) {
    param_1 = param_1 + 1;
    if (param_1 == *(int *)0x51c) break;
    func_0x00002164(uVar1,0xe,local_6);
    FUN_2000_3a41(0xffff,local_6);
    uVar1 = 0;
    local_6 = local_6 + 0xe;
  }
  *(int *)0x51c = *(int *)0x51c + -1;
  return;
}

