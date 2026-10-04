// Function: FUN_1000_367e

long FUN_1000_367e(int param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 unaff_DS;
  long lVar2;
  
  lVar2 = FUN_1000_3619(param_1 + (CONCAT11((char)(*(int *)0xea4 >> 9),(char)(*(int *)0xea4 >> 1)) &
                                  0x7fff),param_2);
  iVar1 = (int)((ulong)lVar2 >> 0x10);
  if (lVar2 < 0) {
    lVar2 = 0;
  }
  else if ((*(int *)0x28 == 0) || (iVar1 != *(int *)0x3a)) {
    if ((*(int *)0x28 == 0) || (iVar1 < *(int *)0x3a)) {
      if (iVar1 < *(int *)0x3a) {
        return lVar2;
      }
      iVar1 = *(int *)0x3a + -1;
    }
    else {
      iVar1 = *(int *)0x3e;
    }
    lVar2 = CONCAT22(iVar1,0x50);
  }
  else {
    lVar2 = CONCAT22(*(undefined2 *)0x3e,(int)lVar2);
  }
  return lVar2;
}

