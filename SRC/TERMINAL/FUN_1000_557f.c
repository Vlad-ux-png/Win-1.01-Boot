// Function: FUN_1000_557f

/* WARNING: Instruction at (ram,0x00010540) overlaps instruction at (ram,0x0001053f)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00010014) */
/* WARNING: Removing unreachable block (ram,0x00010023) */
/* WARNING: Removing unreachable block (ram,0x0001002b) */
/* WARNING: Removing unreachable block (ram,0x0001002d) */
/* WARNING: Removing unreachable block (ram,0x00010038) */
/* WARNING: Removing unreachable block (ram,0x00010043) */
/* WARNING: Removing unreachable block (ram,0x0001006f) */
/* WARNING: Removing unreachable block (ram,0x00010515) */
/* WARNING: Removing unreachable block (ram,0x00010518) */
/* WARNING: Removing unreachable block (ram,0x00010540) */
/* WARNING: Removing unreachable block (ram,0x00010520) */
/* WARNING: Removing unreachable block (ram,0x00010523) */
/* WARNING: Removing unreachable block (ram,0x00010530) */

uint __cdecl16near FUN_1000_557f(char *param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  byte *pbVar2;
  int *piVar3;
  code *pcVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  undefined1 *puVar10;
  uint in_AX;
  undefined2 uVar11;
  undefined1 uVar12;
  char cVar13;
  byte bVar14;
  char cVar16;
  int iVar15;
  undefined2 in_CX;
  char extraout_DH;
  int iVar17;
  int extraout_DX;
  char *pcVar18;
  uint in_BX;
  uint *puVar19;
  int *unaff_SI;
  byte *pbVar20;
  undefined2 *unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  byte in_AF;
  longdouble in_ST0;
  undefined4 uVar21;
  uint in_stack_00000018;
  undefined4 in_stack_0000001a;
  undefined2 *in_stack_0000001e;
  uint in_stack_00000020;
  char *in_stack_00000022;
  int *in_stack_00000024;
  char *in_stack_00000026;
  uint in_stack_00000028;
  undefined3 in_stack_0000002a;
  uint uStack002d;
  undefined1 *puStack002f;
  undefined3 uStack0031;
  byte *in_stack_00000034;
  char *in_stack_00000036;
  uint in_stack_00000038;
  undefined1 *in_stack_0000003a;
  undefined2 in_stack_00000042;
  byte bStack004e;
  byte bStack004f;
  uint in_stack_00000050;
  uint uStack_5a;
  char acStack_58 [42];
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  uint uStack_2a;
  undefined1 *puStack_28;
  undefined1 auStack_20 [2];
  undefined2 uStack_1e;
  char *local_6;
  char *local_4;
  
  if (*(int *)0x422 == 0) {
    return in_AX;
  }
  local_4 = (char *)func_0x00004a92();
  func_0x00004ada();
  if (5 < param_2) {
    return param_2;
  }
  pcVar18 = (char *)(param_2 * 2);
  cVar5 = (char)in_BX;
  switch(param_2) {
  case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 2:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 3:
    bVar6 = (byte)((uint)extraout_DX >> 8);
    (pcVar18 + (int)unaff_SI)[0x72] = (pcVar18 + (int)unaff_SI)[0x72] & bVar6;
    piVar3 = unaff_SI + 1;
    out(*unaff_SI,extraout_DX);
    pbVar20 = (byte *)(unaff_DI + 1);
    uVar11 = in(extraout_DX);
    *unaff_DI = uVar11;
    (&stack0x0063)[(int)piVar3] = (&stack0x0063)[(int)piVar3] & bVar6;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    in_stack_00000042._1_1_ = in_stack_00000042._1_1_ + (char)in_CX;
    *(uint *)0x6a01 = in_BX;
    puVar1 = (uint *)(&stack0xfffe + (int)piVar3);
    uVar9 = *puVar1;
    *puVar1 = *puVar1 + (int)piVar3;
    if (CARRY2(uVar9,(uint)piVar3)) {
      uVar9 = *(uint *)0x700;
      cVar5 = (char)(in_BX | uVar9);
      pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
      *(char *)((int)unaff_SI + 0x103) = *(char *)((int)unaff_SI + 0x103) + (char)((uint)in_CX >> 8)
      ;
      pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
      *pcVar18 = *pcVar18 + cVar5;
      *pcVar18 = *pcVar18 + cVar5;
      (&stack0xfffe)[(int)pbVar20] = (&stack0xfffe)[(int)pbVar20] + cVar5;
      pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + (char)((uint)pcVar18 >> 8);
      pcVar18[(int)pbVar20] = pcVar18[(int)pbVar20] + -0x74;
      *(int *)(&stack0x0cff + (int)piVar3) = *(int *)(&stack0x0cff + (int)piVar3) + extraout_DX;
      pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
      cVar5 = cVar5 + pcVar18[(int)piVar3];
      pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
      pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
      pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
      pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
      pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
      pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
      out(extraout_DX,CONCAT11((char)((in_BX | uVar9) >> 8),cVar5));
      *(undefined1 **)(pcVar18 + (int)piVar3) = &stack0xffea + *(int *)(pcVar18 + (int)piVar3);
      *pbVar20 = *pbVar20 & cVar5 + 0x50U;
      unaff_SI[0x39] = -unaff_SI[0x39];
      pcVar4 = (code *)swi(1);
      uVar9 = (*pcVar4)();
      return uVar9;
    }
    cVar5 = cVar5 + '\x11';
    *(char *)0x415 = *(char *)0x415 + bVar6;
    (&stack0xfffe)[(int)pbVar20] = (&stack0xfffe)[(int)pbVar20] + cVar5;
    pcVar18[(int)pbVar20] = pcVar18[(int)pbVar20];
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    iVar8 = func_0x00034109();
    LOCK();
    *(int *)(pcVar18 + (int)piVar3) = *(int *)(pcVar18 + (int)piVar3) + iVar8;
    UNLOCK();
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + (char)iVar8;
    cVar5 = (char)iVar8 + -0x80;
    *(int *)(pcVar18 + (int)piVar3) =
         *(int *)(pcVar18 + (int)piVar3) + CONCAT11((char)((uint)iVar8 >> 8),cVar5);
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    pcVar18[(int)piVar3] = pcVar18[(int)piVar3] + cVar5;
    *(long *)(pcVar18 + (int)pbVar20) = (long)in_ST0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 4:
    *pcVar18 = 'S';
    pcVar18 = local_6 + 2;
    local_6[1] = '6';
    local_6 = local_6 + 3;
    *pcVar18 = '=';
    stack0xffe1 = CONCAT21(0x46ef,auStack_20[1]);
    puVar10 = (undefined1 *)FUN_1000_3ca8();
    *puVar10 = 0x20;
    puVar10[1] = 0x53;
    puVar10[2] = 0x37;
    local_6 = puVar10 + 4;
    puVar10[3] = 0x3d;
    stack0xffe1 = CONCAT21(0x4723,auStack_20[1]);
    puVar10 = (undefined1 *)FUN_1000_3ca8();
    *puVar10 = 0x20;
    puVar10[1] = 0x53;
    puVar10[2] = 0x31;
    puVar10[3] = 0x31;
    local_6 = puVar10 + 5;
    puVar10[4] = 0x3d;
    stack0xffe1 = CONCAT21(0x476f,auStack_20[1]);
    puVar10 = (undefined1 *)FUN_1000_3ca8();
    *puVar10 = 0x20;
    puVar10[1] = 0x44;
    if (*(int *)(param_3 + 0x10) == 0) {
      uVar12 = 0x50;
    }
    else {
      uVar12 = 0x54;
    }
    puVar10[2] = uVar12;
    local_6 = puVar10 + 3;
    local_4 = (char *)(param_3 + 0x26);
    while( true ) {
      pcVar18 = local_4 + 1;
      cVar5 = *local_4;
      if (cVar5 == '\0') break;
      local_4 = pcVar18;
      if (((('/' < cVar5) && (cVar5 < ':')) || (cVar5 == ',')) || ((cVar5 == '#' || (cVar5 == '*')))
         ) {
        *local_6 = cVar5;
        local_6 = local_6 + 1;
      }
    }
    *local_6 = '\r';
    local_6[1] = '\0';
    local_6 = param_1;
    uStack_5a = 0;
    local_4 = acStack_58;
    while (((int)uStack_5a <= (int)param_2 && (*local_4 != '\0'))) {
      *local_6 = *local_4;
      uStack_5a = uStack_5a + 1;
      local_6 = local_6 + 1;
      local_4 = local_4 + 1;
    }
    return uStack_5a;
  case 5:
    pcVar18[(int)unaff_SI] = pcVar18[(int)unaff_SI] + cVar5;
    pcVar4 = (code *)swi(0x3f);
    cVar5 = (*pcVar4)();
    cVar13 = (char)in_CX;
    cVar16 = (char)((uint)in_CX >> 8) + cVar13;
    in_AF = 9 < (cVar5 + 0xa2U & 0xf) | in_AF;
    pcVar4 = (code *)swi(0x3f);
    bVar6 = (*pcVar4)();
    cVar13 = cVar13 + (char)*unaff_SI;
    cVar16 = cVar16 + cVar13 * '\a';
    in_AF = 9 < (bVar6 & 0xf) | in_AF;
    bVar6 = (bVar6 + in_AF * -6 & 0xf) + 0x26;
    in_AF = 9 < (bVar6 & 0xf) | in_AF;
    bVar6 = (bVar6 + in_AF * -6 & 0xf) + 0x9d;
    in_AF = 9 < (bVar6 & 0xf) | in_AF;
    bVar6 = bVar6 + in_AF * -6 & 0xf;
    in_AF = 9 < (bVar6 | pcVar18[(int)unaff_DI] & 0xfU) | in_AF;
    bVar6 = (bVar6 | pcVar18[(int)unaff_DI]) + in_AF * -6 & 0xf;
    in_AF = 9 < bVar6 | in_AF;
    bVar6 = bVar6 + in_AF * -6 & 0xf;
    in_AF = 9 < bVar6 | in_AF;
    pcVar18 = (char *)CONCAT11((char)((uint)unaff_ES >> 8) + (&stack0x0040)[(int)unaff_SI],
                               (char)unaff_ES);
    in_AF = 9 < (bVar6 + in_AF * -6 & 0xf) | in_AF;
    pcVar4 = (code *)swi(0x3f);
    bVar6 = (*pcVar4)();
    cVar16 = cVar16 + cVar13 * '\x02';
    in_AF = 9 < (bVar6 & 0xf) | in_AF;
    bVar6 = bVar6 + in_AF * -6 & 0xf;
    uVar12 = (undefined1)((uint)pcVar18 >> 8);
    cVar5 = (char)pcVar18 + *pcVar18;
    in_AF = 9 < bVar6 | in_AF;
    if (cVar16 < '\0') {
      pcVar4 = (code *)swi(0x3f);
      (*pcVar4)();
    }
    else {
      cVar16 = cVar16 + cVar13;
      in_AF = 9 < (bVar6 + in_AF * -6 & 0xf) | in_AF;
    }
    pcVar4 = (code *)swi(0x3f);
    bVar6 = (*pcVar4)();
    iVar8 = CONCAT11(uVar12,cVar5 + *(char *)((int)&stack0x002a + (int)unaff_DI));
    cVar16 = cVar16 + cVar13;
    in_AF = 9 < (bVar6 & 0xf) | in_AF;
    pcVar4 = (code *)swi(0x3f);
    cVar5 = (*pcVar4)();
    cVar16 = cVar16 + cVar13;
    in_AF = 9 < (cVar5 + extraout_DH & 0xfU) | in_AF;
    cVar13 = cVar13 + *(char *)0x2e;
    pcVar4 = (code *)swi(0x3f);
    (*pcVar4)();
    pcVar4 = (code *)swi(0x3f);
    bVar6 = (*pcVar4)();
    in_AF = 9 < (bVar6 & 0xf) | in_AF;
    cVar16 = cVar16 + cVar13;
    in_AF = 9 < (bVar6 + in_AF * -6 & 0xf) | in_AF;
    cVar13 = cVar13 + *(char *)(unaff_DI + 0x18);
    pcVar4 = (code *)swi(0x3f);
    bVar6 = (*pcVar4)();
    *(byte *)(iVar8 + (int)unaff_SI) = *(byte *)(iVar8 + (int)unaff_SI) ^ bVar6;
    pcVar4 = (code *)swi(0x3f);
    bVar6 = (*pcVar4)();
    in_AF = 9 < (bVar6 & 0xf) | in_AF;
    cVar16 = cVar16 + cVar13 + (char)((uint)iVar8 >> 8);
    pcVar4 = (code *)swi(0x3f);
    (*pcVar4)();
    pcVar4 = (code *)swi(0x3f);
    bVar6 = (*pcVar4)();
    cVar16 = cVar16 + (char)((uint)iVar8 >> 8);
    *(byte *)(iVar8 + (int)unaff_SI) = *(byte *)(iVar8 + (int)unaff_SI) & bVar6;
    pcVar4 = (code *)swi(0x3f);
    cVar5 = (*pcVar4)();
    *(char *)(iVar8 + (int)unaff_SI) = *(char *)(iVar8 + (int)unaff_SI) - cVar5;
    pcVar4 = (code *)swi(0x3f);
    bVar6 = (*pcVar4)();
    iVar15 = CONCAT11((char)((uint)iVar8 >> 8),(char)iVar8 + (char)*unaff_SI);
    in_AF = 9 < (bVar6 & 0xf) | in_AF;
    bVar6 = bVar6 + in_AF * -6 & 0xf;
    in_AF = 9 < bVar6 | in_AF;
    bVar6 = bVar6 + in_AF * -6 & 0xf;
    bVar14 = cVar13 + *(char *)((int)unaff_SI + iVar15 + 0x36);
    cVar13 = cVar16 + cVar13 * '\x02' + bVar14 * '\x02';
    in_AF = 9 < bVar6 | in_AF;
    in_AF = 9 < (bVar6 + in_AF * -6 & 0xf) | in_AF;
    pcVar4 = (code *)swi(0x3f);
    (*pcVar4)();
    pbVar20 = (byte *)((int)unaff_DI + *(int *)0xa);
    pcVar4 = (code *)swi(0x3f);
    cVar5 = (*pcVar4)();
    *unaff_SI = (int)&stack0x0024 + *unaff_SI + 1;
    *(char *)(iVar15 + (int)unaff_SI) = *(char *)(iVar15 + (int)unaff_SI) + cVar5;
    pcVar4 = (code *)swi(0x3f);
    iVar8 = (*pcVar4)();
    *(int *)(iVar15 + (int)unaff_SI) = *(int *)(iVar15 + (int)unaff_SI) + iVar8;
    *(char *)(iVar15 + (int)unaff_SI) = *(char *)(iVar15 + (int)unaff_SI) + (char)iVar8;
    pcVar4 = (code *)swi(0x3f);
    (*pcVar4)();
    iVar15 = CONCAT11((char)((uint)iVar15 >> 8),
                      (char)iVar15 + *(char *)((int)&stack0x002a + 2 + (int)unaff_SI));
    pcVar4 = (code *)swi(0x3f);
    iVar8 = (*pcVar4)();
    *(int *)(iVar15 + (int)unaff_SI) = *(int *)(iVar15 + (int)unaff_SI) + iVar8;
    *(int *)(iVar15 + (int)unaff_SI) = *(int *)(iVar15 + (int)unaff_SI) + iVar8;
    pcVar4 = (code *)swi(0x3f);
    cVar5 = (*pcVar4)();
    *(char *)(iVar15 + (int)unaff_SI) =
         *(char *)(iVar15 + (int)unaff_SI) + cVar5 + (char)*(undefined2 *)(iVar15 + (int)unaff_SI);
    pcVar4 = (code *)swi(0x3f);
    bVar6 = (*pcVar4)();
    cVar13 = cVar13 + bVar14;
    in_AF = 9 < (bVar6 & 0xf) | in_AF;
    pcVar18 = (char *)CONCAT11((char)((uint)iVar15 >> 8) + *(char *)(iVar15 + 0x4f),(char)iVar15);
    pcVar4 = (code *)swi(0x3f);
    uVar21 = (*pcVar4)();
    iVar17 = CONCAT11((char)((ulong)uVar21 >> 0x18) + (&stack0x0000)[(int)unaff_SI],
                      (char)((ulong)uVar21 >> 0x10));
    in_AF = 9 < ((byte)uVar21 & 0xf) | in_AF;
    bVar7 = (byte)uVar21 + in_AF * -6;
    in_stack_00000038 = CONCAT11((char)((ulong)uVar21 >> 8) - in_AF,bVar7) & 0xff0f;
    bVar6 = *pbVar20;
    pcVar18[(int)unaff_SI - 1U] = pcVar18[(int)unaff_SI - 1U] + (bVar7 & 0xf);
    bVar7 = pbVar20[0x69];
    puVar1 = (uint *)(&stack0x006d + (int)unaff_SI);
    iVar8 = ((int)unaff_SI - 1U & 3) - (*puVar1 & 3);
    *puVar1 = *puVar1 + (uint)(0 < iVar8) * iVar8;
    in_stack_0000003a = &stack0x003c;
    param_2 = iVar17 + 1;
    iVar15 = CONCAT11(cVar13 + bVar14 + bVar6,bVar14 & bVar7) + 1;
    bVar6 = *pbVar20;
    *(char *)0x4e46 = *(char *)0x4e46 + (char)in_stack_00000038;
    *pcVar18 = *pcVar18 + (char)in_stack_00000038;
    uVar9 = in_stack_00000038 - 1;
    in_stack_00000034 = pbVar20 + -1;
    *(uint *)(pcVar18 + (int)unaff_SI + -3) = *(uint *)(pcVar18 + (int)unaff_SI + -3) | uVar9;
    bStack004e = bStack004e | (byte)uVar9;
    bVar7 = (byte)uVar9 | pcVar18[(int)(unaff_SI + -2)];
    puStack002f = (undefined1 *)&stack0x0031;
    uStack0031 = CONCAT12((char)(param_2 >> 8),pcVar18);
    iVar8 = CONCAT11((char)(uVar9 >> 8),bVar7) + 0xb00;
    in_stack_00000024 = unaff_SI + -3;
    in_stack_0000002a = CONCAT12((char)((uint)(pbVar20 + -2) >> 8),iVar8);
    in_stack_00000022 = pcVar18 + 2;
    *(int *)(in_stack_00000022 + (int)in_stack_00000024) =
         *(int *)(in_stack_00000022 + (int)in_stack_00000024) + iVar8;
    bStack004f = bStack004f | bVar7 | (byte)iVar8;
    in_stack_00000020 = iVar8 + *(int *)(in_stack_00000022 + (int)in_stack_00000024);
    in_stack_00000050 = in_stack_00000050 | in_stack_00000020;
    in_stack_0000001e = &stack0x0020;
    in_stack_0000001a = CONCAT22(&param_1,param_2);
    bVar7 = (byte)in_stack_00000020;
    *(char *)0x4e46 = *(char *)0x4e46 + bVar7;
    param_1 = (char *)&stack0x0018;
    pbVar2 = (byte *)(pcVar18 + 4 + (int)in_stack_00000024);
    *pbVar2 = *pbVar2 | bVar7;
    puVar1 = (uint *)(pcVar18 + 4 + (int)in_stack_00000024 + 0x52);
    *puVar1 = *puVar1 | param_2;
    uVar11 = *(undefined2 *)(pcVar18 + 5 + (int)unaff_SI + -7);
    puVar19 = (uint *)(unaff_SI + -4);
    cVar5 = (pcVar18 + 5)[(int)puVar19];
    *puVar19 = *puVar19 ^ CONCAT11((char)((uint)iVar15 >> 8),(byte)iVar15 ^ bVar6) + 4U;
    (pcVar18 + 6)[(int)puVar19] =
         (pcVar18 + 6)[(int)puVar19] + ((bVar7 | (byte)uVar11) + cVar5 | (byte)in_stack_00000050);
    uVar11 = in(iVar17 + 2);
    *(undefined2 *)(pbVar20 + -6) = uVar11;
    param_3 = param_2;
    in_stack_00000018 = param_2;
    in_stack_00000026 = in_stack_00000022;
    in_stack_00000028 = param_2;
    uStack002d = param_2;
    in_stack_00000036 = pcVar18;
    uVar9 = FUN_1000_09ed();
    return uVar9;
  }
  iVar8 = 0;
  auStack_20[0] = 0x1b;
  bVar6 = *(byte *)0xed;
  bVar7 = (byte)&local_6;
  uVar11 = uStack_1e;
  if ((bVar7 < 0x60) || (0x6e < bVar7)) {
    if ((bVar7 < 0x70) || (0x79 < bVar7)) {
      if (bVar7 == 0x2f) goto code_r0x00017767;
      if (bVar7 == 0x2e) {
        uVar12 = 0x7f;
      }
      else {
        if (bVar7 != 0x2d) {
          if (bVar7 < 0x21) {
            return 0;
          }
          if (7 < (byte)(bVar7 - 0x21)) {
            return 0;
          }
          iVar15 = (uint)(byte)(bVar7 - 0x21) * 2;
          if ((bVar6 & 4) != 0) {
            iVar8 = 1;
            cVar5 = (char)iVar15;
            uVar12 = (undefined1)((uint)iVar15 >> 8);
            iVar15 = CONCAT11(uVar12,cVar5 + '\x10');
            if ((*(byte *)0xee & 1) != 0) {
              iVar15 = CONCAT11(uVar12,cVar5 + ' ');
            }
          }
          *(undefined2 *)(auStack_20 + iVar8) = *(undefined2 *)(iVar15 + 0xaa6);
          uVar9 = iVar8 + 2;
          goto code_r0x000177c3;
        }
        uVar11 = 0x404f;
        iVar8 = 1;
        if ((bVar6 & 4) != 0) {
          stack0xffe1 = CONCAT12(uStack_1e._1_1_,0x345b);
          iVar8 = 3;
          uVar11 = 0x686c;
        }
        uVar12 = (undefined1)((uint)uVar11 >> 8);
        if ((*(byte *)0xed & 8) != 0) {
          uVar12 = (undefined1)uVar11;
        }
      }
    }
    else if (bVar7 == 0x79) {
code_r0x00017767:
      iVar8 = 1;
      if ((bVar6 & 4) != 0) {
        stack0xffe1 = CONCAT21(uVar11,0x5b);
        iVar8 = 2;
      }
      uVar12 = 0x7e;
    }
    else {
      if (bVar7 == 0x78) {
        uVar11 = 0x4930;
        if ((bVar6 & 4) != 0) {
          uVar11 = 0x584f;
        }
        stack0xffe1 = CONCAT12(uStack_1e._1_1_,uVar11);
        uVar9 = 3;
        goto code_r0x000177c3;
      }
      iVar8 = 1;
      if ((bVar6 & 4) != 0) {
        stack0xffe1 = CONCAT21(uVar11,0x4f);
        iVar8 = 2;
      }
      uVar12 = *(undefined1 *)((byte)(bVar7 + 0x90) + 0xa9e);
    }
  }
  else {
    bVar14 = bVar7 + 0xa0;
    if ((*(byte *)0xee & 2) != 0) {
      uVar12 = 0x3f;
      if ((bVar6 & 4) != 0) {
        uVar12 = 0x4f;
      }
      stack0xffe1 = CONCAT21(uStack_1e,uVar12);
      iVar8 = 2;
      bVar14 = bVar7 + 0xb0;
    }
    uVar12 = *(undefined1 *)(bVar14 + 0xa7e);
  }
  auStack_20[iVar8] = uVar12;
  uVar9 = iVar8 + 1;
code_r0x000177c3:
  if (uVar9 != 0) {
    puStack_28 = auStack_20;
    uStack_2c = 0x1000;
    uStack_2e = 0x77d5;
    uStack_2a = uVar9;
    func_0x000009cf();
  }
  return uVar9;
}

