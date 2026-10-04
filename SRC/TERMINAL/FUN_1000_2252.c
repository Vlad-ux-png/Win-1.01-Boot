// Function: FUN_1000_2252

void FUN_1000_2252(undefined2 param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  
  if (*(int *)0x18 == 0) {
    if (*(int *)0x16 != 0) {
      FUN_1000_1ca6(param_1);
    }
    while (*(int *)0x1a != 0) {
      iVar1 = *(int *)(*(int *)0x1a + 2);
      if (0 < *(int *)(iVar1 + 0x10)) {
        FUN_1000_2126(*(undefined2 *)(iVar1 + 0x10),*(int *)(iVar1 + 0xe) + iVar1 + 0x12,unaff_DS,
                      *(int *)(iVar1 + 0xe),*(undefined2 *)(iVar1 + 4),param_1);
      }
      FUN_1000_1889(*(undefined2 *)(iVar1 + 0x10),*(undefined2 *)(iVar1 + 0xe),iVar1);
    }
  }
  return;
}

