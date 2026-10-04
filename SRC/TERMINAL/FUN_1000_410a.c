// Function: FUN_1000_410a

void __stdcall16far FUN_1000_410a(char *param_1)

{
  undefined2 unaff_DS;
  undefined1 local_5a [80];
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  
  if (*param_1 == '\0') {
    local_a = 0x1298;
  }
  else {
    local_a = FUN_1000_40bd(param_1);
  }
  if (*(int *)0x16a == 0) {
    local_8 = 0x3c8;
  }
  else {
    local_8 = FUN_1000_40bd(0x14ea);
  }
  if (*(int *)0x16c == 0) {
    local_6 = 0x3c8;
  }
  else {
    local_6 = FUN_1000_40bd(0x14f8);
  }
  func_0x000031a2(0x1000,0x136e);
  func_0x000035fe(0,0x12b0);
  func_0x0000360d(0,local_8);
  func_0x0000361c(0,local_6);
  func_0x0000362b(0,0x12cc);
  func_0x0000ffff(0,local_a);
  func_0x0000ffff(0,local_5a);
  return;
}

