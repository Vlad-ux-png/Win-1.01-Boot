// Function: LOADMODULE

int __stdcall16far LOADMODULE(int param_1,int param_2,byte *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  undefined2 uVar7;
  undefined2 unaff_SS;
  char *pcVar8;
  byte *pbStack0008;
  int iStack000a;
  int local_a0;
  byte local_9e [2];
  int local_9c;
  long local_1e;
  uint local_1a;
  uint local_18;
  int local_16;
  uint uStack_14;
  undefined4 local_12;
  undefined2 local_e;
  int local_c;
  undefined4 local_a;
  byte local_6;
  
  if (iStack000a == 0) {
    local_18 = FUN_1000_08df(pbStack0008);
  }
  else {
    local_c = LSTRLEN(pbStack0008,iStack000a);
    local_12 = (byte *)CONCAT22(iStack000a,(byte *)(local_c + (int)pbStack0008));
    while (local_c != 0) {
      if ((*local_12 == 0x5c) || (*local_12 == 0x3a)) {
        local_12 = (byte *)CONCAT22(local_12._2_2_,(byte *)local_12 + 1);
        break;
      }
      local_12 = (byte *)CONCAT22(local_12._2_2_,(byte *)local_12 + -1);
      local_c = local_c + -1;
    }
    local_c = 0;
    while( true ) {
      pbVar2 = local_12;
      local_12 = (byte *)CONCAT22(local_12._2_2_,(byte *)local_12 + 1);
      local_6 = *pbVar2;
      if ((local_6 == 0) || (local_6 == 0x2e)) break;
      if ((0x60 < local_6) && (local_6 < 0x7b)) {
        local_6 = local_6 - 0x20;
      }
      pbVar1 = local_9e + local_c;
      local_c = local_c + 1;
      *pbVar1 = local_6;
    }
    local_18 = FUN_1000_0669(local_c,local_9e,unaff_SS);
    if ((local_18 == 0) &&
       (local_a0 = OPENFILE(0x2800,local_9e,unaff_SS,pbStack0008,iStack000a), local_a0 == -1)) {
      if (local_9c == 0) {
        return 1;
      }
      return local_9c;
    }
  }
  uVar5 = local_18;
  if (local_18 == 0) {
    uVar5 = FUN_1000_2085(local_9e,unaff_SS,local_a0,local_a0);
    if (uVar5 == 0) {
      _LCLOSE(local_a0);
      return 0xb;
    }
    if (uVar5 != 1) {
      local_1e = (ulong)uVar5 << 0x10;
      if ((*(uint *)0xc & 0x8000) == 0) {
        *(byte *)0xc = *(byte *)0xc | 2;
        if ((param_2 != -1) || (param_1 != -1)) {
LAB_1000_039c:
          local_18 = FUN_1000_0fed(uVar5);
          if (local_18 != 0) {
            uVar7 = (undefined2)((ulong)local_1e >> 0x10);
            *(undefined2 *)((int)local_1e + 2) = 0x8000;
            local_a = (int *)CONCAT22(uVar5,(int *)*(undefined2 *)((int)local_1e + 0x28));
            local_1a = 0;
            while( true ) {
              uVar7 = (undefined2)((ulong)local_1e >> 0x10);
              if (*(uint *)((int)local_1e + 0x1e) <= local_1a) break;
              if ((local_18 != 0) && (*local_a != 0)) {
                pcVar8 = (char *)FUN_1000_0b06(*local_a,local_a0,uVar5);
                uVar7 = (undefined2)((ulong)pcVar8 >> 0x10);
                local_12 = (byte *)CONCAT22(uVar7,(char *)pcVar8 + 1);
                local_c = (int)*pcVar8;
                local_18 = FUN_1000_0669(local_c,(char *)pcVar8 + 1,uVar7);
                if (local_18 == 0) {
                  _pbStack0008 = (byte *)CONCAT22(unaff_SS,local_9e);
                  while( true ) {
                    pbVar3 = local_12;
                    pbVar2 = _pbStack0008;
                    if (local_c == 0) break;
                    local_12 = (byte *)CONCAT22(local_12._2_2_,(byte *)local_12 + 1);
                    _pbStack0008 = (byte *)CONCAT22(iStack000a,pbStack0008 + 1);
                    *pbVar2 = *pbVar3;
                    local_c = local_c + -1;
                  }
                  *_pbStack0008 = 0x2e;
                  pbStack0008[1] = 0x45;
                  pbStack0008[2] = 0x58;
                  pbStack0008[3] = 0x45;
                  pbStack0008[4] = 0;
                  local_c = local_c + -1;
                  local_18 = LOADMODULE(0xffff,0xffff,local_9e,unaff_SS);
                }
                else {
                  FUN_1000_07d8(local_18);
                }
                if (local_18 != 0) {
                  local_18 = FUN_1000_08df(local_18);
                }
              }
              piVar4 = local_a;
              local_a = (int *)CONCAT22(local_a._2_2_,(int *)local_a + 1);
              *piVar4 = local_18;
              local_1a = local_1a + 1;
            }
            *(undefined2 *)((int)local_1e + 2) = 1;
          }
          if ((local_18 != 0) && (*(int *)((int)local_1e + 0x1c) != 0)) {
            local_1a = FUN_1000_0baa(uVar5);
            if ((int)local_1a < 1) {
              if (local_1a == 0) {
                local_18 = 0;
              }
            }
            else {
              _local_16 = CONCAT22(uVar5,*(undefined2 *)((int)local_1e + 0x22));
              local_1a = 1;
              while ((local_1a <= *(uint *)((int)local_1e + 0x1c) &&
                     (((*(byte *)((int)_local_16 + 4) & 0x40) == 0 ||
                      (local_18 = FUN_1000_0e71(local_a0,local_a0,local_1a,uVar5), local_18 != 0))))
                    ) {
                local_1a = local_1a + 1;
                _local_16 = CONCAT22(uStack_14,local_16 + 10);
              }
            }
          }
          if (local_18 != 0) {
            FUN_1000_2c40(local_a0,uVar5);
          }
          if (local_18 == 0) {
            _LCLOSE(local_a0);
          }
          else {
            if ((param_2 == -1) && (param_1 == -1)) {
              param_2 = 0;
              param_1 = 0;
            }
            local_18 = FUN_1000_0175(local_a0,uVar5,param_1,param_2,0);
          }
          FUN_1000_23d8(uVar5);
          if (local_18 == 0) {
            FUN_1000_1040(uVar5);
            return local_18;
          }
          return local_18;
        }
      }
      else if ((*(byte *)0xc & 2) == 0) goto LAB_1000_039c;
      FUN_1000_09f3(uVar5);
    }
    _LCLOSE(local_a0);
  }
  else {
    local_18 = 0;
    local_1e = (ulong)uVar5 << 0x10;
    if ((param_2 == -1) && (param_1 == -1)) {
      if ((*(uint *)0xc & 0x8000) == 0) {
        return 0;
      }
      param_2 = 0;
      param_1 = 0;
    }
    if ((*(byte *)0xc & 2) != 0) {
      local_e = FUN_1000_08b9(uVar5);
      FUN_1000_07d8(uVar5);
      local_c = FUN_1000_0baa(uVar5);
      if (local_c != 1) {
        FUN_1000_082b(uVar5);
        return local_18;
      }
      local_18 = FUN_1000_0175(0xffff,uVar5,param_1,param_2,local_e);
      if (local_18 == 0) {
        FREELIBRARY(uVar5);
        return local_18;
      }
      return local_18;
    }
    if ((*(int *)0xe == 0) ||
       (iVar6 = FUN_1000_0e71(0xffff,0xffff,*(undefined2 *)0xe,uVar5), iVar6 != 0)) {
      FUN_1000_07d8(uVar5);
      iVar6 = FUN_1000_08b9(uVar5);
      return iVar6;
    }
  }
  return 0;
}

