// Function: FUN_1000_5ce7

void FUN_1000_5ce7(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 unaff_DS;
  
  if ((undefined4 *)param_1 != (undefined4 *)0x0 || param_1._2_2_ != 0) {
    *(int *)0x432 = *(int *)0x432 + -1;
    if ((param_1._2_2_ == *(int *)0x42a) && ((undefined4 *)param_1 == (undefined4 *)*(int *)0x428))
    {
      puVar3 = (undefined2 *)*(undefined4 *)0x428;
      puVar1 = (undefined4 *)*puVar3;
      iVar4 = ((undefined2 *)puVar3)[1];
      *(undefined2 *)0x428 = puVar1;
      *(int *)0x42a = iVar4;
      if ((param_1._2_2_ == iVar4) && ((undefined4 *)param_1 == puVar1)) {
        *(undefined2 *)0x42a = 0;
        *(undefined2 *)0x428 = 0;
      }
    }
    uVar2 = *(undefined2 *)((int)(undefined4 *)param_1 + 6);
    uVar5 = (undefined2)((ulong)*param_1 >> 0x10);
    iVar4 = (int)*param_1;
    *(undefined2 *)(iVar4 + 4) = *(undefined2 *)((undefined4 *)param_1 + 1);
    *(undefined2 *)(iVar4 + 6) = uVar2;
    uVar2 = *(undefined2 *)((int)(undefined4 *)param_1 + 2);
    puVar3 = (undefined2 *)((undefined4 *)param_1)[1];
    *puVar3 = *(undefined2 *)param_1;
    ((undefined2 *)puVar3)[1] = uVar2;
    uVar2 = *(undefined2 *)0x42e;
    *(undefined2 *)param_1 = *(undefined2 *)0x42c;
    *(undefined2 *)((int)(undefined4 *)param_1 + 2) = uVar2;
    *(undefined2 *)0x42c = (undefined4 *)param_1;
    *(int *)0x42e = param_1._2_2_;
  }
  return;
}

