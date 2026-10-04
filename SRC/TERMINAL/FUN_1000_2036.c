// Function: FUN_1000_2036

void FUN_1000_2036(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  undefined2 local_a;
  int local_8;
  undefined2 *local_6;
  
  if (param_2 == 0) {
    return;
  }
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  piVar3 = (int *)param_1;
  iVar2 = FUN_1000_1827(0x18,0,piVar3[1]);
  piVar3[1] = iVar2;
  iVar2 = FUN_1000_1827(0x19,0,piVar3[3]);
  piVar3[3] = iVar2;
  iVar2 = FUN_1000_1827(0x4f,0,*param_1);
  *param_1 = iVar2;
  iVar2 = FUN_1000_1827(0x50,0,piVar3[2]);
  piVar3[2] = iVar2;
  if (*(int *)0x16 != 0) {
    if ((piVar3[3] - piVar3[1]) * (piVar3[2] - *param_1) < 0x51) {
      local_a = 1;
      goto LAB_1000_20d3;
    }
    FUN_1000_1ca6(param_2);
  }
  local_a = FUN_1000_29d6(piVar3,uVar4,param_2);
LAB_1000_20d3:
  iVar2 = piVar3[2];
  iVar1 = *param_1;
  local_6 = (undefined2 *)(piVar3[1] * 2 + 0xe6e);
  for (local_8 = piVar3[1]; local_8 < piVar3[3]; local_8 = local_8 + 1) {
    FUN_1000_1b5a(local_a,iVar2 - iVar1,*param_1,*local_6);
    local_6 = local_6 + 1;
  }
  return;
}

