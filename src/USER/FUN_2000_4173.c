// Function: FUN_2000_4173

undefined2 * FUN_2000_4173(undefined2 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 unaff_DS;
  
  puVar1 = (undefined2 *)param_1[1];
  puVar2 = puVar1;
  if (puVar1 != (undefined2 *)0x0) {
    while (((puVar2 != (undefined2 *)0x0 && ((*(byte *)(puVar2 + 0x19) & 1) == 0)) &&
           ((*(byte *)((int)puVar2 + 0x33) & 8) == 0))) {
      puVar2 = (undefined2 *)*puVar2;
    }
    param_1 = puVar2;
    if (puVar2 == (undefined2 *)0x0) {
      return puVar1;
    }
  }
  return param_1;
}

