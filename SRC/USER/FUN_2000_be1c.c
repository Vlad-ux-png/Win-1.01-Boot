// Function: FUN_2000_be1c

undefined2 FUN_2000_be1c(int *param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  
  iVar1 = *param_1;
  if (iVar1 == 2) {
LAB_2000_be43:
    uVar2 = 1;
  }
  else {
    if (iVar1 != 3) {
      if (iVar1 == 0x80) {
        return 0;
      }
      if (iVar1 == 0x82) goto LAB_2000_be43;
      if (iVar1 != 0x83) {
        return 2;
      }
    }
    uVar2 = 3;
  }
  return uVar2;
}

