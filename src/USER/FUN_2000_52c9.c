// Function: FUN_2000_52c9

void __stdcall16far FUN_2000_52c9(int param_1,undefined2 param_2)

{
  undefined2 unaff_DS;
  int local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  
  func_0x0000ffff(0x1000,&local_c);
  func_0x0000ffff(0,param_1 + 0x16);
  if ((*(byte *)(param_1 + 6) & 0x80) != 0) {
    local_c = (*(uint *)(param_1 + 0x1e) >> 1) - 1;
  }
  func_0x0000ffff(0,local_6,local_8,local_a,local_c,param_2);
  func_0x0000ffff(0,*(undefined2 *)(param_1 + 0x34),param_2);
  return;
}

