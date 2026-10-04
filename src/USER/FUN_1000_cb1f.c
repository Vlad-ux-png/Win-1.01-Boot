// Function: FUN_1000_cb1f

int __cdecl16far FUN_1000_cb1f(void)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  iVar1 = func_0x00000a4b(0x1000,0x1c,0x42);
  if (iVar1 != 0) {
    iVar2 = func_0x00000997(0,iVar1,iVar1,iVar1);
    *(undefined2 *)(iVar2 + 4) = 0x1c;
    *(undefined2 *)(iVar2 + 2) = 0xffff;
    func_0x00000a16(0);
  }
  return iVar1;
}

