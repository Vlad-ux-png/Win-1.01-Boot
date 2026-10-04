// Function: FUN_1000_7e04

undefined2 __cdecl16far FUN_1000_7e04(int param_1,int param_2)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  undefined1 in_ZF;
  
  uVar1 = FUN_1000_7add();
  if ((!(bool)in_ZF) && (uVar1 = FUN_1000_7ae2(), !(bool)in_ZF)) {
    do {
      if (param_1 == 0) {
        return 0;
      }
      if ((*(byte *)(param_1 + 0x33) & 0xc0) != 0x40) {
        return 0;
      }
      param_1 = *(int *)(param_1 + 0x38);
    } while (param_2 != param_1);
    uVar1 = 1;
  }
  return uVar1;
}

