// Function: FUN_2000_4ea7

char * FUN_2000_4ea7(char *param_1,undefined2 param_2,char *param_3)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1000;
  do {
    if (param_1 <= (char *)param_3) {
      return param_3;
    }
    iVar1 = func_0x00000621(uVar2,(int)*param_3);
    if (iVar1 == 0) {
      if (*param_3 == '\t') {
        return param_3;
      }
    }
    else {
      param_3 = (char *)CONCAT22(param_3._2_2_,(char *)param_3 + 1);
    }
    param_3 = (char *)CONCAT22(param_3._2_2_,(char *)param_3 + 1);
    uVar2 = 0;
  } while( true );
}

