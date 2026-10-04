// Function: FUN_1000_463f

char * FUN_1000_463f(void)

{
  int iVar1;
  undefined2 uVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  char *pcVar6;
  
  pcVar6 = (char *)FUN_1000_46d4();
  uVar2 = (undefined2)((ulong)pcVar6 >> 0x10);
  pcVar3 = (char *)pcVar6;
  if (pcVar6 == (char *)0x0) {
    return (char *)0x0;
  }
  do {
    if (*pcVar3 == '[') {
      pcVar3 = pcVar3 + 1;
      bVar5 = pcVar3 == (char *)0x0;
      FUN_1000_46b4();
      if (bVar5) {
        do {
          iVar1 = -1;
          do {
            if (iVar1 == 0) break;
            iVar1 = iVar1 + -1;
            pcVar6 = pcVar3;
            pcVar3 = pcVar3 + 1;
          } while (*pcVar6 != '\n');
          if (*pcVar3 == '\0') {
            return (char *)0x0;
          }
          bVar5 = *pcVar3 == '[';
          if (bVar5) {
            return (char *)0x5b;
          }
          FUN_1000_46b4();
          if (bVar5) {
            pcVar3 = pcVar3 + 1;
            iVar1 = -1;
            pcVar4 = pcVar3;
            do {
              if (iVar1 == 0) {
                return pcVar3;
              }
              iVar1 = iVar1 + -1;
              pcVar6 = pcVar4;
              pcVar4 = pcVar4 + 1;
            } while (*pcVar6 != '\r');
            return pcVar3;
          }
        } while( true );
      }
    }
    iVar1 = -1;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      pcVar6 = pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (*pcVar6 != '\n');
    if (*pcVar3 == '\0') {
      return (char *)0x0;
    }
  } while( true );
}

