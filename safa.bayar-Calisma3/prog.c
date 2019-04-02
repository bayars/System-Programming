/*
  
echo "Bu bir metin dosyasıdır. Benim tarafımdan\n yazılmıştır. \n" > safa

istatistik dosyasının içeriği =>

kelime sayısı 7 satır sayısı 1 

echo "Bu bir metin dosyasıdır. Benim tarafımdan\n yazılmıştır. \n" >> safa

istatistik dosyasının içeriği =>

kelime sayısı 14 satır sayısı 2 


*/


#include <stdio.h>

int main(int argc,char * argv[]){
	int kelime = 0;
	int c,satir;
	char buf[4096];
	if(argc != 2){
		printf("Hatalı girdi");
		return -1;
	}
	
	FILE * in = fopen(argv[1],"r");

	//fputs("Bu bir metin dosyasıdır. Benim tarafımdan \nyazılmıştır.\n",in);

	while((c = getc(in)) != EOF){
		
		if(c == ' '){
			kelime += 1;
		} 
	
		if(c == '\n'){
			satir += 1;
		}

	}
	
	FILE * in1 = fopen("istatistik.txt","w");
	
	int  kel = sprintf(buf,"kelime sayısı %d satır sayısı %d \n",kelime,satir);
	fputs(buf,in1);
	fclose(in1);
	fclose(in);
}

