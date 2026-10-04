// Function: FUN_1000_7fbb

bool __stdcall16far FUN_1000_7fbb(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  undefined2 uVar10;
  
  piVar7 = (int *)param_2;
  iVar5 = 4;
  do {
    piVar1 = piVar7;
    piVar7 = piVar7 + 1;
    iVar2 = *piVar1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  uVar10 = (undefined2)((ulong)param_3 >> 0x10);
  piVar8 = (int *)((int)param_1 + 6);
  iVar5 = 4;
  piVar7 = (int *)((int)param_3 + 6);
  do {
    piVar9 = piVar7;
    piVar1 = piVar8;
    piVar8 = piVar8 + -1;
    iVar3 = *piVar1;
    iVar4 = iVar3;
    iVar6 = iVar2;
    if (iVar2 < iVar3) {
      iVar4 = iVar2;
      iVar6 = iVar3;
    }
    if ((char)iVar5 < '\x03') {
      iVar4 = iVar6;
    }
    *piVar9 = iVar4;
    iVar5 = iVar5 + -1;
    piVar7 = piVar9 + -1;
  } while (iVar5 != 0);
  iVar5 = FUN_1000_7f01(piVar9,uVar10);
  if (iVar5 != 0) {
    FUN_1000_7eb8(piVar9,uVar10);
  }
  return iVar5 == 0;
}

