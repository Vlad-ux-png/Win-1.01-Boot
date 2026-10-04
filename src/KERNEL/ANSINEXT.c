// Function: ANSINEXT

char * __stdcall16far ANSINEXT(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  bool bVar3;
  
  pcVar1 = (char *)param_1;
  bVar3 = false;
  pcVar2 = pcVar1;
  if (*param_1 != '\0') {
    pcVar2 = pcVar1 + 1;
    FUN_1000_4bcd();
    if (!bVar3) {
      pcVar2 = pcVar1 + 2;
    }
  }
  return pcVar2;
}

