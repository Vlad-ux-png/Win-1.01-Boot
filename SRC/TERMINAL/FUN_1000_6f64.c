// Function: FUN_1000_6f64

void FUN_1000_6f64(void)

{
  int iVar1;
  byte bVar2;
  char in_DL;
  byte bVar3;
  undefined2 unaff_DS;
  int iStack_8;
  undefined2 uStack_6;
  undefined2 uStack_4;
  uint uStack_2;
  
  if (in_DL == '\x18') {
    uStack_2 = 0x4f18;
    bVar3 = 0x18;
  }
  else {
    if ((*(byte *)0xed & 4) == 0) {
      uStack_2 = 0x6f73;
      thunk_FUN_1000_7137();
    }
    uStack_2 = 0x4f17;
    bVar3 = 0;
  }
  if (((char)(uStack_2 >> 8) != 'O') && (bVar3 != (byte)uStack_2)) {
    if (bVar3 != 0) {
      uStack_4 = 0x6fb0;
      uStack_2 = (uint)bVar3;
      FUN_1000_6fc4();
      FUN_1000_6fc4();
      return;
    }
    uStack_4 = 0x6fbf;
    FUN_1000_6fc4();
    bVar3 = (byte)uStack_2;
  }
  iVar1 = (uStack_2 & 0xff) + 1;
  bVar2 = (byte)((uint)iVar1 >> 8);
  uStack_4 = CONCAT11(bVar2,(char)(uStack_2 >> 8) + '\x01');
  uStack_6 = CONCAT11(bVar2,bVar3);
  iStack_8 = (uint)bVar2 << 8;
  uStack_2 = iVar1;
  func_0x0000ffff(0x1000,&iStack_8);
  return;
}

