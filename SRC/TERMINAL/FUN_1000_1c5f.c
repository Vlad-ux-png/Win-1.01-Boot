// Function: FUN_1000_1c5f

void FUN_1000_1c5f(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  
  iVar1 = *param_2;
  iVar2 = *param_1;
  uVar3 = *(undefined2 *)(iVar1 + 4);
  *(undefined2 *)(iVar1 + 4) = *(undefined2 *)(iVar2 + 4);
  *(undefined2 *)(iVar2 + 4) = uVar3;
  *param_2 = iVar2;
  *param_1 = iVar1;
  return;
}

