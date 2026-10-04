// Function: _LCLOSE

undefined2 __stdcall16far _LCLOSE(void)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined1 in_CF;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  uVar2 = 0xffff;
  if (!(bool)in_CF) {
    uVar2 = 0;
  }
  return uVar2;
}

