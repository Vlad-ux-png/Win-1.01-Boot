// Function: FUN_2000_ce14

char * FUN_2000_ce14(char *param_1,undefined2 param_2,undefined2 param_3)

{
  char *pcVar1;
  char *pcVar2;
  undefined2 uVar3;
  uint uVar4;
  int iVar5;
  uint local_16;
  int local_12;
  char local_10;
  int local_e [2];
  int local_a;
  undefined2 local_6;
  int local_4;
  
  local_4 = 0;
  local_6 = func_0x0000ffff(0x1000,param_2,param_3);
  func_0x0000ffff(0,local_e);
  local_16 = local_a - local_e[0];
  uVar3 = func_0x0000ffff(0,local_6);
  while( true ) {
    pcVar1 = (char *)param_1;
    local_12 = func_0x000003b8(0,(char *)param_1,param_1._2_2_,(char *)param_1,param_1._2_2_,uVar3);
    uVar4 = func_0x000002d8(0,local_12);
    if (uVar4 <= local_16) break;
    if (local_4 == 0) {
      local_10 = *param_1;
      iVar5 = func_0x0000ffff(0,7,(char *)param_1,param_1._2_2_,uVar3);
      local_16 = local_16 - iVar5;
      if (local_16 == 0) break;
      param_1 = (char *)CONCAT22(param_1._2_2_,(char *)param_1 + 7);
    }
    do {
      pcVar2 = param_1;
      if (local_12 < 1) break;
      param_1 = (char *)CONCAT22(param_1._2_2_,(char *)param_1 + 1);
      local_12 = local_12 + -1;
    } while (*pcVar2 != '\\');
    local_4 = 1;
  }
  func_0x0000ffff(0,uVar3,local_6);
  if (local_4 != 0) {
    param_1 = (char *)CONCAT22(param_1._2_2_,(char *)param_1 + -2);
    *param_1 = '.';
    pcVar1[-3] = '.';
    pcVar1[-4] = '.';
    pcVar1[-5] = '\\';
    pcVar1[-6] = ':';
    param_1 = (char *)CONCAT22(param_1._2_2_,pcVar1 + -7);
    pcVar1[-7] = local_10;
  }
  return param_1;
}

