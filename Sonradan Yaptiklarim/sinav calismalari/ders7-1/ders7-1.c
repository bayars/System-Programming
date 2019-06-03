#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>


int main(){
  char buf[4096];
  int c;
  
  FILE * fd = fopen("safa","w");
  int z = sprintf(buf,"Merhaba ben safa");
  fputs(buf,fd);		/* Satir satir yazdirmak icin kullaniliyor */
  fclose(fd);

  /* Yazdirma islemi sonrasinda okuma islemi yapilacak. */

  FILE * tl = fopen("safa","r");
  /* while((c = getc(tl)) != EOF){ */
  /*   printf("%d ",c);		/\* Boyle bir kullanim durumunda harflerin ASCII kodlarini bastirmaktadir *\/ */
  /* } */
  /* printf("\n"); */
  while((c = getc(tl)) != EOF){
    printf("%c",c);		/* Bu durumda da dosya icinde ki gibi bastirmaktadir. */
  }
  fclose(tl);

}
