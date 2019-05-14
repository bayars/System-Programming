#include <stdio.h>


int main(int argc,char * argv[]){


    char sesli[5] = {'a','e','i','u','o'};
    int temp=-1,c,i;
    char * buf[4096];

    if(argc != 2){
	printf("Hatalı girdi sayısı ve dosya ismi\n");
	return 0;
    }
    FILE * girdi = fopen(argv[1],"r");
    FILE * ciftolan = fopen("cift_satirlar.txt","w");
     
    while((c = getc(girdi)) != EOF){
	if(c == '\n'){
	    temp += 1;
	}
	    if(temp % 2 == 0){
		printf("%c",c);
		fputc(c,ciftolan);
	    }	
    }
    printf("\nSatır sayısı %d\n",temp);
    
    fclose(ciftolan);
    fclose(girdi);

    int c1 = 0;
    FILE * girdi1 = fopen(argv[1],"r");
    FILE * sesliolmayan = fopen("sesli_harfsiz.txt","w");
    while((c1 = getc(girdi1)) != EOF){
	
	if(c1 != 'a' & c1 != 'e' & c1 != 'i' & c1 != 'u' & c1 != 'o'){
		printf("%c",c1);
		putc(c1,sesliolmayan);
	}
	
    }

    fclose(sesliolmayan);
    fclose(girdi1);
   
     
    return 0;

}
