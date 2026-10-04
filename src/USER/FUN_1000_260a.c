// Function: FUN_1000_260a

undefined2 __cdecl16near FUN_1000_260a(void)

{
  char *pcVar1;
  undefined2 uVar2;
  int in_BX;
  undefined2 unaff_DS;
  undefined1 in_ZF;
  
  uVar2 = FUN_1000_7ae2(in_BX);
  if ((!(bool)in_ZF) && (*(int *)(in_BX + 6) != 0)) {
    pcVar1 = (char *)(*(int *)(in_BX + 6) + 3);
    *pcVar1 = *pcVar1 + '\x01';
    return uVar2;
  }
  return 0;
}

