// Function: FUN_1000_0038

void FUN_1000_0038(void)

{
  code *pcVar1;
  
  do {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
  } while( true );
}

