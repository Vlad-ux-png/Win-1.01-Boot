// Function: FUN_2000_23a5

void FUN_2000_23a5(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined2 uVar1;
  code *pcVar2;
  code *pcVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  
  if ((((*(int *)&SUB_0000_0464 <= *(int *)(param_5 + 0x24) - *(int *)(param_5 + 0x20)) ||
       ((param_3 == 0 && (param_4 == 0)))) &&
      (*(int *)&SUB_0000_0464 <=
       (*(int *)(param_5 + 0x24) - *(int *)(param_5 + 0x20)) + param_3 + param_4)) &&
     (*(int *)&SUB_0000_0462 <=
      (*(int *)(param_5 + 0x22) - *(int *)(param_5 + 0x1e)) + param_1 + param_2)) {
    uVar4 = 0;
    func_0x00000c8c(0x1000);
    FUN_2000_2afe(param_1,param_2,param_5);
    uVar1 = FUN_2000_2286(param_3,param_4,param_5);
    pcVar3 = (code *)0x0;
    pcVar2 = (code *)0x0;
    if (param_2 != 0) {
      if (param_2 < 0) {
        pcVar3 = (code *)0x2089;
      }
      else {
        pcVar2 = (code *)0x205b;
      }
    }
    if (param_1 != 0) {
      if (param_1 < 0) {
        pcVar3 = (code *)0x205b;
      }
      else {
        pcVar2 = (code *)0x2089;
      }
    }
    if (pcVar2 != (code *)0x0) {
      uVar4 = 0x2000;
      (*pcVar2)(*(undefined2 *)0x5b6,*(undefined2 *)0x53e);
    }
    FUN_2000_247e(uVar1,param_3,param_4,param_5);
    if (pcVar3 != (code *)0x0) {
      uVar4 = 0x2000;
      (*pcVar3)(*(undefined2 *)0x5b6,*(undefined2 *)0x53e);
    }
    func_0x00000840(uVar4);
  }
  return;
}

