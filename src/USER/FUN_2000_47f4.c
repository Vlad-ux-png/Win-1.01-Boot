// Function: FUN_2000_47f4

void FUN_2000_47f4(int param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  iVar1 = FUN_2000_4963(param_2,param_3);
  iVar2 = iVar1;
  do {
    if (param_1 == 0) {
      iVar2 = FUN_2000_483d(iVar2,param_3);
    }
    else {
      iVar2 = FUN_2000_4873(iVar2,param_3);
    }
  } while ((iVar1 != iVar2) &&
          (((*(byte *)(iVar2 + 0x33) & 8) != 0 || ((*(byte *)(iVar2 + 0x33) & 0x10) == 0))));
  FUN_2000_413a(iVar2);
  return;
}

