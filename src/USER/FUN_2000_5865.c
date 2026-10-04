// Function: FUN_2000_5865

undefined2 __stdcall16far FUN_2000_5865(char *param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  undefined2 extraout_DX;
  char *pcVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  
  FUN_2000_5389(param_2);
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  func_0x000004cd(0x1000,uVar4);
  iVar2 = -1;
  pcVar3 = (char *)param_1;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar1 = pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (*pcVar1 != '\0');
  *(undefined2 *)(param_2 + 0xc) = 0;
  *(undefined2 *)(param_2 + 0x12) = 0;
  FUN_2000_520e(0,(char *)param_1,uVar4,-2 - iVar2,param_2);
  *(byte *)(param_2 + 6) = *(byte *)(param_2 + 6) & 0xef;
  *(byte *)(param_2 + 7) = *(byte *)(param_2 + 7) | 8;
  *(undefined2 *)(param_2 + 0x24) = 0;
  return 1;
}

