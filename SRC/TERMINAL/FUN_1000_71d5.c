// Function: FUN_1000_71d5

void __cdecl16near FUN_1000_71d5(void)

{
  undefined2 unaff_DS;
  
  if ((*(byte *)0xed & 8) != 0) {
    *(byte *)0xed = *(byte *)0xed & 0xf7;
    func_0x00000459(0x1000);
  }
  return;
}

