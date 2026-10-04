// Function: FUN_1000_4c2a

uint FUN_1000_4c2a(int param_1,char *param_2)

{
  char *pcVar1;
  uint uVar2;
  undefined2 unaff_DS;
  uint local_a;
  uint local_8;
  
  uVar2 = 0;
  while (param_1 = param_1 + -1, -1 < param_1) {
    pcVar1 = param_2 + 1;
    local_8 = (uint)*param_2;
    for (local_a = 0; param_2 = pcVar1, local_a < 8; local_a = local_a + 1) {
      uVar2 = (CONCAT11((byte)(uVar2 >> 9),(char)(uVar2 >> 1)) | uVar2 << 0xf) ^ local_8 & 1;
      local_8 = local_8 >> 1;
    }
  }
  return uVar2;
}

