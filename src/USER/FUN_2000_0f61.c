// Function: FUN_2000_0f61

void FUN_2000_0f61(undefined2 param_1)

{
  int iVar1;
  int *piVar2;
  undefined2 unaff_DS;
  
  piVar2 = (int *)&SUB_0000_0552;
  for (iVar1 = 0; iVar1 < *(int *)0x52c; iVar1 = iVar1 + 1) {
    if (*piVar2 != 0) {
      FUN_2000_0e25(0,iVar1,param_1,*piVar2);
    }
    piVar2 = piVar2 + 1;
  }
  return;
}

