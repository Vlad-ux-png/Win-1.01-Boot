// Function: FUN_1000_6825

undefined2 FUN_1000_6825(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  undefined2 *puVar3;
  int *piVar4;
  char *pcVar5;
  undefined2 *puVar6;
  int *piVar7;
  int *piVar8;
  undefined2 unaff_DS;
  
  piVar4 = (int *)*(undefined2 *)0x458;
  piVar8 = (int *)0x0;
  while( true ) {
    piVar7 = piVar4;
    if (piVar7 == (int *)0x0) {
      return 0;
    }
    if (((undefined2 *)*piVar7)[1] == param_1._2_2_) break;
    piVar4 = (int *)*(undefined2 *)*piVar7;
    piVar8 = piVar7;
  }
  pcVar5 = (char *)((int)param_1 + -1);
  if (*pcVar5 != '\x01') {
    return 0;
  }
  *pcVar5 = '\0';
  puVar3 = (undefined2 *)*piVar7;
  piVar1 = puVar3 + 2;
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0 || SBORROW2(iVar2,1) != *piVar1 < 0) {
    puVar6 = (undefined2 *)0x458;
    if (piVar8 != (int *)0x0) {
      puVar6 = (undefined2 *)*piVar8;
    }
    *puVar6 = *puVar3;
    func_0x0000ffff(0x1000,param_1._2_2_);
    func_0x00005c92(0,piVar7);
  }
  return 1;
}

