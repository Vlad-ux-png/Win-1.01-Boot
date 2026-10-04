// Function: GETATOMNAME

uint __stdcall16far GETATOMNAME(int param_1,undefined1 *param_2,uint param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  char *pcVar10;
  undefined2 uVar11;
  undefined2 unaff_DS;
  
  uVar11 = (undefined2)((ulong)param_2 >> 0x10);
  puVar9 = (undefined1 *)param_2;
  *param_2 = 0;
  if (param_3 < 0xc000) {
    if (param_3 != 0) {
      pcVar10 = puVar9 + 1;
      *param_2 = 0x23;
      iVar7 = param_1;
      do {
        uVar4 = param_3 % 10;
        iVar7 = iVar7 + -1;
        if (param_3 / 10 == 0) break;
        param_3 = param_3 / 10;
      } while (iVar7 != 0);
      iVar6 = param_1 - iVar7;
      do {
        pcVar3 = pcVar10;
        pcVar10 = pcVar10 + 1;
        *pcVar3 = (char)uVar4 + '0';
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      *pcVar10 = '\0';
      return (param_1 - iVar7) + 1;
    }
  }
  else {
    iVar7 = param_3 * 4;
    if ((*(int *)(iVar7 + 2) != 0) && (uVar4 = (uint)*(byte *)(iVar7 + 4), uVar4 != 0)) {
      if (param_1 <= (int)uVar4) {
        uVar4 = param_1 - 1;
      }
      puVar8 = (undefined1 *)(iVar7 + 5);
      for (uVar5 = uVar4; uVar5 != 0; uVar5 = uVar5 - 1) {
        puVar2 = puVar9;
        puVar9 = puVar9 + 1;
        puVar1 = puVar8;
        puVar8 = puVar8 + 1;
        *puVar2 = *puVar1;
      }
      *puVar9 = 0;
      return uVar4;
    }
  }
  return 0;
}

