#include<sys/types.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
printf("Before fork()\n");
pid_t p=fork();
if(p<0)
{
printf("fork failed\n");
exit(1);
}
printf("Hello all! process_id(pid)=%d\n",getpid());
printf("done\n");
}
