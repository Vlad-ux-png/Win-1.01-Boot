// Function: FUN_1000_5e3e

undefined4 __cdecl16near FUN_1000_5e3e(void)

{
  uint *puVar1;
  uint *puVar2;
  int in_AX;
  uint uVar3;
  int in_DX;
  uint extraout_DX;
  uint *puVar4;
  int unaff_DI;
  uint uVar5;
  undefined2 unaff_DS;
  bool bVar6;
  bool bVar7;
  undefined2 uVar8;
  
  *(undefined1 *)(unaff_DI + 10) = 0;
  *(int *)(unaff_DI + 0xc) = in_DX - in_AX;
  uVar3 = *(uint *)(unaff_DI + 8);
  if ((*(int *)(unaff_DI + 0x1e) != unaff_DI) &&
     (uVar5 = uVar3, (*(byte *)(unaff_DI + 0xb) & 8) == 0)) {
    do {
      uVar5 = *(uint *)(unaff_DI + 6);
      if (*(int *)(unaff_DI + 1) == unaff_DI) break;
    } while ((*(byte *)(unaff_DI + 5) & 8) != 0);
    uVar3 = uVar3 - *(int *)(unaff_DI + 0x1e);
    if (*(uint *)(unaff_DI + 8) < uVar3) {
      uVar3 = *(uint *)(unaff_DI + 8);
    }
  }
  *(uint *)(unaff_DI + 0x16) = uVar3;
  uVar8 = 0;
  puVar4 = (uint *)0x0;
  bVar6 = true;
  do {
    do {
      FUN_1000_589a();
      if (bVar6) goto LAB_1000_5ec7;
      bVar6 = *(char *)((int)puVar4 + 3) == '\0';
    } while (((!bVar6) ||
             (bVar7 = *puVar4 == *(uint *)(unaff_DI + 0x16), bVar6 = bVar7,
             *(uint *)(unaff_DI + 0x16) <= *puVar4)) || (FUN_1000_60eb(uVar8), bVar6 = true, bVar7))
    ;
    uVar3 = *puVar4;
    puVar2 = (uint *)*(undefined2 *)(unaff_DI + 0xe);
    FUN_1000_584f();
    uVar3 = *(uint *)(unaff_DI + 1);
    FUN_1000_5a42();
    *puVar4 = uVar3;
    *(byte *)(puVar4 + 1) = (byte)puVar4[1] | 0x40;
    *(undefined1 *)(unaff_DI + 10) = 1;
    puVar1 = (uint *)(unaff_DI + 0xc);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - extraout_DX;
    bVar6 = *puVar1 == 0;
    puVar4 = puVar2;
  } while (extraout_DX <= uVar3 && !bVar6);
LAB_1000_5ec7:
  return CONCAT22(in_DX,in_AX);
}

