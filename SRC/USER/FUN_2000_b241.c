// Function: FUN_2000_b241

void __stdcall16far FUN_2000_b241(int param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 local_c [8];
  
  if ((*(char *)(param_3 + 0x31) != '\0') &&
     (((param_2 == 0 || (*(int *)(param_3 + 0x10) == 0)) ||
      (param_1 <= *(int *)(param_3 + 6) + *(int *)(param_3 + 0xe) + 1)))) {
    func_0x0000144e(0x1000,local_c);
    uVar1 = func_0x000005e0(0,*(undefined2 *)(param_3 + 2));
    FUN_2000_a86e(local_c,unaff_SS,1,uVar1,param_3);
    func_0x000005f7(0,uVar1,*(undefined2 *)(param_3 + 2));
    if (*(int *)(param_3 + 0x10) < 2) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(param_3 + 6) * 100) / (*(int *)(param_3 + 0x10) + -1);
    }
    func_0x0000061a(0,1,iVar2,1,*(undefined2 *)(param_3 + 2));
    FUN_2000_b41b(*(undefined2 *)(param_3 + 8),param_3);
  }
  return;
}

