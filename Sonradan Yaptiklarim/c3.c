#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>


int main(){

  int ppid,status;
  if(ppid = fork()){
    printf("Hatasiz bir fork islemi\n");
    printf("benim pid'im : %d . Parent pid'i %d\n",getpid(),getppid());
    /* Burada kendi pid'si islemin olusturuldugu process id'si dir. Parent pid ise bash kabugunun pid'si dir.  */


    if(ppid == 0){
      printf("Cocuk process (Child process) pid : %d\n",getpid());
      kill(getpid(),SIGINT);
    }else{
      printf("parent PID : %d . ppid degiskeni : %d\n",getppid(),ppid);
      wait(&status);
      printf("%s%s%s\n", WIFCONTINUED(status) ? " CONTINUED" : "", WIFSIGNALED(status) ? " SIGNALED" : "", WIFSTOPPED(status) ? " STOPPED" : "");
    }
  }

}
