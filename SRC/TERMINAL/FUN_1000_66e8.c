// Function: FUN_1000_66e8

void FUN_1000_66e8(uint param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  uint uVar2;
  undefined2 *puVar3;
  
  puVar3 = (undefined2 *)param_2;
  uVar2 = param_1 >> 1;
  if ((param_1 & 1) != 0) {
    puVar3 = (undefined2 *)((int)puVar3 + 1);
    *(undefined1 *)param_2 = 0x20;
  }
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    puVar1 = puVar3;
    puVar3 = puVar3 + 1;
    *puVar1 = 0x2020;
  }
  return;
}

