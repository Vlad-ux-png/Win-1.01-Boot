// Function: FUN_1000_2b36

undefined2 FUN_1000_2b36(int param_1)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_DS;
  int local_10;
  int local_e;
  undefined2 local_a;
  undefined2 local_8;
  int local_6;
  int local_4;
  
  iVar1 = *(int *)0x3a - *(int *)0x36;
  local_10 = *(int *)0x36;
  if ((((param_1 < local_10) || (local_10 + iVar1 <= param_1)) && (iVar1 != 0)) &&
     ((*(int *)0x28 == 0 || (param_1 != *(int *)0x3e)))) {
    if ((param_1 < 0) || (0x18 < param_1)) {
      return 1;
    }
    if (*(int *)0x2a == 0) {
      local_e = 1;
    }
    else {
      local_e = (CONCAT11((char)(iVar1 >> 10),(char)(iVar1 >> 2)) & 0x3fff) + 1;
    }
    for (; param_1 < local_10; local_10 = local_10 - local_e) {
    }
    for (; local_10 + iVar1 <= param_1; local_10 = local_10 + local_e) {
    }
    if (local_10 < 0) {
      local_10 = 0;
    }
    if (0x18 < local_10 + iVar1) {
      local_10 = 0x18 - iVar1;
    }
    iVar2 = local_10 - *(int *)0x36;
    *(int *)0x36 = local_10;
    *(int *)0x3a = local_10 + iVar1;
    local_8 = 0;
    local_a = 0;
    local_4 = iVar1 * *(int *)0xea6;
    local_6 = (*(int *)0x38 - *(int *)0x34) * *(int *)0xea4;
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    if (iVar2 < iVar1) {
      func_0x00002315(0x1000,&local_a);
      func_0x0000211c(0,*(undefined2 *)0x1530);
    }
    else {
      func_0x0000ffff(0x1000,1,&local_a);
    }
  }
  return 0;
}

