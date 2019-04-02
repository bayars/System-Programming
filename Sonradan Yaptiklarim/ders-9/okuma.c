#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>


int main(int argc,char * argv[]){

  char buf[4096];
  int c,po=0,z=0;
  FILE * op = fopen(argv[1],"r");

  while((c = getc(op)) != EOF){
    printf("%c",c);

    if(c == ' '){
      po += 1;
    }
    z += 1;
  }
  printf("\nKelime saysisi %d\n",po+1);
  printf("Harf sayisi %d\n",z);
  fclose(op);
}
