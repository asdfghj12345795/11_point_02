#include <stdio.h>
#include <stdlib.h>

char *proverd = "All that glisters is not gold.";

void setPointer(char **q)
{
	*q= proverd;
}
int main (void)
{
 char *p ="zzz";
 setPointer(&p);
 printf("%s\n", p);
 
}
