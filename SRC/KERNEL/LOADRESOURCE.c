// Function: LOADRESOURCE

int __stdcall16far LOADRESOURCE(int *param_1,undefined2 param_2)

{
  byte *pbVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int unaff_SI;
  undefined2 uVar6;
  undefined2 unaff_CS;
  undefined2 unaff_DS;
  long lVar7;
  uint local_22;
  int local_1e;
  int *local_1c;
  uint local_1a;
  undefined4 local_18;
  uint local_12;
  int local_10;
  uint local_e;
  undefined4 local_c;
  int *local_8;
  uint uStack_6;
  
  iVar5 = unaff_SI;
  if ((param_1 != (int *)0x0) && (local_22 = FUN_1000_08df(param_2), local_22 != 0)) {
    local_18._0_2_ = 0;
    uVar6 = (int)local_18;
    local_18._0_2_ = 0;
    if (*(int *)0x26 != *(int *)0x24) {
      _local_8 = (int *)CONCAT22(local_22,param_1);
      if (param_1[5] != 0) {
LAB_1000_27f1:
        uVar6 = (undefined2)((ulong)_local_8 >> 0x10);
        piVar2 = (int *)_local_8 + 5;
        *piVar2 = *piVar2 + 1;
        return ((int *)_local_8)[4];
      }
      local_18._2_2_ = local_22;
      if (param_1[4] == 0) {
        if ((param_1[2] & 0xf000U) != 0) {
          local_18._0_2_ = uVar6;
          iVar5 = FUN_1000_28ec(local_22,param_1[2]);
          ((int *)_local_8)[4] = iVar5;
          goto LAB_1000_27f1;
        }
      }
      else if (((*(byte *)(param_1 + 2) & 4) != 0) && (lVar7 = GLOBALLOCK(param_1[4]), lVar7 != 0))
      {
        GLOBALUNLOCK(((int *)_local_8)[4]);
        goto LAB_1000_27f1;
      }
      local_10 = *(int *)((int)local_18 + 0x24);
      piVar3 = (int *)(local_10 + 2);
      while (piVar4 = piVar3, local_c = (int *)CONCAT22(local_22,piVar4), local_e = local_22,
            *local_c != 0) {
        local_1c = piVar4 + 4;
        local_1e = piVar4[3];
        local_1a = local_22;
        if ((code *)piVar4[2] == (code *)0x0 && local_1e == 0) {
          local_1c = local_1c + piVar4[1] * 6;
          piVar3 = local_1c;
        }
        else {
          for (local_12 = 0; piVar3 = local_1c, local_12 < (uint)piVar4[1]; local_12 = local_12 + 1)
          {
            if (local_1c == local_8) {
              iVar5 = (*(code *)piVar4[2])();
              if (iVar5 == 0) {
                return 0;
              }
              uVar6 = (undefined2)((ulong)_local_8 >> 0x10);
              ((int *)_local_8)[4] = iVar5;
              pbVar1 = (byte *)((int *)_local_8 + 2);
              *pbVar1 = *pbVar1 | 4;
              goto LAB_1000_27f1;
            }
            local_1c = local_1c + 6;
          }
        }
      }
    }
  }
  if (unaff_SI == 0) {
    local_18 = (ulong)local_22 << 0x10;
    FATALEXIT(unaff_CS,0x504,iVar5);
  }
  return 0;
}

