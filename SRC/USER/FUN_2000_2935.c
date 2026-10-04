// Function: FUN_2000_2935

int FUN_2000_2935(int *param_1,uint param_2,int param_3,undefined2 param_4)

{
  undefined2 uVar1;
  byte bVar2;
  char cVar3;
  undefined2 uVar4;
  int iVar5;
  int *piVar6;
  char cVar7;
  byte bVar8;
  undefined2 unaff_DS;
  undefined2 uVar9;
  
  if (*(int *)0x1be != 0) {
    return 0;
  }
  *(undefined2 *)0x78 = param_4;
  *(int *)0x7a = param_3;
  if (param_2 == 0) {
    param_2 = CONCAT11(*(undefined1 *)0x46c,*(undefined1 *)&SUB_0000_046a);
  }
  if (*(int *)0x518 <= param_3) {
    bVar2 = (byte)(param_2 >> 9);
    iVar5 = CONCAT11((char)((uint)param_3 >> 8) - ((byte)param_3 < bVar2),(byte)param_3 - bVar2);
    if (*(int *)0x518 <= iVar5) {
      uVar4 = func_0x00000be5(0x1000,*(undefined2 *)0x7a,*(undefined2 *)0x78);
      *(undefined2 *)0x618 = uVar4;
      iVar5 = func_0x0000ffff(0,uVar4);
      if (iVar5 != 0) {
        return 0;
      }
      return 1;
    }
    *(int *)0x7a = iVar5;
  }
  uVar4 = *(undefined2 *)0x7a;
  uVar1 = *(undefined2 *)0x78;
  *(undefined2 *)0x600 = 0;
  uVar9 = 0;
  piVar6 = (int *)func_0x0000ffff(0x1000,0,0,uVar1,uVar4,param_2 >> 1);
  *(undefined2 *)0x5e4 = piVar6;
  if (piVar6 == (int *)0x0) {
    return 3;
  }
  *(uint *)0x600 = (uint)*(byte *)(piVar6 + 0x1c);
  bVar2 = (byte)*(undefined2 *)0x7a;
  bVar8 = (byte)((uint)uVar9 >> 8);
  cVar3 = (char)((uint)*(undefined2 *)0x7a >> 8);
  if (CONCAT11(cVar3 - (bVar2 < bVar8),bVar2 - bVar8) < piVar6[0x10]) {
    uVar4 = FUN_2000_2c14();
    uVar4 = func_0x000009ee(0,piVar6,uVar4);
    cVar7 = '\0';
    *(undefined2 *)0x5e4 = uVar4;
  }
  else {
    cVar7 = '\x01';
    if (CONCAT11(cVar3 + CARRY1(bVar2,bVar8),bVar2 + bVar8) < piVar6[0x12]) {
      cVar7 = '\x02';
      bVar2 = (byte)*(undefined2 *)0x78;
      bVar8 = (byte)uVar9;
      cVar3 = (char)((uint)*(undefined2 *)0x78 >> 8);
      if (CONCAT11(cVar3 - (bVar2 < bVar8),bVar2 - bVar8) < piVar6[0xf]) {
        iVar5 = *(int *)0x600;
      }
      else {
        cVar7 = '\x03';
        if (CONCAT11(cVar3 + CARRY1(bVar2,bVar8),bVar2 + bVar8) < piVar6[0x11]) {
          cVar7 = '\x04';
          if ((*(byte *)((int)piVar6 + 0x33) & 8) != 0) {
            *(undefined2 *)0x5e4 = 0;
            return 0;
          }
          goto LAB_2000_2a3d;
        }
        iVar5 = *(int *)0x600 + 1;
      }
      *(int *)0x600 = -(iVar5 + 1);
    }
  }
LAB_2000_2a3d:
  iVar5 = FUN_2000_2adb();
  if (iVar5 == 0) {
    return 0;
  }
  if (param_1 == (int *)0x0) {
    return iVar5;
  }
  if ((*(byte *)((int)param_1 + 0x33) & 0x20) != 0) {
    return iVar5;
  }
  if (cVar7 < '\x02') {
    if (piVar6 != param_1) {
      if (cVar7 == '\0') {
        if ((piVar6 == (int *)0x0) || (piVar6 != (int *)*param_1)) {
          return 3;
        }
      }
      else if (param_1 != (int *)*piVar6) {
        return 3;
      }
    }
  }
  else if (cVar7 == '\x04') {
    if (piVar6 != param_1) {
      return 4;
    }
  }
  else {
    cVar3 = (char)param_1[0x1c];
    iVar5 = FUN_2000_2c14();
    if (*(char *)0x5e2 != *(char *)0x51c) {
      if (*(char *)(iVar5 + 10) != '\x01') {
LAB_2000_2ab7:
        *(undefined2 *)0x5e4 = 0;
        return 2;
      }
      if (param_1 != piVar6) {
        if (cVar7 == '\x02') {
          cVar3 = cVar3 + '\x02';
        }
        if ((char)(cVar3 + -1) != (char)piVar6[0x1c]) goto LAB_2000_2ab7;
      }
    }
  }
  return 0;
}

