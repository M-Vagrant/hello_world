
#include "unistd.h"
#include <stdio.h>

#define 	BUFFSIZE 4096

int main(void)
{

	int n;
	char buf[BUFFSIZE];

	printf("hello world!\n");
	
	print ("leaning git is happy\n");

	printf("uid=%d,gid=%d\n",getuid(),getgid());
	printf("hello world!\n");

	return 0;
}
