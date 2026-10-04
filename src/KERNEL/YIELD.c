// Function: YIELD

undefined2 __cdecl16far YIELD(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int unaff_BP;
  undefined2 unaff_DS;
  
  uVar2 = DAT_1000_0018;
  uVar1 = 0;
  if (DAT_1000_0020 == '\0') {
    if (*(int *)0x7e == 0x4454) {
      *(int *)0x6 = *(int *)0x6 + 1;
      uVar2 = FUN_1000_3500();
      return uVar2;
    }
    FATALEXIT(0x1000,0x301,unaff_DS,unaff_BP + 1);
    *(int *)0x6 = *(int *)0x6 + -1;
    uVar1 = 0xffff;
  }
  return uVar1;
}

