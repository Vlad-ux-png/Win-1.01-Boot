// Function: FUN_1000_1040

void FUN_1000_1040(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = DAT_1000_0008;
  iVar2 = *(int *)0x6;
  if (param_1 != DAT_1000_0008) {
    do {
      iVar3 = iVar1;
      iVar2 = DAT_1000_0008;
      if (iVar3 == 0) goto LAB_1000_106f;
      iVar1 = *(int *)0x6;
    } while (param_1 != *(int *)0x6);
    *(int *)0x6 = *(int *)0x6;
    iVar2 = DAT_1000_0008;
  }
LAB_1000_106f:
  DAT_1000_0008 = iVar2;
  *(undefined2 *)0x0 = 0;
  GLOBALFREEALL(param_1);
  FUN_1000_2030();
  return;
}

