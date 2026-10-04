// Function: _LLSEEK

void __stdcall16far _LLSEEK(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}

