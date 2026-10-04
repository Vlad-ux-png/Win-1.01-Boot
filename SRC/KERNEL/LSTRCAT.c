// Function: LSTRCAT

void LSTRCAT(void)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *unaff_SI;
  char *unaff_DI;
  char *pcVar4;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  FUN_1000_4a74();
  iVar3 = -1;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar2 = unaff_DI;
    unaff_DI = unaff_DI + 1;
  } while (*pcVar2 != '\0');
  pcVar4 = unaff_DI + -1;
  do {
    pcVar2 = unaff_SI;
    unaff_SI = unaff_SI + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar4;
    pcVar4 = pcVar4 + 1;
    *pcVar2 = cVar1;
  } while (cVar1 != '\0');
  FUN_1000_4a85();
  return;
}

