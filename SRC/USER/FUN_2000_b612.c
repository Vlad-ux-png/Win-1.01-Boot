// Function: FUN_2000_b612

void FUN_2000_b612(int param_1)

{
  undefined2 unaff_DS;
  
  if (*(char *)(param_1 + 0x36) != '\0') {
    func_0x0000ffff(0x1000,((*(int *)(param_1 + 10) - *(int *)(param_1 + 6)) + 1) *
                           *(int *)(param_1 + 0x24) + -1,0);
    func_0x0000ffff(0,*(undefined2 *)(param_1 + 2));
  }
  return;
}

