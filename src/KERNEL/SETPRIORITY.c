// Function: SETPRIORITY

int __stdcall16far SETPRIORITY(void)

{
  undefined2 uVar1;
  char in_BL;
  undefined2 unaff_ES;
  
  FUN_1000_366c();
  in_BL = in_BL + *(char *)0x8;
  if (in_BL < -0x20) {
    in_BL = -0x20;
  }
  if ('\x0f' < in_BL) {
    in_BL = '\x0f';
  }
  *(char *)0x8 = in_BL + '\x01';
  uVar1 = FUN_1000_31ec();
  FUN_1000_319a(uVar1);
  *(char *)0x8 = *(char *)0x8 + -1;
  return (int)in_BL;
}

