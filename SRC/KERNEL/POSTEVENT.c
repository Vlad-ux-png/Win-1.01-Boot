// Function: POSTEVENT

void __stdcall16far POSTEVENT(void)

{
  undefined2 unaff_ES;
  
  FUN_1000_3678();
  *(int *)0x6 = *(int *)0x6 + 1;
  return;
}

