// Function: FUN_1000_09ed

undefined4 FUN_1000_09ed(uint param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  uVar2 = 0;
  if (param_2 < 0) {
    uVar2 = 0xffff;
    bVar4 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(uint)bVar4 - param_2;
  }
  if (param_4 < 0) {
    uVar2 = ~uVar2;
    bVar4 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(uint)bVar4 - param_4;
  }
  iVar1 = (int)((ulong)param_3 * (ulong)param_1);
  iVar3 = param_4 * param_1 + (int)((ulong)param_3 * (ulong)param_1 >> 0x10) + param_3 * param_2;
  if (uVar2 != 0) {
    bVar4 = iVar1 != 0;
    iVar1 = -iVar1;
    iVar3 = -(uint)bVar4 - iVar3;
  }
  return CONCAT22(iVar3,iVar1);
}

