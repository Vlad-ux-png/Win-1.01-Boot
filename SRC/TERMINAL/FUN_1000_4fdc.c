// Function: FUN_1000_4fdc

void FUN_1000_4fdc(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined2 unaff_DS;
  undefined1 local_1c;
  undefined2 local_1b;
  undefined1 local_19;
  undefined1 local_18;
  undefined1 local_17;
  byte local_f;
  undefined1 local_e;
  undefined1 local_d;
  undefined2 local_c;
  undefined2 local_a;
  
  if (param_2 < 0) {
    return;
  }
  iVar2 = func_0x0000ffff(0x1000,&local_1c);
  if (iVar2 < 0) {
    return;
  }
  local_1b = *(undefined2 *)(param_1 + 0x16);
  local_19 = *(undefined1 *)(param_1 + 0x1a);
  local_17 = *(undefined1 *)(param_1 + 0x1c);
  local_18 = *(undefined1 *)(param_1 + 0x1e);
  local_c = 0x1e;
  local_a = 0x101;
  iVar2 = *(int *)(param_1 + 0x20);
  if (iVar2 == 0) {
    local_e = 0x11;
    local_d = 0x13;
    bVar1 = local_f & 0x9f | 0xb;
  }
  else {
    if (iVar2 == 1) {
      local_f = local_f | 0x68;
    }
    else {
      bVar1 = local_f | 8;
      if (iVar2 != 2) goto LAB_1000_506e;
      local_f = local_f & 0x9f | 8;
    }
    bVar1 = local_f & 0xfc;
  }
LAB_1000_506e:
  local_f = bVar1;
  func_0x0000ffff(0,&local_1c);
  return;
}

