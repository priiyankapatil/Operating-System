#include<stdio.h>
#include<unistd.h>
void main()
{
char *cmnd="ls";
char *arg_list[]={"ls","-l",NULL};
printf("before execvp()\n");
int status=execvp(cmnd,arg_list);
printf("status:%d\n",status);
}
