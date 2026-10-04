// Function: FUN_1000_cbfb

void FUN_1000_cbfb(uint *param_1)

{
  undefined2 unaff_DS;
  
  if ((param_1[7] != 0) && ((*param_1 & 4) == 0)) {
    func_0x00000ae6(0x1000,param_1[7]);
  }
  if ((*param_1 & 0x10) != 0) {
    FUN_1000_cb5d(param_1[1]);
  }
  return;
}

