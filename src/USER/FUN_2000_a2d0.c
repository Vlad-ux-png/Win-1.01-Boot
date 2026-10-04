// Function: FUN_2000_a2d0

undefined2 FUN_2000_a2d0(int param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DS;
  undefined4 uVar4;
  
  if ((param_1 < 0) || (*(int *)(param_2 + 0x10) <= param_1)) {
    uVar1 = 0xffff;
  }
  else {
    *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + -1;
    iVar3 = (*(int *)(param_2 + 0x10) - param_1) * 2;
    if (*(char *)(param_2 + 0x33) != '\0') {
      iVar3 = iVar3 + *(int *)(param_2 + 0x10) + 1;
    }
    uVar4 = func_0x00000737(0x1000,*(undefined2 *)(param_2 + 0x1c));
    uVar1 = (undefined2)((ulong)uVar4 >> 0x10);
    iVar2 = param_1 * 2 + (int)uVar4;
    func_0x000004ba(0,iVar3,iVar2,uVar1,iVar2 + 2,uVar1);
    if (*(char *)(param_2 + 0x33) != '\0') {
      iVar3 = *(int *)(param_2 + 0x10) * 2 + param_1 + (int)uVar4;
      func_0x0000ffff(0,*(int *)(param_2 + 0x10) - param_1,iVar3,uVar1,iVar3 + 1,uVar1);
    }
    func_0x00000363(0,*(undefined2 *)(param_2 + 0x1c));
    FUN_2000_b241(param_1,1,param_2);
    uVar1 = *(undefined2 *)(param_2 + 0x10);
  }
  return uVar1;
}

