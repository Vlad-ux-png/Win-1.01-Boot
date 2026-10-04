// Function: FUN_1000_6780

bool FUN_1000_6780(int param_1,byte *param_2,byte *param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  pbVar5 = (byte *)param_3;
  pbVar4 = (byte *)param_2;
  bVar3 = 0;
  do {
    pbVar1 = pbVar4;
    pbVar4 = pbVar4 + 1;
    bVar2 = *pbVar1;
    bVar3 = bVar3 | bVar2;
    pbVar1 = pbVar5;
    pbVar5 = pbVar5 + 1;
    *pbVar1 = bVar2 & 0x7f;
    param_1 = param_1 + -1;
  } while (param_1 != 0 && (bVar2 & 0x7f) != 0);
  return (bVar3 & 0x80) != 0;
}

