// Function: FUN_2000_4873

int FUN_2000_4873(int param_1,undefined2 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_SI;
  undefined2 unaff_DI;
  undefined2 unaff_DS;
  
  iVar1 = param_1;
  if ((*(byte *)(param_1 + 0x32) & 2) == 0) {
    iVar3 = FUN_2000_48cd(param_1,param_2);
  }
  else {
    do {
      iVar3 = iVar1;
      iVar1 = FUN_2000_48af(iVar3,param_2);
      iVar2 = FUN_2000_4996(iVar1,param_1,unaff_SI,unaff_DI);
    } while (iVar2 == 0);
  }
  return iVar3;
}

