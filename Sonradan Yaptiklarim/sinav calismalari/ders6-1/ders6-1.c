#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
// ### Ders icin kutuphaneler
#include <utime.h>
#include <dirent.h>
#include <string.h>

int main(){

  if(utime("safa.txt1",NULL) == -1){
    printf("hata var");
  }
  /*if(mkdir("temel",0544) == -1){
    printf("Dizin acmak hatali");
    }*/
  /* ### Dizin silmek icin ##
  if(rmdir("temel") == -1){
    printf("Dizin bos olmayabilir veya iznin yok\n");
    }*/

  //### Dizin islemleri ####
  
  struct dirent *dp;
  DIR *dr = opendir("temel");
  char *file_name;
  
  while((dp=readdir(dr)) != NULL){
    if ( !strcmp(dp->d_name, ".") || !strcmp(dp->d_name, "..") ){
      //Hic bir sey yapma
      } else {
      file_name = dp->d_name;
      printf("file_name: \"%s\"\n",file_name);
    }
  }

  closedir(dr);
  /* Temel dizininin icine iki tane dosya olsturdum. */
  /* Dizin islemlerinin bitisi ve slayt sonu */
  return 0;
}
