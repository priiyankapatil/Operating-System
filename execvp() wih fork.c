#include<stdio.h>
#include<unistd.h>
int main()
{
 char *cmnd="ls";
 char *arg_lists[]={"ls","-l",NULL};
 printf("before execvp()\n");
 printf("creating the another process using fork()\n");
 pid_t status=0;
 pid_t p=fork();
 if(p==0)
 {
  printf("child process\n");
  status=execvp(cmnd,arg_lists);
   if(status==-1)
  {
      printf("incorrect termination:\n");
}
}
  else
 {
   printf("parent process\n");
   printf("status:%d\n",status);
   printf("now this part will  get executed\n");
}
}
