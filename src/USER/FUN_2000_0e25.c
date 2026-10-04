// Function: FUN_2000_0e25

void FUN_2000_0e25(int param_1,undefined2 param_2,undefined2 param_3,int param_4)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 local_c [2];
  int local_a;
  int local_6;
  int local_4;
  
  FUN_2000_0c0a(param_2,local_c,unaff_SS);
  local_a = local_a - *(int *)(*(int *)0x634 + 0x20);
  local_6 = local_6 - *(int *)(*(int *)0x634 + 0x20);
  iVar1 = func_0x0000ffff(0x1000,local_c);
  if (iVar1 != 0) {
    if (((*(byte *)(param_4 + 0x2e) & 0x40) == 0) || (param_1 != 0)) {
      uVar2 = *(undefined2 *)0x3be;
    }
    else {
      uVar2 = *(undefined2 *)0x636;
    }
    func_0x0000ffff(0,uVar2,local_c);
    if (param_1 == 0) {
      func_0x0000ffff(0,param_3);
      func_0x00000786(0,*(undefined2 *)(param_4 + 0x28),*(undefined2 *)(param_4 + 0x26),param_3);
      func_0x0000ffff(0,*(undefined2 *)(param_4 + 0x24),*(undefined2 *)(param_4 + 0x22),
                      *(undefined2 *)(param_4 + 0x20),*(undefined2 *)(param_4 + 0x1e),param_3);
      local_4 = *(int *)(*(int *)(param_4 + 4) + 0x16);
      if (local_4 == 0) {
        func_0x0000ffff(0,param_3,param_4);
        func_0x0000ffff(0,1,0,0,param_4);
      }
      else {
        func_0x0000ffff(0,local_4,0,0,param_3);
      }
      if ((*(byte *)(param_4 + 0x2e) & 0x80) != 0) {
        *(byte *)(param_4 + 0x2e) = *(byte *)(param_4 + 0x2e) & 0x7f;
        *(byte *)(*(int *)0x634 + 0x2e) = *(byte *)(*(int *)0x634 + 0x2e) | 0x80;
      }
      func_0x0000ffff(0,*(undefined2 *)(*(int *)0x634 + 0x20),*(undefined2 *)(*(int *)0x634 + 0x1e),
                      param_3);
      func_0x0000ffff(0,param_3);
    }
  }
  return;
}

