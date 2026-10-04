// Function: FUN_1000_594f

long __cdecl16near FUN_1000_594f(void)

{
  byte in_AL;
  int iVar1;
  undefined2 in_CX;
  int iVar2;
  uint uVar3;
  uint extraout_DX;
  uint extraout_DX_00;
  uint uVar4;
  int *piVar5;
  int iVar6;
  uint unaff_DI;
  undefined2 uVar7;
  undefined2 unaff_DS;
  bool bVar8;
  ulong uVar9;
  undefined4 uVar10;
  long lVar11;
  
  uVar9 = FUN_1000_542c();
  uVar3 = (uint)(uVar9 >> 0x10);
  iVar2 = *(int *)(unaff_DI + 4);
  uVar7 = *(undefined2 *)(unaff_DI + 6);
  piVar5 = (int *)0x8;
  if ((uVar9 & 1) != 0) {
    uVar7 = *(undefined2 *)(unaff_DI + 8);
    piVar5 = (int *)0x6;
  }
  iVar6 = *piVar5;
LAB_1000_596c:
  do {
    bVar8 = *(uint *)(unaff_DI + 1) < unaff_DI;
    if (*(uint *)(unaff_DI + 1) == unaff_DI) {
      FUN_1000_5aa0();
      uVar3 = extraout_DX_00;
      if (!bVar8) goto LAB_1000_59e7;
      if ((*(uint *)(unaff_DI + 0x1e) != unaff_DI) && ((char)piVar5 == '\x06')) goto LAB_1000_59d2;
    }
    else {
      iVar1 = *(int *)(unaff_DI + 10);
      if ((char)piVar5 != '\b') {
        if ((*(uint *)(unaff_DI + 0x1e) != unaff_DI) &&
           ((iVar1 == 0 || ((*(byte *)(unaff_DI + 5) & 8) == 0)))) goto LAB_1000_59d2;
        goto LAB_1000_59cd;
      }
      if ((iVar1 != 0) &&
         ((((*(char *)(iVar1 + 3) == (char)((uint)piVar5 >> 8) && ((in_AL & 2) == 0)) &&
           (uVar3 <= *(int *)(unaff_DI + 3) + 1U)) && (iVar1 = FUN_1000_5a82(), iVar1 != 0)))) {
        iVar6 = *(int *)(unaff_DI + 6);
        FUN_1000_5dcc();
        uVar3 = extraout_DX;
        goto LAB_1000_596c;
      }
    }
LAB_1000_59cd:
    iVar6 = *piVar5;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
LAB_1000_59d2:
      uVar10 = FUN_1000_5c27();
      uVar3 = (uint)((ulong)uVar10 >> 0x10);
      uVar4 = (uint)uVar10;
      if (uVar4 < uVar3) {
        if (uVar4 != 0) {
          uVar4 = uVar4 - 1;
        }
        return (ulong)uVar4 << 0x10;
      }
LAB_1000_59e7:
      if (*(int *)(unaff_DI + 3) + 1U != uVar3) {
        if ((char)piVar5 == '\x06') {
          iVar6 = *(int *)(unaff_DI + 8) - uVar3;
          FUN_1000_58bc();
        }
        else {
          FUN_1000_58bc();
        }
      }
      *(undefined2 *)(unaff_DI + 1) = in_CX;
      *(undefined2 *)(unaff_DI + 0xc) = 0;
      *(undefined2 *)(unaff_DI + 0xe) = 0;
      *(byte *)(unaff_DI + 5) = in_AL & 0xc;
      if ((in_AL & 0x40) != 0) {
        FUN_1000_591e();
      }
      lVar11 = FUN_1000_5a42();
      return lVar11;
    }
  } while( true );
}

