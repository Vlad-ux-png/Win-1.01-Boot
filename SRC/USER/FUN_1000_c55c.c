// Function: FUN_1000_c55c

undefined2 FUN_1000_c55c(undefined2 param_1,undefined2 param_2,int param_3,undefined2 param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  undefined2 unaff_DS;
  undefined2 local_8;
  
  local_8 = 0;
  if ((param_3 != 0) && (iVar3 = FUN_1000_c6ea(param_2,param_3), iVar3 != -1)) {
    local_8 = 2;
    func_0x0000051d(0x1000,0,0,param_3,0x116,param_4);
    iVar4 = func_0x00000650(0,param_3);
    iVar4 = iVar3 * 0x10 + iVar4;
    pbVar5 = (byte *)(iVar4 + 0xc);
    if ((*pbVar5 & 0x10) != 0) {
      func_0x0000ffff(0,iVar3,iVar3 >> 0xf,*(undefined2 *)(iVar4 + 0xe),0x117,param_4);
    }
    bVar1 = *pbVar5;
    func_0x00000554(0,param_3);
    pbVar5 = (byte *)FUN_1000_ca29(0,param_2,param_3);
    bVar2 = *pbVar5;
    func_0x000005d5(0,*(undefined2 *)0x62e);
    if (((bVar2 & 3) != 0) || ((bVar1 & 3) != 0)) {
      local_8 = 3;
    }
  }
  return local_8;
}

