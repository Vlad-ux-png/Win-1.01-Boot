// Function: THROW

/* WARNING: Unable to track spacebase fully for stack */

undefined2 __stdcall16far THROW(undefined2 param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined2 *puVar2;
  int *piVar3;
  undefined2 extraout_DX;
  undefined2 extraout_DX_00;
  int *piVar4;
  undefined4 *puVar5;
  undefined2 uVar6;
  undefined2 unaff_CS;
  undefined2 uVar7;
  
  uVar7 = (undefined2)((ulong)param_2 >> 0x10);
  puVar5 = (undefined4 *)param_2;
  GLOBALHANDLE(*(undefined2 *)(puVar5 + 4));
  puVar2 = *(undefined2 **)(puVar5 + 1);
  puVar2[-1] = *(undefined2 *)((int)puVar5 + 6);
  puVar2[3] = puVar2[-1];
  puVar2[-1] = *(undefined2 *)(puVar5 + 2);
  puVar2[1] = puVar2[-1];
  puVar2[-1] = *(undefined2 *)((int)puVar5 + 10);
  *puVar2 = puVar2[-1];
  puVar2[-1] = *(undefined2 *)(puVar5 + 3);
  puVar2[-2] = unaff_CS;
  puVar2[-3] = 0x302e;
  GLOBALHANDLE();
  puVar2[2] = extraout_DX_00;
  piVar3 = (int *)*param_2;
  uVar6 = (undefined2)((ulong)piVar3 >> 0x10);
  piVar4 = (int *)piVar3;
  if (*piVar3 == 0x3fcd) {
    bVar1 = *(byte *)((int)piVar4 + 3);
    puVar2[-1] = uVar6;
    puVar2[-2] = (uint)bVar1;
    puVar2[-3] = 0xffff;
    puVar2[-4] = 0xffff;
    puVar2[-5] = 0x304a;
    uVar6 = FUN_1000_0e71();
    piVar4 = (int *)*(undefined2 *)((int)puVar5 + 0xe);
  }
  puVar2[5] = uVar6;
  puVar2[4] = piVar4;
  return param_1;
}

