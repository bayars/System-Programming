#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
	fork();
	fork();
	fork();

	printf("Merhaba dunya\n");
	
	return 0;
}