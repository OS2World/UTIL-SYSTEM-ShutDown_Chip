shutdown.exe :  shutdown.obj shutdown.mak shutdown.l 
                LINK @shutdown.L

shutdown.obj: shutdown.c 
   cl -c -Alfu -Zp -W3 -FPa -G2s -Gm  -Zi -Od shutdown.obj shutdown.c


