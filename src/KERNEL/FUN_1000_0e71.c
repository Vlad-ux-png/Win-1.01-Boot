// Function: FUN_1000_0e71

int FUN_1000_0e71(int param_1,int param_2,int param_3,undefined2 param_4)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined2 *in_CX;
  int iVar5;
  undefined2 *puVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  bool bVar9;
  undefined4 uVar10;
  undefined2 local_a;
  undefined2 *local_8;
  undefined2 local_6;
  int local_4;
  
  local_6 = 0;
  iVar3 = -1;
  local_4 = -1;
  if (*(uint *)0x1c <= param_3 - 1U) goto LAB_1000_0fcd;
  iVar5 = (param_3 - 1U) * 10 + *(int *)0x22;
  uVar8 = param_4;
  if (((*(uint *)(iVar5 + 4) & 0x400) != 0) && ((*(byte *)(*(int *)0x8 + 4) & 0x44) == 0)) {
    iVar4 = FUN_1000_0e71(0xffff,0xffff,*(undefined2 *)0xe,param_4);
    iVar3 = 0;
    if (iVar4 == 0) goto LAB_1000_0fcd;
  }
  if ((*(uint *)(iVar5 + 4) & 2) == 0) {
    iVar4 = FUN_1000_0b1f(iVar5,uVar8);
    iVar3 = 0;
    if (iVar4 == 0) goto LAB_1000_0fcd;
LAB_1000_0eed:
    if (param_2 == -1) {
      iVar3 = OPENFILE(0xa400,*(undefined2 *)0xa,uVar8,*(undefined2 *)0xa,uVar8);
LAB_1000_0f0f:
      param_1 = iVar3;
      local_4 = iVar3;
      if (iVar3 == -1) goto LAB_1000_0fcd;
    }
    else {
      iVar3 = param_2;
      if (param_1 == param_2) goto LAB_1000_0f0f;
    }
    uVar10 = FUN_1000_0c6f(param_1,iVar3,param_3,iVar5,uVar8);
    uVar7 = (undefined2)((ulong)uVar10 >> 0x10);
    uVar10 = FUN_1000_09e1((int)uVar10);
    local_a = (undefined2)((ulong)uVar10 >> 0x10);
    if (((int)uVar10 != 0) && (uVar1 = *(uint *)(iVar5 + 4), (uVar1 & 0x100) != 0)) {
      if (local_4 == -1) {
        puVar6 = in_CX + 1;
        local_8 = (undefined2 *)*in_CX;
LAB_1000_0f98:
        iVar5 = FUN_1000_1140(local_4,uVar1 & 1,local_a,local_8,puVar6,uVar7,local_6,param_4);
      }
      else {
        iVar5 = (int)in_CX << 3;
        iVar3 = local_4;
        local_6 = GLOBALALLOC(iVar5,0,0x22);
        iVar3 = FUN_1000_09e1(local_6,iVar5,iVar3);
        if (iVar3 == 0) {
LAB_1000_0f94:
          puVar6 = (undefined2 *)0x0;
          uVar7 = 0;
          local_8 = in_CX;
          goto LAB_1000_0f98;
        }
        bVar9 = false;
        pcVar2 = (code *)swi(0x21);
        iVar3 = (*pcVar2)();
        if ((!bVar9) && (iVar3 == iVar5)) goto LAB_1000_0f94;
        iVar5 = 0;
      }
      GLOBALFREE(local_6);
      iVar3 = 0;
      if (iVar5 == 0) goto LAB_1000_0fcd;
    }
  }
  else {
    if ((*(uint *)(iVar5 + 4) & 4) == 0) goto LAB_1000_0eed;
    local_a = *(undefined2 *)(iVar5 + 8);
  }
  iVar3 = FUN_1000_09e1(local_a,uVar8);
LAB_1000_0fcd:
  if ((local_4 != -1) && (param_2 != local_4)) {
    pcVar2 = (code *)swi(0x21);
    (*pcVar2)();
  }
  return iVar3;
}

