// Function: FUN_2000_51c0

void __stdcall16far FUN_2000_51c0(int param_1)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  undefined2 local_c;
  undefined2 local_a;
  
  uVar1 = 0x1000;
  if (*(char *)(param_1 + 10) == '\0') {
    uVar1 = 0;
    func_0x0000ffff(0x1000,param_1);
  }
  else if ((*(byte *)(param_1 + 6) & 8) != 0) {
    FUN_2000_5c27(&local_c);
    uVar1 = 0;
    func_0x0000ffff(0x1000,local_a,local_c);
  }
  func_0x0000ffff(uVar1,*(undefined2 *)(param_1 + 2));
  return;
}

