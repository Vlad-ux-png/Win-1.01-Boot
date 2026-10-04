// Function: FUN_1000_3b12

int __stdcall16far FUN_1000_3b12(int param_1,undefined2 param_2,undefined2 param_3,int param_4)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined2 uVar2;
  
  if (param_4 == 0x20) {
    *(int *)0x54 = param_1;
    DAT_1000_5dab = param_1;
    if (param_1 == *(int *)(*(int *)0x634 + 0xc)) {
      iVar1 = DAT_1000_5dad;
      if (param_1 == DAT_1000_5dad) {
        iVar1 = *(int *)0x0;
      }
      *(int *)(*(int *)0x634 + 0xc) = iVar1;
    }
    FUN_1000_7059(0,param_1,param_1);
    func_0x0000ffff(0x1000);
    func_0x0000ffff(0,param_2);
    iVar1 = FUN_1000_789a();
    return iVar1;
  }
  if (param_4 != 0x10) {
    return param_4;
  }
  *(int *)0x54 = param_1;
  DAT_1000_5dab = param_1;
  iVar1 = *(int *)0x1c;
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      return 1;
    }
    if (iVar1 != 2) {
      func_0x0000ffff(0x1000,1,0);
      uVar2 = 0;
      func_0x0000ffff(0,0);
      iVar1 = *(int *)0x36;
      if (iVar1 != 0) {
        func_0x0000ffff(0,iVar1,uVar2,iVar1);
      }
      *(int *)0x1c = *(int *)0x1c + -1;
      func_0x0000ffff(0,*(undefined2 *)0x24,*(undefined2 *)0x26,*(undefined2 *)0x22,
                      *(undefined2 *)0x20,*(undefined2 *)0x1e);
      FUN_1000_3c9c();
      iVar1 = -1;
      func_0x0000214e(0,0xffff,*(undefined2 *)0x2);
      if (iVar1 == 0) {
        return 1;
      }
      func_0x0000ffff(0,iVar1);
      return 1;
    }
  }
  if (*(int *)0x52 == 0) {
    return 0;
  }
  if (*(int *)0x52 != *(int *)0x54) {
    return 1;
  }
  return 0;
}

