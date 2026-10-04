// Function: FUN_2000_48cd

int FUN_2000_48cd(int param_1,undefined2 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  iVar2 = param_1;
  do {
    do {
      iVar3 = iVar1;
      iVar2 = FUN_2000_48af(iVar2,param_2);
      iVar1 = iVar2;
    } while (param_1 != iVar2);
  } while (iVar3 == 0);
  return iVar3;
}

