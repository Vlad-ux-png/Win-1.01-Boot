// Function: FUN_2000_3210

void FUN_2000_3210(int *param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  undefined2 unaff_DS;
  char local_6;
  
  if ((*(byte *)((int)param_1 + 0x33) & 0xc0) == 0) {
    iVar1 = param_1[0x1c];
    piVar3 = (int *)*(undefined2 *)((char)iVar1 * 0xe + *(int *)0x4dc + 0xc);
    local_6 = '\x01';
    for (; param_1 != piVar3; piVar3 = (int *)*piVar3) {
      local_6 = local_6 + '\x01';
    }
    piVar3 = (int *)*piVar3;
    *(int *)0x372 = (int)local_6 * *(int *)0x506 + *(int *)0x514;
    local_6 = '\x01';
    while (piVar3 = (int *)*piVar3, piVar3 != (int *)0x0) {
      local_6 = local_6 + '\x01';
    }
    *(int *)0x376 = *(int *)0x518 - (int)local_6 * *(int *)0x506;
    local_6 = (char)param_1[0x1c];
    if (local_6 == '\0') {
      local_6 = '\x01';
    }
    *(int *)0x370 = (int)local_6 * *(int *)&SUB_0000_0462 + *(int *)0x512 + *(int *)0x480;
    cVar2 = *(char *)0x51c - (char)iVar1;
    local_6 = cVar2 + -1;
    if (local_6 == '\0') {
      local_6 = cVar2;
    }
    *(int *)0x374 = (*(int *)0x516 - (int)local_6 * *(int *)&SUB_0000_0462) - *(int *)0x480;
  }
  return;
}

