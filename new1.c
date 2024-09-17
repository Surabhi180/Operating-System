#include<stdio.h>
#include<unistd.h>
int main()
{
	char *cmnd="ls";
	char*arg_list[]={"ls","-l",NULL};
	printf("Before execvp()\n");
	int status= execvp(cmnd,arg_list);
	printf("Status: %d\n",status);
}
