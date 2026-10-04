// Function: FUN_2000_8460

void __stdcall16far FUN_2000_8460(int param_1,uint param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined2 unaff_DS;
  
  piVar5 = (int *)(*(int *)(param_3 + 0x38) + param_2 * 2);
  uVar3 = *(int *)(param_3 + 0x20) + 1;
  iVar4 = uVar3 - param_2;
  piVar6 = piVar5;
  if (param_2 <= uVar3 && iVar4 != 0) {
    do {
      piVar1 = piVar5;
      piVar5 = piVar5 + 1;
      piVar2 = piVar6;
      piVar6 = piVar6 + 1;
      *piVar2 = *piVar1 + param_1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

