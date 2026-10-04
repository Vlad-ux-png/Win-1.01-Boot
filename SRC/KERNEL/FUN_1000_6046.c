// Function: FUN_1000_6046

uint __cdecl16near FUN_1000_6046(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *unaff_DI;
  int iVar5;
  int iVar6;
  undefined2 unaff_DS;
  undefined4 uVar7;
  
  unaff_DI[0xb] = '\0';
  uVar7 = FUN_1000_5c27();
  uVar2 = (uint)uVar7;
  if ((int)((ulong)uVar7 >> 0x10) == 0) {
    iVar5 = *(int *)(unaff_DI + 6);
    uVar2 = 0;
    while (*unaff_DI != 'Z') {
      iVar5 = *(int *)(unaff_DI + 8);
      if ((*(char **)(unaff_DI + 1) == unaff_DI) ||
         ((((iVar6 = *(int *)(unaff_DI + 10), iVar6 != 0 && (*(char *)(iVar6 + 3) == '\0')) &&
           ((*(byte *)(iVar6 + 2) & 1) != 0)) && ((unaff_DI[5] & 8U) == 0)))) {
        uVar3 = *(uint *)(unaff_DI + 3);
        iVar4 = *(int *)(unaff_DI + 4);
        iVar6 = iVar5;
        do {
          iVar6 = *(int *)(unaff_DI + 8);
          if (*(char **)(unaff_DI + 1) != unaff_DI) {
            if (*unaff_DI != 'Z') {
              iVar1 = *(int *)(unaff_DI + 10);
              if ((iVar1 == 0) || (*(char *)(iVar1 + 3) != '\0')) break;
              if ((*(byte *)(iVar1 + 2) & 1) == 0) goto LAB_1000_60cd;
              if ((unaff_DI[5] & 8U) == 0) goto LAB_1000_60c8;
            }
            uVar3 = uVar3 + 1 + (-*(int *)(unaff_DI + 0x1e) - (iVar6 - *(int *)(unaff_DI + 8)));
            if (uVar3 != 0) {
              uVar3 = uVar3 - 1;
            }
            break;
          }
LAB_1000_60c8:
          uVar3 = uVar3 + *(int *)(unaff_DI + 3) + 1;
LAB_1000_60cd:
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        if (uVar2 < uVar3) {
          uVar2 = uVar3;
        }
      }
    }
  }
  uVar3 = uVar2;
  if ((uVar2 != 0) && (uVar3 = 0, uVar2 != 1)) {
    uVar3 = uVar2 - 2;
  }
  return uVar3 & 0xfffe;
}

