// Function: FUN_1000_46a8

int __cdecl16near FUN_1000_46a8(char *param_1,int param_2,int param_3)

{
  char *pcVar1;
  char cVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  undefined2 uVar5;
  undefined2 unaff_DS;
  int local_5a;
  char local_58 [82];
  char *local_6;
  char *local_4;
  
  builtin_strncpy(local_58,"ATS6=",5);
  local_6 = local_58 + 5;
  puVar4 = (undefined1 *)FUN_1000_3ca8(*(undefined2 *)(param_3 + 0x24),local_6);
  *puVar4 = 0x20;
  puVar4[1] = 0x53;
  puVar4[2] = 0x37;
  local_6 = puVar4 + 4;
  puVar4[3] = 0x3d;
  puVar4 = (undefined1 *)FUN_1000_3ca8(*(undefined2 *)(param_3 + 0x22),local_6);
  *puVar4 = 0x20;
  puVar4[1] = 0x53;
  puVar4[2] = 0x31;
  puVar4[3] = 0x31;
  local_6 = puVar4 + 5;
  puVar4[4] = 0x3d;
  if (*(int *)(param_3 + 0x12) == 0) {
    uVar5 = 200;
  }
  else {
    uVar5 = 0x46;
  }
  puVar4 = (undefined1 *)FUN_1000_3ca8(uVar5,local_6);
  *puVar4 = 0x20;
  puVar4[1] = 0x44;
  if (*(int *)(param_3 + 0x10) == 0) {
    uVar3 = 0x50;
  }
  else {
    uVar3 = 0x54;
  }
  puVar4[2] = uVar3;
  local_6 = puVar4 + 3;
  local_4 = (char *)(param_3 + 0x26);
  while( true ) {
    pcVar1 = local_4 + 1;
    cVar2 = *local_4;
    if (cVar2 == '\0') break;
    local_4 = pcVar1;
    if (((('/' < cVar2) && (cVar2 < ':')) || (cVar2 == ',')) || ((cVar2 == '#' || (cVar2 == '*'))))
    {
      *local_6 = cVar2;
      local_6 = local_6 + 1;
    }
  }
  *local_6 = '\r';
  local_6[1] = '\0';
  local_6 = param_1;
  local_5a = 0;
  local_4 = local_58;
  while ((local_5a <= param_2 && (*local_4 != '\0'))) {
    *local_6 = *local_4;
    local_5a = local_5a + 1;
    local_6 = local_6 + 1;
    local_4 = local_4 + 1;
  }
  return local_5a;
}

