// Function: FUN_1000_6fc4

void __cdecl16near FUN_1000_6fc4(void)

{
  undefined1 uVar1;
  byte in_DL;
  char in_DH;
  undefined1 in_BL;
  undefined1 in_BH;
  undefined2 uStack_8;
  undefined2 uStack_6;
  undefined2 uStack_4;
  int iStack_2;
  
  iStack_2 = in_DL + 1;
  uVar1 = (undefined1)((uint)iStack_2 >> 8);
  uStack_4 = CONCAT11(uVar1,in_DH + '\x01');
  uStack_6 = CONCAT11(uVar1,in_BL);
  uStack_8 = CONCAT11(uVar1,in_BH);
  func_0x0000ffff(0x1000,&uStack_8);
  return;
}

