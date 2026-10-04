// Function: FATALEXIT

void FATALEXIT(undefined2 param_1,uint param_2)

{
  byte *pbVar1;
  code *pcVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  undefined2 uVar7;
  int iVar8;
  int unaff_SI;
  byte *pbVar9;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  
  iVar8 = 1;
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  if (param_2 == 0xffff) {
    pcVar2 = (code *)swi(0x21);
    (*pcVar2)();
  }
  else {
    iVar8 = 4;
    pbVar3 = &stack0xfff4;
    do {
      pbVar9 = pbVar3;
      bVar4 = (byte)param_2 & 0xf;
      param_2 = param_2 >> 4;
      bVar5 = bVar4 + 0x30;
      if (0x39 < bVar5) {
        bVar5 = bVar4 + 0x41;
      }
      *pbVar9 = bVar5;
      iVar8 = iVar8 + -1;
      pbVar3 = pbVar9 + 1;
    } while (iVar8 != 0);
    pbVar1 = pbVar9 + 1;
    pbVar1[0] = 0xd;
    pbVar1[1] = 10;
    pbVar9[3] = 0;
    iVar8 = 1;
    pcVar2 = (code *)swi(0x21);
    (*pcVar2)();
    unaff_CS = unaff_SS;
  }
  uVar7 = EXITKERNEL();
  cVar6 = (char)uVar7;
  *(char *)(iVar8 + unaff_SI) = *(char *)(iVar8 + unaff_SI) + cVar6;
  *(char *)(iVar8 + unaff_SI) = *(char *)(iVar8 + unaff_SI) + cVar6;
  *(char *)(iVar8 + unaff_SI) = *(char *)(iVar8 + unaff_SI) + cVar6;
  *(char *)(iVar8 + unaff_SI) = *(char *)(iVar8 + unaff_SI) + cVar6;
  *(char *)(iVar8 + unaff_SI) = *(char *)(iVar8 + unaff_SI) + cVar6;
  *(char *)(iVar8 + unaff_SI) = *(char *)(iVar8 + unaff_SI) + cVar6;
  *(char *)(iVar8 + unaff_SI) = *(char *)(iVar8 + unaff_SI) + cVar6;
  *(char *)(iVar8 + unaff_SI) = *(char *)(iVar8 + unaff_SI) + cVar6;
  *(char *)(iVar8 + unaff_SI) = *(char *)(iVar8 + unaff_SI) + cVar6;
  *(char *)(iVar8 + unaff_SI) = *(char *)(iVar8 + unaff_SI) + cVar6;
  *(char *)(iVar8 + unaff_SI) = *(char *)(iVar8 + unaff_SI) + cVar6;
  *(char *)(iVar8 + unaff_SI) = *(char *)(iVar8 + unaff_SI) + cVar6;
  cVar6 = cVar6 + *(char *)(iVar8 + unaff_SI);
  *(int *)(iVar8 + unaff_SI) = *(int *)(iVar8 + unaff_SI) + CONCAT11((char)((uint)uVar7 >> 8),cVar6)
  ;
  *(char *)(iVar8 + unaff_SI) = *(char *)(iVar8 + unaff_SI) + cVar6;
  (*(code *)*(undefined2 *)0x6e)();
  FUN_1000_31ec();
  *(undefined2 *)0x7e = 0;
  DAT_1000_0018 = 0;
  GLOBALREALLOC(0,0x6496);
  return;
}

