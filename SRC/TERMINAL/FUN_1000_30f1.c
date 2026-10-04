// Function: FUN_1000_30f1

void FUN_1000_30f1(int param_1,byte *param_2,int param_3,int param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int local_66;
  int local_64;
  int local_62;
  int local_60;
  undefined1 local_5e [80];
  int local_e;
  int local_c;
  int local_a;
  int local_8;
  int local_6;
  int local_4;
  
  local_8 = param_4;
  local_a = param_3;
  local_4 = param_4 + 1;
  local_6 = param_3 + param_1;
  local_e = func_0x000025bd(0x1000,0x34);
  if ((local_e == 0) && (*(int *)0x28 != 0)) {
    local_e = func_0x00001def(0,0x3c);
  }
  if ((*(int *)0x162 == 0) && (local_e != 0)) {
    if (local_64 == *(int *)0x3e) {
      local_64 = *(int *)0x3a;
      local_60 = local_64 + 1;
    }
    pbVar1 = (byte *)((int)(byte *)param_2 + (local_66 - param_3));
    param_2 = (byte *)CONCAT22(param_2._2_2_,pbVar1);
    param_1 = local_62 - local_66;
    FUN_1000_35d9(&local_66);
    iVar3 = param_1;
    if (0x4f < param_1) {
      iVar3 = 0x50;
    }
    local_c = FUN_1000_6780(iVar3,pbVar1,param_2._2_2_,local_5e,unaff_SS);
    func_0x00001dcf(0,*(undefined2 *)0x26,&local_66);
    func_0x0000ffff(0,param_1,local_5e);
    param_3 = local_66;
    if (local_c != 0) {
      local_c = 0;
      while (pbVar2 = param_2, param_1 = param_1 + -1, -1 < param_1) {
        param_2 = (byte *)CONCAT22(param_2._2_2_,(byte *)param_2 + 1);
        if ((*pbVar2 & 0x80) == 0) {
          if (local_c != 0) {
            local_62 = param_3;
            func_0x000026c3(0,&local_66);
            local_c = 0;
          }
        }
        else if (local_c == 0) {
          local_66 = param_3;
          local_c = 1;
        }
        param_3 = param_3 + *(int *)0xea4;
      }
      if (local_c != 0) {
        local_62 = param_3;
        func_0x00001e07(0,&local_66);
      }
    }
  }
  return;
}

