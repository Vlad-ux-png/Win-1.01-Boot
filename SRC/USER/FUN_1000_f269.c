// Function: FUN_1000_f269

void FUN_1000_f269(int param_1,int param_2,int param_3,int param_4,undefined2 *param_5)

{
  int iVar1;
  undefined2 *puVar2;
  int *piVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 unaff_DS;
  
  *(int *)0x3a4 = param_1;
  puVar2 = (undefined2 *)param_5;
  uVar5 = (undefined2)((ulong)param_5 >> 0x10);
  if (param_1 == 0) {
    *(undefined2 *)0x5ea = *param_5;
    *(undefined2 *)0x638 = puVar2[2];
    *(undefined2 *)0x3d0 = puVar2[1];
    *(undefined2 *)&SUB_0000_0616 = puVar2[3];
    piVar3 = (int *)0x5c0;
    iVar1 = *(int *)0x47e;
  }
  else {
    *(undefined2 *)0x5ea = puVar2[1];
    *(undefined2 *)0x638 = puVar2[3];
    *(undefined2 *)0x3d0 = *param_5;
    *(undefined2 *)&SUB_0000_0616 = puVar2[2];
    piVar3 = (int *)0x4de;
    iVar1 = *(int *)0x480;
  }
  *(undefined2 *)0x5b8 = piVar3;
  *piVar3 = param_4;
  piVar3[1] = param_3;
  piVar3[2] = param_2;
  iVar4 = *(int *)0x638 - *(int *)0x5ea >> 1;
  if (piVar3[4] < iVar4) {
    iVar4 = piVar3[4];
  }
  iVar4 = iVar4 + iVar1;
  piVar3[6] = (*(int *)0x5ea - piVar3[8]) + iVar4;
  piVar3[5] = (((piVar3[8] - piVar3[3]) - piVar3[6]) + *(int *)0x638) - iVar4;
  *(int *)0x4a6 = *(int *)0x5ea + iVar4;
  if ((iVar4 < piVar3[4]) && ((*(char *)0x638 - *(char *)0x5ea & 1U) == 0)) {
    *(int *)0x4a6 = *(int *)0x4a6 + -1;
  }
  *(int *)0x622 = *(int *)0x638 - iVar4;
  iVar1 = func_0x0000ffff(0x1000,piVar3[2] - piVar3[1],piVar3[5],*piVar3 - piVar3[1]);
  *(int *)0x5b4 = iVar1 + piVar3[6];
  *(int *)0x544 = piVar3[3] + *(int *)0x5b4;
  return;
}

