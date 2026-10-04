// Function: FUN_1000_4810

void __cdecl16near FUN_1000_4810(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}

