// Function: FUN_1000_cb5d

undefined2 __stdcall16far FUN_1000_cb5d(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  uint unaff_DI;
  
  uVar2 = 0;
  if (param_1 != 0) {
    iVar1 = func_0x00000a8e(0x1000,param_1,param_1,param_1);
    FUN_1000_ca1f();
    while (unaff_DI = unaff_DI - 0x10, iVar1 + 0xcU <= unaff_DI) {
      FUN_1000_cbfb(unaff_DI);
    }
    func_0x00000a9f(0);
    func_0x0000081d(0);
    uVar2 = 1;
  }
  return uVar2;
}

