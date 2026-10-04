// Function: FUN_1000_4528

undefined2 __cdecl16near FUN_1000_4528(undefined2 param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  uVar1 = func_0x00003504(0x1000,param_1);
  if (*(int *)0x16e != 0) {
    iVar2 = FUN_1000_5268(0,param_1);
    if (iVar2 == 0) {
      return 0;
    }
    *(undefined2 *)0x16e = 0;
  }
  if (*(int *)0x16c != 0) {
    func_0x00003a0a(0,0,8,uVar1);
    FUN_1000_43d8(param_1,0);
    *(undefined2 *)0x16c = 0;
  }
  if (*(int *)0x16a != 0) {
    func_0x00000361(0);
    func_0x00003518(0,0,9,uVar1);
    *(undefined2 *)0x16a = 0;
  }
  return 1;
}

