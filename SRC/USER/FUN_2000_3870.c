// Function: FUN_2000_3870

void FUN_2000_3870(undefined2 param_1,undefined2 param_2,undefined2 param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  
  uVar3 = 0x1000;
  if ((*(byte *)(param_5 + 0x33) & 0x40) != 0) {
    uVar3 = 0;
    func_0x00001d7e(0x1000,*(int *)(param_5 + 0x38) + 0x26);
  }
  func_0x00001af5(uVar3,param_5 + 0x1e);
  FUN_2000_3804(param_5);
  func_0x00001cc5(0,1);
  if (param_4 == 0xa1) {
    *(undefined2 *)0x38c = param_2;
    *(undefined2 *)0x38a = param_1;
  }
  else {
    iVar1 = *(int *)(param_5 + 0x22) + *(int *)(param_5 + 0x1e) >> 1;
    *(int *)0x38a = iVar1;
    iVar2 = *(int *)(param_5 + 0x24) + *(int *)(param_5 + 0x20) >> 1;
    *(int *)0x38c = iVar2;
    func_0x00001a56(0,iVar2,iVar1);
    func_0x00001d70(0,*(undefined2 *)0x5f0);
  }
  func_0x00001d30(0,0,0,0,0,0xffff,0xffff,7,4,param_5);
  return;
}

