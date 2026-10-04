// Function: FUN_2000_b07a

void FUN_2000_b07a(undefined2 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  undefined2 unaff_DS;
  
  uVar3 = func_0x000012ea(0x1000,param_1,0,*(int *)(param_2 + 0x10) + -1);
  iVar4 = func_0x000012f9(0,uVar3);
  if (*(int *)(param_2 + 6) != iVar4) {
    FUN_2000_b642(param_2);
    iVar1 = *(int *)(param_2 + 6);
    iVar2 = *(int *)(param_2 + 0x24);
    *(int *)(param_2 + 6) = iVar4;
    if (*(int *)(param_2 + 0xe) < *(int *)(param_2 + 0x10)) {
      iVar5 = (iVar4 * 100) / (*(int *)(param_2 + 0x10) - *(int *)(param_2 + 0xe));
    }
    else {
      iVar5 = 0;
    }
    func_0x00001424(0,1,iVar5,1,*(undefined2 *)(param_2 + 2));
    func_0x0000ffff(0,0,0,0,0,(iVar1 - iVar4) * iVar2,0,*(undefined2 *)(param_2 + 2));
    func_0x00000df8(0,*(undefined2 *)(param_2 + 2));
    FUN_2000_b612(param_2);
  }
  return;
}

