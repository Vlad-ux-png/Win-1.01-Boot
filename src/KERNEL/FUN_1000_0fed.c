// Function: FUN_1000_0fed

int FUN_1000_0fed(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_1000_0008;
  do {
    iVar1 = iVar2;
    iVar2 = *(int *)0x6;
  } while (*(int *)0x6 != 0);
  *(int *)0x6 = param_1;
  if ((DAT_1000_000a == 0) && (*(int *)0x30 != 0)) {
    DAT_1000_000a = param_1;
  }
  iVar2 = param_1;
  if (DAT_1000_008e == '\0') {
    GLOBALCOMPACT(0,0);
    iVar1 = FUN_1000_2030();
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = param_1;
    }
  }
  return iVar2;
}

