// Function: FUN_1000_082b

undefined2 FUN_1000_082b(int param_1)

{
  uint *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 *puVar5;
  bool bVar6;
  
  uVar3 = 0;
  if (((param_1 != 0) && ((*(uint *)0x2 & 0x8000) == 0)) && (*(int *)0x0 == 0x454e)) {
    *(int *)0x2 = *(int *)0x2 + -1;
    puVar5 = (undefined2 *)*(uint *)0x28;
    iVar4 = *(int *)0x1e;
    if (iVar4 != 0) {
      puVar1 = (uint *)0x2;
      *puVar1 = *puVar1 | 0x8000;
      puVar2 = (undefined2 *)*puVar1;
      do {
        bVar6 = puVar2 == (undefined2 *)0x0;
        uVar3 = FUN_1000_082b(*puVar5);
        if (bVar6) {
          uVar3 = FUN_1000_1040(*puVar5);
          *puVar5 = uVar3;
        }
        puVar5 = puVar5 + 1;
        iVar4 = iVar4 + -1;
        puVar2 = puVar5;
      } while (iVar4 != 0);
      *(uint *)0x2 = *(uint *)0x2 ^ 0x8000;
    }
  }
  return uVar3;
}

