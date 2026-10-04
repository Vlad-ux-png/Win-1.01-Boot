// Function: DISABLEDOS

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __stdcall16far DISABLEDOS(char param_1)

{
  code *pcVar1;
  ulong uVar2;
  int iVar3;
  int unaff_BP;
  int iVar4;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  undefined2 uVar5;
  
  iVar4 = unaff_BP + 1;
  iVar3 = 2;
  uVar5 = 2;
  (*(code *)*(undefined2 *)0x6a)();
  DAT_1000_3716 = 0x373b;
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)(uVar5);
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)(iVar4);
  if (param_1 == '\0') {
    DAT_1000_3716 = 0x3756;
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    uVar2 = (ulong)_DAT_1000_008a >> 0x10;
    *(undefined2 *)(iVar3 + 0xc) = (int)_DAT_1000_008a;
    *(undefined2 *)(iVar3 + 0xe) = (int)uVar2;
  }
  return;
}

