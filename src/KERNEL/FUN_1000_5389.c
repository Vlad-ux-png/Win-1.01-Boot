// Function: FUN_1000_5389

uint * __cdecl16near FUN_1000_5389(void)

{
  uint uVar1;
  uint in_AX;
  uint *puVar2;
  int iVar3;
  undefined2 in_DX;
  int unaff_DI;
  undefined2 unaff_DS;
  
  puVar2 = (uint *)*(undefined2 *)(unaff_DI + 0x10);
  if ((puVar2 == (uint *)0x0) &&
     ((iVar3 = *(int *)(unaff_DI + 0x12), iVar3 == 0 ||
      (puVar2 = (uint *)(*(code *)*(undefined2 *)(unaff_DI + 0x14))(), iVar3 == 0)))) {
    return (uint *)((ulong)in_AX << 0x10);
  }
  puVar2[1] = 0;
  LOCK();
  uVar1 = *puVar2;
  *puVar2 = in_AX;
  UNLOCK();
  *(uint *)(unaff_DI + 0x10) = uVar1;
  return (uint *)CONCAT22(in_DX,puVar2);
}

