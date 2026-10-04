// Function: FUN_1000_343b

undefined4 FUN_1000_343b(int param_1,undefined2 param_2)

{
  char *pcVar1;
  code *pcVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  byte bVar6;
  byte bVar7;
  byte in_AF;
  byte bVar8;
  byte bVar9;
  byte in_TF;
  byte in_IF;
  byte bVar10;
  byte in_NT;
  
  uRam00000000 = *(undefined2 *)0x20;
  uRam00000002 = *(undefined2 *)0x22;
  uRam00000004 = *(undefined2 *)0x24;
  uRam00000006 = *(undefined2 *)0x26;
  uRam00000008 = *(undefined2 *)0x28;
  uRam0000000a = *(undefined2 *)0x2a;
  uRam000000f8 = *(undefined2 *)0x2c;
  uRam000000fa = *(undefined2 *)0x2e;
  *DAT_1000_0034 = (char)*(undefined2 *)0x38;
  *DAT_1000_0040 = *(undefined1 *)0x3b;
  (*(code *)*(undefined2 *)0x7a)
            (0x1000,(uint)(in_NT & 1) * 0x4000 | (uint)(in_IF & 1) * 0x200 |
                    (uint)(in_TF & 1) * 0x100 | 0x40 | (uint)(in_AF & 1) * 0x10 | 4);
  *(byte *)0x3a = *(byte *)0x3a & 0xbf;
  if (((param_1 != 0) && ((*(byte *)0x3a & 0x40) != 0)) &&
     (uVar3 = CONCAT11(*(undefined1 *)0x3a,*(byte *)0x3a) & 0x3f3f,
     (char)uVar3 == (char)(uVar3 >> 8))) {
    pcVar5 = (char *)0x3d;
    pcVar4 = (char *)0x3d;
    do {
      pcVar1 = pcVar5;
      pcVar5 = pcVar5 + 1;
      if (*pcVar4 != *pcVar1) goto LAB_1000_34b7;
      pcVar1 = pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (*pcVar1 != '\0');
    *(byte *)0x3a = *(byte *)0x3a | 0x40;
  }
LAB_1000_34b7:
  uVar3 = *(uint *)0x1a;
  bVar6 = 0;
  bVar10 = 0;
  bVar9 = (int)uVar3 < 0;
  bVar8 = uVar3 == 0;
  bVar7 = (POPCOUNT(uVar3 & 0xff) & 1U) == 0;
  if (!(bool)bVar8) {
    FUN_1000_34ea();
  }
  (*(code *)*(undefined2 *)0x7a)
            (0x1000,(uint)(in_NT & 1) * 0x4000 | (uint)(bVar10 & 1) * 0x800 |
                    (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)(bVar9 & 1) * 0x80
                    | (uint)(bVar8 & 1) * 0x40 | (uint)(in_AF & 1) * 0x10 | (uint)(bVar7 & 1) * 4 |
                    (uint)(bVar6 & 1));
  if (*(int *)0x30 != 0) {
    pcVar2 = (code *)swi(0x67);
    (*pcVar2)();
  }
  return CONCAT22(param_1,param_2);
}

