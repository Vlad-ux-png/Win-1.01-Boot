// Function: FUN_2000_483d

int FUN_2000_483d(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_SI;
  undefined2 unaff_DI;
  undefined2 unaff_DS;
  
  iVar1 = FUN_2000_48af(param_1,param_2);
  iVar2 = FUN_2000_4996(iVar1,param_1,unaff_SI,unaff_DI);
  if (iVar2 != 0) {
    do {
      iVar1 = FUN_2000_48cd();
    } while ((*(byte *)(iVar1 + 0x32) & 2) == 0);
  }
  return iVar1;
}

