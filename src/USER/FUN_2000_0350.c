// Function: FUN_2000_0350

int FUN_2000_0350(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  byte bVar1;
  bool bVar2;
  int *piVar3;
  undefined2 uVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 unaff_DS;
  bool bVar7;
  int local_12;
  
  uVar6 = 0x1000;
  local_12 = 0;
  if (param_5 == 0) {
    bVar1 = *(byte *)(param_6 + 0x32) & 0x10;
  }
  else {
    bVar1 = *(byte *)(param_6 + 0x32) & 0x20;
  }
  bVar7 = bVar1 != 0;
  if ((param_4 != 0) || (bVar7)) {
    bVar2 = bVar7;
    if (param_4 != 0) {
      if (param_2 == param_3) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
    }
    if (param_5 == 0) {
      *(byte *)(param_6 + 0x32) = *(byte *)(param_6 + 0x32) & 0xef;
      if (bVar2 != false) {
        *(byte *)(param_6 + 0x32) = *(byte *)(param_6 + 0x32) | 0x10;
      }
    }
    else {
      *(byte *)(param_6 + 0x32) = *(byte *)(param_6 + 0x32) & 0xdf;
      if (bVar2 != false) {
        *(byte *)(param_6 + 0x32) = *(byte *)(param_6 + 0x32) | 0x20;
      }
    }
    if (bVar2 != false) {
      piVar3 = (int *)*(int *)(param_6 + 10);
      if (piVar3 == (int *)0x0) {
        uVar6 = 0;
        piVar3 = (int *)func_0x0000ffff(0x1000,param_6);
      }
      if (param_5 != 0) {
        piVar3 = piVar3 + 3;
      }
      local_12 = *piVar3;
      if (param_4 == 0) {
        *piVar3 = param_3;
      }
      else {
        piVar3[1] = param_3;
        piVar3[2] = param_2;
      }
      uVar4 = func_0x0002fd75(piVar3[1],*piVar3);
      iVar5 = func_0x0002fd5c(piVar3[2],uVar4);
      *piVar3 = iVar5;
    }
    if (param_1 != 0) {
      if (((*(byte *)(param_6 + 0x33) & 0x20) == 0) && ((*(byte *)(param_6 + 0x33) & 0x10) != 0)) {
        param_1 = 1;
      }
      else {
        param_1 = 0;
      }
    }
    if (bVar7 == bVar2) {
      if ((bVar2 != false) && (param_1 != 0)) {
        if (param_5 == 0) {
          bVar1 = *(byte *)(param_6 + 0x2e) & 4;
        }
        else {
          bVar1 = *(byte *)(param_6 + 0x2e) & 2;
        }
        if (bVar1 != 0) {
          func_0x0002fb1c(param_5,param_6);
        }
      }
    }
    else {
      uVar4 = uVar6;
      if ((*(byte *)(param_6 + 0x32) & 0x10) == 0 && (*(byte *)(param_6 + 0x32) & 0x20) == 0) {
        uVar4 = 0;
        uVar6 = func_0x0000ffff(uVar6,*(undefined2 *)(param_6 + 10));
        *(undefined2 *)(param_6 + 10) = uVar6;
      }
      func_0x0000ffff(uVar4,param_6);
    }
  }
  else {
    local_12 = 0;
  }
  return local_12;
}

