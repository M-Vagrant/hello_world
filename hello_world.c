
#include "unistd.h"
#include <stdio.h>

#define 	BUFFSIZE 4096

int main(void)
{

	int n;
	char buf[BUFFSIZE];

	printf("hello world!\n");

	//while((n = read(STDIN_FILENO,buf)) > 0)
	//{
	//	if(write(STDOUT_FILENO,buf,n) != n)
	//	{
			
	//	}
	//}

	printf("uid=%d,gid=%d\n",getuid(),getgid());
	printf("hello world!\n");

	return 0;
}
