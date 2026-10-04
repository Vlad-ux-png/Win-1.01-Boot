// Function: FUN_1000_0a28

undefined2 FUN_1000_0a28(int param_1,int *param_2,int param_3,undefined2 param_4)

{
  code *pcVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  undefined2 unaff_SI;
  undefined1 uVar6;
  bool bVar7;
  undefined4 uVar8;
  
  iVar4 = param_2[1];
  uVar6 = 0;
  iVar5 = param_3;
  if (*param_2 == 0) {
LAB_1000_0aaa:
    FUN_1000_09e1(iVar4);
    uVar3 = 4;
  }
  else {
    iVar5 = param_3 + 1;
    if (iVar5 == 0) {
      iVar5 = -0x5c00;
      OPENFILE(0xa400,*(undefined2 *)0xa,param_4,*(undefined2 *)0xa,param_4);
      iVar5 = iVar5 + 1;
      if (iVar5 != 0) goto LAB_1000_0a60;
      iVar5 = 0;
    }
    else {
LAB_1000_0a60:
      iVar5 = iVar5 + -1;
      pcVar1 = (code *)swi(0x21);
      (*pcVar1)();
      if (!(bool)uVar6) {
        uVar8 = FUN_1000_098a(0,param_1 + 4,0x17);
        iVar4 = (int)((ulong)uVar8 >> 0x10);
        bVar7 = false;
        LOCK();
        iVar2 = *param_2;
        *param_2 = 0;
        UNLOCK();
        *(int *)0x0 = iVar2;
        LOCK();
        iVar2 = param_2[1];
        param_2[1] = iVar4;
        UNLOCK();
        *(int *)0x2 = iVar2;
        pcVar1 = (code *)swi(0x21);
        iVar2 = (*pcVar1)();
        if ((!bVar7) && (iVar2 == param_1)) goto LAB_1000_0aaa;
      }
    }
    uVar3 = 0;
  }
  if (iVar5 != param_3) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    uVar3 = unaff_SI;
  }
  return uVar3;
}

