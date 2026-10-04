// Function: FUN_1000_675d

bool __stdcall16far FUN_1000_675d(void)

{
  code *pcVar1;
  int unaff_BP;
  undefined1 in_CF;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)(unaff_BP + 1);
  return !(bool)in_CF;
}

