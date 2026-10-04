// Function: FUN_1000_7a65

bool FUN_1000_7a65(int param_1)

{
  int iVar1;
  
  if (param_1 == DAT_1000_5dab) {
    DAT_1000_5daa = (undefined1)param_1;
  }
  *(undefined1 *)0x38 = 1;
  iVar1 = *(int *)0xe;
  if (iVar1 != 0) {
    *(undefined2 *)0xe = 0;
    func_0x00002643(0x1000,*(undefined2 *)0x2);
  }
  return iVar1 != 0;
}

