// Function: FUN_1000_22b6

void FUN_1000_22b6(undefined2 param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined2 unaff_DS;
  
  iVar2 = 0;
  do {
    iVar1 = iVar2 * 0x62;
    piVar3 = (int *)(iVar1 + 0x4dc);
    *(int *)(iVar2 * 2 + 0xe6e) = (int)piVar3;
    *(int *)(iVar1 + 0x4e0) = iVar2;
    *(int *)(iVar1 + 0x4e2) = iVar2;
    *(undefined2 *)(iVar1 + 0x4e4) = 0;
    *piVar3 = (int)piVar3;
    *(undefined2 *)(iVar1 + 0x4de) = piVar3;
    *(undefined2 *)(iVar1 + 0x4e6) = 0;
    *(undefined2 *)(iVar1 + 0x4e8) = 0x50;
    *(undefined2 *)(iVar1 + 0x4ea) = 0;
    *(undefined2 *)(iVar1 + 0x4ec) = 0;
    FUN_1000_1c2e(0,piVar3);
    *(undefined2 *)(iVar1 + 0x4e4) = 0;
    *(undefined2 *)(iVar1 + 0x4e8) = 0;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x19);
  FUN_1000_3016(param_1);
  return;
}

