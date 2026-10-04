// Function: FUN_2000_5073

char * FUN_2000_5073(int param_1,char *param_2,undefined2 param_3,char *param_4)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined2 uVar4;
  
  iVar3 = 1;
  uVar4 = 0x1000;
  do {
    if (param_2 < (char *)param_4) {
      param_4._0_2_ = (char *)param_4 + -1;
LAB_2000_50d7:
      return (char *)CONCAT22(param_4._2_2_,(char *)param_4);
    }
    cVar2 = *param_4;
    if (('\b' < cVar2) &&
       (((cVar2 < '\v' || (cVar2 == '\r')) || ((cVar2 == ' ' && (param_1 != 0)))))) {
      param_4._0_2_ = (char *)param_4 + iVar3;
      goto LAB_2000_50d7;
    }
    pcVar1 = (char *)param_4 + 1;
    iVar3 = func_0x0000ffff(uVar4,(int)*param_4);
    if (iVar3 != 0) {
      pcVar1 = (char *)param_4 + 2;
    }
    param_4 = (char *)CONCAT22(param_4._2_2_,pcVar1);
    iVar3 = 0;
    uVar4 = 0;
  } while( true );
}

