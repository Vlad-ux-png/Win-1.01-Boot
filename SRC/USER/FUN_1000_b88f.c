// Function: FUN_1000_b88f

int FUN_1000_b88f(undefined2 param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int unaff_SI;
  undefined2 unaff_DS;
  char *local_8;
  
  cVar2 = func_0x000011af(0x1000,param_1,0);
  iVar4 = *(int *)(param_2 + 2);
  if (iVar4 < 0) {
    unaff_SI = *(int *)(param_2 + 10) + -1;
  }
  do {
    iVar4 = FUN_1000_b92b(1,iVar4,param_2);
    iVar5 = param_2 + iVar4 * 0x10;
    cVar3 = '\0';
    if ((*(byte *)(iVar5 + 0xc) & 4) == 0) {
      local_8 = (char *)(*(int *)(iVar5 + 0x1a) + 2);
      do {
        pcVar1 = local_8;
        local_8 = local_8 + 1;
      } while (*pcVar1 == 0x20);
      cVar3 = func_0x0000ffff(0,(int)*pcVar1,0);
    }
  } while ((cVar3 != cVar2) && (unaff_SI != iVar4));
  if (cVar3 != cVar2) {
    iVar4 = -1;
  }
  return iVar4;
}

