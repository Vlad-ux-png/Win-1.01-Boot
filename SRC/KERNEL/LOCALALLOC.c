// Function: LOCALALLOC

void __stdcall16far LOCALALLOC(byte *param_1,uint param_2)

{
  byte *pbVar1;
  int iVar2;
  undefined2 uVar3;
  byte extraout_DL;
  byte extraout_DH;
  int unaff_DI;
  undefined2 unaff_DS;
  bool bVar4;
  
  FUN_1000_4f06();
  if ((param_2 & 0x10) != 0) {
    *(int *)(unaff_DI + 2) = *(int *)(unaff_DI + 2) + 1;
  }
  bVar4 = param_1 == (byte *)0x0;
  if (bVar4) {
    if ((param_2 & 2) != 0) {
      FUN_1000_5389();
      *param_1 = *param_1 ^ 2;
      param_1[2] = param_1[2] | 0x40;
    }
  }
  else {
    FUN_1000_4c25();
    if ((!bVar4) && ((extraout_DL & 2) != 0)) {
      uVar3 = FUN_1000_5389();
      iVar2 = *(int *)param_1;
      *(undefined2 *)(iVar2 + -2) = uVar3;
      pbVar1 = (byte *)(iVar2 + -6);
      *pbVar1 = *pbVar1 | 2;
      if ((extraout_DH & 0xf) != 0) {
        param_1[2] = extraout_DH & 0xf;
      }
    }
  }
  if ((param_2 & 0x10) != 0) {
    *(int *)(unaff_DI + 2) = *(int *)(unaff_DI + 2) + -1;
  }
  FUN_1000_4f1e();
  return;
}

