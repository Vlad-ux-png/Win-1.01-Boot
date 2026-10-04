// Function: FUN_1000_ad77

void FUN_1000_ad77(undefined2 *param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  undefined2 uVar5;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  puVar3 = (undefined2 *)param_1;
  uVar5 = *param_1;
  if (puVar3[1] == 0x201) {
    if ((*(int *)0x36 != -1) && (iVar2 = FUN_1000_b99d(*(undefined2 *)0x3a,1,uVar5), iVar2 != 0)) {
      *(undefined2 *)0x36 = 0xffff;
    }
  }
  else if (puVar3[1] == 0x202) {
    if (*(int *)0x36 != -1) {
      return;
    }
    uVar1 = FUN_1000_b99d(*(undefined2 *)0x3a,1,uVar5);
    FUN_1000_b14b(puVar3[3],puVar3[4],1,uVar1,uVar5);
    return;
  }
  if (((*(int *)0x36 == -1) && (0x1ff < (uint)puVar3[1])) && ((uint)puVar3[1] < 0x20a)) {
    *(undefined2 *)0x534 = puVar3[3];
    *(undefined2 *)0x536 = puVar3[4];
    uVar4 = FUN_1000_b99d(*(undefined2 *)0x3a,0,uVar5);
    FUN_1000_ae1b(0x534,uVar4,uVar5);
  }
  return;
}

