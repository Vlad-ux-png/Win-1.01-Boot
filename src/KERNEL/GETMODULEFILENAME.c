// Function: GETMODULEFILENAME

int __stdcall16far GETMODULEFILENAME(int param_1,byte *param_2,undefined2 param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int in_CX;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined2 uVar8;
  
  iVar3 = FUN_1000_08df(param_3);
  iVar4 = iVar3;
  if (in_CX != 0) {
    iVar5 = *(byte *)*(undefined2 *)0xa - 8;
    pbVar6 = (byte *)*(undefined2 *)0xa + 8;
    uVar8 = (undefined2)((ulong)param_2 >> 0x10);
    pbVar7 = (byte *)param_2;
    iVar4 = iVar5;
    if (param_1 <= iVar5) {
      iVar5 = param_1 + -1;
      iVar4 = iVar5;
    }
    for (; iVar5 != 0; iVar5 = iVar5 + -1) {
      pbVar2 = pbVar7;
      pbVar7 = pbVar7 + 1;
      pbVar1 = pbVar6;
      pbVar6 = pbVar6 + 1;
      *pbVar2 = *pbVar1;
    }
    *pbVar7 = 0;
  }
  return iVar4;
}

