// Function: FUN_2000_1bcc

void FUN_2000_1bcc(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  iVar2 = *(int *)0x47e >> 1;
  iVar1 = iVar2;
  if (*param_1 == 0) {
    iVar1 = 0;
  }
  *param_2 = (iVar1 + *param_1) - *(int *)0x47e;
  if (param_1[2] == *(int *)0x516) {
    iVar2 = *(int *)0x47e;
  }
  param_2[2] = iVar2 + param_1[2];
  return;
}

