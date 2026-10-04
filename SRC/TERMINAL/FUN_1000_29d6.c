// Function: FUN_1000_29d6

undefined2 FUN_1000_29d6(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined2 local_c;
  undefined1 local_a [2];
  int local_8;
  int local_4;
  
  if (*(int *)0x26 == 0) {
    local_c = 1;
  }
  else {
    iVar1 = func_0x00001ea4(0x1000,param_1,param_2,0x34);
    if (iVar1 != 0) {
      FUN_1000_35d9(local_a);
      func_0x00001eca(0,*(undefined2 *)0x26,local_a);
    }
    if (*(int *)0x28 != 0) {
      iVar1 = func_0x00001f11(0,param_1,param_2,0x3c);
      if (iVar1 != 0) {
        local_8 = *(int *)0x3a;
        local_4 = local_8 + 1;
        FUN_1000_35d9(local_a);
        func_0x0000ffff(0,*(undefined2 *)0x26,local_a);
      }
    }
    local_c = 0;
  }
  return local_c;
}

