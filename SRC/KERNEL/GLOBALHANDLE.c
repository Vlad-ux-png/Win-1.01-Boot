// Function: GLOBALHANDLE

void __stdcall16far GLOBALHANDLE(void)

{
  int unaff_DI;
  undefined2 unaff_DS;
  
  FUN_1000_62b0();
  *(int *)(unaff_DI + 0x18) = *(int *)(unaff_DI + 0x18) + -1;
  return;
}

