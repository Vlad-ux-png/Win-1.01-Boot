// Function: DELETEPATHNAME

/* WARNING: Removing unreachable block (ram,0x10001a01) */

void DELETEPATHNAME(undefined2 param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined2 extraout_DX;
  undefined2 extraout_DX_00;
  undefined2 uVar2;
  undefined2 unaff_SS;
  bool bVar3;
  undefined1 auStack_56 [80];
  
  param_1 = 0x4100;
  bVar3 = false;
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  uVar2 = extraout_DX;
  if (!bVar3) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    uVar2 = extraout_DX_00;
    if (!bVar3) {
      return;
    }
  }
  FUN_1000_1e4b(0x4100,auStack_56,unaff_SS,uVar2,(int)((ulong)param_2 >> 0x10));
  return;
}

