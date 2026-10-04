// Function: FUN_2000_4d99

int FUN_2000_4d99(uint param_1,char *param_2,undefined2 param_3,char *param_4,undefined2 param_5,
                 undefined2 param_6,int param_7)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 unaff_DS;
  undefined4 local_6;
  
  uVar5 = 0x1000;
  iVar3 = *(int *)0x3b0;
  if ((param_1 != 0xffff) && ((param_1 & 3) != 0)) {
    iVar3 = *(int *)0x4da;
    iVar1 = FUN_2000_4d99(0xffff,param_2,param_3,param_4,param_5,0,0);
    iVar3 = iVar3 - iVar1;
    if (((byte)param_1 & 3) == 1) {
      iVar3 = iVar3 >> 1;
    }
    iVar3 = iVar3 + *(int *)0x3b0;
  }
  if ((param_1 == 0xffff) || ((param_1 & 0x40) != 0)) {
    while( true ) {
      local_6 = (char *)FUN_2000_4ea7(param_2,param_3,param_4,param_5);
      pcVar2 = (char *)local_6;
      uVar4 = uVar5;
      if (param_1 != 0xffff) {
        uVar4 = 0;
        func_0x0000ffff(uVar5,(int)pcVar2 - (int)param_4,param_4,param_5,param_6,
                        *(int *)0x486 * param_7 + iVar3,*(undefined2 *)0x606);
      }
      uVar5 = 0;
      iVar1 = func_0x0000ffff(uVar4,(int)pcVar2 - (int)param_4,param_4,param_5,*(undefined2 *)0x606)
      ;
      param_7 = param_7 + iVar1;
      if (param_2 <= pcVar2) break;
      if (*local_6 == '\t') {
        local_6 = (char *)CONCAT22((int)((ulong)local_6 >> 0x10),pcVar2 + 1);
        param_7 = (((*(int *)0x36c >> 1) + param_7) / *(int *)&SUB_0000_0508 + 1) *
                  *(int *)&SUB_0000_0508;
      }
      param_4 = (char *)local_6;
      param_5 = local_6._2_2_;
    }
  }
  else {
    func_0x00000387(0x1000,(int)param_2 - (int)param_4,param_4,param_5,param_6,
                    *(int *)0x486 * param_7 + iVar3,*(undefined2 *)0x606);
  }
  return param_7;
}

