// Function: FUN_2000_784a

void __stdcall16far
FUN_2000_784a(undefined2 param_1,uint param_2,char *param_3,int param_4,int param_5)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 unaff_DS;
  undefined2 local_6;
  
  cVar1 = *param_3;
  iVar2 = *(int *)(param_5 + 0x20);
  uVar3 = func_0x0000ffff(0x1000,param_5);
  iVar4 = *(int *)(param_5 + 0x10);
  if (((*(uint *)(param_5 + 6) & 0x4000) != 0) &&
     ((((1 < (int)param_2 || (cVar1 == ' ')) || (cVar1 == '\r')) ||
      (param_2 < (uint)(*(int *)(param_5 + 0x12) - *(int *)(param_5 + 0x10)))))) {
    param_4 = FUN_2000_80a9(param_4,param_5);
  }
  local_6 = FUN_2000_7d0c(param_1,param_2,(char *)param_3,param_3._2_2_,param_4,param_5);
  if (-1 < local_6) {
    if (*(int *)(param_5 + 0x20) < iVar2) {
      local_6 = *(int *)(param_5 + 0x24) + *(int *)(param_5 + 0x22);
    }
    if (local_6 - param_4 < 2) {
      iVar4 = iVar4 - *(int *)(param_4 * 2 + *(int *)(param_5 + 0x38));
    }
    else {
      iVar4 = 0;
    }
    FUN_2000_70f3(1,iVar4,local_6,param_4,uVar3,param_5);
  }
  func_0x0000ffff(0,uVar3,*(undefined2 *)(param_5 + 2));
  FUN_2000_6de7(0xffff,param_5);
  return;
}

