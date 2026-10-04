// Function: FUN_1000_31ec

int FUN_1000_31ec(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_1000_0016;
  if (DAT_1000_0016 == param_1) {
    DAT_1000_0016 = *(int *)0x0;
  }
  else {
    do {
      iVar2 = iVar1;
      iVar1 = *(int *)0x0;
      if (iVar1 == 0) {
        return param_1;
      }
    } while (iVar1 != param_1);
    *(undefined2 *)0x0 = *(undefined2 *)0x0;
  }
  return param_1;
}

