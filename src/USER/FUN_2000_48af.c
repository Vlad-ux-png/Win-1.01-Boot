// Function: FUN_2000_48af

int FUN_2000_48af(int *param_1,int param_2)

{
  int iVar1;
  undefined2 unaff_DS;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_2 + 2);
  }
  return iVar1;
}

