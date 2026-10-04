// Function: FUN_1000_173e

void FUN_1000_173e(int param_1,int param_2)

{
  undefined2 uVar1;
  int *piVar2;
  char *pcVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte bVar9;
  char cVar10;
  uint uVar8;
  int extraout_DX;
  int extraout_DX_00;
  int iVar11;
  uint *puVar12;
  int *piVar13;
  undefined2 unaff_ES;
  bool bVar14;
  
  iVar7 = DAT_1000_000e;
LAB_1000_1748:
  if (iVar7 != 0) {
    FUN_1000_09e1(iVar7);
    iVar7 = *(int *)0xc;
    iVar5 = *(int *)(*(int *)0xe + 0x10);
    piVar13 = (int *)(*(int *)0xe + 0x12);
    bVar14 = piVar13 == (int *)0x0;
    while (iVar5 != 0) {
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        piVar2 = piVar13;
        piVar13 = piVar13 + 1;
        bVar14 = param_2 == *piVar2;
      } while (!bVar14);
      if (!bVar14) break;
      piVar13[-1] = param_1;
    }
    goto LAB_1000_1748;
  }
  iVar5 = param_2 + -1;
  iVar7 = *(int *)0xa;
  if (*(int *)0xa == 0) {
    iVar7 = param_2;
  }
  uVar1 = *(undefined2 *)0x1;
  iVar11 = DAT_1000_000e;
  if (*(int *)0x0 == 0x454e) {
    iVar6 = DAT_1000_000c;
    if ((*(byte *)0x5 & 4) == 0) {
      iVar5 = *(int *)0x22;
      for (iVar6 = *(int *)0x1c; iVar6 != 0; iVar6 = iVar6 + -1) {
        if (*(int *)(iVar5 + 8) == iVar7) {
          uVar8 = *(uint *)(iVar5 + 4);
          if ((uVar8 & 4) == 0) {
            return;
          }
          iVar7 = 1 - (iVar6 - *(int *)0x1c);
          if (param_1 == 0) {
            *(undefined1 *)(*(int *)0x3e + iVar7 + -1) = 0xff;
          }
          iVar6 = DAT_1000_000c;
          if ((uVar8 & 1) == 0) {
            if (param_1 == 0) {
              *(byte *)(iVar5 + 4) = *(byte *)(iVar5 + 4) & 0xfb;
            }
            puVar12 = (uint *)*(undefined2 *)0x4;
            while( true ) {
              uVar8 = *puVar12;
              cVar10 = (char)(uVar8 >> 8);
              if ((char)uVar8 == '\0') break;
              puVar12 = puVar12 + 1;
              if (cVar10 != '\0') {
                if (cVar10 == -1) {
                  uVar8 = uVar8 & 0xff;
                  do {
                    if (((char)puVar12[3] == -0x16) && (*(int *)((int)puVar12 + 9) == param_2)) {
                      if (param_1 == 0) {
                        uVar4 = *(undefined2 *)((int)puVar12 + 7);
                        puVar12[3] = 0x3fcd;
                        *(char *)(puVar12 + 4) = (char)iVar7;
                        *(undefined2 *)((int)puVar12 + 9) = uVar4;
                      }
                      else {
                        *(int *)((int)puVar12 + 9) = param_1;
                      }
                    }
                    puVar12 = (uint *)((int)puVar12 + 0xb);
                    uVar8 = uVar8 - 1;
                  } while (uVar8 != 0);
                }
                else {
                  puVar12 = (uint *)((int)puVar12 + (uVar8 & 0xff) * 3);
                }
              }
            }
            return;
          }
          goto LAB_1000_17eb;
        }
        iVar5 = iVar5 + 10;
      }
    }
    else {
LAB_1000_17eb:
      while (iVar7 = iVar6, iVar7 != 0) {
        iVar6 = *(int *)0x0;
        iVar11 = 0;
        iVar5 = 0x3d;
        do {
          if (((*(char *)(iVar11 + 8) == -0x48) && (*(int *)(iVar11 + 9) == param_2)) &&
             (*(int *)(iVar11 + 9) = param_1, param_1 == 0)) {
            pcVar3 = (char *)(iVar11 + 8);
            pcVar3[0] = '\0';
            pcVar3[1] = '\0';
            *(undefined2 *)(iVar11 + 10) = 0;
            *(undefined2 *)(iVar11 + 0xc) = 0;
            LOCK();
            uVar4 = *(undefined2 *)0x6;
            *(undefined2 *)0x6 = (undefined2 *)(iVar11 + 0xe);
            UNLOCK();
            *(undefined2 *)(iVar11 + 0xe) = uVar4;
          }
          iVar11 = iVar11 + 8;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      puVar12 = (uint *)*(undefined2 *)0x4;
      if (param_1 == 0) {
        FUN_1000_09e1(param_2);
        iVar11 = *(int *)0xc;
        iVar7 = DAT_1000_000e;
        if (DAT_1000_000e != extraout_DX) {
          do {
            if (iVar7 == 0) {
              return;
            }
            FUN_1000_09e1(iVar7);
            iVar7 = *(int *)0xc;
          } while (iVar7 != extraout_DX);
          *(int *)0xc = iVar11;
          iVar11 = DAT_1000_000e;
        }
      }
      else {
        while( true ) {
          uVar8 = *puVar12;
          bVar9 = (byte)(uVar8 >> 8);
          iVar11 = DAT_1000_000e;
          if ((char)uVar8 == '\0') break;
          puVar12 = puVar12 + 1;
          if (bVar9 != 0) {
            if (bVar9 == 0xff) {
              uVar8 = uVar8 & 0xff;
              do {
                if (((*puVar12 & 2) != 0) && ((byte)puVar12[3] == 0xea)) {
                  FUN_1000_170a(*(undefined2 *)(byte *)((int)puVar12 + 7),
                                *(undefined2 *)(byte *)((int)puVar12 + 9));
                }
                puVar12 = (uint *)((int)puVar12 + 0xb);
                uVar8 = uVar8 - 1;
              } while (uVar8 != 0);
            }
            else {
              uVar8 = uVar8 & 0xff;
              iVar5 = (bVar9 - 1) * 10 + *(int *)0x22;
              iVar7 = 0;
              if ((*(byte *)(iVar5 + 4) & 2) != 0) {
                iVar7 = *(int *)(iVar5 + 8);
              }
              do {
                if (((*puVar12 & 2) != 0) && (iVar7 != 0)) {
                  FUN_1000_170a(*(undefined2 *)(byte *)((int)puVar12 + 1),iVar7);
                  iVar7 = extraout_DX_00;
                }
                puVar12 = (uint *)((int)puVar12 + 3);
                uVar8 = uVar8 - 1;
              } while (uVar8 != 0);
            }
          }
        }
      }
    }
  }
  DAT_1000_000e = iVar11;
  return;
}

