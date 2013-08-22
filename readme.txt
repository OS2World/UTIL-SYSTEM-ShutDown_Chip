
DISCLAIMER:
  This program is released into the public domain.  Neither
  I nor DST assumes any responsibility what so ever for any
  results do to the use of this utility.

  It may distributed freely as long as the READ.ME file is
  included.

ZIP FILE CONTENTS:

  This zip file contains three files:

    READ.ME      - This document.
    SHUTDOWN.C   - Source file.
    SHUTDOWN.EXE - OS/2 Executable.

DESCRIPTION:
  SHUTDOWN.EXE is a routine written to perform OS/2 system shutdown from
  the command line.  It simply prompts the operator to confirm that a shutdown
  should be performed and then executes a system shutdown.

  All screen I/O is done via stdin/stdout/stderr so that it can be redirected
  for use in command files.

  Returns "0" if successful, "1" otherwise.

OTHER:
  SHUTDOWN.EXE was compiled using IBMC2 compiler and requires the OS/2 toolkit.
  The make and link files are included.

  It was written by Chip James (71610, 706).
