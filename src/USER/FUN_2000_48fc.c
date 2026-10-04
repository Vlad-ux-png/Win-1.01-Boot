// Function: FUN_2000_48fc

void FUN_2000_48fc(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  iVar1 = func_0x0000ffff(0x1000,0x10);
  iVar2 = FUN_2000_4963(param_1,param_2);
  iVar3 = iVar2;
  do {
    if (iVar1 < 0) {
      iVar3 = FUN_2000_48cd(iVar3,param_2);
    }
    else {
      iVar3 = FUN_2000_48af(iVar3,param_2);
    }
  } while ((iVar3 != iVar2) &&
          ((((*(byte *)(iVar3 + 0x32) & 1) == 0 || ((*(byte *)(iVar3 + 0x33) & 8) != 0)) ||
           ((*(byte *)(iVar3 + 0x33) & 0x10) == 0))));
  FUN_2000_413a(iVar3);
  return;
}

