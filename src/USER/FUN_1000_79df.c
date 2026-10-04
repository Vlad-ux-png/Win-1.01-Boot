// Function: FUN_1000_79df

void __cdecl16near FUN_1000_79df(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *in_BX;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined2 unaff_DS;
  
  *(int *)0x6 = *(int *)0x6 + -1;
  if ((undefined1 *)*(undefined2 *)0x8 <= in_BX) {
    puVar4 = in_BX + -1;
    puVar5 = puVar4 + *(int *)0x4;
    for (iVar3 = (int)in_BX - (int)*(undefined2 *)0x8; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar2 = puVar5;
      puVar5 = puVar5 + -1;
      puVar1 = puVar4;
      puVar4 = puVar4 + -1;
      *puVar2 = *puVar1;
    }
    puVar5 = puVar5 + 1;
    if ((undefined1 *)*(undefined2 *)&SUB_0000_000c <= puVar5) {
      puVar5 = (undefined1 *)0x3a;
    }
    *(undefined2 *)0x8 = puVar5;
    return;
  }
  puVar4 = in_BX + *(int *)0x4;
  for (iVar3 = *(int *)0xa - (int)puVar4; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = in_BX;
    in_BX = in_BX + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  *(undefined2 *)0xa = in_BX;
  return;
}

