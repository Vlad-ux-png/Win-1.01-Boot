// Function: GETPROFILESTRING

uint __stdcall16far
GETPROFILESTRING(int param_1,char *param_2,char *param_3,int param_4,int param_5,undefined2 param_6,
                undefined2 param_7)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  uint uVar4;
  uint in_CX;
  uint uVar5;
  char *pcVar6;
  undefined2 uVar7;
  bool bVar8;
  
  pcVar1 = param_3;
  bVar8 = false;
  if (param_4 == 0 && param_5 == 0) {
    uVar4 = FUN_1000_45a6(param_1,(char *)param_2,param_2._2_2_,param_6,param_7);
    if (!bVar8) goto LAB_1000_4594;
  }
  else {
    param_3 = (char *)FUN_1000_463f(param_4,param_5,param_6,param_7);
    if (in_CX != 0xffff) {
      pcVar1 = param_3;
    }
  }
  param_3 = pcVar1;
  uVar7 = (undefined2)((ulong)param_3 >> 0x10);
  pcVar6 = (char *)param_3;
  FUN_1000_49d2();
  cVar3 = pcVar6[-1];
  if (((1 < in_CX) && (*param_3 == cVar3)) && ((cVar3 == '\'' || (cVar3 == '\"')))) {
    in_CX = in_CX - 2;
    pcVar6 = pcVar6 + 1;
  }
  uVar5 = param_1 - 1;
  uVar4 = in_CX;
  if (uVar5 < in_CX) {
    in_CX = uVar5;
    uVar4 = uVar5;
  }
  for (; in_CX != 0; in_CX = in_CX - 1) {
    pcVar2 = (char *)param_2;
    param_2._0_2_ = (char *)param_2 + 1;
    pcVar1 = pcVar6;
    pcVar6 = pcVar6 + 1;
    *pcVar2 = *pcVar1;
  }
  *(char *)param_2 = '\0';
LAB_1000_4594:
  FUN_1000_47f3();
  return uVar4;
}

