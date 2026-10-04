// Function: FUN_1000_7652

void __stdcall16far FUN_1000_7652(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  undefined2 unaff_DS;
  
  uVar1 = 0;
  if (param_3 != 0) {
    uVar1 = 0x400;
  }
  if (param_2 != 0) {
    uVar1 = uVar1 | 0x4000;
  }
  if (param_1 != 0) {
    uVar1 = uVar1 | 1;
  }
  *(uint *)0xf1 = uVar1;
  FUN_1000_75a0();
  if (param_4 != 0) {
    FUN_1000_7554();
  }
  return;
}

