// Function: FUN_2000_8f00

undefined2 FUN_2000_8f00(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined1 local_14 [2];
  int local_12;
  int local_10;
  
  iVar1 = func_0x0000035d(0x1000,param_1);
  if (iVar1 < 0) {
    iVar1 = func_0x00000573(0,0,0x101,0x100,0,local_14);
    if (iVar1 != 0) {
      if ((local_12 == 0x101) || (local_10 != param_1)) goto LAB_2000_8f12;
      func_0x00000379(0,1,0x100,0x100,0,local_14);
    }
    uVar2 = 1;
  }
  else {
LAB_2000_8f12:
    uVar2 = 0;
  }
  return uVar2;
}

