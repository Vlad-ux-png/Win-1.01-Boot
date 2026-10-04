// Function: FUN_1000_32d6

void __cdecl16near FUN_1000_32d6(char param_1)

{
  undefined4 *puVar1;
  char cVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint extraout_DX;
  undefined4 *puVar10;
  char *pcVar11;
  char *pcVar12;
  undefined2 uVar13;
  
  pcVar3 = (code *)swi(0x21);
  (*pcVar3)();
  cVar4 = param_1 + -0x41;
  if (DAT_1000_0050 < 3) {
    cVar4 = param_1 + -0x40;
  }
  uVar13 = (undefined2)((ulong)DAT_1000_0048 >> 0x10);
  puVar10 = (undefined4 *)DAT_1000_0048;
  iVar8 = 0;
  do {
    puVar1 = puVar10;
    uVar13 = (undefined2)((ulong)*puVar1 >> 0x10);
    puVar10 = (undefined4 *)(undefined4 *)*puVar1;
    if (puVar10 == (undefined4 *)0xffff) {
      return;
    }
    pcVar12 = (char *)((int)puVar10 + 6);
    iVar7 = *(int *)(puVar10 + 1);
    iVar8 = iVar8 + iVar7;
    do {
      if (*pcVar12 != '\0') {
        if (DAT_1000_0050 < 3) {
          if ((pcVar12[0x1b] & 0x80U) == 0) {
            cVar2 = pcVar12[3];
            goto joined_r0x1000332b;
          }
        }
        else if ((*(uint *)(pcVar12 + 5) & 0x8080) == 0) {
          cVar2 = **(char **)(pcVar12 + 7);
joined_r0x1000332b:
          if (cVar4 == cVar2) {
            uVar9 = (uint)(byte)((char)iVar8 - (char)iVar7);
            iVar5 = DAT_1000_0012;
            do {
              if (*(int *)0x4a == 0) {
                iVar6 = 0x14;
                pcVar11 = (char *)0x18;
                do {
                  if ((char)uVar9 == *pcVar11) {
                    pcVar3 = (code *)swi(0x21);
                    (*pcVar3)();
                    pcVar3 = (code *)swi(0x21);
                    (*pcVar3)();
                    *pcVar11 = *pcVar11 + -1;
                    uVar9 = extraout_DX;
                  }
                  iVar6 = iVar6 + -1;
                  pcVar11 = pcVar11 + 1;
                } while (iVar6 != 0);
              }
              iVar5 = *(int *)0x42;
            } while (iVar5 != 0);
            pcVar3 = (code *)swi(0x21);
            (*pcVar3)();
          }
        }
      }
      pcVar12 = pcVar12 + DAT_1000_004c;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  } while( true );
}

