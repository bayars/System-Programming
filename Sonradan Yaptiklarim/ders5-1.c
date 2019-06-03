#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main(){

  char buf[4096];

  int fd = open("safa.txt1",O_WRONLY | O_CREAT | O_TRUNC,0644
		sprintf(buf,"Merhaba secim aksami");
  write(fd,buf,t);
  close(fd);

  return 0;
}
