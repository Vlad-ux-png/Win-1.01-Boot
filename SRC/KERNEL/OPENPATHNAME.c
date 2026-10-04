// Function: OPENPATHNAME

void __stdcall16far OPENPATHNAME(undefined2 param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined2 extraout_DX;
  undefined2 extraout_DX_00;
  undefined2 uVar2;
  undefined2 unaff_SS;
  bool bVar3;
  undefined1 local_54 [80];
  
  bVar3 = false;
  if ((char)((uint)param_1 >> 8) == '\0') {
    param_1 = CONCAT11(0x3d,(char)param_1);
  }
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
  FUN_1000_1e4b(param_1,local_54,unaff_SS,uVar2,(int)((ulong)param_2 >> 0x10));
  return;
}

