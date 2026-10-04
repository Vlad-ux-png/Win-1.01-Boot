// Function: FUN_2000_b004

void FUN_2000_b004(undefined2 param_1,int param_2)

{
  int iVar1;
  undefined2 unaff_DS;
  int iVar2;
  
  FUN_2000_b1d1(param_1,param_2);
  iVar2 = param_2;
  iVar1 = FUN_2000_b4e5(param_1,param_2);
  FUN_2000_b48c(iVar1 == 0,param_1,iVar2);
  if (*(char *)(param_2 + 0x34) != '\0') {
    FUN_2000_afd2(1,param_2);
  }
  return;
}

