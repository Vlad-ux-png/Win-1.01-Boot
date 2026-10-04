// Function: FINDRESOURCE

int * __stdcall16far
FINDRESOURCE(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
            undefined2 param_5)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  undefined2 uVar8;
  uint local_18;
  undefined4 local_e;
  int *local_a;
  undefined2 uStack_8;
  
  uVar2 = FUN_1000_08df(param_5);
  if (*(int *)0x26 != *(int *)0x24) {
    iVar1 = *(int *)0x24;
    iVar3 = FUN_1000_2caf(param_1,param_2);
    iVar4 = FUN_1000_2caf(param_3,param_4);
    piVar5 = (int *)(iVar1 + 2);
    while( true ) {
      local_e = (int *)CONCAT22(uVar2,piVar5);
      if (*local_e == 0) break;
      _local_a = (int *)CONCAT22(uVar2,piVar5 + 4);
      if (((iVar3 == 0) && (iVar6 = FUN_1000_2cef(param_1,param_2,*local_e,iVar1,uVar2), iVar6 != 0)
          ) || (*local_e == iVar3)) break;
      piVar5 = piVar5 + 4 + piVar5[1] * 6;
      _local_a = (int *)CONCAT22(uVar2,piVar5);
    }
    if (*local_e != 0) {
      local_18 = 0;
      while (((piVar7 = (int *)_local_a, local_18 < (uint)piVar5[1] &&
              ((uVar8 = (undefined2)((ulong)_local_a >> 0x10), iVar4 != 0 ||
               (iVar3 = FUN_1000_2cef(param_3,param_4,piVar7[3],iVar1,uVar2), iVar3 == 0)))) &&
             (piVar7[3] != iVar4))) {
        local_18 = local_18 + 1;
        _local_a = (int *)CONCAT22(uVar8,piVar7 + 6);
      }
      if (piVar5[1] != local_18) {
        return piVar7;
      }
    }
  }
  return (int *)0x0;
}

