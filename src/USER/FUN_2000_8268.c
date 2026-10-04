// Function: FUN_2000_8268

void FUN_2000_8268(undefined2 *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined2 unaff_DS;
  
  piVar2 = (int *)func_0x00001dcd(0x1000,*param_1);
  if (piVar2 != (int *)0x0) {
    piVar3 = (int *)(param_1[6] + (int)piVar2);
    piVar4 = piVar2;
    while (piVar2 < piVar3) {
      if (*piVar2 == 0xd0d) {
        piVar2 = (int *)((int)piVar2 + 3);
        param_1[6] = param_1[6] + -3;
      }
      else {
        piVar1 = piVar2;
        piVar2 = (int *)((int)piVar2 + 1);
        *(char *)piVar4 = (char)*piVar1;
        piVar4 = (int *)((int)piVar4 + 1);
      }
    }
    func_0x00001ead(0,*param_1);
  }
  return;
}

