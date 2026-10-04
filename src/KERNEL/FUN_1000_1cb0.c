// Function: FUN_1000_1cb0

void FUN_1000_1cb0(void)

{
  int unaff_BP;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  
  FUN_1000_4227();
  DAT_1000_004e = *(undefined1 *)((int)*(undefined4 *)(unaff_BP + 8) + 8);
  *(undefined1 *)0x41ac = DAT_1000_004e;
  FUN_1000_1ce0();
  FUN_1000_422e();
  return;
}

