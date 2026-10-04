// Function: FREELIBRARY

void __stdcall16far FREELIBRARY(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  iVar1 = FUN_1000_08df(param_1);
  bVar4 = iVar1 == 0;
  if (!bVar4) {
    FUN_1000_082b(iVar1);
    if (bVar4) {
      if (*(int *)0x8 != 0) {
        FUN_1000_09f3(*(undefined2 *)(*(int *)0x8 + 8));
      }
      FUN_1000_1040(iVar1);
    }
    else if ((*(byte *)0xc & 2) != 0) {
      iVar3 = *(int *)(*(int *)0x8 + 8);
      FUN_1000_09f3(param_1);
      if (param_1 == iVar3) {
        iVar2 = *(int *)0x4;
        iVar3 = *(int *)0x6;
        do {
          if ((*(int *)0x1 == iVar1) && ((*(byte *)0x5 & 4) != 0)) {
            iVar2 = *(int *)0xa;
            if (iVar2 == 0) {
              iVar2 = iVar3 + 1;
            }
            goto LAB_1000_111e;
          }
          iVar3 = *(int *)0x8;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
        iVar2 = 0;
LAB_1000_111e:
        *(int *)(*(int *)0x8 + 8) = iVar2;
      }
    }
  }
  GLOBALCOMPACT(0,0);
  return;
}

