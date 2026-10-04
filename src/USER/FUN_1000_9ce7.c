// Function: FUN_1000_9ce7

undefined2 __cdecl16near FUN_1000_9ce7(void)

{
  int iVar1;
  int unaff_BP;
  undefined2 *unaff_SI;
  undefined2 *puVar2;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  iVar1 = FUN_1000_a2ac();
  *(int *)0x768b = *(int *)0x768b + iVar1;
  do {
    puVar2 = unaff_SI;
    if (puVar2 == (undefined2 *)0x0) {
      return 1;
    }
    unaff_SI = (undefined2 *)*puVar2;
    iVar1 = (*(code *)*(undefined2 *)(unaff_BP + 10))
                      (0x1000,*(undefined2 *)(unaff_BP + 6),*(undefined2 *)(unaff_BP + 8),puVar2);
  } while ((iVar1 != 0) &&
          (((*(int *)(unaff_BP + 4) == 0 || (puVar2[1] == 0)) ||
           (iVar1 = FUN_1000_9ce7(), iVar1 != 0))));
  return 0;
}

