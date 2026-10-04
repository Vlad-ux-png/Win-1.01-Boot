// Function: FUN_1000_d54d

void __cdecl16near FUN_1000_d54d(void)

{
  char cVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  char local_4 [2];
  
  uVar2 = func_0x00000716(0x1000,500,0xc51,0xffff,0xc3a,0x706);
  func_0x0000ffff(0,uVar2);
  uVar2 = func_0x0000ffff(0,0,0xc72,0xffff,0xc3a,0x724);
  func_0x0000ffff(0,uVar2);
  func_0x0000ffff(0,2,local_4);
  if (*(char *)0xc4f != local_4[0]) {
    cVar1 = func_0x0000ffff(0,(int)*(char *)0xc4f,(int)*(char *)0xc4f >> 0xf);
    if (local_4[0] != cVar1) {
      uVar2 = 0;
      goto LAB_1000_d5de;
    }
  }
  uVar2 = 1;
LAB_1000_d5de:
  *(undefined2 *)0x5aa3 = uVar2;
  uVar2 = func_0x00000791(0,0x7f00,0,0);
  *(undefined2 *)0x608 = uVar2;
  uVar2 = func_0x000007a2(0,0x7f01,0,0);
  *(undefined2 *)0x656 = uVar2;
  uVar2 = func_0x000007b3(0,0x7f04,0,0);
  *(undefined2 *)0x5ee = uVar2;
  uVar2 = func_0x000007c4(0,0x7f80,0,0);
  *(undefined2 *)0x5f0 = uVar2;
  uVar2 = func_0x0000ffff(0,0x7f81,0,0);
  *(undefined2 *)0x4f8 = uVar2;
  uVar2 = func_0x000007e6(0,0x7f00,0,0);
  *(undefined2 *)0x62c = uVar2;
  uVar2 = func_0x000007f7(0,0x7f01,0,0);
  *(undefined2 *)&SUB_0000_03da = uVar2;
  uVar2 = func_0x00000808(0,0x7f02,0,0);
  *(undefined2 *)0x48c = uVar2;
  uVar2 = func_0x00000819(0,0x7f03,0,0);
  *(undefined2 *)0x3b6 = uVar2;
  uVar2 = func_0x0000ffff(0,0x7f04,0,0);
  *(undefined2 *)0x5d8 = uVar2;
  uVar2 = func_0x0000083d(0,1,0,*(undefined2 *)0x3a0);
  *(undefined2 *)0x420 = uVar2;
  uVar2 = func_0x0000ffff(0,2,0,*(undefined2 *)0x3a0);
  *(undefined2 *)&SUB_0000_03dc = uVar2;
  return;
}

