#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>


int main(int argc,char * argv[]){

	struct stat FileStat;
	char buf[1000];
	if(argc != 2){
		printf("Hatali girdi sayisi");
	}
	int pis = getpid();
	int fd = open(argv[1], O_WRONLY | O_CREAT | O_TRUNC , 0644);
	int t = sprintf(buf,"Ilk yazi \n Process ID : %d \n",pis);
	write(fd,buf,t);
	close(fd);


	int fd1 = open(argv[1], O_WRONLY | O_APPEND);
	int t1 = sprintf(buf,"Tek Tek sayadim eklemeli");
	write(fd1,buf,t1);
	close(fd1);
	printf("%d\n",fd1);
	int fd2 = open(argv[1], O_RDONLY);
	read(fd2,buf,23);
	lseek(fd2,54,SEEK_SET);
	stat(argv[1],&FileStat);
	printf("INODE : %d\n",FileStat.st_ino);	
	printf("File Size: %d \n",FileStat.st_size);
	
}
