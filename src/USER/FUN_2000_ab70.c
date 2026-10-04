// Function: FUN_2000_ab70

void FUN_2000_ab70(undefined2 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  undefined4 uVar5;
  undefined2 uVar6;
  
  if (*(char *)(param_2 + 0x35) == '\0') {
    iVar1 = func_0x00000d00(0x1000,0x10);
    iVar2 = func_0x0000ffff(0,0x11);
    if (((iVar1 < 0) && (*(char *)(param_2 + 0x33) != '\0')) && (*(char *)(param_2 + 0x30) == '\0'))
    {
      uVar4 = *(undefined2 *)(param_2 + 10);
      FUN_2000_b042(uVar4,param_2);
      FUN_2000_b1d1(uVar4,param_2);
      uVar6 = uVar4;
      iVar1 = param_2;
      iVar3 = FUN_2000_b4e5(uVar4,param_2);
      FUN_2000_b48c(iVar3 == 0,uVar6,iVar1);
      uVar5 = FUN_2000_b58b(uVar4,param_2);
      *(undefined1 *)(param_2 + 0x30) = 1;
      FUN_2000_ac57(uVar5,0x401,param_2);
    }
    uVar4 = FUN_2000_b53b(param_1,*(undefined2 *)(param_2 + 10),param_2);
    FUN_2000_b042(uVar4,param_2);
    if ((iVar2 < 0) && (*(char *)(param_2 + 0x30) == '\0')) {
      FUN_2000_b106(uVar4,param_2);
    }
    else {
      uVar5 = FUN_2000_b58b(uVar4,param_2);
      if (*(char *)(param_2 + 0x30) == '\0') {
        *(undefined1 *)(param_2 + 0x30) = 1;
        uVar4 = 0x401;
      }
      else {
        uVar4 = 0x402;
      }
      FUN_2000_ac57(uVar5,uVar4,param_2);
    }
  }
  return;
}

