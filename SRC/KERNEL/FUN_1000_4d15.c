// Function: FUN_1000_4d15

undefined2 * __cdecl16near FUN_1000_4d15(void)

{
  undefined2 *puVar1;
  uint uVar2;
  undefined2 *in_BX;
  int unaff_SI;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 unaff_DS;
  
  uVar2 = *(int *)(unaff_SI + 2) - unaff_SI;
  puVar3 = (undefined2 *)(unaff_SI + uVar2);
  puVar1 = (undefined2 *)in_BX[1];
  puVar4 = puVar1;
  if ((puVar3 != in_BX) && ((undefined2 *)((int)puVar1 + (-8 - uVar2)) < in_BX)) {
    puVar4 = (undefined2 *)((int)in_BX + uVar2);
  }
  uVar2 = uVar2 >> 1;
  while( true ) {
    puVar4 = puVar4 + -1;
    puVar3 = puVar3 + -1;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    *puVar4 = *puVar3;
  }
  return puVar1;
}

