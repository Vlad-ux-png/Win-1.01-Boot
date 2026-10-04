// Function: FUN_1000_63b1

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00011253) overlaps instruction at (ram,0x00011252)
    */

int __stdcall16far FUN_1000_63b1(int param_1)

{
  uint *puVar1;
  char *pcVar2;
  undefined2 uVar3;
  code *pcVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  undefined1 uVar9;
  uint uVar10;
  int extraout_DX;
  int extraout_DX_00;
  byte bVar11;
  char *pcVar12;
  uint in_BX;
  uint uVar13;
  int unaff_SI;
  byte *unaff_DI;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  longdouble in_ST0;
  undefined1 auStack_68 [2];
  int iStack_66;
  int iStack_64;
  int iStack_60;
  undefined2 uStack_5e;
  int iStack_2a;
  undefined2 uStack_26;
  undefined2 uStack_24;
  undefined1 *puStack_22;
  int local_c;
  int local_8;
  int local_4;
  
  if ((param_1 < 0x21) || (0x28 < param_1)) {
    iVar7 = 0;
  }
  else {
    if (*(int *)0x12ae < *(int *)0x430) {
      FUN_1000_5eb3();
      local_c = 0;
    }
    else if (*(int *)0x12ae < *(int *)0x430 + 0x18) {
      local_c = *(int *)0x12ae - *(int *)0x430;
    }
    else {
      FUN_1000_5eb3();
      local_c = 0x17;
    }
    FUN_1000_2b36();
    local_4 = *(int *)0x34;
    if (*(int *)0x12ac < local_4) {
      local_4 = *(int *)0x12ac;
    }
    else if (*(int *)0x38 <= *(int *)0x12ac) {
      local_4 = ((*(int *)0x34 + *(int *)0x12ac) - *(int *)0x38) + 1;
    }
    if (local_4 != *(int *)0x34) {
      FUN_1000_286b();
      func_0x00005902();
    }
    uVar8 = func_0x00004a0f();
    uVar10 = *(int *)0x36 + *(int *)0x430;
    if (uVar10 != uVar8) {
      func_0x00004d1d();
    }
    FUN_1000_33af();
    uVar3 = *(undefined2 *)0x12ac;
    local_8 = local_c;
    iVar7 = extraout_DX;
    if (*(int *)0x136a == 0) {
      FUN_1000_33af();
      *(undefined2 *)0x136a = 1;
      iVar7 = extraout_DX_00;
    }
    if (param_1 - 0x21U < 8) {
      pcVar12 = (char *)((param_1 - 0x21U) * 2);
      bVar6 = (byte)in_BX;
      uVar9 = (undefined1)(in_BX >> 8);
      bVar11 = (byte)((uint)iVar7 >> 8);
      switch(param_1) {
      case 0x22:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0x23:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0x24:
        *(char *)(unaff_SI + 0x18) = *(char *)(unaff_SI + 0x18) + bVar11;
        if (*(int *)0x166 != 0) {
          FUN_1000_33af();
        }
        iVar7 = FUN_1000_6266();
        return iVar7;
      case 0x25:
        if (bVar6 != 0) {
          FUN_1000_1016();
          uVar8 = iStack_66 * 3 >> 0xf;
          iStack_2a = ((int)((iStack_66 * 3 ^ uVar8) - uVar8) >> 2 ^ uVar8) - uVar8;
          if (iStack_2a < iStack_64) {
            iStack_64 = iStack_2a;
          }
          iStack_60 = 0;
          uStack_5e = 0;
          puStack_22 = auStack_68;
          uStack_24 = 0x1000;
          uStack_26 = 0x123d;
          func_0x0000ffff();
          if (iStack_60 != 0) {
            local_8 = func_0x0000ffff();
          }
        }
        func_0x0000ffff();
        return local_8;
      case 0x26:
        iVar7 = CONCAT11(uVar9,bVar6 | pcVar12[unaff_SI]);
        if ((byte)(bVar6 | pcVar12[unaff_SI]) == 0) {
          iVar7 = FUN_1000_42b1();
        }
        return iVar7;
      case 0x27:
        *(uint *)(pcVar12 + unaff_SI) = *(uint *)(pcVar12 + unaff_SI) | in_BX;
        pcVar12[unaff_SI] = pcVar12[unaff_SI];
        pcVar12[unaff_SI] = pcVar12[unaff_SI] + (bVar6 ^ bVar11);
        uVar8 = CONCAT11(uVar9,bVar6 ^ bVar11) & 0xc0a;
        pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar11;
        LOCK();
        *(uint *)(pcVar12 + unaff_SI) = *(uint *)(pcVar12 + unaff_SI) | uVar8;
        UNLOCK();
        pcVar12[unaff_SI] = pcVar12[unaff_SI] + (char)uVar8;
        *(uint *)(&stack0xfffe + unaff_SI) = *(uint *)(&stack0xfffe + unaff_SI) ^ uVar10;
        pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0x28:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      pcVar12[unaff_SI] = pcVar12[unaff_SI] + bVar6;
      uVar13 = unaff_SI - 1;
      *(uint *)0x6a01 = in_BX;
      puVar1 = (uint *)(&stack0xffff + uVar13);
      uVar8 = *puVar1;
      *puVar1 = *puVar1 + uVar13;
      if (!CARRY2(uVar8,uVar13)) {
        cVar5 = bVar6 + 0x11;
        *(char *)0x415 = *(char *)0x415 + bVar11;
        pcVar2 = &stack0xffff + (int)unaff_DI;
        *pcVar2 = *pcVar2 + cVar5;
        pcVar12[(int)unaff_DI] = pcVar12[(int)unaff_DI];
        pcVar12[uVar13] = pcVar12[uVar13] + cVar5;
        pcVar12[uVar13] = pcVar12[uVar13] + cVar5;
        iVar7 = func_0x00034109();
        LOCK();
        *(int *)(pcVar12 + uVar13) = *(int *)(pcVar12 + uVar13) + iVar7;
        UNLOCK();
        pcVar12[uVar13] = pcVar12[uVar13] + (char)iVar7;
        cVar5 = (char)iVar7 + -0x80;
        *(int *)(pcVar12 + uVar13) =
             *(int *)(pcVar12 + uVar13) + CONCAT11((char)((uint)iVar7 >> 8),cVar5);
        pcVar12[uVar13] = pcVar12[uVar13] + cVar5;
        pcVar12[uVar13] = pcVar12[uVar13] + cVar5;
        *(long *)(pcVar12 + (int)unaff_DI) = (long)in_ST0;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar8 = *(uint *)0x700;
      cVar5 = (char)(in_BX | uVar8);
      pcVar12[uVar13] = pcVar12[uVar13] + cVar5;
      *(char *)(unaff_SI + 0x100) = *(char *)(unaff_SI + 0x100) + (char)(uVar10 >> 8);
      pcVar12[uVar13] = pcVar12[uVar13] + cVar5;
      *pcVar12 = *pcVar12 + cVar5;
      *pcVar12 = *pcVar12 + cVar5;
      pcVar2 = &stack0xffff + (int)unaff_DI;
      *pcVar2 = *pcVar2 + cVar5;
      pcVar12[uVar13] = pcVar12[uVar13] + (char)((uint)pcVar12 >> 8);
      pcVar12[(int)unaff_DI] = pcVar12[(int)unaff_DI] + -0x74;
      *(int *)(&stack0x0cff + unaff_SI) = *(int *)(&stack0x0cff + unaff_SI) + iVar7;
      pcVar12[uVar13] = pcVar12[uVar13] + cVar5;
      cVar5 = cVar5 + pcVar12[uVar13];
      pcVar12[uVar13] = pcVar12[uVar13] + cVar5;
      pcVar12[uVar13] = pcVar12[uVar13] + cVar5;
      pcVar12[uVar13] = pcVar12[uVar13] + cVar5;
      pcVar12[uVar13] = pcVar12[uVar13] + cVar5;
      pcVar12[uVar13] = pcVar12[uVar13] + cVar5;
      pcVar12[uVar13] = pcVar12[uVar13] + cVar5;
      out(iVar7,CONCAT11((char)((in_BX | uVar8) >> 8),cVar5));
      *(undefined1 **)(pcVar12 + uVar13) = &stack0xffee + *(int *)(pcVar12 + uVar13);
      *unaff_DI = *unaff_DI & cVar5 + 0x50U;
      *(int *)(unaff_SI + 0x6f) = -*(int *)(unaff_SI + 0x6f);
      pcVar4 = (code *)swi(1);
      iVar7 = (*pcVar4)();
      return iVar7;
    }
    FUN_1000_33af();
    if (*(int *)0x136a == 0) {
      FUN_1000_33af();
      *(undefined2 *)0x136a = 1;
    }
    *(undefined2 *)0x12ac = uVar3;
    *(int *)0x12ae = local_c + *(int *)0x430;
    FUN_1000_3658();
    iVar7 = func_0x0000ffff();
    if (iVar7 < 0) {
      if (*(int *)0x440 == 0) {
        FUN_1000_3658();
        FUN_1000_6331();
      }
      FUN_1000_62ef();
    }
    else if (*(int *)0x440 != 0) {
      FUN_1000_6331();
      FUN_1000_62bb();
    }
    iVar7 = 1;
  }
  return iVar7;
}

