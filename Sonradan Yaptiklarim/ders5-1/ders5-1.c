#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main(){
  umask(0);
  char buf[4096];

  int fd = open("safa.txt1", O_APPEND | O_RDWR, 0644);
  int psid = getpid();
  int t = sprintf(buf,"Merhaba secim aksami %d \n",psid);
  //fchmod(fd,0444);
  fchown(fd,0,0);
  link("./safa.txt1","./olsa.txt");
  write(fd,buf,t); 
  close(fd);

  return 0;
}
