// Function: FUN_1000_480d

void FUN_1000_480d(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}

