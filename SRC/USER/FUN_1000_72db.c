// Function: FUN_1000_72db

undefined4 __cdecl16near FUN_1000_72db(void)

{
  undefined2 in_AX;
  undefined2 in_DX;
  undefined2 in_BX;
  undefined1 in_ZF;
  
  DAT_1000_57d1 = 0;
  FUN_1000_72b8();
  if ((bool)in_ZF) {
    iRam00010006 = iRam00010006 + -1;
    uRam0001000a = in_BX;
  }
  FUN_1000_7309();
  return CONCAT22(in_DX,in_AX);
}

