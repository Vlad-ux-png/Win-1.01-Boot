// Function: FUN_2000_b313

undefined2 FUN_2000_b313(undefined1 *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  undefined2 uVar4;
  
  uVar4 = 0x1000;
  do {
    pcVar1 = param_2;
    cVar2 = func_0x000014b8(uVar4,*param_1,0);
    uVar4 = 0;
    cVar3 = func_0x0000ffff(0,*param_2,0);
    if (cVar3 != cVar2) {
      if (cVar3 == '\0') {
        uVar4 = 1;
      }
      else if (cVar3 < cVar2) {
        uVar4 = 2;
      }
      else {
LAB_2000_b37a:
        uVar4 = 3;
      }
      return uVar4;
    }
    param_2 = (char *)CONCAT22(param_2._2_2_,(char *)param_2 + 1);
    if (*pcVar1 == '\0') {
      if (cVar2 == '\0') {
        return 0;
      }
      goto LAB_2000_b37a;
    }
    param_1 = (undefined1 *)CONCAT22(param_1._2_2_,(undefined1 *)param_1 + 1);
  } while( true );
}

