// Function: FUN_1000_7f2e

undefined2 __stdcall16far FUN_1000_7f2e(int param_1,int param_2,int *param_3)

{
  undefined2 uVar1;
  int *piVar2;
  undefined2 uVar3;
  
  uVar1 = 0;
  uVar3 = (undefined2)((ulong)param_3 >> 0x10);
  piVar2 = (int *)param_3;
  if ((((piVar2[1] <= param_2) && (param_2 < piVar2[3])) && (*param_3 <= param_1)) &&
     (param_1 < piVar2[2])) {
    uVar1 = 1;
  }
  return uVar1;
}

