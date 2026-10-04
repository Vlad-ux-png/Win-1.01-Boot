// Function: FUN_1000_9d35

undefined2 __cdecl16near FUN_1000_9d35(void)

{
  undefined2 uVar1;
  char cVar2;
  int iVar3;
  int unaff_BP;
  char *unaff_DI;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  cVar2 = FUN_1000_a2ac();
  *unaff_DI = *unaff_DI + cVar2;
  uVar1 = *(undefined2 *)(unaff_BP + 4);
  iVar3 = FUN_1000_9ca1(uVar1,*(undefined2 *)(unaff_BP + 6),*(undefined2 *)(unaff_BP + 8),
                        *(undefined2 *)(unaff_BP + 10));
  if ((((iVar3 != 0) &&
       (iVar3 = FUN_1000_9ce7(uVar1,*(undefined2 *)(unaff_BP + 6),*(undefined2 *)(unaff_BP + 8),
                              *(undefined2 *)(unaff_BP + 10),*(undefined2 *)(unaff_BP + 0xc),
                              *(undefined2 *)(*(int *)&SUB_0000_05d2 + 0xc)), iVar3 != 0)) &&
      (iVar3 = FUN_1000_9ce7(uVar1,*(undefined2 *)(unaff_BP + 6),*(undefined2 *)(unaff_BP + 8),
                             *(undefined2 *)(unaff_BP + 10),*(undefined2 *)(unaff_BP + 0xc),
                             *(undefined2 *)(*(int *)0x5ba + 0xc)), iVar3 != 0)) &&
     (iVar3 = FUN_1000_9ce7(uVar1,*(undefined2 *)(unaff_BP + 6),*(undefined2 *)(unaff_BP + 8),
                            *(undefined2 *)(unaff_BP + 10),*(undefined2 *)(unaff_BP + 0xc),
                            *(undefined2 *)(*(int *)0x5da + 0xc)), iVar3 != 0)) {
    return 1;
  }
  return 0;
}

