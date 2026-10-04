// Function: FUN_1000_4bfb

void __cdecl16near FUN_1000_4bfb(void)

{
  uint *puVar1;
  int in_BX;
  uint unaff_SI;
  int unaff_DI;
  undefined2 unaff_DS;
  
  *(int *)(unaff_DI + 4) = *(int *)(unaff_DI + 4) + -1;
  puVar1 = (uint *)*(undefined2 *)(in_BX + 2);
  *puVar1 = *puVar1 & 3;
  *puVar1 = *puVar1 | unaff_SI;
  *(undefined2 *)(unaff_SI + 2) = puVar1;
  return;
}

