// Function: FUN_1000_30aa

void __cdecl16near FUN_1000_30aa(void)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  undefined4 uVar2;
  
  uVar1 = 0x1000;
  if (*(int *)0x26 != 0) {
    uVar1 = 0;
    func_0x000006ef(0x1000,*(undefined2 *)0x26);
  }
  uVar2 = func_0x0000254a(uVar1,5);
  *(undefined2 *)0xeaa = (int)uVar2;
  *(undefined2 *)0xeac = (int)((ulong)uVar2 >> 0x10);
  uVar2 = func_0x0000ffff(0,8);
  *(undefined2 *)0xea0 = (int)uVar2;
  *(undefined2 *)0xea2 = (int)((ulong)uVar2 >> 0x10);
  uVar1 = func_0x0000ffff(0,*(undefined2 *)0xeaa,*(undefined2 *)0xeac);
  *(undefined2 *)0x26 = uVar1;
  return;
}

