// Function: FUN_1000_b2ea

void FUN_1000_b2ea(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  iVar2 = *(int *)(iVar3 + 4);
  iVar1 = *(int *)(iVar3 + 2);
  if (iVar1 == 0x100) {
LAB_1000_b323:
    if (*(int *)(iVar3 + 4) == 0x12) {
      return;
    }
  }
  else {
    if (iVar1 == 0x102) goto LAB_1000_b34c;
    if (iVar1 == 0x104) goto LAB_1000_b323;
    if (iVar1 != 0x105) {
      if (iVar1 != 0x106) {
        return;
      }
      goto LAB_1000_b34c;
    }
    if (*(int *)(iVar3 + 4) != 0x12) {
      return;
    }
  }
  iVar2 = FUN_1000_b827(*(undefined2 *)(iVar3 + 4));
  if (iVar2 == 0) {
    func_0x0000ffff(0x1000,iVar3,uVar4);
    return;
  }
LAB_1000_b34c:
  FUN_1000_b35d(1,iVar2);
  return;
}

