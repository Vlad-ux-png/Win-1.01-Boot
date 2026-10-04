// Function: FUN_2000_7d0c

int __stdcall16far
FUN_2000_7d0c(int param_1,undefined2 param_2,char *param_3,int param_4,int param_5)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined2 unaff_SI;
  undefined2 unaff_DS;
  undefined2 uVar7;
  int local_a;
  
  if ((param_1 == 2) && (*(int *)(param_5 + 0x10) == *(int *)(param_5 + 0x12))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  local_a = FUN_2000_6cde(*(undefined2 *)(param_5 + 0x12),param_5);
  local_a = local_a + 1;
  if (((param_1 == 0) || (*(int *)(param_5 + 0x10) + 1U < *(uint *)(param_5 + 0x12))) ||
     (*param_3 == '\r')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  uVar7 = param_3._2_2_;
  uVar3 = func_0x00001a1f(0x1000,param_3._2_2_);
  iVar4 = FUN_2000_7e6b(param_1 == 2,param_2,param_5);
  if (iVar4 != 0) {
    iVar5 = FUN_2000_7928(param_5);
    iVar6 = FUN_2000_7225((char *)param_3,uVar3,param_2,param_5);
    if ((*(byte *)(param_5 + 6) & 2) == 0) {
      FUN_2000_8460(iVar5 + iVar6,param_4 + 1,param_5,uVar7,unaff_SI);
    }
    if (((((*(uint *)(param_5 + 6) & 0x4000) != 0) || (param_1 == 0)) ||
        ((*(byte *)(param_5 + 6) & 2) != 0)) &&
       (iVar5 = FUN_2000_7284(uVar2,param_4,param_5), local_a < iVar5)) {
      local_a = iVar5;
    }
    if (param_1 == 0) {
      FUN_2000_7ab6(0x7fff,param_4,param_5);
    }
    if ((((*(uint *)(param_5 + 6) & 0x100) == 0) &&
        ((*(int *)(param_5 + 0x22) < *(int *)(param_5 + 0x20) ||
         ((*(int *)(param_5 + 0x20) == *(int *)(param_5 + 0x22) &&
          (iVar5 = FUN_2000_6ee7(*(int *)(param_5 + 0x20) + -1,param_5),
          *(int *)(param_5 + 0x28) < iVar5)))))) ||
       ((*(int *)(param_5 + 0x30) != 0 && (*(int *)(param_5 + 0x30) < *(int *)(param_5 + 0xc))))) {
      FUN_2000_7f2b(param_2,uVar1,iVar4,param_5);
      FUN_2000_7284(0,0,param_5);
      local_a = -1;
      func_0x000006dd(0,0);
      FUN_2000_8208(param_5);
    }
  }
  return local_a;
}

