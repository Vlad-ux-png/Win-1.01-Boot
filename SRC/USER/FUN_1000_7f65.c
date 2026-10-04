// Function: FUN_1000_7f65

void __stdcall16far FUN_1000_7f65(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_3 >> 0x10);
  piVar1 = (int *)param_3;
  *param_3 = *param_3 + param_2;
  piVar1[2] = piVar1[2] + param_2;
  piVar1[1] = piVar1[1] + param_1;
  piVar1[3] = piVar1[3] + param_1;
  return;
}

