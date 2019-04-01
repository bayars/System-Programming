#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main(){
  umask(0);
  char buf[4096];

  int fd = open("safa.txt1", O_CREAT | O_RDWR, 0644);
  int psid = getpid();
  int t = sprintf(buf,"Merhaba secim aksami %d \n",psid);
  //fchmod(fd,0444);
  fchown(fd,0,0);
  
  write(fd,buf,t); 
  close(fd);
  /*  ### HARD LINK OLUSTURMAK ICIN ###
  if((link("./safa.txt1","./olsa.txt1")) == -1){
    printf("Hatali link olusturma");
  }

  if(unlink("olsa.txt1") == -1){
    printf("Hatali link silme");
  }
  if(unlink("olsa.txt1") == -1){
    printf("Hatali link silme");
  }
  */

  /* ### DOSYA VEYA DIZIN SILMEK ICIN ###
  remove("./olsa.txt");
  */
  return 0;
}
