// Function: LOCKRESOURCE

int __stdcall16far LOCKRESOURCE(undefined2 *param_1)

{
  int iVar1;
  undefined2 uVar2;
  int in_CX;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined2 unaff_DS;
  undefined2 uVar6;
  
  if (param_1 != (undefined2 *)0x0) {
    iVar1 = GLOBALLOCK(param_1);
    if (in_CX != 0) {
      return iVar1;
    }
    if (((((uint)param_1 & 1) == 0) && (uVar6 = *param_1, *(int *)0x0 == 0x454e)) &&
       (*(int *)0x26 != *(int *)0x24)) {
      piVar5 = (int *)(*(int *)0x24 + 2);
      while (piVar4 = piVar5, *piVar4 != iVar1) {
        iVar3 = piVar4[1];
        piVar5 = piVar4 + 4;
        do {
          if ((undefined2 *)piVar5[4] == param_1) {
            if (piVar4[3] == 0) {
              return 0;
            }
            uVar2 = (*(code *)piVar4[2])(0x1000,piVar5,uVar6,param_1,piVar5,uVar6);
            iVar1 = GLOBALLOCK(uVar2);
            if (iVar3 == 0) {
              return 0;
            }
            *(byte *)(piVar5 + 2) = *(byte *)(piVar5 + 2) | 4;
            return iVar1;
          }
          piVar5 = piVar5 + 6;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
  }
  return 0;
}

