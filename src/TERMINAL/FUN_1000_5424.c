// Function: FUN_1000_5424

undefined2 FUN_1000_5424(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  char local_56 [2];
  char *local_54;
  char local_52 [80];
  
  local_54 = local_52;
  uVar2 = 0x1000;
  do {
    iVar1 = func_0x000048e5(uVar2,1,local_56);
    if (iVar1 < 0) {
      return 0;
    }
    uVar2 = 0;
  } while ((iVar1 != 1) || (local_56[0] != '\n'));
  while( true ) {
    do {
      iVar1 = func_0x00003acf(0,1,local_54);
      if (iVar1 < 0) {
        return 0;
      }
    } while (iVar1 < 1);
    if (*local_54 == '\n') break;
    if (*local_54 != '\r') {
      local_54 = local_54 + 1;
    }
  }
  *local_54 = '\0';
  iVar1 = func_0x0000ffff(0,param_2);
  if (iVar1 != 0) {
    return 0;
  }
  return 1;
}

