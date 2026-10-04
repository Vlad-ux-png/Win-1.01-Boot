// Function: FUN_2000_4582

char * FUN_2000_4582(char *param_1)

{
  char *pcVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  if (*param_1 == -1) {
    param_1._0_2_ = (char *)param_1 + 3;
  }
  else {
    do {
      pcVar1 = param_1;
      uVar2 = (undefined2)((ulong)param_1 >> 0x10);
      param_1._0_2_ = (char *)param_1 + 1;
      param_1 = (char *)CONCAT22(uVar2,(char *)param_1);
    } while (*pcVar1 != '\0');
  }
  return (char *)CONCAT22(uVar2,(char *)param_1);
}

