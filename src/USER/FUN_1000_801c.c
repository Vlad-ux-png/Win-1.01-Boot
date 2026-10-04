// Function: FUN_1000_801c

undefined2 __stdcall16far FUN_1000_801c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  
  uVar10 = (undefined2)((ulong)param_1 >> 0x10);
  piVar6 = (int *)param_1;
  uVar9 = (undefined2)((ulong)param_3 >> 0x10);
  iVar7 = (int)param_3;
  iVar2 = FUN_1000_7f01((int)param_2,param_2._2_2_);
  iVar3 = FUN_1000_7f01(piVar6,uVar10);
  if (iVar3 == 0) {
    if (iVar2 == 0) {
      iVar2 = 4;
      do {
        piVar1 = piVar6;
        piVar6 = piVar6 + 1;
        iVar3 = *piVar1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      piVar6 = (int *)((int)param_2 + 6);
      piVar8 = (int *)(iVar7 + 6);
      iVar2 = 4;
      do {
        piVar1 = piVar6;
        piVar6 = piVar6 + -1;
        iVar7 = *piVar1;
        iVar4 = iVar7;
        iVar5 = iVar3;
        if (iVar7 < iVar3) {
          iVar4 = iVar3;
          iVar5 = iVar7;
        }
        if ((char)iVar2 < '\x03') {
          iVar4 = iVar5;
        }
        piVar1 = piVar8;
        piVar8 = piVar8 + -1;
        *piVar1 = iVar4;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    else {
      FUN_1000_7eda((int)param_2,param_2._2_2_,iVar7,uVar9);
    }
  }
  else {
    if (iVar2 != 0) {
      FUN_1000_7eb8(iVar7,uVar9);
      return 0;
    }
    FUN_1000_7eda(piVar6,uVar10,iVar7,uVar9);
  }
  return 1;
}

