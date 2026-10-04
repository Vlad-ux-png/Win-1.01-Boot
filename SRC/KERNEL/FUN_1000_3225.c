// Function: FUN_1000_3225

/* WARNING: Unable to track spacebase fully for stack */

undefined4 __cdecl16near FUN_1000_3225(void)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined2 in_AX;
  byte bVar4;
  int iVar5;
  int iVar6;
  undefined2 in_DX;
  int *piVar7;
  int *piVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  int unaff_SS;
  
  uVar10 = DAT_1000_0018;
  uVar9 = (undefined2)((ulong)DAT_1000_0048 >> 0x10);
  piVar7 = (int *)DAT_1000_0048;
  cVar3 = '\x02';
  bVar4 = 0;
  while( true ) {
    piVar1 = piVar7;
    uVar9 = (undefined2)((ulong)*(int **)piVar1 >> 0x10);
    piVar7 = (int *)*(int **)piVar1;
    if (piVar7 == (int *)0xffff) break;
    piVar8 = piVar7 + 3;
    iVar5 = piVar7[2];
    bVar4 = bVar4 + (char)iVar5;
    do {
      if (((char)*piVar8 == '\0') && (cVar3 = cVar3 + -1, cVar3 == '\0')) goto LAB_1000_32cd;
      piVar8 = (int *)((int)piVar8 + DAT_1000_004c);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (bVar4 < 0xf5) {
    iVar5 = DAT_1000_004c * 8 + 6;
    iVar6 = 0x2040;
    if (unaff_SS == *(int *)0x4) {
      iVar5 = GLOBALALLOC(iVar5,iVar5 >> 0xf,0x2040);
    }
    else {
      uVar9 = *(undefined2 *)0x4;
      iVar2 = *(int *)0x2;
      *(undefined2 *)(iVar2 + -2) = 0x2040;
      *(int *)(iVar2 + -4) = iVar5 >> 0xf;
      *(int *)(iVar2 + -6) = iVar5;
      *(undefined2 *)(iVar2 + -8) = 0x1000;
      *(undefined2 *)(iVar2 + -10) = 0x3293;
      iVar5 = GLOBALALLOC();
      *(int *)0x2 = iVar2;
    }
    if (iVar6 != 0) {
      uVar10 = (undefined2)((ulong)DAT_1000_0048 >> 0x10);
      piVar7 = (int *)DAT_1000_0048;
      do {
        piVar1 = *(int **)piVar7;
        uVar10 = (undefined2)((ulong)piVar1 >> 0x10);
        piVar7 = (int *)piVar1;
      } while (*piVar1 != -1);
      *piVar1 = 0;
      piVar7[1] = iVar5;
      piVar7[2] = 8;
      *(undefined2 *)0x0 = 0xffff;
    }
  }
LAB_1000_32cd:
  return CONCAT22(in_DX,in_AX);
}

