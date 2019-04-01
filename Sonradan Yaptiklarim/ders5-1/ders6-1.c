#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

// ### Ders icin kutuphaneler
#include <utime.h>


int main(){

  if(utime("safa.txt1",NULL) == -1){
    printf("hata var");
  }
  if(mkdir("temel",0544) == -1){
    printf("Hatali bir sonuc");
  }
}
