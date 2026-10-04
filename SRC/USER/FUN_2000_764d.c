// Function: FUN_2000_764d

int FUN_2000_764d(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined2 unaff_DS;
  
  if (*(int *)(param_2 + 8) == 0) {
    iVar1 = 0;
  }
  else {
    piVar2 = (int *)(param_1 * 2 + *(int *)(param_2 + 0x38));
    iVar1 = (*(int *)(param_2 + 0x1a) - (piVar2[1] - *piVar2) * *(int *)(param_2 + 0x1e)) -
            *(int *)(param_2 + 0x16);
    if (*(int *)(param_2 + 8) == 1) {
      iVar1 = iVar1 / 2;
    }
  }
  return iVar1;
}

