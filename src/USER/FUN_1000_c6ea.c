// Function: FUN_1000_c6ea

int FUN_1000_c6ea(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined2 unaff_DS;
  int local_c;
  int local_a;
  
  local_a = -1;
  local_c = 0;
  iVar1 = func_0x00000013(0x1000,param_2);
  pbVar2 = (byte *)FUN_1000_ca29(0,param_1,param_2);
  if (pbVar2 != (byte *)0x0) {
    local_a = *(int *)(iVar1 + 10);
    for (pbVar3 = (byte *)(local_a * 0x10 + iVar1 + -4);
        ((local_c != *(int *)0x62e && (local_a = local_a + -1, -1 < local_a)) && (pbVar3 != pbVar2))
        ; pbVar3 = pbVar3 + -0x10) {
      if ((*pbVar3 & 0x10) != 0) {
        local_c = *(int *)(pbVar3 + 2);
      }
    }
    func_0x000006b4(0,*(undefined2 *)0x62e);
  }
  func_0x0000075b(0,param_2);
  return local_a;
}

