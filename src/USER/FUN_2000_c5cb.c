// Function: FUN_2000_c5cb

int FUN_2000_c5cb(char *param_1)

{
  char *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined2 unaff_SI;
  char *pcVar5;
  undefined2 unaff_DS;
  int local_8;
  int local_4;
  
  bVar2 = true;
  local_4 = 0;
  cVar3 = FUN_2000_c7e5((int)*param_1,unaff_SI);
  if (cVar3 == 'A') {
    pcVar5 = (char *)0x2f2;
  }
  else {
    if (cVar3 == 'C') {
      pcVar5 = (char *)0x2d2;
      goto LAB_2000_c60a;
    }
    if (cVar3 == 'L') {
      pcVar5 = (char *)0x2e2;
      local_4 = 0x80;
      goto LAB_2000_c60a;
    }
    if (cVar3 != 'P') {
      return -1;
    }
    pcVar5 = (char *)0x2f8;
    local_4 = 0x80;
  }
  bVar2 = false;
LAB_2000_c60a:
  while( true ) {
    pcVar1 = param_1;
    if (*pcVar5 == '1') break;
    param_1 = (char *)CONCAT22(param_1._2_2_,(char *)param_1 + 1);
    cVar3 = FUN_2000_c7e5();
    pcVar1 = pcVar5;
    pcVar5 = pcVar5 + 1;
    if (cVar3 != *pcVar1) {
      return -1;
    }
  }
  if (bVar2) {
    param_1 = (char *)CONCAT22(param_1._2_2_,(char *)param_1 + 1);
    local_8 = *pcVar1 + -0x31;
  }
  if (*param_1 == ':') {
    param_1 = (char *)CONCAT22(param_1._2_2_,(char *)param_1 + 1);
  }
  if (local_8 < 0) {
    return -1;
  }
  if (*param_1 != '\0') {
    return -1;
  }
  if (local_4 == 0) {
    iVar4 = 9;
  }
  else {
    iVar4 = 2;
  }
  if (iVar4 < local_8) {
    return -1;
  }
  return local_4 + local_8;
}

