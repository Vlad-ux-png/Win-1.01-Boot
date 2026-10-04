// Function: FUN_1000_4da7

void __stdcall16far FUN_1000_4da7(int param_1,int param_2)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  if (*(int *)0x16e != 0) {
    FUN_1000_4fdc(param_2,*(undefined2 *)0x136c);
  }
  if (param_1 != 0) {
    if ((*(int *)(param_2 + 0xe) == 0) && (*(int *)0x138e != 0)) {
      uVar1 = *(undefined2 *)0x138e;
    }
    else {
      uVar1 = *(undefined2 *)0x1518;
    }
    FUN_1000_2d49(uVar1);
    FUN_1000_2f26();
  }
  uVar1 = FUN_1000_6149(*(undefined2 *)(param_2 + 0x14));
  *(undefined2 *)(param_2 + 0x14) = uVar1;
  return;
}

