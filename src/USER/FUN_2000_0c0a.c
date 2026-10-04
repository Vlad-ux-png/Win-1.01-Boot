// Function: FUN_2000_0c0a

void FUN_2000_0c0a(int param_1,int *param_2)

{
  int *piVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  
  uVar2 = (undefined2)((ulong)param_2 >> 0x10);
  piVar1 = (int *)param_2;
  piVar1[3] = *(int *)0x54c - (param_1 / *(int *)0x52a) * *(int *)0x468;
  *param_2 = (param_1 % *(int *)0x52a) * *(int *)0x466;
  piVar1[1] = piVar1[3] - *(int *)0x468;
  piVar1[2] = *param_2 + *(int *)0x466;
  return;
}

