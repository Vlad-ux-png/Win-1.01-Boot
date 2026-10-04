// Function: FUN_1000_42b1

void __cdecl16near FUN_1000_42b1(undefined2 param_1,int param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  
  iVar1 = *(int *)0x168;
  *(uint *)0x168 = (uint)(iVar1 == 0);
  if ((param_2 == 0) || ((iVar1 == 0) != 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  func_0x00000865(0x1000,uVar2,param_1);
  return;
}

