// Function: caseD_0

/* WARNING: Control flow encountered bad instruction data */

void switchD_2000:9c86::caseD_0(void)

{
  int in_AX;
  undefined2 uVar1;
  byte in_CL;
  int unaff_BP;
  int unaff_SI;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  *(uint *)(unaff_BP + 6) =
       in_AX << (in_CL & 0x1f) | *(int *)(unaff_BP + 6) + *(int *)(unaff_SI + 0x26);
  *(undefined2 *)(unaff_BP + 8) = 0;
  uVar1 = func_0x00000f01(0x1000);
  func_0x000006b2(0,*(undefined2 *)(unaff_BP + 6),*(undefined2 *)(unaff_BP + 8),
                  *(uint *)(unaff_BP + -10) | 4,0x112,uVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

