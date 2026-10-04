// Function: FUN_1000_a750

void FUN_1000_a750(undefined2 param_1,undefined2 param_2)

{
  bool bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  undefined2 unaff_DS;
  int local_18;
  int local_12;
  undefined1 local_10 [14];
  
  pbVar2 = (byte *)func_0x00000305(0x1000,param_1);
  pbVar4 = pbVar2 + 0xc;
  func_0x0000002c(0,1,param_2);
  func_0x000001e1(0,1,*(undefined2 *)0x3b2);
  local_18 = 0;
  do {
    if (*(int *)(pbVar2 + 10) <= local_18) {
      func_0x0000ffff(0,2,param_2);
      func_0x000003dc(0,param_1);
      return;
    }
    if (((*pbVar4 & 0x60) == 0x20) && ((*pbVar2 & 1) != 0)) {
      func_0x00000081(0,*(undefined2 *)0x3c8,param_2);
      func_0x000000a4(0,0x21,0xf0,*(undefined2 *)(pbVar2 + 6),*(undefined2 *)0x47e,0,
                      *(int *)(pbVar4 + 6) - *(int *)0x47e,param_2);
    }
    if (*(int *)(pbVar4 + 0xe) == 0) {
      func_0x00000178(0,*(undefined2 *)0x3c8,param_2);
      func_0x00000194(0,0x21,0xf0,1,*(undefined2 *)(pbVar4 + 10),
                      (*(int *)(pbVar4 + 8) >> 1) + *(int *)(pbVar4 + 4),*(undefined2 *)(pbVar4 + 6)
                      ,param_2);
    }
    else {
      if (((*pbVar4 & 8) != 0) && ((*pbVar2 & 1) != 0)) {
        local_12 = *(int *)(pbVar4 + 8) - *(int *)0x452;
        if (local_12 < 0) {
          local_12 = 0;
        }
        func_0x0000ffff(0,1,0,0,*(undefined2 *)0x452,*(undefined2 *)0x450,
                        (local_12 >> 1) + *(int *)(pbVar4 + 4),*(undefined2 *)(pbVar4 + 6),
                        *(undefined2 *)0x44e,*(undefined2 *)0x3ca,param_2);
      }
      bVar1 = true;
      if ((*pbVar4 & 3) == 1) {
        iVar3 = func_0x0000ffff(0,*(undefined2 *)(pbVar4 + 8),*(undefined2 *)(pbVar4 + 10),
                                *(undefined2 *)(pbVar4 + 4),*(undefined2 *)(pbVar4 + 6),1,pbVar4,
                                pbVar2,0xffff,0xffff,*(undefined2 *)0x3ca,param_2);
        if (iVar3 == 0) goto LAB_1000_a88c;
      }
      else {
        bVar1 = false;
LAB_1000_a88c:
        func_0x0000ffff(0,*(undefined2 *)0x3fa,*(undefined2 *)0x3fc,param_2);
        func_0x0000ffff(0,*(undefined2 *)0x3ee,*(undefined2 *)0x3f0,param_2);
        FUN_1000_a96a(*(undefined2 *)(pbVar4 + 4),*(undefined2 *)(pbVar4 + 6),pbVar4,pbVar2,param_2)
        ;
        if (bVar1) {
          func_0x00000260(0,*(undefined2 *)0x550,param_2);
          func_0x0000ffff(0,0x89,0xfa,*(undefined2 *)(pbVar4 + 8),*(undefined2 *)(pbVar4 + 10),
                          *(undefined2 *)(pbVar4 + 4),*(undefined2 *)(pbVar4 + 6),param_2);
        }
      }
      if ((*pbVar4 & 0x80) != 0) {
        func_0x0000033f(0,*(int *)(pbVar4 + 4) + *(int *)(pbVar4 + 8),
                        *(int *)(pbVar4 + 6) + *(int *)(pbVar4 + 10),*(undefined2 *)(pbVar4 + 4),
                        *(undefined2 *)(pbVar4 + 6),local_10);
        func_0x0000ffff(0,local_10);
      }
    }
    pbVar4 = pbVar4 + 0x10;
    local_18 = local_18 + 1;
  } while( true );
}

