// Function: FUN_1000_4d49

void __cdecl16near FUN_1000_4d49(void)

{
  uint uVar1;
  int in_CX;
  uint uVar2;
  uint *in_BX;
  undefined2 unaff_DS;
  uint *puStack_8;
  
  puStack_8 = (uint *)0x0;
  uVar2 = in_BX[1] - (int)in_BX;
  do {
    uVar1 = *in_BX;
    if ((((uVar1 & 1) != 0) && ((uVar1 & 2) != 0)) && (*(char *)(in_BX[2] + 3) == '\0')) {
      if ((in_BX[1] - (int)in_BX <= uVar2) &&
         ((puStack_8 == (uint *)0x0 || (puStack_8[1] < (in_BX[1] - (int)in_BX) + (int)puStack_8))))
      {
        puStack_8 = in_BX;
      }
      uVar1 = *in_BX;
    }
    in_BX = (uint *)(uVar1 & 0xfffc);
    in_CX = in_CX + -1;
  } while (in_CX != 0);
  return;
}

