// Function: FUN_2000_80de

undefined2 FUN_2000_80de(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 *puVar7;
  undefined2 unaff_DS;
  int iVar8;
  undefined2 local_c;
  int local_6;
  
  local_c = 0;
  piVar3 = (int *)func_0x00001bfb(0x1000,*(undefined2 *)(param_1 + 0x36));
  if (piVar3[1] != -1) {
    iVar8 = piVar3[1];
    iVar1 = piVar3[2];
    iVar2 = piVar3[3];
    local_6 = *piVar3;
    if (iVar8 < *piVar3) {
      local_6 = iVar8;
    }
    iVar4 = func_0x000004dd(0,iVar1,0x42);
    if (iVar4 != 0) {
      uVar5 = func_0x00001c4a(0,iVar4,piVar3 + 4);
      func_0x00001ded(0,iVar1,uVar5);
      func_0x00001c5e(0,*(undefined2 *)(param_1 + 0x36));
      func_0x00001c7a(0,0,iVar8 + iVar2,local_6,param_1);
      *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) | 2;
      iVar8 = param_1;
      uVar6 = FUN_2000_6cde(*(undefined2 *)(param_1 + 0x10),param_1);
      FUN_2000_784a(0,iVar1,uVar5,unaff_DS,uVar6,iVar8);
      puVar7 = (undefined2 *)func_0x00001cbd(0,*(undefined2 *)(param_1 + 0x36));
      *puVar7 = puVar7[1];
      func_0x00001c99(0,iVar4);
      func_0x0000ffff(0,iVar4);
      *(int *)(param_1 + 0x14) = local_6;
      func_0x000011c1(0,1,*(undefined2 *)(param_1 + 0x12),local_6,param_1);
      FUN_2000_6de7(0xffff,param_1);
      *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) | 0x10;
      *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) | 8;
      local_c = 1;
    }
  }
  func_0x00001cf8(0,*(undefined2 *)(param_1 + 0x36));
  return local_c;
}

