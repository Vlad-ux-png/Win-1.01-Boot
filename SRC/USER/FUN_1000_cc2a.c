// Function: FUN_1000_cc2a

uint __stdcall16far FUN_1000_cc2a(uint param_1,int param_2)

{
  int iVar1;
  uint *unaff_DI;
  undefined2 unaff_DS;
  uint local_6;
  
  local_6 = 0;
  if (param_2 != 0) {
    iVar1 = func_0x00000ac4(0x1000,param_2);
    if ((param_1 < *(uint *)(iVar1 + 10)) && (-1 < (int)param_1)) {
      FUN_1000_ca1f();
      if ((*unaff_DI & 0x10) != 0) {
        local_6 = unaff_DI[1];
      }
    }
    func_0x00000b3b(0,param_2);
  }
  return local_6;
}

