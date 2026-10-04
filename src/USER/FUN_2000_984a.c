// Function: FUN_2000_984a

void FUN_2000_984a(int param_1,int *param_2,undefined2 param_3,int param_4)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  uint extraout_DX;
  undefined2 unaff_DS;
  undefined4 uVar4;
  
  func_0x000004a2(0x1000,(int *)param_2,param_2._2_2_,param_4);
  if (param_1 == 0) {
    return;
  }
  if (param_1 == 1) {
    uVar3 = (((int *)param_2)[3] - ((int *)param_2)[1]) - *(int *)0x45c >> 1;
  }
  else {
    if (param_1 == 2) {
      *param_2 = *param_2 + *(int *)0x45a + 4;
      return;
    }
    if (param_1 == 3) {
      uVar1 = func_0x00000751(0,*(undefined2 *)(param_4 + 0x36));
      uVar4 = func_0x000008f6(0,uVar1,*(undefined2 *)(param_4 + 0x36));
      iVar2 = func_0x0000ffff(0,1,0xc13,0x8ed,param_3);
      *param_2 = *param_2 + (iVar2 - *(int *)0x480);
      ((int *)param_2)[2] = *param_2 + (int)uVar4 + 4;
      ((int *)param_2)[3] = (int)((ulong)uVar4 >> 0x10) + ((int *)param_2)[1] + 4;
      return;
    }
    if (param_1 != 4) {
      return;
    }
    func_0x00000764(0,1,0xc13,0xffff,param_3);
    uVar3 = extraout_DX >> 1;
  }
  ((int *)param_2)[1] = ((int *)param_2)[1] + uVar3;
  return;
}

