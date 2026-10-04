// Function: FUN_1000_ce9f

undefined2 FUN_1000_ce9f(undefined2 param_1)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  *(undefined2 *)0x3a0 = param_1;
  FUN_1000_d905();
  FUN_1000_d3a9();
  FUN_1000_d469();
  FUN_1000_d0a3();
  FUN_1000_d54d();
  FUN_1000_cfed();
  FUN_1000_cf49();
  FUN_1000_d45e();
  FUN_1000_d7be();
  FUN_1000_dac5();
  func_0x0000ffff(0x1000,8);
  uVar1 = func_0x00000109(0,*(int *)0x5f6 + 0x10,0x40);
  *(undefined2 *)0x416 = uVar1;
  FUN_1000_d346();
  func_0x0000ffff(0);
  func_0x0000ffff(0,*(int *)0x54c >> 1,*(int *)0x54a >> 1);
  func_0x0000ffff(0,*(undefined2 *)0x608);
  FUN_1000_dd42();
  uVar1 = func_0x0000ffff(0,0,0,*(undefined2 *)0x3a0,0,0,*(undefined2 *)0x468,*(undefined2 *)0x510,
                          *(int *)0x50e - *(int *)0x468,0,0,0xd000,0,0,0x8001,0);
  *(undefined2 *)0x634 = uVar1;
  FUN_1000_d98d();
  return 1;
}

