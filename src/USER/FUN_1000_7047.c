// Function: FUN_1000_7047

void __cdecl16near FUN_1000_7047(void)

{
  int in_BX;
  undefined2 unaff_DS;
  
  *(undefined2 *)(in_BX + 8) = 0;
  if (*(char *)(in_BX + 0xb) != '\0') {
    *(undefined1 *)(in_BX + 0xb) = 0;
    *(int *)0x54a2 = *(int *)0x54a2 + -1;
  }
  return;
}

