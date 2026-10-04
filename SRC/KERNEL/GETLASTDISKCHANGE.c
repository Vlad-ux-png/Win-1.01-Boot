// Function: GETLASTDISKCHANGE

undefined1 __cdecl16far GETLASTDISKCHANGE(void)

{
  undefined1 uVar1;
  
  uVar1 = DAT_1000_004e;
  LOCK();
  DAT_1000_004e = 0;
  UNLOCK();
  return uVar1;
}

