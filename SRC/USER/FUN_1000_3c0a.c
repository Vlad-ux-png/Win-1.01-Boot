// Function: FUN_1000_3c0a

/* WARNING: Removing unreachable block (ram,0x00013c28) */

int __stdcall16far
FUN_1000_3c0a(undefined2 param_1,undefined2 param_2,undefined2 param_3,int param_4,int param_5)

{
  int iVar1;
  undefined2 uVar2;
  int unaff_BP;
  undefined2 unaff_DS;
  bool bVar3;
  
  if (param_5 != -1) {
    bVar3 = unaff_BP == -1;
    iVar1 = param_5;
    FUN_1000_7add(param_5);
    if (!bVar3) {
      uVar2 = FUN_1000_4141();
      param_5 = FUN_1000_78e9(iVar1,param_4,param_3,param_1,param_2,DAT_1000_537c,DAT_1000_537e,
                              DAT_1000_5aa9,DAT_1000_5aab,uVar2,uVar2);
      if (param_4 == *(int *)0x7c) {
        *(int *)0x7e = param_5;
      }
    }
    return param_5;
  }
  iVar1 = FUN_1000_40d0();
  return iVar1;
}

