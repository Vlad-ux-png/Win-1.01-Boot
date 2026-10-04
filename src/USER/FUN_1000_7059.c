// Function: FUN_1000_7059

void __cdecl16near FUN_1000_7059(int param_1,int param_2)

{
  int extraout_DX;
  int *piVar1;
  int *piVar2;
  
  piVar2 = DAT_1000_54a0;
  while (piVar1 = piVar2, (int *)0x5380 < piVar1) {
    piVar2 = piVar1 + -8;
    if (((param_2 != 0) && (*piVar2 == param_2)) || ((param_1 != 0 && (piVar1[-7] == param_1)))) {
      FUN_1000_7047();
      param_1 = extraout_DX;
    }
  }
  FUN_1000_702e();
  return;
}

