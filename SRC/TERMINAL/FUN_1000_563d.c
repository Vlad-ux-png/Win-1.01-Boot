// Function: FUN_1000_563d

void __cdecl16near FUN_1000_563d(undefined2 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined2 unaff_DS;
  int local_8;
  int local_6;
  int local_4;
  
  local_8 = func_0x00004b46(0x1000,0,param_1);
  func_0x00004c7a(0,&local_6);
  if (param_2 == 0) {
    local_8 = local_8 + -1;
  }
  else if (param_2 == 1) {
    local_8 = local_8 + 1;
  }
  else if (param_2 == 2) {
    local_8 = local_8 - (*(int *)0x38 - *(int *)0x34);
  }
  else if (param_2 == 3) {
    local_8 = local_8 + (*(int *)0x38 - *(int *)0x34);
  }
  else if (param_2 == 4) {
    local_8 = param_3;
  }
  else if (param_2 != 5) {
    return;
  }
  if ((local_8 < 0) || (local_4 = local_6, local_6 < local_8)) {
    local_8 = local_4;
  }
  iVar1 = func_0x00004c50(0,0,param_1);
  if (iVar1 != local_8) {
    func_0x0000ffff(0,1,local_8,0,param_1);
    if (*(int *)0x136a != 0) {
      FUN_1000_33af(0,0,2);
    }
    FUN_1000_286b(local_8);
    if (*(int *)0x136a != 0) {
      FUN_1000_33af(0,0,3);
    }
    if ((*(int *)0x12ac < *(int *)0x34) || (*(int *)0x38 <= *(int *)0x12ae)) {
      if (*(int *)0x136a != 0) {
        FUN_1000_33af(0,0,2);
        *(undefined2 *)0x136a = 0;
      }
    }
    else {
      FUN_1000_33af(*(int *)0x12ae - *(int *)0x430,*(undefined2 *)0x12ac,4);
      if (*(int *)0x136a == 0) {
        FUN_1000_33af(0,0,3);
        *(undefined2 *)0x136a = 1;
      }
    }
  }
  return;
}

