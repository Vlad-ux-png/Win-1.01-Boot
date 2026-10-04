// Function: FUN_1000_258f

void __stdcall16far FUN_1000_258f(code *param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  int *unaff_SI;
  int unaff_DI;
  undefined2 uVar2;
  undefined2 unaff_DS;
  bool bVar3;
  undefined1 local_104 [256];
  
  bVar3 = &stack0x0000 == (undefined1 *)0x104;
  FUN_1000_260a();
  if (!bVar3) {
    iVar1 = *unaff_SI;
    uVar2 = 0x1000;
    do {
      func_0x0000ffff(uVar2,0x100,local_104);
      (*param_1)(0);
      iVar1 = iVar1 + -1;
      uVar2 = 0;
    } while (iVar1 != 0);
    *(char *)(unaff_DI + 3) = *(char *)(unaff_DI + 3) + -1;
  }
  return;
}

