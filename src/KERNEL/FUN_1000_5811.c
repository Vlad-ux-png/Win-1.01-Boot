// Function: FUN_1000_5811

void __cdecl16near FUN_1000_5811(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  iVar3 = *(int *)(unaff_DI + 10);
  if ((*(byte *)(iVar3 + 2) & 1) != 0) {
    LOCK();
    piVar1 = (int *)*(int *)(unaff_DI + 0x1a);
    *(int *)(unaff_DI + 0x1a) = iVar3;
    UNLOCK();
    *(int *)(unaff_DI + 0x1c) = *(int *)(unaff_DI + 0x1c) + 1;
    if (piVar1 != (int *)0x0) {
      LOCK();
      piVar2 = (int *)*(int *)(unaff_DI + 0xc);
      *(int *)(unaff_DI + 0xc) = iVar3;
      UNLOCK();
      *(int *)(unaff_DI + 0xe) = iVar3;
      *(int *)(unaff_DI + 0xc) = (int)piVar2;
      *(int *)(unaff_DI + 0xe) = (int)piVar1;
      return;
    }
    *(int *)(unaff_DI + 0xc) = iVar3;
    *(int *)(unaff_DI + 0xe) = iVar3;
  }
  return;
}

