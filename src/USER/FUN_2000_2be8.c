// Function: FUN_2000_2be8

/* WARNING: Removing unreachable block (ram,0x00022bf1) */
/* WARNING: Removing unreachable block (ram,0x00022bf7) */

int FUN_2000_2be8(int param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  
  iVar1 = *(int *)0x518;
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x20) + *(int *)0x480;
  }
  return iVar1;
}

