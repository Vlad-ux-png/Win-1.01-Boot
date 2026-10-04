// Function: FUN_1000_2e43

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_1000_2e43(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint *in_BX;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint unaff_SS;
  uint *puVar9;
  undefined4 uVar10;
  uint uStack_6;
  
  uStack_6 = DAT_1000_0016;
  DAT_1000_2d2c = (undefined1 *)0x0;
  uVar2 = uStack_6;
  while( true ) {
    uStack_6 = uVar2;
    puVar4 = in_BX;
    if (uStack_6 == 0) {
      puVar9 = (uint *)FUN_1000_2e99();
      return puVar9;
    }
    uVar2 = *(uint *)0x0;
    uVar7 = uStack_6;
    if (*(uint *)0x4 == param_1) break;
    uVar7 = *(uint *)0x4;
    puVar4 = (uint *)(*(int *)0x2 + 0x10);
    if (unaff_SS == uVar7) {
      puVar4 = (uint *)&stack0xfffe;
      DAT_1000_2d2c = &stack0xfffe;
    }
    do {
      uVar3 = 0;
      in_BX = puVar4;
      if ((*puVar4 & 1) != 0) {
        if ((puVar4[2] == param_1) && (**(int **)(puVar4 + 1) != 0x3fcd)) {
          uVar10 = FUN_1000_2dd6();
          uVar5 = (uint)((ulong)uVar10 >> 0x10);
          uVar3 = (uint)uVar10;
          if ((puVar4[2] == uVar5) || ((param_1 & 0xe001) != 0)) goto LAB_1000_2ea9;
          puVar6 = puVar4;
          uVar8 = uVar7;
          if ((_UNK_1000_1320 == puVar4) && (puVar6 = _UNK_1000_1320, unaff_SS == uVar7)) {
            if (_UNK_1000_1324 != 0) {
              _UNK_1000_1322[2] = _UNK_1000_132c;
              _UNK_1000_1322[1] = _UNK_1000_132a;
              _UNK_1000_1322[-1] = _UNK_1000_1326;
              uVar8 = unaff_SS;
            }
            puVar6 = _UNK_1000_1320;
            _UNK_1000_1322 = _UNK_1000_1320;
            _UNK_1000_132c = _UNK_1000_1320[2];
            _UNK_1000_132a = _UNK_1000_1320[1];
            _UNK_1000_1326 = _UNK_1000_1320[-1];
            _UNK_1000_1324 = uVar8;
            _UNK_1000_1320[2] = 0x1000;
            puVar6[1] = 0x1334;
            uVar8 = 0x1000;
            puVar6 = (uint *)0x1328;
          }
          LOCK();
          uVar1 = puVar6[1];
          puVar6[1] = uStack_6;
          UNLOCK();
          puVar6[-1] = uVar1;
          puVar6[1] = puVar6[1] & 0xf | (param_1 >> 1) << 4;
          puVar6[2] = uVar5 + ((uStack_6 >> 4) - (param_1 >> 1));
          uStack_6 = CONCAT11((char)(uVar1 >> 8),4);
        }
        else if ((puVar4[-1] == param_1) && (**(int **)(puVar4 + 1) != 0x3fcd)) goto LAB_1000_2ea9;
        uVar3 = uVar3 + 1;
        in_BX = puVar4;
      }
      puVar4 = (uint *)(uVar3 ^ *in_BX);
    } while ((puVar4 != (uint *)0x0) && (in_BX < puVar4));
  }
LAB_1000_2ea9:
  return (uint *)CONCAT22(uVar7,puVar4);
}

