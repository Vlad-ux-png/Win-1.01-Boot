// Function: FUN_2000_82bc

undefined2 FUN_2000_82bc(int param_1,undefined2 *param_2)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined1 *puVar8;
  undefined2 unaff_DS;
  int local_16;
  int local_a;
  int local_8;
  
  if (param_1 == 0) {
    FUN_2000_8268(param_2);
    FUN_2000_7284(0,0,param_2);
  }
  else if ((param_2[3] & 0x4000) != 0) {
    iVar1 = param_2[0x10];
    uVar2 = *param_2;
    iVar3 = param_2[6] + iVar1 * 3;
    param_2[0x16] = iVar3;
    iVar3 = func_0x0000196f(0x1000,0,iVar3,uVar2);
    if (iVar3 != 0) {
      iVar3 = *(int *)(param_2[0x1c] + 2);
      iVar6 = param_2[6];
      if (0 < iVar6 - iVar3) {
        iVar4 = func_0x00001ed3(0,*param_2);
        iVar5 = iVar1 * 3 + -3 + iVar3 + iVar4;
        func_0x00001e8a(0,iVar6 - iVar3,iVar5);
        iVar1 = param_2[6];
        puVar8 = (undefined1 *)(iVar3 + iVar4);
        for (local_8 = 1; local_8 < (int)param_2[0x10]; local_8 = local_8 + 1) {
          local_16 = *(int *)(param_2[0x1c] + local_8 * 2) - iVar3;
          pcVar7 = (char *)(local_16 + iVar5);
          if (*(int *)(puVar8 + -2) != 0xa0d) {
            for (; (*pcVar7 == ' ' && (pcVar7 < (char *)((iVar1 - iVar3) + iVar5)));
                pcVar7 = pcVar7 + 1) {
              iVar6 = func_0x00001631(0,(int)*pcVar7);
              if (iVar6 != 0) {
                pcVar7 = pcVar7 + 1;
                local_16 = local_16 + 1;
              }
              local_16 = local_16 + 1;
            }
            *puVar8 = 0xd;
            puVar8[1] = 0xd;
            puVar8[2] = 10;
            puVar8 = puVar8 + 3;
          }
          local_a = (*(int *)(param_2[0x1c] + local_8 * 2 + 2) - local_16) - iVar3;
          if (param_2[0x10] + -1 == local_8) {
            local_a = local_a + -1;
          }
          func_0x000019ae(0,local_a,puVar8);
          puVar8 = puVar8 + local_a;
        }
        param_2[6] = (int)puVar8 - iVar4;
        func_0x00001ef3(0,*param_2);
        FUN_2000_7284(0,0,param_2);
        return 1;
      }
    }
  }
  return 0;
}

