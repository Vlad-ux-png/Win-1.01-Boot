// Function: FUN_2000_2afe

int FUN_2000_2afe(int param_1,int param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  int iVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined2 unaff_DS;
  int iVar14;
  int iVar15;
  undefined1 uVar13;
  
  uVar2 = (uint)*(byte *)(param_3 + 0x38);
  piVar3 = (int *)FUN_2000_2c14();
  piVar1 = piVar3 + 2;
  iVar5 = *piVar3;
  iVar14 = *piVar1;
  cVar9 = (char)uVar2;
  if (param_2 == 0) {
    if (param_1 == 0) {
      return iVar5;
    }
    *piVar1 = *piVar1 + param_1;
    iVar15 = *piVar1;
    cVar7 = cVar9 + '\x01';
    cVar8 = *(char *)0x51c;
    iVar6 = *(int *)0x516 - *piVar1;
    if (*(int *)&SUB_0000_0462 <= piVar3[9] - *piVar1) {
      cVar8 = cVar9 + '\x02';
      iVar6 = piVar3[9] - *piVar1;
    }
  }
  else {
    *piVar3 = *piVar3 - param_2;
    cVar7 = '\0';
    iVar15 = 0;
    iVar4 = *piVar3 - piVar3[-7];
    iVar6 = *piVar3;
    cVar8 = cVar9;
    if (*(int *)&SUB_0000_0462 <= iVar4) {
      cVar7 = cVar9 + -1;
      iVar15 = piVar3[-7];
      iVar6 = iVar4;
    }
  }
  iVar4 = *piVar1 - *piVar3;
  if (iVar4 < *(int *)&SUB_0000_0462) {
    *piVar1 = iVar14;
    *piVar3 = iVar5;
    iVar5 = iVar15;
  }
  else {
    iVar10 = uVar2 + 1;
    iVar14 = *piVar3;
    uVar13 = (undefined1)((uint)iVar10 >> 8);
    uVar11 = CONCAT11(uVar13,cVar7);
    *(undefined2 *)0x53e = uVar11;
    uVar12 = CONCAT11(uVar13,cVar8);
    *(undefined2 *)0x5b6 = uVar12;
    FUN_2000_1b3e(iVar6,iVar15,uVar12,uVar11);
    FUN_2000_1b3e(iVar4,iVar14,iVar10,uVar2);
  }
  return iVar5;
}

