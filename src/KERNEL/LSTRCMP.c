// Function: LSTRCMP

void LSTRCMP(void)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  char *unaff_SI;
  char *pcVar4;
  char *unaff_DI;
  char *pcVar5;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  bool bVar6;
  
  FUN_1000_4a74();
  do {
    if ((*unaff_SI == '\0') || (bVar6 = false, *unaff_DI == '\0')) break;
    pcVar4 = unaff_SI + 1;
    uVar1 = FUN_1000_4bcd();
    if (bVar6) {
      uVar2 = FUN_1000_4bba();
      uVar2 = uVar2 & 0xff;
    }
    else {
      uVar2 = CONCAT11(*pcVar4,uVar1);
      pcVar4 = unaff_SI + 2;
    }
    bVar6 = false;
    pcVar5 = unaff_DI + 1;
    uVar1 = FUN_1000_4bcd();
    if (bVar6) {
      uVar3 = FUN_1000_4bba();
      uVar3 = uVar3 & 0xff;
    }
    else {
      uVar3 = CONCAT11(*pcVar5,uVar1);
      pcVar5 = unaff_DI + 2;
    }
    unaff_SI = pcVar4;
    unaff_DI = pcVar5;
  } while (uVar3 == uVar2);
  FUN_1000_4a85();
  return;
}

