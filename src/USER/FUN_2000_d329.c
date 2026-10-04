// Function: FUN_2000_d329

void __cdecl16far FUN_2000_d329(void)

{
  code *pcVar1;
  int unaff_BP;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)(unaff_BP + 1);
  return;
}

