// Function: FUN_1000_4d8c

void __cdecl16near FUN_1000_4d8c(void)

{
  uint *puVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  uint in_DX;
  uint *puVar10;
  uint *unaff_DI;
  undefined2 unaff_DS;
  bool bVar11;
  uint *puStack_6;
  
  unaff_DI[5] = 0x1001;
  if (unaff_DI[1] != 0) {
    *(byte *)(unaff_DI + 5) = (byte)unaff_DI[5] - 1;
  }
  do {
    puStack_6 = (uint *)0x0;
    uVar9 = unaff_DI[2];
    puVar7 = (uint *)unaff_DI[4];
    do {
      puVar5 = (uint *)*puVar7;
      if (((uint)puVar5 & 1) == 0) {
        if (unaff_DI[1] == 0) {
          puVar10 = puVar5;
          if (((*puVar5 & 2) != 0) &&
             (puVar10 = (uint *)puVar5[2], *(byte *)((int)puVar10 + 3) == 0)) {
            puVar7 = (uint *)FUN_1000_4d15();
            *unaff_DI = (uint)puVar5;
            *(byte *)unaff_DI = (byte)*unaff_DI | 3;
            unaff_DI[1] = (uint)puVar7;
            *puVar7 = *puVar7 & 3;
            *puVar7 = *puVar7 | (uint)unaff_DI;
            puVar5[1] = (uint)unaff_DI;
            *(byte *)puVar5 = (byte)*puVar5 & 0xfc;
            *(int *)unaff_DI[2] = (int)(unaff_DI + 3);
            FUN_1000_4f63();
            if ((*(byte *)*puVar5 & 1) == 0) {
              FUN_1000_4bfb();
              uVar9 = uVar9 - 1;
            }
            goto LAB_1000_4daf;
          }
          FUN_1000_4d49();
          if (puVar10 == (uint *)0x0) goto LAB_1000_4e61;
          puVar5 = (uint *)*puVar7;
          puVar8 = (uint *)FUN_1000_4d15();
          if (puVar7 != unaff_DI) {
            puVar7[1] = (uint)unaff_DI;
            puVar5 = puVar7;
          }
          *unaff_DI = (uint)puVar5;
          *(byte *)unaff_DI = (byte)*unaff_DI | 3;
          unaff_DI[1] = (uint)puVar8;
          *puVar8 = *puVar8 & 3;
          *puVar8 = *puVar8 | (uint)unaff_DI;
          LOCK();
          *(int *)unaff_DI[2] = (int)(unaff_DI + 3);
          UNLOCK();
          if (puVar7 != unaff_DI) {
            uVar9 = uVar9 + 1;
            unaff_DI[2] = unaff_DI[2] + 1;
          }
          puVar7 = unaff_DI;
          FUN_1000_4f63();
          *(byte *)puVar10 = (byte)*puVar10 & 0xfd;
          uVar3 = unaff_DI[2];
          FUN_1000_4cde();
          uVar9 = uVar9 - (uVar3 - unaff_DI[2]);
        }
        else {
LAB_1000_4e61:
          if (((puStack_6 != puVar7) && ((*puVar7 & 1) == 0)) &&
             ((puStack_6 == (uint *)0x0 ||
              ((byte *)((puStack_6[1] - (int)puStack_6) + (int)puVar7) < (byte *)puVar7[1])))) {
            puStack_6 = puVar7;
          }
        }
        puVar5 = (uint *)(*puVar7 & 0xfffc);
      }
      else {
        puVar5 = (uint *)((uint)puVar5 & 0xfffc);
      }
LAB_1000_4daf:
      uVar9 = uVar9 - 1;
      puVar7 = puVar5;
    } while (uVar9 != 0);
    do {
      do {
        if (puStack_6 == (uint *)0x0) {
          return;
        }
        uVar3 = puStack_6[1];
        puVar1 = unaff_DI + 5;
        uVar4 = *puVar1;
        *(byte *)puVar1 = (byte)*puVar1 - 1;
        if (SBORROW1((byte)uVar4,'\x01') != (char)(byte)*puVar1 < '\0') {
          return;
        }
        if (in_DX <= -((int)puStack_6 - uVar3)) {
          return;
        }
        pbVar2 = (byte *)((int)unaff_DI + 0xb);
        *pbVar2 = *pbVar2 - 1;
      } while (*pbVar2 == 0);
      *(byte *)(unaff_DI + 5) = (byte)unaff_DI[5] + 1;
      bVar11 = true;
      while (FUN_1000_53f5(), !bVar11) {
        iVar6 = FUN_1000_4f63(uVar9);
        bVar11 = iVar6 == 0;
        if (!bVar11) {
          FUN_1000_4cde();
          *(undefined2 *)0x0 = 0;
          *(byte *)0x2 = *(byte *)0x2 | 0x40;
          puVar1 = unaff_DI + 5;
          *(byte *)puVar1 = (byte)*puVar1 | 0x80;
          bVar11 = (byte)*puVar1 == 0;
        }
      }
    } while ((unaff_DI[5] & 0x80) == 0);
    *(byte *)(unaff_DI + 5) = (byte)unaff_DI[5] ^ 0x80;
  } while( true );
}

