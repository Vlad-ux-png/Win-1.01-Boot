// Function: FUN_2000_948d

void FUN_2000_948d(undefined2 param_1,undefined2 param_2,int param_3,int param_4)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 unaff_SI;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 local_a [8];
  
  if (*(char *)(param_4 + 0x30) == '\a') {
    uVar1 = FUN_2000_9020(param_4);
    FUN_2000_984a(3,local_a,unaff_SS,uVar1,param_4,unaff_SI);
    FUN_2000_9081();
  }
  else {
    func_0x0000061c(0x1000,local_a);
  }
  iVar2 = func_0x0000ffff();
  if (iVar2 == 0) {
    FUN_2000_955c();
  }
  else {
    if (param_3 == 0x200) {
      iVar2 = func_0x0000ffff();
      if (-1 < iVar2) {
        return;
      }
    }
    else if (param_3 != 0x201) {
      if (param_3 != 0x202) {
        return;
      }
      FUN_2000_958e();
      return;
    }
    if (*(char *)(param_4 + 0x30) != '\a') {
      FUN_2000_951a();
    }
  }
  return;
}

