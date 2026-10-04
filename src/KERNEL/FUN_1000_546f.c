// Function: FUN_1000_546f

int * __cdecl16near FUN_1000_546f(void)

{
  int *piVar1;
  int *in_AX;
  uint uVar2;
  int *piVar3;
  char *unaff_DI;
  undefined2 unaff_DS;
  
  do {
    piVar3 = in_AX;
    in_AX = piVar3;
    if (((uint)piVar3 & 1) != 0) {
LAB_1000_54a4:
      uVar2 = (int)in_AX - 1;
      if (((*(uint *)(unaff_DI + 6) < uVar2) && (uVar2 < *(uint *)(unaff_DI + 8))) &&
         ((*unaff_DI == 'M' && (*(char **)(unaff_DI + 1) != unaff_DI)))) {
        piVar3 = *(int **)(unaff_DI + 10);
        if (piVar3 == (int *)0x0) goto LAB_1000_54d5;
        if ((int *)*piVar3 == in_AX) break;
      }
LAB_1000_54d3:
      in_AX = (int *)0x0;
LAB_1000_54d5:
      return (int *)CONCAT22(in_AX,in_AX);
    }
    if ((((piVar3 == (int *)0x0) || (((uint)piVar3 & 2) == 0)) ||
        (piVar1 = *(int **)(unaff_DI + 0xe), piVar3 <= piVar1)) ||
       ((piVar1 + *piVar1 * 2 <= piVar3 || (uVar2 = piVar3[1], uVar2 == 0xffff))))
    goto LAB_1000_54d3;
    if ((uVar2 & 0x40) == 0) {
      in_AX = (int *)*piVar3;
      goto LAB_1000_54a4;
    }
    in_AX = (int *)0x0;
    if ((uVar2 & 0x80) == 0) break;
    if (DAT_1000_0006 == 0) goto LAB_1000_54d3;
    in_AX = (int *)(*(code *)*(undefined2 *)0x4)(0x1000,0xffff,piVar3);
  } while (in_AX != (int *)0x0);
  return (int *)CONCAT22(in_AX,piVar3);
}

