// Function: FUN_1000_4c11

void __cdecl16near FUN_1000_4c11(void)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined2 *in_CX;
  int iVar3;
  undefined2 *in_BX;
  undefined2 unaff_ES;
  
  if (in_CX < in_BX) {
    iVar3 = -((int)in_CX - (int)in_BX);
    uVar2 = FUN_1000_4c0b();
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar1 = in_CX;
      in_CX = in_CX + 1;
      *puVar1 = uVar2;
    }
  }
  return;
}

