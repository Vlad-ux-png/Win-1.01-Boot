// Function: FUN_2000_9be9

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0002c015) overlaps instruction at (ram,0x0002c014)
    */

int FUN_2000_9be9(int param_1,int param_2,undefined2 *param_3,undefined2 param_4,int param_5,
                 int param_6)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  undefined2 uVar4;
  uint uVar5;
  int iVar6;
  byte in_CL;
  undefined2 extraout_DX;
  undefined2 extraout_DX_00;
  int in_BX;
  undefined2 *unaff_DI;
  undefined2 uVar7;
  undefined2 unaff_DS;
  undefined2 uVar8;
  int iStack_12;
  undefined1 local_10 [2];
  int iStack_e;
  uint uStack_c;
  undefined2 uStack_a;
  int *piStack_8;
  uint local_6;
  int local_4;
  
  local_6 = (uint)*(byte *)(param_3 + 0x18);
  func_0x0000ffff(0x1000,local_10);
  uVar5 = func_0x0000ffff(0,6,param_2,param_3);
  if ((param_1 != 0) && ((local_6 < 7 || (9 < local_6)))) {
    func_0x0000ffff(0,local_10);
  }
  local_4 = func_0x00000224(0,uVar5,param_2);
  uVar8 = 1;
  iVar6 = param_2;
  func_0x0000ffff(0,1,param_2);
  uVar4 = extraout_DX;
  if (param_3[0x20] != 0) {
    func_0x00000323(0,param_3[0x20],param_2);
    uVar4 = extraout_DX_00;
  }
  if (9 < local_6) {
    iVar6 = func_0x0000ffff(0,local_4,param_2);
    return iVar6;
  }
  iVar2 = local_6 * 2;
  uVar7 = 0x2000;
  switch(local_6) {
  case 0:
    iVar6 = param_3[0x13];
    uVar4 = func_0x00000f01(0x2000,param_3);
    func_0x000006b2(0,in_BX << (in_CL & 0x1f) | param_2 + iVar6,0,uStack_c | 4,0x112,uVar4);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 1:
    if ((char)((uint)iVar2 >> 8) == '\0') {
      iVar6 = in(uVar4);
    }
    else {
      iVar6 = func_0x0000ffff(0x2000,uVar8,iVar6);
    }
    return iVar6;
  case 2:
    *(undefined2 *)0x38c = uStack_a;
    if (iStack_e == 0) {
      iVar6 = FUN_2000_3804(param_6);
    }
    else {
      if ((*(byte *)(param_6 + 0x33) & 0x40) != 0) {
        uVar7 = 0;
        func_0x00001f5a(0x2000,0,0);
      }
      FUN_2000_37d2(param_6);
      iVar6 = func_0x00001733(uVar7,1,*(int *)0x382 - *(int *)0x37e,*(int *)0x380 - *(int *)0x37c,
                              *(undefined2 *)0x37e,*(undefined2 *)0x37c,param_6);
    }
    return iVar6;
  case 3:
    param_3[local_6] = (param_3[local_6] - in_BX) - (uint)CARRY2(local_6,local_6);
    *(byte *)(unaff_DI + (local_6 - 0x2dd)) = *(char *)(unaff_DI + (local_6 - 0x2dd)) + in_CL;
    uStack_a = func_0x0000197c(0x2000,*param_3);
    piVar1 = piStack_8 + 1;
    local_6 = *piStack_8;
    piStack_8 = piStack_8 + 2;
    *piVar1 = param_3[8];
    func_0x000019b6(0,param_3[0x1b]);
    if ((param_1 == 0) || (local_6 == param_3[8])) {
      iVar6 = func_0x00001448(0,0,local_4 + 8,param_3[0x1b]);
      param_3[0x1b] = iVar6;
      if (iVar6 != 0) {
        iVar6 = func_0x000019ed(0,iVar6);
        *(int *)(iVar6 + 4) = local_4;
        piStack_8 = (int *)(iVar6 + 8);
        *(int *)(iVar6 + 6) = param_2;
        func_0x00001b33(0,local_4,piStack_8);
        func_0x000019bd(0,param_3[0x1b]);
      }
    }
    func_0x00001a48(0,*param_3);
    return param_3[0x1b];
  case 4:
    return 0;
  case 5:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 6:
    if (iVar2 != 0 && SCARRY2(local_6,local_6) == iVar2 < 0) {
      *(char *)(param_3 + 4) = *(char *)(param_3 + 4) + (char)((uint)uVar4 >> 8);
      in_BX = param_3[9];
    }
    param_3[10] = in_BX;
    uStack_c = in_BX;
    iVar6 = func_0x00000662(0x2000,1,in_BX,local_6,param_3);
    return iVar6;
  case 7:
    return in_BX;
  case 8:
    unaff_DI[2] = param_2;
    uVar4 = func_0x0002fd75(unaff_DI[1],*unaff_DI);
    uVar4 = func_0x0002fd5c(unaff_DI[2],uVar4);
    *unaff_DI = uVar4;
    if (param_1 != 0) {
      if (((*(byte *)((int)param_3 + 0x33) & 0x20) == 0) &&
         ((*(byte *)((int)param_3 + 0x33) & 0x10) != 0)) {
        param_1 = 1;
      }
      else {
        param_1 = 0;
      }
    }
    if (uStack_c == uVar5) {
      if ((uVar5 != 0) && (param_1 != 0)) {
        if (param_5 == 0) {
          bVar3 = *(byte *)(param_3 + 0x17) & 4;
        }
        else {
          bVar3 = *(byte *)(param_3 + 0x17) & 2;
        }
        if (bVar3 != 0) {
          func_0x0002fb1c(param_5,param_3);
        }
      }
    }
    else {
      if ((*(byte *)(param_3 + 0x19) & 0x10) == 0 && (*(byte *)(param_3 + 0x19) & 0x20) == 0) {
        uVar7 = 0;
        uVar4 = func_0x0000ffff(0x2000,param_3[5]);
        param_3[5] = uVar4;
      }
      func_0x0000ffff(uVar7,param_3);
    }
    break;
  case 9:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return iStack_12;
}

