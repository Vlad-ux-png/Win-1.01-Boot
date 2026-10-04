// Function: FUN_2000_61ea

void __stdcall16far FUN_2000_61ea(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined2 unaff_DS;
  
  iVar1 = *(int *)(param_3 + 0x18);
  *param_1 = *(int *)(param_3 + 0x1e) * param_2 + *(int *)(param_3 + 0x16);
  ((int *)param_1)[1] = iVar1;
  return;
}

