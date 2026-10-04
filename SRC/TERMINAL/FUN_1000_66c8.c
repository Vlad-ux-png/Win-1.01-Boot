// Function: FUN_1000_66c8

void FUN_1000_66c8(uint param_1,undefined2 *param_2,undefined2 *param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  
  puVar4 = (undefined2 *)param_2;
  puVar5 = (undefined2 *)param_3;
  uVar3 = param_1 >> 1;
  if ((param_1 & 1) != 0) {
    puVar5 = (undefined2 *)((int)puVar5 + 1);
    puVar4 = (undefined2 *)((int)puVar4 + 1);
    *(undefined1 *)param_3 = *(undefined1 *)param_2;
  }
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  return;
}

