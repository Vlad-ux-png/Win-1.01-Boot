// Function: FUN_1000_573b

undefined2 __cdecl16near FUN_1000_573b(void)

{
  undefined2 uVar1;
  int in_CX;
  int unaff_DI;
  undefined2 unaff_ES;
  undefined1 in_ZF;
  
  FUN_1000_543d();
  if (!(bool)in_ZF) {
    if ((in_CX != 0) && (*(int *)(unaff_DI + 1) != in_CX)) {
      return 0xffff;
    }
    FUN_1000_584f();
    FUN_1000_5a42();
  }
  uVar1 = FUN_1000_53c9();
  return uVar1;
}

