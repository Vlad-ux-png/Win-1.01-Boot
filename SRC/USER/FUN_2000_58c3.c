// Function: FUN_2000_58c3

void __stdcall16far FUN_2000_58c3(int param_1,undefined2 param_2,int param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  
  uVar2 = 0x1000;
  if (*(char *)(param_3 + 10) == '\0') {
    uVar2 = 0;
    uVar1 = func_0x0000ffff(0x1000,param_1,param_2,param_3);
  }
  else {
    uVar1 = 0;
    if (*(int *)(param_3 + 0x16) <= param_1) {
      uVar1 = FUN_2000_5a33();
    }
  }
  if ((*(byte *)(param_3 + 7) & 0x20) != 0) {
    func_0x0000ffff(uVar2,uVar1,param_3);
  }
  return;
}

