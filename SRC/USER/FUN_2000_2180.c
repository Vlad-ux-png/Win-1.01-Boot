// Function: FUN_2000_2180

void FUN_2000_2180(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_SI;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 uVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined2 uVar8;
  undefined1 *puVar9;
  undefined2 uVar10;
  int iVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  undefined1 local_a [8];
  
  uVar13 = 0x35e;
  iVar11 = param_1 + 0x1e;
  uVar12 = unaff_DS;
  uVar14 = unaff_DS;
  func_0x0000ffff(0x1000,iVar11);
  *(undefined2 *)0x50 = 0;
  puVar9 = local_a;
  iVar1 = *(int *)0x546 - *(int *)0x47e;
  uVar8 = *(undefined2 *)0x548;
  iVar2 = *(int *)0x54a + *(int *)0x47e;
  iVar3 = *(int *)0x54c + *(int *)0x480;
  uVar10 = unaff_SS;
  func_0x0000ffff(0,iVar3,iVar2,uVar8,iVar1,puVar9);
  puVar6 = local_a;
  iVar7 = param_1;
  func_0x00000922(0,puVar6);
  if (*(int *)0x35c == 0) {
    func_0x00000928(0,param_1);
  }
  else {
    uVar4 = 0;
    iVar5 = param_1;
    func_0x0000ffff(0,0,param_1);
    if (*(int *)0x51c == 0) {
      FUN_2000_3a63(0,uVar4,iVar5,puVar6,unaff_SS,iVar7,iVar3,iVar2,uVar8,iVar1,puVar9,uVar10,iVar11
                    ,uVar12,uVar13,uVar14,unaff_SI);
    }
    func_0x00000577(0,0,*(undefined2 *)0x4dc,param_1);
    func_0x000005d2(0,param_1);
  }
  return;
}

