// Function: FUN_1000_bd23

undefined4 __stdcall16far FUN_1000_bd23(uint *param_1)

{
  undefined2 unaff_DS;
  int local_40 [4];
  int local_38;
  undefined2 local_20;
  int local_1e;
  undefined1 local_1c [2];
  undefined2 local_1a;
  int local_18;
  undefined2 local_a;
  undefined2 local_6;
  
  local_20 = 0;
  local_1e = 0;
  if ((*param_1 & 4) == 0) {
    local_6 = func_0x0000ffff(0x1000);
    local_a = FUN_1000_bbf5(9,param_1[7] + 2,unaff_DS);
    func_0x00000508(0,local_40);
    local_1e = local_40[0] + local_38;
    local_20 = func_0x000005bb(0,local_a,param_1[7] + 2);
    func_0x000015b1(0,local_6);
  }
  else {
    func_0x0000ffff(0x1000,local_1c);
    local_20 = local_1a;
    local_1e = local_18;
  }
  return CONCAT22(local_1e,local_20);
}

