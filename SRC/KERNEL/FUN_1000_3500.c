// Function: FUN_1000_3500

/* WARNING: Unable to track spacebase fully for stack */

undefined2 __cdecl16far FUN_1000_3500(void)

{
  int iVar1;
  undefined2 uVar2;
  code *pcVar3;
  code *pcVar4;
  undefined2 in_AX;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined2 in_DX;
  undefined2 extraout_DX;
  undefined2 unaff_SS;
  int iVar8;
  undefined2 auStack_12 [4];
  undefined2 uStack_a;
  
  iVar6 = DAT_1000_0016;
  uStack_a = in_AX;
  while( true ) {
    do {
      while (iVar5 = iVar6, iVar1 = DAT_1000_0018, iVar5 == 0) {
        pcVar4 = (code *)swi(0x28);
        (*pcVar4)();
        iVar6 = DAT_1000_0016;
        in_DX = extraout_DX;
      }
      iVar6 = *(int *)0x0;
    } while (*(int *)0x6 == 0);
    if (iVar5 == DAT_1000_0018) break;
    if ((DAT_1000_001a != 0) && (DAT_1000_001a != iVar5)) {
      return uStack_a;
    }
    if ((*DAT_1000_0030 == '\0') && (*DAT_1000_0040 == '\0')) {
      DAT_1000_0020 = DAT_1000_0020 + '\x01';
      *(char *)0x8 = *(char *)0x8 + '\x01';
      auStack_12[0] = in_DX;
      FUN_1000_31ec(iVar5);
      FUN_1000_319a(iVar5);
      *(char *)0x8 = *(char *)0x8 + -1;
      iVar6 = 0;
      if (*(int *)0x7e == 0x4454) {
        *(undefined2 *)0x4 = unaff_SS;
        *(undefined2 **)2 = auStack_12;
        FUN_1000_3398(iVar1);
        iVar6 = iVar1;
      }
      iVar8 = iVar5;
      FUN_1000_343b(iVar6,iVar5);
      unaff_SS = *(undefined2 *)0x4;
      iVar1 = *(int *)0x2;
      DAT_1000_0020 = DAT_1000_0020 + -1;
      if (*(int *)0x16 == 0) {
        DAT_1000_0018 = iVar5;
        return uStack_a;
      }
      LOCK();
      iVar7 = *(int *)0x6;
      DAT_1000_0018 = iVar5;
      *(int *)0x6 = 1;
      UNLOCK();
      iVar7 = iVar7 + -1;
      *(int *)(iVar1 + -2) = iVar7;
      *(int *)(iVar1 + -4) = iVar5;
      *(undefined2 *)(iVar1 + -6) = 0x10;
      *(int *)(iVar1 + -8) = iVar6;
      *(int *)(iVar1 + -10) = iVar7;
      *(undefined2 *)(iVar1 + -0xc) = *(undefined2 *)0x12;
      uVar2 = ((undefined2 *)0x14)[1];
      pcVar3 = (code *)*(undefined2 *)0x14;
      *(undefined2 *)(iVar1 + -0xe) = 0x1000;
      iVar6 = (*pcVar3)();
      *(int *)0x6 = *(int *)0x6 + iVar8;
      if (iVar6 == 0) {
        return uStack_a;
      }
      FUN_1000_31ec(iVar5);
      FUN_1000_319a(iVar5);
      iVar6 = DAT_1000_0016;
      in_DX = auStack_12[0];
    }
  }
  return uStack_a;
}

