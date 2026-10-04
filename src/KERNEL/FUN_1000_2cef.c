// Function: FUN_1000_2cef

undefined2 FUN_1000_2cef(char *param_1,int param_2,undefined4 param_3)

{
  char *pcVar1;
  byte bVar2;
  uint uVar3;
  char *pcVar4;
  byte *pbVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  
  uVar7 = (undefined2)((ulong)param_3 >> 0x10);
  pbVar5 = (byte *)((int)param_3 + param_2);
  uVar3 = (uint)*pbVar5;
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  pcVar4 = (char *)param_1;
  do {
    pbVar5 = pbVar5 + 1;
    pcVar1 = pcVar4;
    pcVar4 = pcVar4 + 1;
    if (*pcVar1 == '\0') goto LAB_1000_2d22;
    bVar2 = FUN_1000_4ba7();
    if (bVar2 != *pbVar5) goto LAB_1000_2d22;
    uVar3 = uVar3 - 1;
  } while (uVar3 != 0);
  if (*pcVar4 == '\0') {
    uVar6 = 0xffff;
  }
  else {
LAB_1000_2d22:
    uVar6 = 0;
  }
  return uVar6;
}

