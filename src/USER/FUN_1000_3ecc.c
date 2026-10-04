// Function: FUN_1000_3ecc

void __stdcall16far FUN_1000_3ecc(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  piVar2 = (int *)param_1;
  iVar1 = piVar2[1];
  if (((iVar1 == 0x113) || (iVar1 == 0x118)) || (*param_1 != 0)) {
    if (((iVar1 == 0x118) || (iVar1 == 0x113)) && (piVar2[4] != 0 || piVar2[3] != 0)) {
      (*(code *)piVar2[3])(0x1000);
    }
    else {
      FUN_1000_3f6d(0x1000,piVar2[3],piVar2[4],piVar2[2],iVar1,*param_1);
    }
  }
  return;
}

