// Function: FUN_1000_9086

int FUN_1000_9086(int param_1,char *param_2,undefined2 param_3)

{
  char *pcVar1;
  int iVar2;
  undefined2 unaff_DS;
  int local_6;
  char local_4;
  
  local_6 = 0;
  while( true ) {
    param_1 = param_1 + -1;
    if (param_1 < 0) {
      return local_6;
    }
    if ((0x1ff < *(int *)0x416) && (local_6 = FUN_1000_9022(param_3), local_6 != 0)) break;
    pcVar1 = param_2;
    param_2 = param_2 + 1;
    local_4 = *pcVar1;
    if (local_4 == '\0') {
      local_4 = ' ';
    }
    iVar2 = *(int *)0x416;
    *(int *)0x416 = *(int *)0x416 + 1;
    *(char *)(iVar2 + 0x104e) = local_4;
  }
  return local_6;
}

