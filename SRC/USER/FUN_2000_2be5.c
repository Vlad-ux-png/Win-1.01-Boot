// Function: FUN_2000_2be5

/* WARNING: Removing unreachable block (ram,0x00022c00) */
/* WARNING: Removing unreachable block (ram,0x00022c07) */

int FUN_2000_2be5(int param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  
  iVar1 = 0;
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x24) - *(int *)0x480;
  }
  return iVar1;
}

