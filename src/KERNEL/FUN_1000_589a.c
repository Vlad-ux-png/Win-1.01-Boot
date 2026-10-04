// Function: FUN_1000_589a

void __cdecl16near FUN_1000_589a(void)

{
  int in_CX;
  int *unaff_SI;
  int unaff_DI;
  undefined2 unaff_DS;
  
  if (unaff_SI == (int *)0x0) {
    unaff_SI = (int *)*(undefined2 *)(unaff_DI + 0x1a);
    in_CX = *(int *)(unaff_DI + 0x1c);
  }
  if ((in_CX != 0) && ((*(byte *)(*(int *)(unaff_DI + 0xc) + 2) & 0x40) == 0)) {
    return;
  }
  return;
}

