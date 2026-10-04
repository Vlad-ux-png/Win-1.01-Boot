// Function: FUN_1000_29b6

int FUN_1000_29b6(int param_1,int param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  bool bVar11;
  undefined4 uVar12;
  
  uVar12 = ALLOCRESOURCE(0,0,(int)param_3,param_3._2_2_);
  iVar7 = (int)((ulong)uVar12 >> 0x10);
  iVar4 = (int)uVar12;
  iVar6 = *(int *)*(undefined2 *)0x24;
  iVar8 = *(int *)((int)param_3 + 2);
  iVar5 = iVar7;
  if (iVar4 != 0) {
    do {
      iVar8 = iVar8 << 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    iVar5 = iVar4;
    if (param_1 == param_2) {
      bVar11 = false;
      pcVar3 = (code *)swi(0x21);
      iVar6 = (*pcVar3)();
      if ((bVar11) || (iVar6 != iVar8)) {
        FUN_1000_09f3(iVar7);
        iVar5 = 0;
      }
    }
    else {
      puVar9 = (undefined1 *)0x0;
      puVar10 = (undefined1 *)0x0;
      for (; iVar8 != 0; iVar8 = iVar8 + -1) {
        puVar2 = puVar10;
        puVar10 = puVar10 + 1;
        puVar1 = puVar9;
        puVar9 = puVar9 + 1;
        *puVar2 = *puVar1;
      }
    }
  }
  return iVar5;
}

