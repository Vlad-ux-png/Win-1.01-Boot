// Function: FUN_1000_1ce0

void __cdecl16near FUN_1000_1ce0(void)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *unaff_DI;
  char *pcVar4;
  undefined2 unaff_ES;
  
  iVar3 = -1;
  pcVar4 = unaff_DI;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar1 = pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar1 != '\0');
  for (; (((unaff_DI != pcVar4 && (cVar2 = pcVar4[-1], cVar2 != '\\')) && (cVar2 != '/')) &&
         (cVar2 != ':')); pcVar4 = pcVar4 + -1) {
  }
  return;
}

