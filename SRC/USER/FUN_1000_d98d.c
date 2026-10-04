// Function: FUN_1000_d98d

void __cdecl16near FUN_1000_d98d(void)

{
  char *pcVar1;
  int iVar2;
  char *unaff_SI;
  char *pcVar3;
  undefined2 uVar5;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int local_20;
  char local_1e [16];
  int local_e;
  int local_c;
  char *local_8;
  char *pcVar4;
  
  uVar5 = 0x1000;
  local_e = 0;
  local_c = 300;
  while (local_e == 0) {
    unaff_SI = (char *)func_0x0000006e(uVar5,local_c,0x40);
    uVar5 = 0;
    local_20 = func_0x00000bd9(0,local_c,unaff_SI);
    pcVar3 = unaff_SI;
    if (local_20 == 0) {
      local_e = 1;
    }
    else {
      for (; (local_e == 0 && (pcVar3 < unaff_SI + local_c)); pcVar3 = pcVar3 + 1) {
        if ((*pcVar3 == '\0') && ((pcVar3[1] == '\0' && (pcVar3 < unaff_SI + local_20)))) {
          local_e = 1;
        }
      }
      if (local_e == 0) {
        uVar5 = 0;
        func_0x00000c4b(0,unaff_SI);
        local_c = local_c + 100;
      }
    }
  }
  pcVar3 = unaff_SI;
  if (local_20 != 0) {
    do {
      iVar2 = func_0x000008f8(uVar5,0xf,local_1e);
      pcVar4 = pcVar3;
      if (iVar2 != 0) {
        _local_8 = (char *)CONCAT22(unaff_SS,local_1e);
        while (uVar5 = (undefined2)((ulong)_local_8 >> 0x10), *_local_8 != '.') {
          if (*_local_8 == '\0') {
            *_local_8 = '.';
            local_8[1] = 'F';
            pcVar4 = local_8 + 3;
            local_8[2] = 'O';
            local_8 = local_8 + 4;
            _local_8 = (char *)CONCAT22(uVar5,local_8);
            *pcVar4 = 'N';
            *local_8 = '\0';
            break;
          }
          _local_8 = (char *)CONCAT22(uVar5,local_8 + 1);
        }
        func_0x0000ffff(0,local_1e);
        pcVar4 = pcVar3;
      }
      do {
        uVar5 = 0;
        pcVar3 = pcVar4 + 1;
        pcVar1 = pcVar4;
        pcVar4 = pcVar3;
      } while (*pcVar1 != '\0');
    } while (pcVar3 < unaff_SI + local_20);
  }
  func_0x0000ffff(uVar5,unaff_SI);
  return;
}

