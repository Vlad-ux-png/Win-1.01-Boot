// Function: FUN_2000_a1be

undefined2 FUN_2000_a1be(int param_1,int param_2)

{
  undefined2 uVar1;
  undefined2 extraout_DX;
  undefined2 unaff_DS;
  
  uVar1 = 0xffff;
  if (param_1 < *(int *)(param_2 + 0x10)) {
    func_0x0000ffff(0x1000,*(undefined2 *)(param_2 + 0x1c));
    func_0x0000ffff(0,*(undefined2 *)(param_2 + 0x1c),*(undefined2 *)(param_1 * 2));
    uVar1 = *(undefined2 *)(param_2 + 0x1e);
    func_0x00000336(0);
  }
  return uVar1;
}

