// Function: FUN_2000_7928

int __stdcall16far FUN_2000_7928(undefined2 *param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 unaff_DS;
  
  iVar2 = param_1[9] - param_1[8];
  if (iVar2 != 0) {
    iVar3 = func_0x000014c5(0x1000,*param_1);
    iVar4 = FUN_2000_7516(iVar2,param_1[8] + iVar3);
    if (iVar4 != 0) {
      *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 2;
    }
    func_0x0000ffff(0,param_1[6] - param_1[9],param_1[8] + iVar3);
    param_1[6] = param_1[6] - iVar2;
    func_0x000014d8(0,*param_1);
    if (0x20 < (int)(param_1[0x16] - param_1[6])) {
      iVar3 = param_1[6];
      param_1[0x16] = iVar3 + 0x10;
      func_0x0000168c(0,0,iVar3 + 0x10,*param_1);
    }
    uVar1 = param_1[8];
    param_1[9] = uVar1;
    param_1[10] = uVar1;
  }
  return -iVar2;
}

