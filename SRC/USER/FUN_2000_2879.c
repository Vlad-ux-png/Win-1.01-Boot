// Function: FUN_2000_2879

void FUN_2000_2879(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined2 unaff_DS;
  
  piVar2 = (int *)(param_2 * 0xe + *(int *)0x4dc);
  if (param_2 == 0) {
    iVar1 = *piVar2;
  }
  else {
    iVar1 = (*(int *)0x47e >> 1) + *piVar2;
  }
  *param_1 = iVar1 - *(int *)0x47e;
  if (param_2 == *(int *)0x51c + -1) {
    iVar1 = piVar2[2] + *(int *)0x47e;
  }
  else {
    iVar1 = piVar2[2] + (*(int *)0x47e >> 1);
  }
  param_1[2] = iVar1;
  return;
}

