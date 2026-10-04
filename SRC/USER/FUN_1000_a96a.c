// Function: FUN_1000_a96a

undefined2
FUN_1000_a96a(undefined2 param_1,undefined2 param_2,byte *param_3,byte *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  undefined4 uVar4;
  undefined2 uVar5;
  int iVar6;
  int local_8;
  
  uVar3 = 0x1000;
  if ((*param_3 & 4) == 0) {
    FUN_1000_ac47(param_1,param_2,param_3,param_4,param_5);
  }
  else {
    local_8 = *(int *)0x3b2;
    if (local_8 == param_5) {
      uVar3 = 0;
      local_8 = func_0x0000ffff(0x1000,local_8);
      if (local_8 == 0) {
        return 0;
      }
    }
    uVar4 = FUN_1000_bd23(param_3);
    uVar5 = *(undefined2 *)(param_3 + 0xe);
    iVar6 = local_8;
    iVar1 = func_0x000002ab(uVar3,uVar5,local_8);
    if (iVar1 != 0) {
      if ((*param_4 & 1) == 0) {
        iVar2 = *(int *)0x450 >> 1;
      }
      else {
        iVar2 = *(int *)0x450;
      }
      func_0x0000ffff(0,0x20,0xcc,0,0,local_8,(int)((ulong)uVar4 >> 0x10),(int)uVar4,
                      *(undefined2 *)(param_3 + 4),iVar2 + *(int *)(param_3 + 6),param_5,uVar5,iVar6
                      ,iVar1);
      func_0x0000ffff(0,iVar1,local_8);
    }
    if (param_5 == *(int *)0x3b2) {
      func_0x0000ffff(0,local_8);
    }
  }
  return 1;
}

