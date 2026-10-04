// Function: FREERESOURCE

undefined2 * __stdcall16far FREERESOURCE(undefined2 *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined2 uVar4;
  
  if (param_1 != (undefined2 *)0x0) {
    iVar2 = FUN_1000_09e1(param_1);
    if (iVar2 == 0) {
      if (((uint)param_1 & 1) != 0) {
        return (undefined2 *)0x0;
      }
      if ((*(byte *)(param_1 + 1) & 0x40) == 0) {
        return (undefined2 *)0x0;
      }
      uVar4 = *param_1;
    }
    else {
      uVar4 = *(undefined2 *)0x1;
    }
    if ((*(int *)0x0 == 0x454e) && (*(int *)0x26 != *(int *)0x24)) {
      piVar3 = (int *)(*(int *)0x24 + 2);
      while (*piVar3 != 0) {
        iVar2 = piVar3[1];
        piVar3 = piVar3 + 4;
        do {
          if ((undefined2 *)piVar3[4] == param_1) {
            if (piVar3[5] != 0) {
              piVar1 = piVar3 + 5;
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              if (*piVar1 != 0 && SBORROW2(iVar2,1) == *piVar1 < 0) {
                return param_1;
              }
              if ((piVar3[2] & 0xf000U) != 0) {
                return (undefined2 *)0x0;
              }
              piVar3[4] = 0;
              *(byte *)(piVar3 + 2) = *(byte *)(piVar3 + 2) & 0xfb;
            }
            goto LAB_1000_2baf;
          }
          piVar3 = piVar3 + 6;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
LAB_1000_2baf:
    param_1 = (undefined2 *)GLOBALFREE(param_1);
  }
  return param_1;
}

