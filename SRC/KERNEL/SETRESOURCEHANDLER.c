// Function: SETRESOURCEHANDLER

undefined4 __stdcall16far
SETRESOURCEHANDLER(int param_1,int param_2,undefined2 param_3,undefined2 param_4,undefined2 param_5)

{
  undefined2 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 local_10;
  
  uVar1 = FUN_1000_08df(param_5);
  if (*(int *)0x26 != *(int *)0x24) {
    iVar2 = *(int *)0x24;
    iVar5 = FUN_1000_2caf(param_3,param_4);
    piVar3 = (int *)(iVar2 + 2);
    while( true ) {
      local_10 = (int *)CONCAT22(uVar1,piVar3);
      if (*local_10 == 0) break;
      if (iVar5 == 0) {
        iVar4 = FUN_1000_2cef(param_3,param_4,*local_10,iVar2,uVar1);
        if (iVar4 != 0) break;
      }
      if (*local_10 == iVar5) break;
      piVar3 = piVar3 + piVar3[1] * 6 + 4;
    }
    if (*local_10 != 0) {
      iVar2 = piVar3[2];
      iVar5 = piVar3[3];
      piVar3[2] = param_1;
      piVar3[3] = param_2;
      goto LAB_1000_28e0;
    }
  }
  iVar2 = 0;
  iVar5 = 0;
LAB_1000_28e0:
  return CONCAT22(iVar5,iVar2);
}

