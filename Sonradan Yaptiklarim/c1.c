#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

char buf[2323];

int main(){
 
sprintf("Hello World! ");
int fd = open("den1",O_CREATE | O_APPEND | O_FSYNC, 0644);
write(fd,buf);
close(fd);

return 0;

}

