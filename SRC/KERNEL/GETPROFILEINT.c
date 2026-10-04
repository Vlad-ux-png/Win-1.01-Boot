// Function: GETPROFILEINT

int __stdcall16far
GETPROFILEINT(int param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5)

{
  int in_CX;
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar3 = (byte *)FUN_1000_463f(param_2,param_3,param_4,param_5);
  pbVar2 = (byte *)pbVar3;
  if (in_CX != -1) {
    param_1 = 0;
    do {
      bVar1 = *pbVar2 - 0x30;
      if ((*pbVar2 < 0x30) || (9 < bVar1)) break;
      pbVar2 = pbVar2 + 1;
      param_1 = param_1 * 10 + (uint)bVar1;
      in_CX = in_CX + -1;
    } while (in_CX != 0);
  }
  FUN_1000_47f3();
  return param_1;
}

