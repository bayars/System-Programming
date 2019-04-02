#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>


int main(){
  char buf[4096]
  FILE * fd = fopen("safa","w");
  int z = sprintf(buf,"Merhaba ben safa");
  fputs(buf,fd);		/* Satir satir yazdirmak icin kullaniliyor */
  fgets(buf,)
  fclose(fd);

  


}
