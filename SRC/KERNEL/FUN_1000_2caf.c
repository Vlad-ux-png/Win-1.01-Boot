// Function: FUN_1000_2caf

uint FUN_1000_2caf(char *param_1)

{
  byte bVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  
  iVar5 = (int)((ulong)param_1 >> 0x10);
  pcVar4 = (char *)param_1;
  pcVar3 = pcVar4;
  if ((iVar5 != 0) && (pcVar3 = (char *)0x0, *param_1 == '#')) {
    while( true ) {
      pcVar4 = pcVar4 + 1;
      if ((*pcVar4 == '\0') || (bVar1 = *pcVar4 - 0x30, 9 < bVar1)) break;
      pcVar3 = (char *)((int)pcVar3 * 10 + (uint)bVar1);
    }
  }
  uVar2 = 0;
  if (pcVar3 != (char *)0x0) {
    uVar2 = (uint)pcVar3 | 0x8000;
  }
  return uVar2;
}

