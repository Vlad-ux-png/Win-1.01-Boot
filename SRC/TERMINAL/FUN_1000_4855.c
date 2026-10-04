// Function: FUN_1000_4855

undefined2 __cdecl16near FUN_1000_4855(int param_1,int param_2)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  undefined2 unaff_DS;
  char local_b8 [82];
  char local_66 [80];
  int local_16;
  int local_14;
  undefined2 local_12;
  char *local_10;
  undefined1 local_e [6];
  char *local_8;
  int local_4;
  
  local_12 = 1;
  func_0x00003d1e(0x1000,local_e);
  func_0x00003cfd(0,0,*(undefined2 *)0x136c);
  func_0x00003d2a(0,1,*(undefined2 *)0x136c);
  if (param_1 == 0) {
    FUN_1000_4855(5,param_2);
    func_0x0000ffff(0,local_e);
    func_0x00003d37(0,0,*(undefined2 *)0x136c);
    func_0x0000ffff(0,1,*(undefined2 *)0x136c);
  }
  if (param_1 == 0x80) {
    local_4 = FUN_1000_46a8(local_b8,0x50,param_2);
    local_8 = local_b8;
  }
  else {
    local_8 = (char *)*(int *)(param_1 * 4 + 0x3fe);
    local_4 = *(int *)(param_1 * 4 + 0x400);
  }
  local_14 = func_0x0000ffff(0,local_4,local_8);
  if (local_14 == local_4) {
    FUN_1000_482a(*(undefined2 *)(param_2 + 0x16),local_4);
    FUN_1000_45de(0xfa);
    if ((param_1 == 0x80) || (param_1 == 5)) {
      FUN_1000_45de(0x2ee);
    }
    iVar3 = local_14;
    if (0x4f < local_14) {
      iVar3 = 0x50;
    }
    local_16 = func_0x0000ffff(0,iVar3,local_66);
    if (local_16 == local_14) {
      local_10 = local_66;
      do {
        local_16 = local_16 + -1;
        if (local_16 < 0) {
          return local_12;
        }
        pcVar1 = local_8;
        pcVar2 = local_10;
        local_10 = local_10 + 1;
        local_8 = local_8 + 1;
      } while (*pcVar2 == *pcVar1);
    }
  }
  return 0;
}

