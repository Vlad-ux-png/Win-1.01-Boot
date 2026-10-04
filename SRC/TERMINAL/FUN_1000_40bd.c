// Function: FUN_1000_40bd

char * FUN_1000_40bd(char *param_1)

{
  int iVar1;
  char *pcVar2;
  undefined2 unaff_DS;
  
  iVar1 = func_0x000031ad(0x1000,param_1);
  pcVar2 = param_1 + iVar1;
  while( true ) {
    if (pcVar2 <= param_1) {
      return pcVar2;
    }
    if ((*pcVar2 == '\\') || (*pcVar2 == ':')) break;
    pcVar2 = (char *)func_0x0000ffff(0,pcVar2);
  }
  return pcVar2 + 1;
}

