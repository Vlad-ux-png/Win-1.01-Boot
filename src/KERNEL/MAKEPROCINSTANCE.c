// Function: MAKEPROCINSTANCE

undefined2 * __stdcall16far MAKEPROCINSTANCE(int param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 unaff_DS;
  
  iVar2 = DAT_1000_000c;
  while( true ) {
    if (iVar2 == 0) {
      iVar2 = GLOBALALLOC(0x1f0,0,0x2040);
      iVar3 = iVar2;
      *(int *)0x0 = DAT_1000_000c;
      DAT_1000_000c = iVar3;
      iVar3 = 0x3d;
      puVar4 = (undefined2 *)0x6;
      do {
        puVar1 = puVar4 + 4;
        *puVar4 = puVar1;
        iVar3 = iVar3 + -1;
        puVar4 = puVar1;
      } while (iVar3 != 0);
      *puVar1 = 0;
    }
    puVar4 = (undefined2 *)*(int *)0x6;
    if (puVar4 != (undefined2 *)0x0) break;
    iVar2 = *(int *)0x0;
  }
  *(undefined2 *)0x6 = *puVar4;
  if (param_1 != 0) {
    unaff_DS = FUN_1000_09e1(param_1);
  }
  *(undefined1 *)(puVar4 + -3) = 0xb8;
  *(undefined2 *)((int)puVar4 + -5) = unaff_DS;
  *(undefined1 *)((int)puVar4 + -3) = 0xea;
  puVar4[-1] = param_2;
  *puVar4 = param_3;
  return (undefined2 *)CONCAT22(iVar2,puVar4 + -3);
}

