// Function: FUN_2000_a86e

void FUN_2000_a86e(void)

{
  bool bVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined2 unaff_DS;
  long lVar8;
  undefined2 in_stack_00000008;
  undefined2 *in_stack_0000000a;
  undefined1 local_c [2];
  int local_a;
  int local_6;
  undefined2 local_4;
  
  local_4 = func_0x0000ffff(0x1000,4);
  if (in_stack_0000000a != (undefined2 *)0x0) {
    uVar2 = func_0x0000ffff(0,2,in_stack_00000008,in_stack_0000000a[1],in_stack_00000008);
    uVar2 = func_0x00000b6c(0,uVar2);
    func_0x0000ffff(0,1,in_stack_00000008);
    FUN_2000_b642(in_stack_0000000a);
    func_0x000000e7(0,2,in_stack_00000008,in_stack_0000000a[1],*in_stack_0000000a);
    if ((*(char *)((int)in_stack_0000000a + 0x31) != '\0') && (0 < (int)in_stack_0000000a[8])) {
      func_0x000008d8(0,local_c);
      uVar3 = FUN_2000_b2db(1,in_stack_0000000a);
      iVar4 = func_0x000003f4(0,in_stack_0000000a[8] - in_stack_0000000a[3],uVar3);
      for (iVar7 = 0; iVar7 < iVar4; iVar7 = iVar7 + 1) {
        local_6 = local_a + in_stack_0000000a[0x12];
        lVar8 = FUN_2000_a1be(in_stack_0000000a[3] + iVar7,in_stack_0000000a);
        if (lVar8 != -1) {
          if ((*(byte *)(in_stack_0000000a[1] + 0x33) & 8) == 0) {
            uVar3 = func_0x000006f9(0,lVar8,lVar8,local_a,2,in_stack_00000008);
            func_0x0000ffff(0,uVar3);
          }
          else {
            func_0x0000ffff(0,0,0,local_a,2,0,lVar8,0,0,0,in_stack_00000008);
          }
          FUN_2000_a1fc(in_stack_0000000a);
        }
        iVar5 = in_stack_0000000a[3] + iVar7;
        iVar6 = FUN_2000_b4e5(iVar5,in_stack_0000000a);
        if ((iVar5 < (int)in_stack_0000000a[0x15]) || ((int)in_stack_0000000a[0x16] < iVar5)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if ((((*(char *)((int)in_stack_0000000a + 0x35) == '\0') &&
             (*(char *)(in_stack_0000000a + 0x18) == '\0')) && (iVar6 != 0)) ||
           ((((*(char *)((int)in_stack_0000000a + 0x35) != '\0' ||
              (*(char *)(in_stack_0000000a + 0x18) != '\0')) &&
             (*(char *)(in_stack_0000000a + 0x17) != '\0')) &&
            (((!bVar1 && (iVar6 != 0)) ||
             ((bVar1 && (*(char *)((int)in_stack_0000000a + 0x2f) != '\0')))))))) {
          func_0x0000ffff(0,local_c);
        }
        local_a = local_6;
      }
    }
    FUN_2000_b612(in_stack_0000000a);
    func_0x0000ffff(0,uVar2,in_stack_00000008);
  }
  return;
}

