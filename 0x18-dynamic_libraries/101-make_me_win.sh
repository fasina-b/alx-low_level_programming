#!/bin/bash
echo -e '#include <stdlib.h>\nint rand(void) { return 6; }' > /tmp/hack.c
gcc -Wall -shared -fPIC -o /tmp/hack.so /tmp/hack.c
export LD_PRELOAD=/tmp/hack.so
