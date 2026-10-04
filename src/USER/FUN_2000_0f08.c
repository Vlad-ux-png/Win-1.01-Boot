// Function: FUN_2000_0f08

void __stdcall16far FUN_2000_0f08(undefined2 param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 unaff_DS;
  int *local_a;
  
  iVar2 = 0;
  local_a = (int *)&SUB_0000_0552;
  while( true ) {
    if (*(int *)0x52c <= iVar2) {
      return;
    }
    if (*local_a == param_2) break;
    iVar2 = iVar2 + 1;
    local_a = local_a + 1;
  }
  uVar1 = func_0x0000ffff(0x1000,*(undefined2 *)0x634);
  FUN_2000_0e25(param_1,iVar2,uVar1,param_2);
  func_0x0000ffff(0,uVar1);
  return;
}

