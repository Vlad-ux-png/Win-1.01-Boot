// Function: caseD_0

undefined2 __stdcall16far switchD_1000:3d4d::caseD_0(void)

{
  char in_AL;
  int in_BX;
  int unaff_BP;
  int unaff_SI;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(undefined2 *)0xee2 = 5;
  *(undefined2 *)0xee0 = *(undefined2 *)0x262;
  func_0x0000ffff(0x1000,0,*(undefined2 *)0xee0,0x2b,*(undefined2 *)(unaff_BP + 0xe));
  return 1;
}

