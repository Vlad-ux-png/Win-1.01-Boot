// Function: FUN_1000_ca29

uint * __stdcall16far FUN_1000_ca29(int param_1,uint param_2,undefined2 param_3)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *unaff_DI;
  uint *puVar4;
  undefined2 unaff_DS;
  
  if (param_2 == 0xffff) {
LAB_1000_ca3e:
    unaff_DI = (uint *)0x0;
  }
  else {
    iVar2 = func_0x000007db(0x1000,param_3);
    if (param_1 == 0) {
LAB_1000_ca65:
      FUN_1000_ca1f();
      do {
        puVar4 = unaff_DI;
        unaff_DI = puVar4 + -8;
        if (unaff_DI < (uint *)(iVar2 + 0xcU)) {
          func_0x000009e1(0,param_3);
          return (uint *)0x0;
        }
        uVar1 = *unaff_DI;
        if (((uVar1 & 0x10) != 0) &&
           (puVar3 = (uint *)FUN_1000_ca29(0,param_2,puVar4[-7]), puVar3 != (uint *)0x0)) {
          func_0x000007cc(0,param_3);
          return puVar3;
        }
      } while (((uVar1 & 0x10) != 0) || (puVar4[-7] != param_2));
    }
    else {
      if ((int)param_2 < 0) goto LAB_1000_ca3e;
      if (*(uint *)(iVar2 + 10) <= param_2) goto LAB_1000_ca65;
      FUN_1000_ca1f();
    }
    *(undefined2 *)0x62e = param_3;
    *(int *)0x64e = iVar2;
  }
  return unaff_DI;
}

