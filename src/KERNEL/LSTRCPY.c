// Function: LSTRCPY

void LSTRCPY(void)

{
  char *pcVar1;
  char cVar2;
  char *unaff_SI;
  char *unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  FUN_1000_4a74();
  do {
    pcVar1 = unaff_SI;
    unaff_SI = unaff_SI + 1;
    cVar2 = *pcVar1;
    pcVar1 = unaff_DI;
    unaff_DI = unaff_DI + 1;
    *pcVar1 = cVar2;
  } while (cVar2 != '\0');
  FUN_1000_4a85();
  return;
}

