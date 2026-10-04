// Function: FUN_1000_07d8

void FUN_1000_07d8(int param_1)

{
  int iVar1;
  undefined2 *puVar2;
  
  if (((param_1 != 0) && ((*(uint *)0x2 & 0x8000) == 0)) && (*(int *)0x0 == 0x454e)) {
    *(int *)0x2 = *(int *)0x2 + 1;
    puVar2 = (undefined2 *)*(undefined2 *)0x28;
    iVar1 = *(int *)0x1e;
    if (iVar1 != 0) {
      *(uint *)0x2 = *(uint *)0x2 | 0x8000;
      do {
        FUN_1000_07d8(*puVar2);
        puVar2 = puVar2 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
      *(uint *)0x2 = *(uint *)0x2 ^ 0x8000;
    }
  }
  return;
}

