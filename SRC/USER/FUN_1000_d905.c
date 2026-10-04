// Function: FUN_1000_d905

void __cdecl16near FUN_1000_d905(void)

{
  byte bVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  int local_a;
  uint local_8;
  byte *local_6;
  
  iVar2 = func_0x00000289(0x1000,6,0,1,0,*(undefined2 *)0x3a0);
  if (iVar2 != 0) {
    uVar3 = func_0x00000296(0,iVar2,*(undefined2 *)0x3a0);
    local_6 = (byte *)func_0x0000029f(0,uVar3);
    *(undefined2 *)0x4aa = (byte *)local_6;
    *(undefined2 *)0x4ac = (int)((ulong)local_6 >> 0x10);
    if (local_6 != (byte *)0x0) {
      bVar1 = *local_6;
      local_a = 0;
      do {
        local_8 = (uint)bVar1;
        *(char *)(local_a + 0x60a) = (char)((byte *)local_6 + 1) - *(char *)0x4aa;
        local_6 = (byte *)CONCAT22(local_6._2_2_,(byte *)local_6 + 1 + local_8);
        bVar1 = *local_6;
        *local_6 = 0;
        local_a = local_a + 1;
      } while (local_a < 9);
    }
  }
  return;
}

