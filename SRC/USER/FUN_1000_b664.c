// Function: FUN_1000_b664

void __stdcall16far FUN_1000_b664(int param_1,int param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 local_1a;
  undefined2 local_18;
  int local_14;
  int local_12;
  int local_8;
  
  uVar2 = 0x1000;
  *(undefined2 *)0x3e = 1;
  local_14 = param_1;
  local_12 = param_2;
  if ((param_2 == 0x7fff) && (param_1 == -1)) goto LAB_1000_b6bd;
  *(undefined2 *)0x36 = 0xffff;
  func_0x0000ffff(0x1000,4,*(undefined2 *)0x64);
  FUN_1000_ba15(*(undefined2 *)0x64);
  local_18 = 0x201;
  local_1a = *(undefined2 *)0x64;
  do {
    uVar2 = 0;
    iVar1 = func_0x0000ffff(0,2,&local_1a);
    if (iVar1 == 0) {
      if ((*(int *)0x36 == 1) && (local_8 == 0)) {
        FUN_1000_b2ea(&local_1a,unaff_SS);
      }
      else {
        FUN_1000_ad77(&local_1a,unaff_SS);
      }
    }
LAB_1000_b6bd:
    while( true ) {
      if (*(int *)0x3e == 0) {
        return;
      }
      local_8 = func_0x00000fac(uVar2,1,0x209,0x200,0,&local_1a);
      if (local_8 != 0) break;
      iVar1 = func_0x0000ffff(0,1,0x107,0x100,0,&local_1a);
      if (iVar1 != 0) break;
      if ((*(int *)0x35a != 0) && ((*(byte *)(*(int *)0x35a + 0x33) & 0x10) == 0)) {
        func_0x0000ffff(0,4,*(int *)0x35a);
        func_0x0000ffff(0,*(undefined2 *)0x35a);
      }
      uVar2 = 0;
      func_0x0000ffff(0);
    }
  } while( true );
}

