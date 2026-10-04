// Function: FUN_1000_319a

void FUN_1000_319a(undefined2 param_1)

{
  int iVar1;
  int iVar2;
  
  if (DAT_1000_0016 == 0) {
    DAT_1000_0018 = param_1;
  }
  else {
    iVar1 = DAT_1000_0016;
    if (*(char *)0x8 < *(char *)0x8) {
      do {
        iVar2 = iVar1;
        iVar1 = *(int *)0x0;
        if (iVar1 == 0) break;
      } while (*(char *)0x8 < *(char *)0x8);
      *(undefined2 *)0x0 = param_1;
      *(int *)0x0 = iVar1;
      return;
    }
    *(int *)0x0 = DAT_1000_0016;
  }
  DAT_1000_0016 = param_1;
  return;
}

