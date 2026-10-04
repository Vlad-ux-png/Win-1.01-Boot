// Function: FUN_1000_7c1c

void FUN_1000_7c1c(int *param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  
  uVar3 = 0x1000;
  for (iVar1 = param_1[1]; iVar1 <= param_1[2]; iVar1 = iVar1 + 1) {
    uVar2 = uVar3;
    if (*param_1 != iVar1) {
      uVar2 = 0;
      func_0x0000006d(uVar3,0,iVar1,param_2);
    }
    uVar3 = uVar2;
  }
  func_0x0000ffff(uVar3,1,*param_1,param_2);
  return;
}

