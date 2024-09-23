 #include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
int main()
{
     pid_t  p=fork();
     int status=0;
     char *cmnd="ls";
     char *arg_list[]={"ls","-l",NULL};
     printf("Before execvp()\n");
     printf("creating another process using fork()\n");
     if(p==0)
     {
     printf("child process\n");
     status= execvp(cmnd,arg_list);
     if(status==-1)
     {
     printf("incorrect termination\n");
     exit(1);
     }
     }
     else{
     printf("parent process\n");
     printf("status: %d\n",status);
     wait(NULL);
     printf("now this line will be executed\n");
         }
}
