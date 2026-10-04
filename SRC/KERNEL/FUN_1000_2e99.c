// Function: FUN_1000_2e99

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_1000_2e99(void)

{
  uint uVar1;
  uint uVar2;
  uint in_CX;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint *unaff_BP;
  uint unaff_SI;
  uint uVar6;
  uint uVar7;
  uint unaff_SS;
  uint *puVar8;
  undefined4 uVar9;
  uint uStack_2;
  
  puVar4 = (uint *)0x0;
  if (DAT_1000_2d2c == (uint *)0x0) {
    uStack_2 = 0;
    uVar6 = unaff_SS;
    do {
      puVar4 = unaff_BP;
      DAT_1000_2d2c = unaff_BP;
      do {
        do {
          uVar2 = 0;
          puVar5 = puVar4;
          if ((*puVar4 & 1) != 0) {
            if ((puVar4[2] == unaff_SI) && (**(int **)(puVar4 + 1) != 0x3fcd)) {
              uVar9 = FUN_1000_2dd6();
              uVar3 = (uint)((ulong)uVar9 >> 0x10);
              uVar2 = (uint)uVar9;
              if ((puVar4[2] == uVar3) || ((unaff_SI & 0xe001) != 0)) goto LAB_1000_2ea9;
              puVar5 = puVar4;
              uVar7 = uVar6;
              if ((_UNK_1000_1320 == puVar4) && (puVar5 = _UNK_1000_1320, unaff_SS == uVar6)) {
                if (_UNK_1000_1324 != 0) {
                  _UNK_1000_1322[2] = _UNK_1000_132c;
                  _UNK_1000_1322[1] = _UNK_1000_132a;
                  _UNK_1000_1322[-1] = _UNK_1000_1326;
                  uVar7 = unaff_SS;
                }
                puVar5 = _UNK_1000_1320;
                _UNK_1000_1322 = _UNK_1000_1320;
                _UNK_1000_132c = _UNK_1000_1320[2];
                _UNK_1000_132a = _UNK_1000_1320[1];
                _UNK_1000_1326 = _UNK_1000_1320[-1];
                _UNK_1000_1324 = uVar7;
                _UNK_1000_1320[2] = 0x1000;
                puVar5[1] = 0x1334;
                uVar7 = 0x1000;
                puVar5 = (uint *)0x1328;
              }
              LOCK();
              uVar1 = puVar5[1];
              puVar5[1] = in_CX;
              UNLOCK();
              puVar5[-1] = uVar1;
              puVar5[1] = puVar5[1] & 0xf | (unaff_SI >> 1) << 4;
              puVar5[2] = uVar3 + ((in_CX >> 4) - (unaff_SI >> 1));
              unaff_SI = unaff_BP[2];
              in_CX = CONCAT11((char)(uVar1 >> 8),4);
            }
            else if ((puVar4[-1] == unaff_SI) && (**(int **)(puVar4 + 1) != 0x3fcd))
            goto LAB_1000_2ea9;
            uVar2 = uVar2 + 1;
            puVar5 = puVar4;
          }
          puVar4 = (uint *)(uVar2 ^ *puVar5);
        } while ((puVar4 != (uint *)0x0) && (puVar5 < puVar4));
        if (uStack_2 == 0) {
          puVar8 = (uint *)FUN_1000_2e99();
          return puVar8;
        }
        puVar8 = (uint *)0x0;
        puVar4 = puVar5;
        uVar6 = uStack_2;
        if (*(uint *)0x4 == unaff_SI) goto LAB_1000_2ea9;
        uVar6 = *(uint *)0x4;
        puVar4 = (uint *)(*(int *)0x2 + 0x10);
        in_CX = uStack_2;
        uStack_2 = *puVar8;
      } while (unaff_SS != uVar6);
    } while( true );
  }
  uVar6 = 0;
LAB_1000_2ea9:
  return (uint *)CONCAT22(uVar6,puVar4);
}

