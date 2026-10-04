// Function: FUN_1000_d469

void __cdecl16near FUN_1000_d469(void)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 unaff_DS;
  
  uVar2 = func_0x00000616(0x1000,0,0,0,0);
  *(undefined2 *)0x5bc = uVar2;
  uVar2 = func_0x00000624(0,0,0,0,0);
  *(undefined2 *)0x602 = uVar2;
  uVar2 = func_0x000006d0(0,0,0,0,0);
  *(undefined2 *)0x530 = uVar2;
  *(undefined2 *)&SUB_0000_0650 = 0;
  iVar3 = 0;
  puVar1 = (undefined2 *)0x4ae;
  do {
    puVar4 = puVar1;
    *puVar4 = *(undefined2 *)&SUB_0000_0650;
    uVar2 = func_0x0000ffff(0,0,0,0,0,0,0,0xc15,0x23f);
    puVar4[2] = uVar2;
    *(undefined1 *)((int)puVar4 + 7) = 0;
    puVar4[1] = 1;
    *(undefined2 *)&SUB_0000_0650 = puVar4;
    iVar3 = iVar3 + 1;
    puVar1 = puVar4 + 4;
  } while (iVar3 < 5);
  uVar2 = func_0x0000ffff(0,puVar4[2]);
  *(undefined2 *)0x3b2 = uVar2;
  uVar2 = func_0x0000069e(0,8,*(undefined2 *)(*(int *)&SUB_0000_0650 + 4));
  *(undefined2 *)0x510 = uVar2;
  *(undefined2 *)0x5ab5 = uVar2;
  uVar2 = func_0x0000ffff(0,10,*(undefined2 *)(*(int *)&SUB_0000_0650 + 4));
  *(undefined2 *)0x50e = uVar2;
  *(undefined2 *)0x5ab7 = uVar2;
  func_0x00000499(0,*(undefined2 *)0x50e,*(undefined2 *)0x510,0,0,0x546);
  uVar2 = func_0x0000ffff(0,*(undefined2 *)0x50e,*(undefined2 *)0x510,0,0);
  *(undefined2 *)0x41a = uVar2;
  return;
}

