// Function: FUN_2000_b383

int FUN_2000_b383(int param_1,int param_2,int param_3,char *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DS;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  
  if (((char *)param_4 != (char *)0x0 || param_4._2_2_ != 0) && (*param_4 != '\0')) {
    iVar3 = param_3 + 1;
    if (*(int *)(param_5 + 0x10) <= iVar3) {
      if (param_1 == 0) {
        iVar3 = *(int *)(param_5 + 0x10) + -1;
      }
      else {
        iVar3 = 0;
      }
    }
    iVar1 = iVar3;
    if (param_1 == 0) {
      iVar1 = 0;
    }
    if (((param_3 < *(int *)(param_5 + 0x10) + -1) || (param_1 != 0)) &&
       (0 < *(int *)(param_5 + 0x10))) {
      do {
        pcVar5 = (char *)param_4;
        iVar6 = param_4._2_2_;
        uVar4 = FUN_2000_a1be(iVar3,param_5);
        iVar2 = FUN_2000_b313(uVar4,pcVar5,iVar6);
        FUN_2000_a1fc(iVar6,param_5);
        if (iVar2 <= param_2) {
          return iVar3;
        }
        iVar3 = iVar3 + 1;
        if (*(int *)(param_5 + 0x10) == iVar3) {
          iVar3 = 0;
        }
      } while (iVar1 != iVar3);
    }
  }
  return -1;
}

