// Function: FUN_1000_7f55

void FUN_1000_7f55(int param_1,int param_2,char *param_3)

{
  int iVar1;
  char *pcVar2;
  undefined2 unaff_DS;
  int local_a;
  
  iVar1 = func_0x0000ffff(0x1000,param_3);
  pcVar2 = (char *)func_0x0000ffff(0,param_3 + iVar1);
  if ((*pcVar2 == ':') || (((*pcVar2 == '.' && (pcVar2[-1] == '.')) && (iVar1 == 2)))) {
    local_a = 0;
  }
  else if (*pcVar2 == '\\') {
    local_a = 1;
  }
  else {
    if (param_2 == 0) {
      local_a = 2;
    }
    else {
      local_a = 0;
    }
    for (; param_3 < pcVar2; pcVar2 = (char *)func_0x00000393(0,pcVar2)) {
      if (*pcVar2 == '.') {
        return;
      }
    }
  }
  func_0x0000078c(0,local_a + param_1);
  return;
}

