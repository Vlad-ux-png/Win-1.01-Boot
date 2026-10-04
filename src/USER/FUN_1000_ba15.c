// Function: FUN_1000_ba15

void FUN_1000_ba15(int param_1)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  undefined2 uVar2;
  
  *(undefined2 *)0x32 = 1;
  func_0x0000ffff(0x1000);
  func_0x0000ffff(0,*(undefined2 *)0x608);
  if ((*(byte *)(param_1 + 0x33) & 0xc0) != 0x40) {
    FUN_1000_baf8(param_1);
    uVar2 = 0x116;
    uVar1 = FUN_1000_b99d(*(undefined2 *)0x3a,0,param_1);
    func_0x00000a9a(0,0,0,uVar1,uVar2,param_1);
  }
  func_0x00000a12(0,1);
  return;
}

