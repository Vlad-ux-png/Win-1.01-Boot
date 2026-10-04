// Function: FUN_1000_7f01

undefined2 __stdcall16far FUN_1000_7f01(int *param_1)

{
  undefined2 uVar1;
  int *piVar2;
  undefined2 uVar3;
  
  uVar1 = 1;
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  piVar2 = (int *)param_1;
  if ((*param_1 < piVar2[2]) && (piVar2[1] < piVar2[3])) {
    uVar1 = 0;
  }
  return uVar1;
}

