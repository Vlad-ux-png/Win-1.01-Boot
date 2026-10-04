// Function: FUN_1000_8566

char * FUN_1000_8566(char *param_1)

{
  int iVar1;
  char *pcVar2;
  undefined2 unaff_DS;
  char *local_4;
  
  iVar1 = func_0x00000386(0x1000,param_1);
  local_4 = (char *)func_0x000009b1(0,param_1 + iVar1);
  do {
    if (local_4 <= param_1) {
      return local_4;
    }
    local_4 = (char *)func_0x000003e8(0,local_4);
  } while ((*local_4 != '\\') && (*local_4 != ':'));
  pcVar2 = (char *)func_0x00000ad6(0,local_4);
  return pcVar2;
}

