// Function: FUN_2000_0187

void FUN_2000_0187(int param_1)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  undefined1 local_a [8];
  
  func_0x0000ffff(0x1000,local_a);
  uVar1 = func_0x00000ea4(0,param_1);
  *(undefined2 *)0x3a6 = uVar1;
  func_0x0002f269(*(undefined2 *)(param_1 + 0x46),*(undefined2 *)(param_1 + 0x44),
                  *(undefined2 *)(param_1 + 0x42),*(undefined2 *)(param_1 + 0x40),local_a);
  return;
}

