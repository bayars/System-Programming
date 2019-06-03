#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc,char * argv[]){

  /* int t = 20; */
  /* printf(" %o ",t); */
  char buf[4096];

  FILE * fl = fopen(argv[1],"w");
  int t = sprintf(buf,"Temel denizi tek");
  fputs(buf,fl);
  
  fclose(fl);
}
