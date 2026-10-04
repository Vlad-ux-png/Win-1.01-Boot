// Function: FUN_2000_2844

void FUN_2000_2844(int param_1)

{
  undefined2 unaff_DS;
  
  if (*(int *)(param_1 + 2) < 5) {
    *(undefined2 *)(param_1 + 2) = 0;
  }
  if (*(int *)0x518 + -4 <= *(int *)(param_1 + 6)) {
    *(undefined2 *)(param_1 + 6) = *(undefined2 *)0x518;
  }
  return;
}

