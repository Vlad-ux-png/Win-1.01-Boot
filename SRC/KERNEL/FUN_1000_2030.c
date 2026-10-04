// Function: FUN_1000_2030

void __cdecl16near FUN_1000_2030(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iStack_2;
  
  if (DAT_1000_008e == '\0') {
    iStack_2 = DAT_1000_0008;
    uVar2 = 0;
    iVar1 = iStack_2;
    while (iStack_2 = iVar1, iStack_2 != 0) {
      iVar5 = *(int *)0x22;
      for (iVar3 = *(int *)0x1c; iVar1 = *(int *)0x6, iVar3 != 0; iVar3 = iVar3 + -1) {
        if ((((*(uint *)(iVar5 + 4) & 1) == 0) && ((*(uint *)(iVar5 + 4) & 0xf000) != 0)) &&
           (uVar4 = *(int *)(iVar5 + 6) + 0xfU >> 4, uVar2 < uVar4)) {
          uVar2 = uVar4;
        }
        iVar5 = iVar5 + 10;
      }
    }
    FUN_1000_5ffa();
  }
  return;
}

