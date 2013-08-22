/***************************************************************************
 * ShutDown.c
 *
 * Routine to perform OS/2 system shutdown from command line.
 *
 * Written by Chip James, Data Systems Technology, Inc.
 *
 * DISCLAIMER: This program is released into the public domain.  Neither
 *             I nor DST assumes any responsibility what so ever for any
 *             results do to the use of this utility.
 ***************************************************************************/
#include <os2def.h>
#include <bsedos.h>     /*.. support for DosShutdown() .................*/
#include <conio.h>
#include <ctype.h>
#include <stdio.h>

void main(void)
  {
  unsigned short usrc;
  char ch;

  printf("\n\n\nAre you sure you want to perform shutdown? ");
  ch = (char)getche();
  ch = toupper(ch);

  if (ch == 'Y')
    {
    printf("\n\nShutdown is complete once drive access stops ...\n");
    if (DosShutdown(0l) != 0)   /* performs shutdown only, not reboot */
      {
      fprintf(stderr,"\n\nError <%u> performing shutdown.\n", usrc);
      }
    }
  return;
  }
/* eof: shutdown.c */
