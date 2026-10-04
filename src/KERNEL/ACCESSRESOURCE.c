// Function: ACCESSRESOURCE

undefined4 __stdcall16far ACCESSRESOURCE(int *param_1,undefined2 param_2)

{
  code *pcVar1;
  ulong uVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined2 uVar8;
  int unaff_BP;
  int iVar9;
  int unaff_DS;
  bool bVar10;
  int iVar11;
  
  iVar9 = unaff_BP + 1;
  uVar3 = FUN_1000_08df(param_2);
  iVar11 = param_1[1];
  iVar7 = *param_1;
  iVar6 = *(int *)*(undefined2 *)0x24;
  uVar8 = 0xa400;
  iVar4 = OPENFILE(0xa400,*(undefined2 *)0xa,uVar3,*(undefined2 *)0xa,uVar3);
  if (iVar4 == -1) {
    uVar3 = 0;
    iVar9 = iVar11;
  }
  else {
    uVar5 = 0;
    do {
      bVar10 = iVar7 < 0;
      iVar7 = iVar7 << 1;
      uVar2 = (ulong)CONCAT12(bVar10,uVar5) << 1;
      uVar5 = (uint)uVar2 | (uint)bVar10;
      bVar10 = (uVar2 & 0x10000) != 0;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    pcVar1 = (code *)swi(0x21);
    uVar3 = (*pcVar1)();
    if (!bVar10) {
      do {
        iVar9 = iVar9 << 1;
        unaff_DS = unaff_DS + -1;
        uVar3 = uVar8;
      } while (unaff_DS != 0);
    }
  }
  return CONCAT22(iVar9,uVar3);
}

