// Function: FUN_2000_a53d

uint FUN_2000_a53d(uint param_1,undefined2 param_2,undefined2 param_3,int param_4)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined2 uVar8;
  undefined2 unaff_DS;
  undefined4 uVar9;
  int local_10;
  undefined4 local_e;
  
  uVar8 = 0x1000;
  if (*(int *)(param_4 + 0x1c) == 0) {
    if ((param_1 != 0) && (param_1 != 0xffff)) {
      return 0xffff;
    }
    uVar8 = 0;
    uVar2 = func_0x0000ffff(0x1000,0,0,0x42);
    *(undefined2 *)(param_4 + 0x1c) = uVar2;
    *(undefined2 *)(param_4 + 8) = 0xffff;
    *(undefined2 *)(param_4 + 6) = 0;
    *(undefined2 *)(param_4 + 0x10) = 0;
    *(undefined2 *)(param_4 + 0x12) = 0;
    *(undefined2 *)(param_4 + 10) = 0;
  }
  if (param_1 == 0xffff) {
    param_1 = *(uint *)(param_4 + 0x10);
  }
  if (param_1 <= *(uint *)(param_4 + 0x10)) {
    iVar3 = func_0x000002c9(uVar8,param_2,param_3);
    iVar3 = iVar3 + 1;
    uVar4 = iVar3 + *(int *)(param_4 + 0x22);
    if (*(uint *)(param_4 + 0x20) < uVar4) {
      iVar6 = (uint)(byte)((char)(uVar4 >> 8) + 1) << 8;
      iVar5 = func_0x0000ffff(0,0,iVar6,0,*(undefined2 *)(param_4 + 0x1e));
      if (iVar5 == 0) {
        return 0xfffe;
      }
      *(int *)(param_4 + 0x20) = iVar6;
    }
    uVar9 = func_0x00000350(0,*(undefined2 *)(param_4 + 0x1e));
    func_0x000007b5(0,iVar3,*(int *)(param_4 + 0x22) + (int)uVar9,(int)((ulong)uVar9 >> 0x10),
                    param_2,param_3);
    func_0x000007ff(0,*(undefined2 *)(param_4 + 0x1e));
    if ((*(int *)(param_4 + 0x12) <= *(int *)(param_4 + 0x10)) &&
       (iVar6 = FUN_2000_a4f2(param_4), iVar6 == 0)) {
      return 0xfffe;
    }
    uVar9 = func_0x0000046a(0,*(undefined2 *)(param_4 + 0x1c));
    uVar8 = (undefined2)((ulong)uVar9 >> 0x10);
    local_10 = (*(int *)(param_4 + 0x10) - param_1) * 2;
    if (*(char *)(param_4 + 0x33) != '\0') {
      local_10 = local_10 + *(int *)(param_4 + 0x10);
    }
    puVar1 = (undefined2 *)((int)uVar9 + param_1 * 2);
    local_e = (undefined2 *)CONCAT22(uVar8,puVar1);
    func_0x000007ed(0,local_10,puVar1 + 1,uVar8,puVar1,uVar8);
    *local_e = *(undefined2 *)(param_4 + 0x22);
    *(int *)(param_4 + 0x22) = *(int *)(param_4 + 0x22) + iVar3;
    if (*(char *)(param_4 + 0x33) != '\0') {
      puVar7 = (undefined1 *)(*(int *)(param_4 + 0x10) * 2 + (int)uVar9 + param_1);
      local_e = (undefined2 *)CONCAT22(uVar8,puVar7);
      func_0x0000048d(0,*(int *)(param_4 + 0x10) - param_1,puVar7 + 1,uVar8,puVar7,uVar8);
      *(undefined1 *)local_e = 0;
    }
    *(int *)(param_4 + 0x10) = *(int *)(param_4 + 0x10) + 1;
    func_0x000004c2(0,*(undefined2 *)(param_4 + 0x1c));
    FUN_2000_b241(param_1,1,param_4);
    return param_1;
  }
  return 0xffff;
}

