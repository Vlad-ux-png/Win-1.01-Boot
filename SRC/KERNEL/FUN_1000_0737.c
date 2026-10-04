// Function: FUN_1000_0737

int FUN_1000_0737(byte *param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined2 uVar8;
  bool bVar9;
  byte *pbVar10;
  
  uVar8 = (undefined2)((ulong)param_1 >> 0x10);
  pbVar5 = (byte *)param_1;
  if (pbVar5[1] == 0x23) {
    iVar4 = *param_1 - 1;
    pbVar6 = pbVar5 + 2;
    iVar2 = 0;
    do {
      pbVar10 = pbVar6;
      pbVar6 = pbVar6 + 1;
      if (9 < (byte)(*pbVar10 - 0x30)) goto LAB_1000_0746;
      iVar2 = iVar2 * 10 + (uint)(byte)(*pbVar10 - 0x30);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  else {
LAB_1000_0746:
    pbVar6 = (byte *)*(undefined2 *)0x26;
    iVar4 = param_2;
    do {
      pbVar6 = pbVar6 + *pbVar6 + 3;
      while( true ) {
        pbVar7 = pbVar6 + 1;
        uVar3 = (uint)*pbVar6;
        if (uVar3 == 0) break;
        if (*param_1 == *pbVar6) {
          pbVar6 = pbVar5 + 1;
          bVar9 = pbVar6 == (byte *)0x0;
          do {
            if (uVar3 == 0) break;
            uVar3 = uVar3 - 1;
            pbVar1 = pbVar6;
            pbVar6 = pbVar6 + 1;
            pbVar10 = pbVar7;
            pbVar7 = pbVar7 + 1;
            bVar9 = *pbVar10 == *pbVar1;
          } while (bVar9);
          if (bVar9) {
            iVar2 = *(int *)pbVar7;
            if (param_2 == iVar4) {
              return iVar2;
            }
            goto LAB_1000_07c4;
          }
        }
        pbVar6 = pbVar7 + uVar3 + 2;
      }
      iVar2 = 0;
      if (param_2 != iVar4) goto LAB_1000_07c4;
      pbVar10 = (byte *)FUN_1000_0a28(*(undefined2 *)0x20,0x2c,0xffff,param_2);
      iVar4 = (int)((ulong)pbVar10 >> 0x10);
      pbVar6 = (byte *)pbVar10;
    } while (pbVar10 != (byte *)0x0);
    iVar2 = 0;
LAB_1000_07c4:
    FUN_1000_0ace(0x2c,param_2);
  }
  return iVar2;
}

