// Function: FUN_1000_7554

void FUN_1000_7554(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined2 unaff_DS;
  
  *(undefined1 *)0xef = 0;
  *(undefined1 *)0xf0 = 0x17;
  *(undefined1 *)0xee = 0;
  *(byte *)0xed = *(byte *)0xed & 0xdd;
  *(undefined1 *)0xec = 0;
  *(undefined1 *)0xf3 = 0;
  *(undefined2 *)0xf4 = 0;
  *(undefined1 *)0x146 = 0;
  *(undefined1 *)0x14f = 0;
  FUN_1000_7187();
  FUN_1000_7288();
  FUN_1000_728a();
  FUN_1000_7268();
  FUN_1000_71d5();
  FUN_1000_72c9();
  puVar2 = (undefined1 *)0xf6;
  iVar1 = 9;
  do {
    puVar2 = puVar2 + 8;
    *puVar2 = 9;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_1000_6f64();
  *(uint *)0xec = *(uint *)0xec & 0xbbfe | *(uint *)0xf1;
  return;
}

