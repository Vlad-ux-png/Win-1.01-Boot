// Function: ENABLEDOS

void __cdecl16far ENABLEDOS(void)

{
  code *pcVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  byte bVar4;
  byte bVar5;
  byte in_AF;
  byte bVar6;
  byte bVar7;
  byte in_TF;
  byte in_IF;
  byte bVar8;
  byte in_NT;
  int in_stack_00000000;
  undefined2 in_stack_0000000c;
  
  iVar2 = DAT_1000_3716;
  LOCK();
  DAT_1000_3716 = 0x3720;
  UNLOCK();
  if (iVar2 != 0x3720) {
    bVar4 = 0;
    bVar8 = 0;
    bVar7 = 0;
    bVar6 = 1;
    bVar5 = 1;
    LOCK();
    DAT_1000_004f = *DAT_1000_0034;
    *DAT_1000_0034 = 0;
    UNLOCK();
    uVar3 = (undefined2)((ulong)DAT_1000_0038 >> 0x10);
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    do {
      (*(code *)*(undefined2 *)0x7a)
                (0x1000,(uint)(in_NT & 1) * 0x4000 | (uint)(bVar8 & 1) * 0x800 |
                        (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 |
                        (uint)(bVar7 & 1) * 0x80 | (uint)(bVar6 & 1) * 0x40 |
                        (uint)(in_AF & 1) * 0x10 | (uint)(bVar5 & 1) * 4 | (uint)(bVar4 & 1));
    } while (!(bool)bVar6);
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    if (iVar2 != 0x373b) {
      pcVar1 = (code *)swi(0x21);
      (*pcVar1)();
      LOCK();
      DAT_1000_008a = *(undefined2 *)(in_stack_00000000 + 0xc);
      *(undefined2 *)(in_stack_00000000 + 0xc) = 0x404e;
      UNLOCK();
      LOCK();
      DAT_1000_008c = *(undefined2 *)(in_stack_00000000 + 0xe);
      *(undefined2 *)(in_stack_00000000 + 0xe) = 0x1000;
      UNLOCK();
    }
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x21);
    DAT_1000_007e = in_stack_00000000;
    DAT_1000_0080 = uVar3;
    (*pcVar1)();
    (*(code *)*(undefined2 *)0x6a)();
  }
  return;
}

