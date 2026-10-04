// Function: FUN_1000_686f

void FUN_1000_686f(int param_1,undefined2 param_2,undefined4 param_3,int param_4,undefined2 param_5)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  undefined2 *puVar8;
  int extraout_DX;
  undefined2 uVar9;
  int iVar10;
  undefined2 uVar11;
  undefined2 unaff_DS;
  undefined4 uVar12;
  
  FUN_1000_5f78();
  uVar11 = (undefined2)((ulong)param_3 >> 0x10);
  iVar10 = (int)param_3;
  iVar1 = *(int *)(iVar10 + 6);
  iVar6 = iRam10006498 + -1;
  iVar2 = *(int *)0x3;
  iVar7 = *(int *)0x8;
  uVar3 = *(undefined2 *)0xa;
  uVar4 = *(undefined2 *)0xc;
  uVar5 = *(undefined2 *)0xe;
  *(undefined2 *)0x1 = param_5;
  *(undefined1 *)0x5 = 0;
  *(undefined2 *)0xa = 0;
  *(undefined2 *)0xc = 0;
  *(undefined2 *)0xe = 0;
  puVar8 = (undefined2 *)CONCAT11((char)((uint)(iVar1 + 0xf) >> 8),4);
  FUN_1000_542c();
  *(int *)0x3 = extraout_DX + -1;
  *(int *)0x8 = extraout_DX + -1 + param_1 + 1;
  *(byte *)(iVar10 + 4) = *(byte *)(iVar10 + 4) | 2;
  *(int *)(iVar10 + 8) = param_1 + 1;
  uVar12 = FUN_1000_0c6f(0xffff,(param_4 + iRam10006498) - iRam1000649a,param_2,iVar10,uVar11);
  uVar9 = (undefined2)((ulong)uVar12 >> 0x10);
  if ((*(uint *)(iVar10 + 4) & 0x100) != 0) {
    FUN_1000_1140(0xffff,0,(int)uVar12,*puVar8,puVar8 + 1,uVar9,0,param_5);
  }
  iVar1 = *(int *)0x8;
  *(undefined2 *)0xe = uVar5;
  *(undefined2 *)0xc = uVar4;
  *(undefined2 *)0xa = uVar3;
  *(int *)0x8 = iVar7;
  *(int *)0x6 = iVar1;
  iVar7 = (iVar7 - iVar1) + -1;
  *(int *)0x3 = iVar7;
  iRam1000649a = iRam1000649a + (iVar2 - iVar7);
  *(int *)0x6 = param_1;
  *(undefined2 *)0x1 = 0xffff;
  *(undefined1 *)0x5 = 0;
  *(undefined1 *)0x0 = 0x4d;
  iRam10006498 = iVar1 + 1;
  *(int *)*(undefined2 *)0xa = iRam10006498;
  FUN_1000_5f83();
  return;
}

