// Function: _LCREAT

undefined2 __stdcall16far _LCREAT(void)

{
  code *pcVar1;
  undefined2 uVar2;
  bool bVar3;
  
  bVar3 = false;
  pcVar1 = (code *)swi(0x21);
  uVar2 = (*pcVar1)();
  if (bVar3) {
    uVar2 = 0xffff;
  }
  return uVar2;
}

