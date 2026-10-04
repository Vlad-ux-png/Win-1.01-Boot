// Function: FUN_1000_5d7b

void FUN_1000_5d7b(undefined2 *param_1)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  
  *(int *)0x432 = *(int *)0x432 + 1;
  if (*(int *)0x428 == 0 && *(int *)0x42a == 0) {
    *(undefined2 *)0x428 = (undefined2 *)param_1;
    *(undefined2 *)0x42a = param_1._2_2_;
  }
  else {
    uVar4 = *(undefined2 *)0x42a;
    *param_1 = *(undefined2 *)0x428;
    ((undefined2 *)param_1)[1] = uVar4;
    uVar3 = (undefined2)((ulong)*(undefined4 *)0x428 >> 0x10);
    iVar2 = (int)*(undefined4 *)0x428;
    uVar4 = *(undefined2 *)(iVar2 + 6);
    ((undefined2 *)param_1)[2] = *(undefined2 *)(iVar2 + 4);
    ((undefined2 *)param_1)[3] = uVar4;
    puVar1 = (undefined2 *)*(undefined4 *)((int)*(undefined4 *)0x428 + 4);
    *puVar1 = (undefined2 *)param_1;
    ((undefined2 *)puVar1)[1] = param_1._2_2_;
    uVar4 = (undefined2)((ulong)*(undefined4 *)0x428 >> 0x10);
    iVar2 = (int)*(undefined4 *)0x428;
    *(undefined2 *)(iVar2 + 4) = (undefined2 *)param_1;
    *(undefined2 *)(iVar2 + 6) = param_1._2_2_;
  }
  return;
}

