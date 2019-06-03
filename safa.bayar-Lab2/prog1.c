#include <stdio.h>


int main(int argc, char *argv[]){
	int i = 0;
	if(argc != 5){
		printf("Tam 4 girdi vermelisiniz.\n");
		printf("Siz %d girdi verdiniz\n",argc-1);
		return -1;
	}
		for(i=1;i<=4;i++){
			printf("%d  girdi: %s\n",i,argv[i]);
}	
	return 0;
}
