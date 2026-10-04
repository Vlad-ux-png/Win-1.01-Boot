// Function: FUN_1000_4b8f

void __cdecl16near FUN_1000_4b8f(void)

{
  char *pcVar1;
  char cVar2;
  char *unaff_DI;
  undefined2 unaff_ES;
  undefined1 in_CF;
  
  do {
    while( true ) {
      FUN_1000_4bcd();
      if ((bool)in_CF) break;
      unaff_DI = unaff_DI + 2;
      in_CF = 0;
    }
    cVar2 = FUN_1000_4bba();
    pcVar1 = unaff_DI;
    unaff_DI = unaff_DI + 1;
    *pcVar1 = cVar2;
    in_CF = 0;
  } while (cVar2 != '\0');
  return;
}

