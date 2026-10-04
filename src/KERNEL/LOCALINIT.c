// Function: LOCALINIT

undefined2 __stdcall16far LOCALINIT(uint param_1,int param_2,int param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int *piVar3;
  undefined2 uVar4;
  int iVar5;
  uint extraout_DX;
  undefined2 *extraout_DX_00;
  int *piVar6;
  undefined2 *puVar7;
  int unaff_ES;
  undefined2 unaff_CS;
  int unaff_DS;
  undefined4 uVar8;
  
  if (param_3 != 0) {
    unaff_DS = param_3;
  }
  if (param_2 == 0) {
    unaff_ES = unaff_DS + -1;
    param_1 = *(int *)0x3 * 0x10 - 1;
    LOCK();
    UNLOCK();
  }
  FUN_1000_4f33();
  puVar1 = (undefined2 *)(extraout_DX + 4);
  uVar4 = 0;
  if (extraout_DX < param_1) {
    iVar5 = param_1 - (int)puVar1;
    uVar8 = FUN_1000_4c0b();
    puVar7 = puVar1;
    for (; iVar5 != 0; iVar5 = iVar5 + -1) {
      puVar2 = puVar7;
      puVar7 = puVar7 + 1;
      *puVar2 = (int)uVar8;
    }
    *(undefined1 *)(extraout_DX + 0x16) = 0x20;
    *(undefined1 *)(extraout_DX + 8) = 3;
    *(undefined2 *)(extraout_DX + 10) = (int)((ulong)uVar8 >> 0x10);
    *(undefined2 *)(extraout_DX + 0x1a) = 0x5230;
    *(undefined2 *)(extraout_DX + 0x1c) = unaff_CS;
    *(undefined2 *)(extraout_DX + 0x18) = 0x4ee1;
    *(undefined2 *)(extraout_DX + 0x20) = 0x200;
    FUN_1000_4f33();
    piVar6 = (int *)(param_1 - 4 & 0xfffc);
    *(undefined2 *)(extraout_DX + 0xc) = piVar6;
    *(int *)0x6 = (int)puVar1;
    piVar3 = (int *)*(undefined2 *)(extraout_DX + 10);
    *extraout_DX_00 = piVar3;
    extraout_DX_00[1] = piVar6;
    piVar6[1] = (int)piVar6;
    *piVar6 = (int)extraout_DX_00 + 1;
    piVar3[1] = (int)extraout_DX_00;
    *piVar3 = (int)piVar3 + 1;
    LOCKSEGMENT(unaff_DS);
    uVar4 = 1;
  }
  return uVar4;
}

