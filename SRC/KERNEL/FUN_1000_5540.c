// Function: FUN_1000_5540

undefined2 * __cdecl16near FUN_1000_5540(void)

{
  byte in_AL;
  byte bVar1;
  int iVar2;
  byte extraout_AH;
  undefined2 *puVar3;
  uint in_CX;
  undefined2 *in_DX;
  int extraout_DX;
  uint extraout_DX_00;
  uint extraout_DX_01;
  uint extraout_DX_02;
  uint extraout_DX_03;
  uint extraout_DX_04;
  uint extraout_DX_05;
  uint uVar4;
  int in_BX;
  uint uVar5;
  int *unaff_SI;
  int unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  bool bVar6;
  undefined1 in_ZF;
  undefined1 uVar7;
  ulong uVar8;
  
  FUN_1000_543d();
  if ((bool)in_ZF) {
    uVar7 = true;
    if ((in_CX & 0x40) != 0) {
      if (in_BX == 0) {
        return in_DX;
      }
      bVar1 = in_AL | 2 | *(byte *)(unaff_SI + 1) & 0xc;
      bVar6 = (bVar1 & 8) == 0;
      if (!bVar6) {
        bVar1 = bVar1 | 1;
        bVar6 = bVar1 == 0;
      }
      *(byte *)(unaff_DI + 0xb) = bVar1;
      iVar2 = FUN_1000_594f();
      if (bVar6) {
        return (undefined2 *)0x0;
      }
      *(byte *)(unaff_SI + 1) = *(byte *)(unaff_SI + 1) ^ 0x40;
      *unaff_SI = iVar2;
      bVar1 = *(byte *)(unaff_SI + 1);
      *(undefined2 *)(unaff_DI + 10) = unaff_SI;
      *(byte *)(unaff_DI + 5) = bVar1 & 0xc;
      puVar3 = (undefined2 *)FUN_1000_5811();
      return puVar3;
    }
  }
  else {
    if ((in_AL & 0x80) != 0) {
      if (unaff_SI != (int *)0x0) {
        FUN_1000_584f();
        *(byte *)(unaff_SI + 1) = *(byte *)(unaff_SI + 1) & 0xfe;
        *(byte *)(unaff_SI + 1) = *(byte *)(unaff_SI + 1) | extraout_AH & 0x31;
        if ((in_CX & 0x40) != 0) {
          if ((extraout_AH & 0x30) != 0) {
            *unaff_SI = extraout_DX;
            return in_DX;
          }
          return in_DX;
        }
      }
      uVar8 = FUN_1000_5811();
      if ((uVar8 & 0x3000) != 0) {
        *(undefined2 *)(unaff_DI + 1) = (int)(uVar8 >> 0x10);
        return in_DX;
      }
      return in_DX;
    }
    if (in_BX != 0) {
      FUN_1000_542c();
      uVar5 = *(uint *)(unaff_DI + 8);
      uVar4 = extraout_DX_00;
      if (extraout_DX_00 <= uVar5) {
LAB_1000_5624:
        if (uVar4 + 2 < uVar5) {
          FUN_1000_58bc();
          FUN_1000_5a42();
          return in_DX;
        }
        return in_DX;
      }
      if (*(int *)(unaff_DI + 1) == unaff_DI) {
        bVar6 = extraout_DX_00 < uVar5;
        FUN_1000_5aa0(in_BX);
        if (!bVar6) {
          FUN_1000_58fc();
          uVar4 = extraout_DX_01;
          if ((in_AL & 0x40) != 0) {
            FUN_1000_591e();
            uVar4 = extraout_DX_02;
          }
          uVar5 = *(uint *)(unaff_DI + 8);
          goto LAB_1000_5624;
        }
      }
      if ((in_AL & 8) != 0) {
        return (undefined2 *)0x0;
      }
      if ((in_CX != 0) && ((in_AL & 2) == 0)) {
        return (undefined2 *)0x0;
      }
      bVar6 = true;
      if ((((uint)in_DX & 1) != 0) && (bVar6 = false, (in_AL & 2) == 0)) {
        FUN_1000_5c27();
        return (undefined2 *)0x0;
      }
      puVar3 = (undefined2 *)FUN_1000_594f();
      if (!bVar6) {
        if (((uint)in_DX & 1) == 0) {
          puVar3 = in_DX;
        }
        FUN_1000_5dcc();
        return puVar3;
      }
      puVar3 = in_DX;
      if (((uint)in_DX & 1) == 0) {
        puVar3 = (undefined2 *)*in_DX;
      }
      FUN_1000_542c();
      uVar5 = *(uint *)(unaff_DI + 8);
      if (*(int *)(unaff_DI + 1) == unaff_DI) {
        bVar6 = extraout_DX_03 < uVar5;
        FUN_1000_5aa0();
        if (!bVar6) {
          FUN_1000_58fc();
          uVar4 = extraout_DX_04;
          if ((in_AL & 0x40) != 0) {
            FUN_1000_591e();
            uVar4 = extraout_DX_05;
          }
          uVar5 = *(uint *)(unaff_DI + 8);
          goto LAB_1000_5624;
        }
      }
      FUN_1000_5c27();
      return (undefined2 *)0x0;
    }
    if (in_CX != 0) {
      return (undefined2 *)0x0;
    }
    if ((in_AL & 2) == 0) {
      return (undefined2 *)0x0;
    }
    uVar7 = 1;
    FUN_1000_60eb();
  }
  if ((bool)uVar7) {
    return (undefined2 *)0x0;
  }
  iVar2 = FUN_1000_584f();
  FUN_1000_5a42(iVar2,*(undefined2 *)(unaff_DI + 1));
  if ((bool)uVar7) {
    return (undefined2 *)0x0;
  }
  *unaff_SI = iVar2;
  *(byte *)(unaff_SI + 1) = *(byte *)(unaff_SI + 1) | 0x40;
  return in_DX;
}

