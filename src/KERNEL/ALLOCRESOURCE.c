// Function: ALLOCRESOURCE

undefined2 __stdcall16far ALLOCRESOURCE(int param_1,uint param_2,int param_3,undefined2 param_4)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  undefined4 uVar8;
  
  iVar1 = FUN_1000_08df(param_4);
  uVar3 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_3 + 2);
    iVar5 = *(int *)*(undefined2 *)0x24;
    if (param_1 != 0 || param_2 != 0) {
      iVar2 = ~(-1 << ((byte)iVar5 & 0x1f)) + param_1;
      iVar4 = iVar5;
      do {
        uVar6 = param_2 & 1;
        param_2 = param_2 >> 1;
        iVar2 = (int)(CONCAT12(uVar6 != 0,iVar2) >> 1);
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    if (*(int *)(param_3 + 8) == 0) {
      uVar8 = FUN_1000_098a(iVar5,iVar2,*(uint *)(param_3 + 4) | 7);
      uVar8 = CONCAT22((int)uVar8,(int)((ulong)uVar8 >> 0x10));
    }
    else {
      uVar6 = 0;
      for (; iVar5 != 0; iVar5 = iVar5 + -1) {
        bVar7 = iVar2 < 0;
        iVar2 = iVar2 << 1;
        uVar6 = uVar6 << 1 | (uint)bVar7;
      }
      uVar3 = GLOBALREALLOC(0,iVar2,uVar6,*(undefined2 *)(param_3 + 8));
      uVar8 = GLOBALHANDLE(uVar3);
    }
    iVar2 = (int)((ulong)uVar8 >> 0x10);
    uVar3 = 0;
    if (iVar2 != 0) {
      *(int *)0x1 = iVar1;
      uVar3 = (int)uVar8;
    }
  }
  return uVar3;
}

