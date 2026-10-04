// Function: FUN_2000_c54e

char * FUN_2000_c54e(undefined1 *param_1,char *param_2)

{
  char cVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  undefined2 unaff_BP;
  
  if (((char *)param_2 == (char *)0x0 && param_2._2_2_ == 0) || (*param_2 == '\0')) {
LAB_2000_c55c:
    param_2._0_2_ = (char *)0x0;
    param_2._2_2_ = 0;
  }
  else {
LAB_2000_c56a:
    puVar2 = param_1;
    cVar1 = *param_2;
    if (cVar1 != '\0') {
      param_2 = (char *)CONCAT22(param_2._2_2_,(char *)param_2 + 1);
      if (((cVar1 != ' ') && (cVar1 != ':')) && (cVar1 != ',')) goto LAB_2000_c5a9;
      *param_1 = 0;
      while (*param_2 == ' ') {
        param_2 = (char *)CONCAT22(param_2._2_2_,(char *)param_2 + 1);
      }
      if (*param_2 != '\0') goto LAB_2000_c5a1;
      goto LAB_2000_c55c;
    }
    *param_1 = 0;
LAB_2000_c5a1:
  }
  return (char *)CONCAT22(param_2._2_2_,(char *)param_2);
LAB_2000_c5a9:
  uVar3 = FUN_2000_c7e5((int)cVar1,cVar1,unaff_BP);
  param_1 = (undefined1 *)CONCAT22(param_1._2_2_,(undefined1 *)param_1 + 1);
  *puVar2 = uVar3;
  goto LAB_2000_c56a;
}

