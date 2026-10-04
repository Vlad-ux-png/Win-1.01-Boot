// Function: FUN_1000_5aa0

uint __cdecl16near FUN_1000_5aa0(void)

{
  uint uVar1;
  int iVar2;
  char *unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  uVar1 = *(int *)(unaff_DI + 3) + 1;
  if ((((*(char **)(unaff_DI + 0x1e) != unaff_DI) && ((unaff_DI[0xb] & 8U) == 0)) &&
      ((*unaff_DI == 'Z' || ((unaff_DI[5] & 8U) != 0)))) &&
     ((uint)(*(int *)(unaff_DI + 8) - *(int *)(unaff_DI + 0x1e)) < *(uint *)(unaff_DI + 8))) {
    iVar2 = (*(int *)(unaff_DI + 8) - *(int *)(unaff_DI + 0x1e)) - *(int *)(unaff_DI + 8);
    if ((uint)-iVar2 < uVar1) {
      uVar1 = uVar1 + iVar2;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}

