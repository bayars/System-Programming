#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#include <unistd.h>

void messages(int signum);

int main(){

  signal(SIGINT,messages);
  while(1){
    printf("bir saniyeligine uykuda\n");
    sleep(1);
  }
  return(2);
}

void messages(int signum){

  printf("%d sinyali yakalandi cikiliyor.");
  exit(0);

}
