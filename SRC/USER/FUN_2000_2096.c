// Function: FUN_2000_2096

void __stdcall16far FUN_2000_2096(int *param_1)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  uVar1 = func_0x0000ffff(0x1000);
  func_0x0000ffff(0,uVar1);
  func_0x0000ffff(0,*(undefined2 *)0x518,*(undefined2 *)0x516,*(undefined2 *)0x514,
                  *(undefined2 *)0x512,uVar1);
  func_0x0000ffff(0,0,uVar1);
  func_0x0000ffff(0,*(undefined2 *)0x3be,uVar1);
  func_0x0000ffff(0,0x21,0xf0,param_1[3] - param_1[1],param_1[2] - *param_1,param_1[1],*param_1,
                  uVar1);
  func_0x0000ffff(0,uVar1);
  func_0x0000ffff(0,uVar1);
  return;
}

