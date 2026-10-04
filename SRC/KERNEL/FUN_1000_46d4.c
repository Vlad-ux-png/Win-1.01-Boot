// Function: FUN_1000_46d4

void __cdecl16near FUN_1000_46d4(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 uVar5;
  int unaff_DI;
  undefined2 unaff_CS;
  undefined1 uVar6;
  long lVar7;
  
  if (*(int *)0x22 != 0) {
    lVar7 = FUN_1000_47e3();
    if (lVar7 != 0) {
      return;
    }
    FUN_1000_475d();
  }
  uVar3 = 0;
  if (unaff_DI != 0) {
    uVar3 = CONCAT11(0x10,(char)unaff_DI);
  }
  uVar5 = 0x116;
  if (*(char *)0xc6 != '\0') {
    uVar5 = 0x11e;
    uVar3 = CONCAT11(0xa0,(char)uVar3);
  }
  iVar4 = OPENFILE(uVar3,0xc6,unaff_CS,uVar5,unaff_CS);
  *(int *)0x28 = iVar4;
  if (iVar4 != -1) {
    lVar7 = FUN_1000_4810();
    iVar4 = GLOBALALLOC(lVar7 + 3,0x2042);
    *(int *)0x22 = iVar4;
    uVar6 = 0;
    if (iVar4 != 0) {
      FUN_1000_47e3();
      FUN_1000_480d();
      puVar1 = (undefined4 *)0x24;
      unaff_CS = (undefined2)((ulong)*puVar1 >> 0x10);
      *(undefined2 *)*puVar1 = 0x2020;
      pcVar2 = (code *)swi(0x21);
      (*pcVar2)();
      if (!(bool)uVar6) {
        FUN_1000_4772();
        return;
      }
      FUN_1000_47f3();
      GLOBALFREE();
    }
  }
  *(undefined2 *)0x22 = 0;
  *(undefined2 *)0x24 = 0;
  *(undefined2 *)0x26 = 0;
  return;
}

