// Function: FUN_2000_9664

void FUN_2000_9664(int param_1,undefined2 param_2)

{
  byte bVar1;
  undefined2 unaff_SI;
  undefined2 unaff_DI;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 in_stack_0000ffea;
  undefined2 in_stack_0000ffec;
  undefined1 local_c [8];
  undefined2 local_4;
  
  FUN_2000_984a(1,local_c,unaff_SS,param_2,param_1,unaff_SI,unaff_DI,in_stack_0000ffea,
                in_stack_0000ffec);
  local_4 = 0;
  bVar1 = *(byte *)(param_1 + 0x30);
  if (bVar1 == 4) {
    local_4 = 1;
  }
  else if (((4 < bVar1) && (bVar1 < 7)) && (local_4 = 2, *(char *)(param_1 + 0x40) != '\x02')) {
    local_4 = 0;
  }
  func_0x0000ffff();
  func_0x0000ffff();
  func_0x0000ffff();
  return;
}

