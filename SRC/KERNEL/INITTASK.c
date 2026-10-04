// Function: INITTASK

undefined2 __cdecl16far INITTASK(void)

{
  undefined2 uVar1;
  int in_CX;
  char cVar2;
  int in_BX;
  char *pcVar3;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  char *pcVar4;
  
  *(undefined1 **)0xc = &stack0x0004;
  *(undefined1 **)0xe = &stack0x0004;
  *(int *)0xa = 0x96 - (in_BX - (int)&stack0x0004);
  if ((in_CX == 0) || (uVar1 = LOCALINIT(in_CX,0,0), in_CX != 0)) {
    cVar2 = DAT_1000_008e;
    LOCK();
    DAT_1000_008e = '\0';
    UNLOCK();
    if (cVar2 != '\0') {
      UNLOCKSEGMENT(unaff_DS);
      FUN_1000_2030();
      GLOBALCOMPACT(0,0);
      GLOBALCOMPACT(0,0);
      LOCKSEGMENT(unaff_DS);
    }
    pcVar3 = (char *)0x80;
    if (*(char *)0x80 != '\0') {
      do {
        do {
          pcVar4 = pcVar3;
          pcVar3 = pcVar4 + 1;
        } while (*pcVar3 == ' ');
      } while (*pcVar3 == '\t');
      do {
        cVar2 = (char)pcVar4 + '\x01';
        pcVar4 = (char *)CONCAT11((char)((uint)pcVar4 >> 8),cVar2);
        if (cVar2 == '\0') goto LAB_1000_2547;
      } while (*pcVar4 != '\r');
      *pcVar4 = '\0';
    }
LAB_1000_2547:
    uVar1 = 1;
  }
  return uVar1;
}

