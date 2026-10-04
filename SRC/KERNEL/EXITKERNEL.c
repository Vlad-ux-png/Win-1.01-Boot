// Function: EXITKERNEL

undefined4 EXITKERNEL(void)

{
  code *pcVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 unaff_DS;
  
  uRam000000fc = DAT_1000_0086;
  uRam000000fe = DAT_1000_0088;
  if (DAT_1000_007c != 0) {
    FUN_1000_388e();
  }
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  iVar4 = DAT_1000_0012;
  do {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    iVar2 = 0x14;
    do {
      pcVar1 = (code *)swi(0x21);
      (*pcVar1)();
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar4 = *(int *)0x42;
  } while (iVar4 != 0);
  iVar4 = (int)((ulong)DAT_1000_0044 >> 0x10);
  puVar3 = (undefined2 *)DAT_1000_0044;
  if (iVar4 != 0) {
    *DAT_1000_0044 = 0xffff;
    puVar3[1] = 0;
  }
  if (DAT_1000_0006 != 0) {
    (*(code *)*(undefined2 *)0x4)(0x1000);
  }
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return CONCAT22(DAT_1000_0040._2_2_,(undefined2)DAT_1000_0040);
}

