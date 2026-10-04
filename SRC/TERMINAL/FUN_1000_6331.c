// Function: FUN_1000_6331

void FUN_1000_6331(uint param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  undefined4 uVar2;
  
  if (*(int *)0x125c != 0) {
    if ((param_1 & 4) == 0) {
      uVar2 = FUN_1000_367e(param_2,param_3);
      uVar1 = (undefined2)((ulong)uVar2 >> 0x10);
      *(undefined2 *)0x125e = (int)uVar2;
      *(undefined2 *)0x1260 = uVar1;
      FUN_1000_33af(uVar1,*(undefined2 *)0x125e,4);
      if (*(int *)0x136a == 0) {
        FUN_1000_33af(0,0,3);
      }
      *(undefined2 *)0x136a = 1;
      *(undefined2 *)0x12ac = *(undefined2 *)0x125e;
      *(int *)0x12ae = *(int *)0x1260 + *(int *)0x430;
      FUN_1000_5ae5(*(undefined2 *)0x125e,*(undefined2 *)0x1260);
    }
    else {
      FUN_1000_62ef(param_1,param_2,param_3);
    }
    *(undefined2 *)0x440 = 1;
  }
  return;
}

