// Function: FUN_1000_4ac4

void __cdecl16near FUN_1000_4ac4(undefined2 param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined2 local_6;
  
  iVar1 = func_0x00000792(0x1000,0x7f02,0,0);
  if (iVar1 != 0) {
    local_6 = func_0x00003fac(0,iVar1);
  }
  FUN_1000_45de(1000);
  func_0x00003cf0(0,0,*(undefined2 *)0x136c);
  FUN_1000_45de(0x5dc);
  FUN_1000_4855(2,param_1);
  FUN_1000_45de(2000);
  FUN_1000_4855(3,param_1);
  FUN_1000_45de(200);
  if (iVar1 != 0) {
    func_0x0000ffff(0,local_6);
  }
  return;
}

