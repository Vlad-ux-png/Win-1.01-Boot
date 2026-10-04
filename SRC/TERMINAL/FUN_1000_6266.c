// Function: FUN_1000_6266

void FUN_1000_6266(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  
  if (param_1 != *(int *)0x44e) {
    if (param_1 == 0) {
      iVar1 = *(int *)0x125c;
      *(int *)0x450 = iVar1;
      if (iVar1 != 0) {
        FUN_1000_61ea(0);
      }
      uVar2 = 1;
    }
    else {
      if (*(int *)0x450 != 0) {
        FUN_1000_61ea(1);
        *(undefined2 *)0x450 = 0;
      }
      uVar2 = 0;
    }
    FUN_1000_33af(0,0,uVar2);
  }
  *(int *)0x44e = param_1;
  return;
}

