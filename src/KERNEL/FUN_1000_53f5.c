// Function: FUN_1000_53f5

void __cdecl16near FUN_1000_53f5(void)

{
  uint uVar1;
  int *piVar2;
  int in_CX;
  int *unaff_SI;
  int unaff_DI;
  undefined2 unaff_DS;
  
  if (unaff_SI != (int *)0x0) goto LAB_1000_5424;
  piVar2 = (int *)*(undefined2 *)(unaff_DI + 0xe);
  do {
    if (piVar2 == (int *)0x0) {
      return;
    }
    unaff_SI = piVar2 + 1;
    in_CX = *piVar2;
    do {
      uVar1 = unaff_SI[1];
      if (uVar1 != 0xffff) {
        if (*(char *)(unaff_DI + 0xb) == '\0') {
          return;
        }
        if ((((uVar1 & 0x40) == 0) && (*(char *)(unaff_DI + 0xb) == (char)(uVar1 & 0xff0f))) &&
           ((char)((uVar1 & 0xff0f) >> 8) == '\0')) {
          return;
        }
      }
LAB_1000_5424:
      unaff_SI = unaff_SI + 2;
      in_CX = in_CX + -1;
    } while (in_CX != 0);
    piVar2 = (int *)*unaff_SI;
  } while( true );
}

