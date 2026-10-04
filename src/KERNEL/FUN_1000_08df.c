// Function: FUN_1000_08df

int FUN_1000_08df(undefined2 param_1)

{
  int iVar1;
  undefined2 unaff_BP;
  undefined2 unaff_CS;
  
  iVar1 = FUN_1000_09e1(param_1);
  if ((iVar1 != 0) &&
     ((((*(int *)0x0 != 0x454e && (iVar1 = *(int *)0x1, iVar1 != 0)) && (*(int *)0x0 != 0x454e)) ||
      (iVar1 == 0)))) {
    FATALEXIT(unaff_CS,0x406,unaff_BP);
    iVar1 = 0;
  }
  return iVar1;
}

