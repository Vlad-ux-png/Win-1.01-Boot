// Function: GETPROCADDRESS

void __stdcall16far GETPROCADDRESS(undefined2 param_1,int param_2,undefined2 param_3)

{
  undefined2 uVar1;
  int in_CX;
  undefined2 unaff_SS;
  undefined1 local_44 [64];
  
  uVar1 = FUN_1000_08df(param_3);
  if (in_CX != 0) {
    if (param_2 != 0) {
      FUN_1000_1515(0x1549,local_44,param_1,param_2);
      param_1 = FUN_1000_0737(local_44,unaff_SS,uVar1);
    }
    FUN_1000_069f(param_1,uVar1);
  }
  return;
}

