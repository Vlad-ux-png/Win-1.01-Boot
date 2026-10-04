// Function: FUN_2000_169b

void __cdecl16near FUN_2000_169b(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  undefined1 local_14 [18];
  
  uVar2 = 0x1000;
  if (*(int *)0x47c != 0) {
    uVar2 = 0;
    func_0x0000ffff(0x1000);
  }
  func_0x0000ffff(uVar2);
  func_0x0000ffff(0);
  do {
    iVar1 = func_0x0000ffff(0,1,0xffff,0,0,local_14);
  } while (iVar1 != 0);
  return;
}

