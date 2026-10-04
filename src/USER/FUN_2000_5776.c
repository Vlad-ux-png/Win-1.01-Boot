// Function: FUN_2000_5776

void __stdcall16far FUN_2000_5776(int param_1,int param_2,int param_3,int param_4)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 unaff_DS;
  int iVar3;
  
  uVar1 = FUN_2000_532f(param_4);
  iVar2 = param_2;
  if (param_2 < param_3) {
    iVar2 = param_3;
    param_3 = param_2;
  }
  if ((*(int *)(param_4 + 0xc) < iVar2) && (iVar2 = *(int *)(param_4 + 0xc), iVar2 < param_3)) {
    param_3 = iVar2;
  }
  if (*(int *)(param_4 + 0x12) < iVar2) {
    FUN_2000_5a3c(iVar2,uVar1,param_4,uVar1,*(undefined2 *)(param_4 + 2));
  }
  else {
    FUN_2000_5a3c(*(undefined2 *)(param_4 + 0x12),uVar1,param_4,uVar1,*(undefined2 *)(param_4 + 2));
  }
  if (param_3 < *(int *)(param_4 + 0x10)) {
    iVar3 = param_3;
    uVar1 = FUN_2000_5a33(param_3);
  }
  else {
    iVar3 = *(int *)(param_4 + 0x10);
    uVar1 = FUN_2000_5a33(iVar3);
  }
  *(int *)(param_4 + 0x10) = param_3;
  *(int *)(param_4 + 0x12) = iVar2;
  if (*(char *)(param_4 + 10) == '\0') {
    func_0x0000ffff(0x1000,uVar1);
  }
  else {
    func_0x0000ffff(0x1000,uVar1);
    func_0x00000644(0);
  }
  FUN_2000_5361(uVar1,iVar3);
  if (param_1 != 0) {
    FUN_2000_51c0(param_4);
  }
  return;
}

