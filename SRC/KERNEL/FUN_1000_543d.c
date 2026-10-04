// Function: FUN_1000_543d

uint __cdecl16near FUN_1000_543d(void)

{
  uint uVar1;
  uint in_DX;
  int iVar2;
  char *unaff_DI;
  bool bVar3;
  
  bVar3 = (in_DX & 1) == 0;
  if (bVar3) {
    uVar1 = FUN_1000_53e2();
    if (bVar3) {
      return 0;
    }
  }
  else {
    uVar1 = in_DX;
    in_DX = 0;
  }
  if ((uVar1 != 0) &&
     (((iVar2 = uVar1 - 1, *unaff_DI != 'M' || (*(uint *)(unaff_DI + 10) != in_DX)) ||
      (*(char **)(unaff_DI + 1) == unaff_DI)))) {
    return 0;
  }
  return uVar1;
}

