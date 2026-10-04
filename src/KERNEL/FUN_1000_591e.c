// Function: FUN_1000_591e

undefined2 __cdecl16near FUN_1000_591e(void)

{
  undefined2 *puVar1;
  undefined2 in_AX;
  int in_CX;
  uint uVar2;
  int iVar3;
  int in_BX;
  uint uVar4;
  undefined2 *puVar5;
  
  uVar4 = 1 - (in_BX - in_CX);
  while ((uVar2 = 0x1000, 0xfff < uVar4 || (uVar2 = uVar4, uVar4 != 0))) {
    uVar4 = uVar4 - uVar2;
    puVar5 = (undefined2 *)0x0;
    for (iVar3 = uVar2 << 3; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar1 = 0;
    }
    in_BX = CONCAT11((char)((uint)in_BX >> 8) + '\x10',(char)in_BX);
  }
  return in_AX;
}

