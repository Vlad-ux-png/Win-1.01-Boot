// Function: FUN_1000_094c

/* WARNING: Removing unreachable block (ram,0x000109cf) */

undefined4 FUN_1000_094c(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar6;
  bool bVar7;
  ulong uVar8;
  uint uVar5;
  
  uVar6 = 0;
  if ((int)param_2 < 0) {
    uVar6 = 0xffff;
    bVar7 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(uint)bVar7 - param_2;
  }
  uVar1 = CONCAT22(param_2,param_1);
  if ((int)param_4 < 0) {
    uVar6 = ~uVar6;
    bVar7 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(uint)bVar7 - param_4;
  }
  uVar2 = param_3;
  uVar5 = param_4;
  if (param_4 == 0) {
    uVar2 = param_2 / param_3;
    iVar3 = (int)(((ulong)param_2 % (ulong)param_3 << 0x10 | (ulong)param_1) / (ulong)param_3);
  }
  else {
    do {
      uVar4 = uVar5 >> 1;
      uVar2 = (uint)(CONCAT12((uVar5 & 1) != 0,uVar2) >> 1);
      uVar5 = param_2 & 1;
      param_2 = param_2 >> 1;
      param_1 = (uint)(CONCAT12(uVar5 != 0,param_1) >> 1);
      uVar5 = uVar4;
    } while (uVar4 != 0);
    iVar3 = (int)(CONCAT22(param_2,param_1) / (ulong)uVar2);
    uVar8 = FUN_1000_0aa4(param_3,param_4,iVar3,0);
    if (uVar1 < uVar8) {
      iVar3 = iVar3 + -1;
    }
    uVar2 = 0;
  }
  if (uVar6 != 0) {
    bVar7 = iVar3 != 0;
    iVar3 = -iVar3;
    uVar2 = -(uint)bVar7 - uVar2;
  }
  return CONCAT22(uVar2,iVar3);
}

