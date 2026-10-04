// Function: CATCH

undefined2 __stdcall16far CATCH(undefined2 *param_1)

{
  undefined2 in_CX;
  undefined2 *puVar1;
  int unaff_BP;
  int iVar2;
  undefined2 unaff_SI;
  undefined2 unaff_DI;
  undefined2 uVar3;
  undefined2 unaff_SS;
  undefined4 uVar4;
  undefined2 in_stack_00000000;
  undefined2 in_stack_00000002;
  
  iVar2 = unaff_BP + 1;
  GLOBALHANDLE(unaff_SS);
  uVar4 = FUN_1000_2dd6();
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar1 = (undefined2 *)param_1;
  puVar1[8] = (int)uVar4;
  puVar1[7] = in_stack_00000000;
  puVar1[6] = in_stack_00000002;
  puVar1[5] = unaff_DI;
  puVar1[4] = unaff_SI;
  puVar1[3] = iVar2;
  puVar1[2] = &stack0xfff8;
  *param_1 = in_CX;
  puVar1[1] = (int)((ulong)uVar4 >> 0x10);
  return 0;
}

