// Function: FUN_1000_604a

void FUN_1000_604a(int param_1)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  iVar1 = (param_1 - *(int *)0x36) - *(int *)0x430;
  if (iVar1 != 0) {
    if (*(int *)0x136a != 0) {
      FUN_1000_33af(0,0,2);
    }
    iVar2 = FUN_1000_5e52(iVar1);
    if (iVar1 != iVar2) {
      FUN_1000_5eb3(iVar1 - iVar2);
    }
    if (*(int *)0x136a != 0) {
      FUN_1000_33af(0,0,3);
    }
    if ((*(int *)0x12ae < *(int *)0x36 + *(int *)0x430) ||
       (*(int *)0x3a + *(int *)0x430 <= *(int *)0x12ae)) {
      if (*(int *)0x136a != 0) {
        FUN_1000_33af(0,0,2);
        *(undefined2 *)0x136a = 0;
      }
    }
    else {
      if (*(int *)0x136a == 0) {
        FUN_1000_33af(0,0,3);
        *(undefined2 *)0x136a = 1;
      }
      FUN_1000_33af(*(int *)0x12ae - *(int *)0x430,*(undefined2 *)0x12ac,4);
    }
  }
  return;
}

