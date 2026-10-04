// Function: FUN_1000_2c40

void FUN_1000_2c40(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  int *piVar6;
  int unaff_CS;
  
  piVar6 = (int *)*(int *)0x24;
  if ((int *)*(int *)0x26 != piVar6) {
    iVar1 = *piVar6;
    piVar6 = piVar6 + 1;
    while (*piVar6 != 0) {
      iVar4 = piVar6[1];
      piVar6[2] = 0x2bf8;
      piVar6[3] = unaff_CS;
      piVar6 = piVar6 + 4;
      do {
        iVar3 = iVar1;
        if ((piVar6[2] & 0x40U) != 0) {
          do {
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
          pcVar2 = (code *)swi(0x21);
          uVar5 = param_1;
          (*pcVar2)();
          iVar3 = FUN_1000_29b6(uVar5,uVar5,piVar6,param_2);
          piVar6[4] = iVar3;
        }
        piVar6 = piVar6 + 6;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  return;
}

