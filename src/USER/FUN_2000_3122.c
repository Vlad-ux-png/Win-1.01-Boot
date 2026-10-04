// Function: FUN_2000_3122

void FUN_2000_3122(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  int local_e;
  int local_a;
  int local_8;
  undefined2 local_6;
  int local_4;
  
  func_0x000013bf(0x1000,param_1 + 0x1e);
  if ((*(int *)&SUB_0000_0384 != 0) || (*(int *)0x378 != 0)) {
    if (*(int *)&SUB_0000_0384 != 0) {
      if (*(int *)&SUB_0000_0384 < 1) {
        local_4 = *(int *)0x38c;
      }
      else {
        local_8 = *(int *)0x38c;
      }
    }
    iVar1 = local_a;
    if ((*(int *)0x378 != 0) && (local_e = *(int *)0x38a, iVar1 = local_e, *(int *)0x378 < 1)) {
      local_6 = *(undefined2 *)0x38a;
      local_e = local_e - *(int *)0x47e;
      iVar1 = local_a;
    }
    local_a = iVar1;
    uVar2 = func_0x00000779(0);
    func_0x0000ffff(0,4,&local_a);
    if (((*(byte *)(param_1 + 0x33) & 0xc0) == 0) && (*(int *)0x378 != 0)) {
      func_0x000007aa(0,*(undefined2 *)0x550,uVar2);
      func_0x000018cd(0,0x49,0x5a,local_8 - *(int *)0x514,*(undefined2 *)0x47e,*(undefined2 *)0x514,
                      local_e,uVar2);
      func_0x000007ca(0,0x49,0x5a,*(int *)0x518 - local_4,*(undefined2 *)0x47e,local_4,local_e,uVar2
                     );
    }
    func_0x000007d6(0,uVar2);
  }
  return;
}

