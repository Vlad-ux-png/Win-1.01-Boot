// Function: FUN_1000_57b1

void __cdecl16near FUN_1000_57b1(void)

{
  int *piVar1;
  int *piVar2;
  int *in_BX;
  int iVar3;
  int unaff_DI;
  undefined2 unaff_DS;
  
  if ((((int *)*(int *)(unaff_DI + 0x1a) != in_BX) && ((*(byte *)(in_BX + 1) & 1) != 0)) &&
     ((*(byte *)(in_BX + 1) & 0x40) == 0)) {
    iVar3 = *in_BX + -1;
    piVar1 = (int *)*(undefined2 *)(unaff_DI + 0xe);
    piVar2 = (int *)*(undefined2 *)(unaff_DI + 0xc);
    *(undefined2 *)(unaff_DI + 0xc) = piVar2;
    *(undefined2 *)(unaff_DI + 0xe) = piVar1;
    LOCK();
    piVar1 = (int *)*(undefined2 *)(unaff_DI + 0x1a);
    *(undefined2 *)(unaff_DI + 0x1a) = in_BX;
    UNLOCK();
    LOCK();
    piVar2 = (int *)*(undefined2 *)(unaff_DI + 0xc);
    *(undefined2 *)(unaff_DI + 0xc) = in_BX;
    UNLOCK();
    *(undefined2 *)(unaff_DI + 0xe) = in_BX;
    *(undefined2 *)(unaff_DI + 0xc) = piVar2;
    *(undefined2 *)(unaff_DI + 0xe) = piVar1;
  }
  return;
}

