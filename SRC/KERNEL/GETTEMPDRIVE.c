// Function: GETTEMPDRIVE

undefined2 __stdcall16far GETTEMPDRIVE(byte param_1)

{
  code *pcVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  undefined2 unaff_SS;
  
  bVar2 = param_1 & 0x7f;
  if ((param_1 & 0x7f) == 0) {
    pcVar1 = (code *)swi(0x21);
    cVar3 = (*pcVar1)();
    bVar2 = cVar3 + 0x41;
  }
  bVar2 = bVar2 & 0x5f;
  if ((*(byte *)((int)register0x00000010 + 4) & 0x80) == 0) {
    uVar4 = 0;
    do {
      cVar3 = FUN_1000_1c65();
      uVar5 = uVar4;
      if (cVar3 == '\x03') break;
      uVar4 = uVar4 + 1;
      uVar5 = (int)(char)(bVar2 + 0xbf);
    } while (uVar4 < 0x1a);
    bVar2 = (char)uVar5 + 0x41;
  }
  return CONCAT11(0x3a,bVar2);
}

