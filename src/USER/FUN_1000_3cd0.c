// Function: FUN_1000_3cd0

void __cdecl16far FUN_1000_3cd0(void)

{
  undefined2 unaff_DS;
  
  DAT_1000_5daf = *(undefined2 *)0x54;
  if ((DAT_1000_5daa == '\0') && (*(int *)0x38 == 0)) {
    *(undefined1 *)0xe = 1;
    func_0x00002156(0x1000,0);
  }
  return;
}

