// Function: FUN_1000_7268

void __cdecl16near FUN_1000_7268(void)

{
  undefined2 unaff_DS;
  
  if ((*(byte *)0xed & 1) != 0) {
    *(byte *)0xed = *(byte *)0xed & 0xfe;
    if (*(char *)0x146 == '\x18') {
      thunk_FUN_1000_7137();
    }
    func_0x00000646(0x1000,0);
  }
  return;
}

