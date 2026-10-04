// Function: GLOBALFLAGS

undefined2 __stdcall16far GLOBALFLAGS(void)

{
  undefined2 in_CX;
  int unaff_DI;
  undefined2 unaff_DS;
  
  FUN_1000_62b0();
  *(int *)(unaff_DI + 0x18) = *(int *)(unaff_DI + 0x18) + -1;
  return CONCAT11((char)in_CX,(char)((uint)in_CX >> 8));
}

