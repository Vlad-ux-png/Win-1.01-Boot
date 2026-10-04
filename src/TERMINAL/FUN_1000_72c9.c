// Function: FUN_1000_72c9

void FUN_1000_72c9(void)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined2 unaff_DS;
  
  puVar3 = (undefined1 *)0xf6;
  for (iVar2 = 0x50; iVar2 != 0; iVar2 = iVar2 + -1) {
    puVar1 = puVar3;
    puVar3 = puVar3 + 1;
    *puVar1 = 0;
  }
  FUN_1000_72be();
  return;
}

