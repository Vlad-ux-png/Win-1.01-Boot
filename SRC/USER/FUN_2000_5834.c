// Function: FUN_2000_5834

void __stdcall16far FUN_2000_5834(int param_1)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  uVar1 = *(undefined2 *)(param_1 + 2);
  func_0x0000ffff(0x1000,1,0,0,uVar1);
  func_0x0000ffff(0,uVar1);
  return;
}

