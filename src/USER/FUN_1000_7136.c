// Function: FUN_1000_7136

int FUN_1000_7136(uint param_1)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  undefined2 unaff_DS;
  
  uVar4 = (uint)((ulong)param_1 * 1000 >> 0x10);
  uVar1 = *(uint *)0x5d4;
  if (uVar4 < uVar1) {
    uVar2 = (ulong)uVar4 << 0x10 | (ulong)param_1 * 1000 & 0xffff;
    iVar3 = (int)(uVar2 / uVar1);
    if (uVar1 >> 1 <= (uint)(uVar2 % (ulong)uVar1)) {
      iVar3 = iVar3 + 1;
    }
    if (*(int *)0x5d6 == 0) {
      return iVar3;
    }
  }
  return 0;
}

