// Function: FUN_1000_46b4

char __cdecl16near FUN_1000_46b4(void)

{
  char cVar1;
  char cVar2;
  char in_BL;
  char *unaff_SI;
  char *unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  do {
    if (*unaff_DI == in_BL) {
      return *unaff_SI;
    }
    cVar1 = FUN_1000_4bba();
    cVar2 = FUN_1000_4bba();
    unaff_SI = unaff_SI + 1;
    unaff_DI = unaff_DI + 1;
  } while (cVar1 == cVar2);
  return cVar1;
}

