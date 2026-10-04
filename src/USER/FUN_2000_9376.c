// Function: FUN_2000_9376

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00021026) overlaps instruction at (ram,0x00021025)
    */

int FUN_2000_9376(int param_1,int param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined2 ******ppppppuVar4;
  uint uVar5;
  int iVar6;
  int in_BX;
  undefined1 *puVar7;
  int unaff_SI;
  int unaff_DI;
  undefined2 unaff_ES;
  int unaff_SS;
  int unaff_DS;
  bool bVar8;
  undefined2 ******ppppppuVar9;
  int iVar10;
  int in_stack_0000ffb2;
  undefined2 ******ppppppuVar11;
  int iStack_42;
  int iStack_40;
  undefined1 *puStack_3e;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined2 uStack_38;
  undefined2 uStack_36;
  undefined2 uStack_34;
  undefined2 uStack_32;
  int iStack_30;
  int iStack_2e;
  undefined1 *puStack_2c;
  int *piStack_2a;
  undefined2 *****pppppuStack_1e;
  int iStack_14;
  int iStack_12;
  int iVar12;
  int local_8;
  int local_6;
  
  if ((param_1 != 0) && (((undefined1 *)param_3)[0x30] != '\a')) {
    func_0x0000ffff();
  }
  func_0x0000ffff();
  uVar5 = (uint)(byte)((undefined1 *)param_3)[0x30];
  if (8 < uVar5) {
    iVar6 = func_0x00000384();
    return iVar6;
  }
  puVar7 = (undefined1 *)(uVar5 * 2);
  switch(uVar5) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 1:
    in_BX = in_BX + 0x4639;
    bVar8 = in_BX == 0;
    while( true ) {
      if (bVar8) {
        local_8 = 0;
      }
      if (*(int *)(local_8 * 2 + 0x552) == 0) break;
      local_8 = local_8 + 1;
      param_2 = param_2 + 1;
      if (*(int *)0x52c <= param_2) {
        return in_BX;
      }
      in_BX = *(int *)0x52c;
      bVar8 = local_8 == in_BX;
    }
    iVar6 = FUN_2000_0869();
    return iVar6;
  case 2:
    iVar6 = *(int *)((undefined1 *)param_3 + 2);
    pppppuStack_1e = (undefined2 *****)0x8a5c;
    func_0x0000ffff();
    pppppuStack_1e = &pppppuStack_1e;
    piStack_2a = (int *)0x8a70;
    func_0x0000ffff();
    iVar3 = unaff_DS;
    if ((undefined1 *)param_3 != (undefined1 *)0x4) goto LAB_2000_8a79;
    break;
  case 3:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 4:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 5:
    pppppuStack_1e = (undefined2 *****)0x2e;
    func_0x000006b2();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 6:
    do {
      puVar1 = (undefined1 *)param_3 + 1;
      param_3 = (undefined1 *)CONCAT22(param_3._2_2_,puVar1);
      *puVar7 = (undefined1)local_6;
      local_8 = local_8 + 1;
      if (param_2 <= local_8) break;
      local_6 = func_0x0000ffff();
      puVar7 = puVar1;
      unaff_ES = param_3._2_2_;
    } while (0 < local_6);
    if (local_6 < 0) {
      local_8 = -local_8;
    }
    return local_8;
  case 7:
    func_0x0000ffff();
    return 0;
  case 8:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  do {
    piStack_2a = (int *)(uint)(iVar6 != 0);
    puStack_2c = (undefined1 *)param_3;
    iStack_30 = 0x8b77;
    iStack_2e = iVar6;
    puStack_2c = (undefined1 *)FUN_2000_8e5c();
    iStack_2e = 1;
    iStack_30 = 0;
    uStack_32 = 0x8b81;
    func_0x0000ffff();
    iVar12 = unaff_SI;
    if (iVar6 == 0) {
      iVar12 = 0;
      unaff_DI = unaff_SI;
    }
    iStack_30 = 0;
    uStack_32 = 0x8b97;
    iVar2 = func_0x0000ffff();
    if ((iVar2 == 0) && ((*(uint *)((undefined1 *)param_3 + 6) & 0x2000) == 0)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if (!bVar8) {
      iStack_30 = *(int *)((undefined1 *)param_3 + 2);
      uStack_32 = 0;
      uStack_34 = 0x8bb8;
      func_0x00000253();
    }
    *(int *)((undefined1 *)param_3 + 0x16) = *(int *)((undefined1 *)param_3 + 0x16) + unaff_DI;
    *(int *)((undefined1 *)param_3 + 0x18) = *(int *)((undefined1 *)param_3 + 0x18) + iVar12;
    if ((((undefined1 *)param_3)[6] & 4) != 0) {
      return in_stack_0000ffb2;
    }
    iStack_30 = *(int *)((undefined1 *)param_3 + 4);
    uStack_32 = 0x111;
    uStack_34 = *(undefined2 *)((undefined1 *)param_3 + 2);
    uStack_36 = 0xfff4;
    uStack_38 = 0;
    uStack_3a = 0x8be0;
    uStack_38 = func_0x0000ffff();
    if (iVar6 == 0) {
      uStack_3a = 0x601;
    }
    else {
      uStack_3a = 0x602;
    }
    uStack_3c = *(undefined2 *)((undefined1 *)param_3 + 2);
    puStack_3e = (undefined1 *)0x0;
    iStack_40 = 0x8bff;
    func_0x0000ffff();
    if (bVar8) {
      if ((((undefined1 *)param_3)[6] & 0x80) != 0) {
        pppppuStack_1e = (undefined2 *****)(*(int *)((undefined1 *)param_3 + 0x1e) / 2 + -1);
      }
      puStack_3e = *(undefined1 **)((undefined1 *)param_3 + 2);
      iStack_42 = iVar12;
      iStack_40 = unaff_DI;
      func_0x0000ffff(0,&pppppuStack_1e);
      func_0x0000ffff(0,*(undefined2 *)((undefined1 *)param_3 + 2));
    }
    else {
      if (iStack_2e == 0) {
        puStack_3e = (undefined1 *)param_3;
        iStack_40 = 0;
        iStack_42 = -0x73ba;
        iStack_2e = func_0x0000ffff();
      }
      puStack_3e = (undefined1 *)iStack_2e;
      iStack_40 = (int)pppppuStack_1e + unaff_DI;
      iStack_42 = unaff_SS + iVar12;
      iVar10 = 0xcc;
      iVar2 = unaff_SS;
      ppppppuVar11 = (undefined2 ******)pppppuStack_1e;
      func_0x0000ffff(0,0x20,0xcc,unaff_SS,pppppuStack_1e);
      if (*(int *)((undefined1 *)param_3 + 10) == 0) {
        if (iVar12 < 0) {
          iStack_12 = *(int *)((undefined1 *)param_3 + 0x24) +
                      *(int *)((undefined1 *)param_3 + 0x22);
          iStack_14 = iStack_12 - iVar10;
        }
        else {
          iStack_14 = *(int *)((undefined1 *)param_3 + 0x24);
          iStack_12 = iStack_14 - iVar10;
        }
        if (unaff_DI != 0) {
          iStack_12 = *(int *)((undefined1 *)param_3 + 0x24) +
                      *(int *)((undefined1 *)param_3 + 0x22);
          iStack_30 = func_0x0000ffff(0,iStack_2e);
          if (unaff_DI < 0) {
            iVar3 = (*(int *)((undefined1 *)param_3 + 0x2a) + *(int *)((undefined1 *)param_3 + 0x28)
                    ) - iVar10;
            ppppppuVar4 = &pppppuStack_1e;
            ppppppuVar9 = (undefined2 ******)((int)&pppppuStack_1e + unaff_DI);
          }
          else {
            ppppppuVar4 = (undefined2 ******)((int)pppppuStack_1e + unaff_DI);
            ppppppuVar9 = (undefined2 ******)pppppuStack_1e;
          }
          func_0x0000ffff(0,unaff_SS,ppppppuVar4,unaff_SS,ppppppuVar9,iStack_2e);
        }
        func_0x0000ffff(0,0,iVar3,iStack_12,iStack_14,iStack_2e,(undefined1 *)param_3);
        if (iStack_30 != 0) {
          func_0x0000ffff(0,iStack_30,iStack_2e,iVar2,ppppppuVar11);
          iStack_30 = 0;
        }
      }
      else {
        func_0x0000ffff(0,0,0,iStack_2e,(undefined1 *)param_3);
      }
    }
    in_stack_0000ffb2 = 1;
    iVar12 = func_0x0000ffff(0);
    if (iVar12 < 0) {
      piStack_2a = &iStack_42;
      puStack_2c = (undefined1 *)0x0;
      iStack_2e = 0x200;
      iStack_30 = 0x209;
      uStack_32 = 0;
      uStack_34 = 0;
      uStack_36 = 0x8d5d;
      iVar12 = func_0x0000ffff();
      if (iVar12 != 0) goto LAB_2000_8d64;
    }
    else {
LAB_2000_8d64:
      piStack_2a = (int *)0x8d6a;
      iVar12 = FUN_2000_8f00();
      if (iVar12 == 0) {
        func_0x0000ffff();
        return in_stack_0000ffb2;
      }
      if (*(int *)((undefined1 *)param_3 + 10) == 0) {
        func_0x0000ffff();
      }
      else {
        func_0x0000ffff();
      }
      func_0x0000ffff();
      func_0x0000ffff();
    }
LAB_2000_8a79:
    if (param_3._2_2_ == 0x115) {
      if (*(int *)((undefined1 *)param_3 + 0x20) + -2 <=
          *(int *)((undefined1 *)param_3 + 0x24) + in_stack_0000ffb2) {
        in_stack_0000ffb2 =
             (*(int *)((undefined1 *)param_3 + 0x20) - *(int *)((undefined1 *)param_3 + 0x24)) + -1;
        goto LAB_2000_8b4e;
      }
    }
    else if ((param_3._2_2_ == 0x114) &&
            (*(int *)((undefined1 *)param_3 + 0x26) + -1 <=
             *(int *)((undefined1 *)param_3 + 0x2a) + in_stack_0000ffb2)) {
      in_stack_0000ffb2 =
           *(int *)((undefined1 *)param_3 + 0x26) - *(int *)((undefined1 *)param_3 + 0x2a);
LAB_2000_8b4e:
      in_stack_0000ffb2 = in_stack_0000ffb2 + -1;
    }
    puStack_2c = (undefined1 *)param_3._2_2_;
    iStack_2e = 0x8b5c;
    piStack_2a = (int *)in_stack_0000ffb2;
    unaff_SI = FUN_2000_8eab();
  } while( true );
}

