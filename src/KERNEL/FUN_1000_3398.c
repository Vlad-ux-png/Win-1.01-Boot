// Function: FUN_1000_3398

undefined2 FUN_1000_3398(undefined2 param_1)

{
  undefined2 uVar1;
  code *pcVar2;
  ulong uVar3;
  byte bVar4;
  undefined2 *puVar5;
  bool bVar6;
  
  *(undefined2 *)0x20 = uRam00000000;
  *(undefined2 *)0x22 = uRam00000002;
  *(undefined2 *)0x24 = uRam00000004;
  *(undefined2 *)0x26 = uRam00000006;
  *(undefined2 *)0x28 = uRam00000008;
  *(undefined2 *)0x2a = uRam0000000a;
  *(undefined2 *)0x2c = uRam000000f8;
  *(undefined2 *)0x2e = uRam000000fa;
  if (*(int *)0x1a != 0) {
    FUN_1000_34ea();
  }
  uVar3 = (ulong)DAT_1000_002c >> 0x10;
  puVar5 = (undefined2 *)DAT_1000_002c;
  *(undefined2 *)0x34 = *DAT_1000_002c;
  uVar1 = puVar5[1];
  *(undefined2 *)0x36 = uVar1;
  *(undefined2 *)0x38 = CONCAT11((char)((uint)uVar1 >> 8),*DAT_1000_0034);
  *(undefined1 *)0x3b = *DAT_1000_0040;
  *(undefined2 *)0x32 = *DAT_1000_0038;
  if ((*(byte *)0x3a & 0x80) == 0) {
    pcVar2 = (code *)swi(0x21);
    bVar4 = (*pcVar2)();
    bVar6 = false;
    *(byte *)0x3a = bVar4 | 0xc0;
    *(undefined1 *)0x3c = 0x5c;
    pcVar2 = (code *)swi(0x21);
    (*pcVar2)();
    if (bVar6) {
      *(undefined1 *)0x3c = 0;
    }
  }
  if (*(int *)0x30 != 0) {
    pcVar2 = (code *)swi(0x67);
    (*pcVar2)();
  }
  return param_1;
}

