#include <stdio.h>
#include "lists.h"

/**
 * pre_main - function to be executed before main
 */
void __attribute__((constructor)) pre_main(void)
{
printf(
"You're beat! and yet, you must allow,\nI bore my house upon my back!\n"
);
}
