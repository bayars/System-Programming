#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>




int main(int argc, char *argv[]){
	int fd = 0;
	char buff [2000];	

	if(argc != 2  ){
		printf("Yalnızca bir dosya oluşturabilirsiniz.");
	}

	sprintf(buff,"Bu satır benim işlemim tarafından yazıldı\n",2);
	fd = open(argv[1],O_WRONLY | O_CREAT | O_TRUNC,0644); 
	if(fd < 0){
		printf("Dosya hatası 1 !!");
		return -1;
	}


        int pisd = getpid();
	write(fd,buff,34);
	float ps = fd;
	close(fd);
        sprintf(buff,"İlk dosya %d, ikinci sayi %f \n",pisd,ps,2);

	fd = open(argv[1],O_WRONLY | O_APPEND ,0644);

	write(fd,buff,34);
	lseek(fd,SEEK_SET,1);


}
