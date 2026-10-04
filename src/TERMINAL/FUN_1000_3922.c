// Function: FUN_1000_3922

undefined2 __stdcall16far
FUN_1000_3922(int param_1,int param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 local_56 [82];
  
  if ((param_2 != 0) || (param_1 != 0)) {
    uVar1 = FUN_1000_19a1(0x51,local_56,unaff_SS,0,param_4);
    unaff_DS = FUN_1000_6780(uVar1,local_56,unaff_SS,local_56,unaff_SS);
    if (param_1 != 0) {
      unaff_DS = func_0x0000ffff(0x1000,uVar1,local_56);
    }
    if (param_2 != 0) {
      unaff_DS = FUN_1000_4010(uVar1,local_56);
    }
  }
  return unaff_DS;
}

