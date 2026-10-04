// Function: FUN_1000_aa2c

int FUN_1000_aa2c(int *param_1,undefined2 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  undefined2 unaff_DS;
  int local_12;
  int local_e;
  undefined1 local_c [10];
  
  iVar1 = param_1[1] - *(int *)(param_3 + 0x20);
  iVar2 = *param_1 - *(int *)(param_3 + 0x1e);
  pbVar3 = (byte *)func_0x0000ffff(0x1000,param_2);
  pbVar5 = pbVar3 + 0xc;
  local_e = -1;
  if (((*(byte *)(param_3 + 0x33) & 0xc0) == 0x80) &&
     ((*(byte *)(*(int *)(param_3 + 4) + 10) & 0x80) != 0)) {
    func_0x00000385(0,*(int *)(pbVar3 + 6) + 1,*(undefined2 *)(pbVar3 + 8),0xffff,0,local_c);
    iVar4 = func_0x00000395(0,iVar2,iVar1,local_c);
    if (iVar4 == 0) goto LAB_1000_ab09;
    local_e = -2;
  }
  for (local_12 = 0; local_12 < *(int *)(pbVar3 + 10); local_12 = local_12 + 1) {
    func_0x0000ffff(0,*(int *)(pbVar5 + 4) + *(int *)(pbVar5 + 8) + 1,
                    *(int *)(pbVar5 + 6) + *(int *)(pbVar5 + 10) + 1,*(undefined2 *)(pbVar5 + 4),
                    *(undefined2 *)(pbVar5 + 6),local_c);
    iVar4 = func_0x0000ffff(0,iVar2,iVar1,local_c);
    if (iVar4 != 0) {
      if ((*pbVar5 & 3) == 0) {
        local_e = local_12;
      }
      else {
        local_e = -2;
      }
      goto LAB_1000_ab28;
    }
    pbVar5 = pbVar5 + 0x10;
  }
LAB_1000_ab09:
  iVar1 = func_0x0000ffff(0,*param_1,param_1[1],param_3);
  if ((iVar1 == 3) && ((*pbVar3 & 1) == 0)) {
    local_e = -3;
  }
LAB_1000_ab28:
  func_0x0000ffff(0,param_2);
  return local_e;
}

