// Function: LSTRLEN

int __stdcall16far LSTRLEN(char *param_1)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = (char *)param_1;
  iVar2 = -1;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar1 = pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (*pcVar1 != '\0');
  return -2 - iVar2;
}

