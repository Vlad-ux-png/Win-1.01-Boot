// Function: FUN_1000_0175

undefined2
FUN_1000_0175(int param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5)

{
  int iVar1;
  undefined2 uVar2;
  long lVar3;
  undefined4 uVar4;
  
  if (((*(int *)0x14 == 0 && *(int *)0x16 == 0) || (*(int *)0xe == 0)) ||
     (iVar1 = FUN_1000_0e71(param_1,param_1,*(undefined2 *)0xe,param_2), iVar1 != 0)) {
    lVar3 = FUN_1000_088c(param_1,param_2);
    if (param_1 != -1) {
      _LCLOSE(param_1);
    }
    if (lVar3 != 0) {
      if ((*(uint *)0xc & 0x8000) != 0) {
        uVar2 = FUN_1000_23fc(lVar3,param_3,param_4,param_2);
        return uVar2;
      }
      uVar4 = FUN_1000_0928(param_2);
      uVar2 = FUN_1000_3063(param_3,param_4,uVar4);
      uVar2 = FUN_1000_2437(lVar3,param_2,param_5,uVar2);
      return uVar2;
    }
    if ((*(uint *)0xc & 0x8000) != 0) {
      return param_2;
    }
  }
  else if (param_1 != -1) {
    _LCLOSE(param_1);
  }
  return 0;
}

