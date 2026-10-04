// Function: FUN_1000_0baa

int FUN_1000_0baa(undefined2 param_1)

{
  uint uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 *extraout_DX;
  int iVar4;
  uint uVar5;
  int local_4;
  
  iVar4 = *(int *)0x22;
  local_4 = 0;
  uVar5 = 1;
  if (*(int *)0x2 == 1) {
    for (; uVar5 <= *(uint *)0x1c; uVar5 = uVar5 + 1) {
      uVar1 = *(uint *)(iVar4 + 4);
      if ((uVar1 & 0x40) == 0) {
        if (((uVar1 & 2) == 0) && ((uVar1 & 0x10) != 0)) {
          FUN_1000_098a(0,0,uVar1);
          if (extraout_DX == (undefined2 *)0x0) goto LAB_1000_0c38;
          *(int *)(iVar4 + 8) = (int)extraout_DX;
          *(byte *)(iVar4 + 4) = *(byte *)(iVar4 + 4) & 0xfb;
          *(byte *)(iVar4 + 4) = *(byte *)(iVar4 + 4) | 2;
          *extraout_DX = param_1;
        }
      }
      else {
        iVar2 = FUN_1000_0b1f(iVar4,param_1);
        if (iVar2 == 0) goto LAB_1000_0c38;
        local_4 = local_4 + 1;
      }
      iVar4 = iVar4 + 10;
    }
  }
  else {
    iVar4 = *(int *)0x8;
    *(byte *)(iVar4 + 4) = *(byte *)(iVar4 + 4) & 0xf9;
    iVar2 = FUN_1000_0b1f(iVar4,param_1);
    if (iVar2 == 0) {
LAB_1000_0c38:
      while (iVar2 = iVar4, uVar5 = uVar5 - 1, uVar5 != 0) {
        iVar4 = iVar2 + -10;
        if ((*(byte *)(iVar2 + -6) & 2) != 0) {
          uVar3 = FUN_1000_09f3(*(undefined2 *)(iVar2 + -2));
          *(undefined2 *)(iVar2 + -2) = uVar3;
          *(byte *)(iVar2 + -6) = *(byte *)(iVar2 + -6) ^ 2;
        }
      }
      return 0;
    }
    local_4 = 1;
  }
  if (local_4 == 0) {
    local_4 = -1;
  }
  return local_4;
}

