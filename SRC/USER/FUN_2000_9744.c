// Function: FUN_2000_9744

void FUN_2000_9744(int param_1,int param_2,undefined2 param_3)

{
  undefined2 unaff_SI;
  undefined2 unaff_DI;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 local_12 [6];
  int local_c;
  undefined4 local_a;
  int local_6;
  uint local_4;
  
  local_6 = (int)*(char *)(*(byte *)(param_2 + 0x30) + 0x202);
  FUN_2000_984a(local_6,local_12,unaff_SS,param_3,param_2,unaff_SI,unaff_DI);
  func_0x0000ffff();
  local_a = func_0x0000ffff();
  local_4 = (uint)(local_c - (int)((ulong)local_a >> 0x10)) >> 1;
  if (param_1 == 0) {
    if ((*(byte *)(param_2 + 0x33) & 8) == 0) {
      func_0x00000055();
      func_0x0000ffff();
    }
    else {
      func_0x0000ffff();
    }
  }
  else {
    func_0x0000ffff();
    func_0x0000ffff();
  }
  return;
}

