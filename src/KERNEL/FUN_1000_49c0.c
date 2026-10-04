// Function: FUN_1000_49c0

int __cdecl16near FUN_1000_49c0(void)

{
  code *pcVar1;
  int iVar2;
  int in_CX;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined1 in_CF;
  
  pcVar1 = (code *)swi(0x21);
  iVar2 = (*pcVar1)();
  if ((!(bool)in_CF) && (iVar2 == in_CX)) {
    *(int *)(unaff_BP + -10) = *(int *)(unaff_BP + -10) + in_CX;
    return iVar2;
  }
  FUN_1000_47f3();
  return 0;
}

