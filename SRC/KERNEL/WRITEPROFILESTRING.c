// Function: WRITEPROFILESTRING

undefined2 __stdcall16far WRITEPROFILESTRING(void)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 unaff_DI;
  char *pcVar5;
  char *pcVar6;
  undefined2 unaff_CS;
  bool bVar7;
  char *pcVar8;
  undefined2 uVar9;
  int local_a;
  
  LOCK();
  uVar3 = *(undefined2 *)0x22;
  *(undefined2 *)0x22 = 0;
  UNLOCK();
  GLOBALFREE(uVar3);
  pcVar8 = (char *)FUN_1000_46d4();
  uVar3 = (undefined2)((ulong)pcVar8 >> 0x10);
  pcVar5 = (char *)pcVar8;
  if (pcVar8 == (char *)0x0) {
    return 0;
  }
  FUN_1000_480d();
  do {
    if (*pcVar5 == '[') {
      pcVar5 = pcVar5 + 1;
      bVar7 = pcVar5 == (char *)0x0;
      FUN_1000_46b4();
      if (bVar7) {
        iVar4 = -1;
        goto code_r0x10004873;
      }
    }
    iVar4 = -1;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar8 = pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (*pcVar8 != '\n');
  } while (*pcVar5 != '\0');
  local_a = 2;
LAB_1000_48a0:
  if (local_a != 1) {
    do {
      do {
        pcVar6 = pcVar5;
        pcVar5 = pcVar6 + -1;
      } while (*pcVar5 == '\r');
    } while (*pcVar5 == '\n');
    pcVar5 = pcVar6 + 2;
  }
  uVar9 = unaff_DI;
  if (*(int *)0x28 == -1) {
    bVar7 = false;
    pcVar1 = (code *)swi(0x21);
    uVar2 = (*pcVar1)();
    *(undefined2 *)0x28 = uVar2;
    if (!bVar7) {
      bVar7 = false;
      pcVar1 = (code *)swi(0x21);
      (*pcVar1)();
      if (!bVar7) goto LAB_1000_48e1;
    }
    FUN_1000_47f3();
    uVar3 = 0;
  }
  else {
LAB_1000_48e1:
    FUN_1000_49c0(uVar9);
    if (local_a == 2) {
      FUN_1000_49c0(uVar9);
      FUN_1000_49c0();
      FUN_1000_49d2();
      FUN_1000_49c0();
      FUN_1000_49c0(uVar9);
    }
    if (local_a != 1) {
      FUN_1000_49d2();
      FUN_1000_49c0(uVar9);
      FUN_1000_49c0(uVar9);
    }
    FUN_1000_49d2();
    FUN_1000_49c0(uVar9);
    FUN_1000_49c0(uVar9);
    if (local_a == 1) {
      iVar4 = -1;
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar8 = pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (*pcVar8 != '\n');
    }
    iVar4 = -1;
    pcVar6 = pcVar5;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar8 = pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (*pcVar8 != '\0');
    if (pcVar6 + -3 != pcVar5 && -1 < (int)(pcVar6 + -3) - (int)pcVar5) {
      pcVar1 = (code *)swi(0x21);
      (*pcVar1)();
      uVar3 = 0x4991;
      FUN_1000_49c0();
      pcVar1 = (code *)swi(0x21);
      (*pcVar1)();
      FUN_1000_49c0(uVar9,uVar3);
    }
    FUN_1000_49c0(uVar9);
    FUN_1000_47f3();
    FUN_1000_475d();
    uVar3 = 1;
  }
  return uVar3;
  while( true ) {
    iVar4 = iVar4 + -1;
    pcVar8 = pcVar5;
    pcVar5 = pcVar5 + 1;
    if (*pcVar8 == '\n') break;
code_r0x10004873:
    if (iVar4 == 0) break;
  }
  do {
    if ((*pcVar5 == '[') || (bVar7 = *pcVar5 == '\0', bVar7)) break;
    FUN_1000_46b4();
    if (bVar7) {
      pcVar5 = pcVar5 + 1;
      local_a = 1;
      goto LAB_1000_48a0;
    }
    iVar4 = -1;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar8 = pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (*pcVar8 != '\n');
  } while( true );
  local_a = 4;
  goto LAB_1000_48a0;
}

