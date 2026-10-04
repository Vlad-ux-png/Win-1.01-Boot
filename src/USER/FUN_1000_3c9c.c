// Function: FUN_1000_3c9c

void __cdecl16near FUN_1000_3c9c(void)

{
  undefined2 in_AX;
  undefined2 in_DX;
  undefined2 unaff_DS;
  
  if (*(int *)0x1c == 2) {
    *(undefined2 *)0x24 = in_AX;
    *(undefined2 *)0x26 = in_DX;
    *(int *)0x1c = *(int *)0x1c + -1;
  }
  return;
}

