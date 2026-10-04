// Function: FUN_2000_8208

void __stdcall16far FUN_2000_8208(int param_1)

{
  undefined2 *puVar1;
  undefined2 unaff_DS;
  
  puVar1 = (undefined2 *)func_0x00001d16(0x1000,*(undefined2 *)(param_1 + 0x36));
  if (puVar1 != (undefined2 *)0x0) {
    *puVar1 = *(undefined2 *)(param_1 + 0x10);
    puVar1[1] = 0xffff;
    puVar1[2] = 0;
    puVar1[3] = 0;
    func_0x00001d50(0,*(undefined2 *)(param_1 + 0x36));
  }
  return;
}

