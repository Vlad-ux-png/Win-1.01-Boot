// Function: FUN_1000_d6b8

undefined4 FUN_1000_d6b8(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  undefined2 local_c;
  undefined2 local_a;
  char local_8;
  char *local_6;
  
  _local_6 = (char *)CONCAT22(unaff_SS,&local_c);
  iVar3 = 0;
  do {
    pcVar2 = _local_6;
    local_8 = '\0';
    while (*param_1 == ' ') {
      param_1 = (char *)CONCAT22(param_1._2_2_,(char *)param_1 + 1);
    }
    while ((pcVar1 = param_1, '/' < *param_1 && (*param_1 < ':'))) {
      param_1 = (char *)CONCAT22(param_1._2_2_,(char *)param_1 + 1);
      local_8 = local_8 * '\n' + *pcVar1 + -0x30;
    }
    uVar4 = (undefined2)((ulong)_local_6 >> 0x10);
    local_6 = local_6 + 1;
    _local_6 = (char *)CONCAT22(uVar4,local_6);
    *pcVar2 = local_8;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  *local_6 = '\0';
  return CONCAT22(local_a,local_c);
}

