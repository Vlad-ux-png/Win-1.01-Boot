// Function: FUN_1000_0f69

int __cdecl16near FUN_1000_0f69(undefined2 param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined2 unaff_SI;
  int iVar4;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int local_84;
  char local_82 [128];
  
  if (*param_2 == '\0') {
    iVar4 = 0;
  }
  else {
    for (local_84 = 0; pcVar2 = param_2, local_84 < 0x7f; local_84 = local_84 + 1) {
      param_2 = (char *)CONCAT22(param_2._2_2_,(char *)param_2 + 1);
      cVar1 = *pcVar2;
      local_82[local_84] = cVar1;
      if (cVar1 == '\0') break;
    }
    local_82[local_84] = '\0';
    iVar4 = FUN_1000_4e02(local_82,param_1);
    if (iVar4 != 0) {
      FUN_1000_45a7(0x240,1);
      iVar3 = FUN_1000_3ced(0,0x18,param_1,unaff_SI);
      if ((iVar3 == 6) && (iVar3 = FUN_1000_5268(*(int *)0x16e == 0,param_1), iVar3 != 0)) {
        *(uint *)0x16e = (uint)(*(int *)0x16e == 0);
      }
    }
  }
  return iVar4;
}

