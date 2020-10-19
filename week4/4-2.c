#include "ch3.h"
int main(void)
{
	char buf1[]="abcdefghij";
	char buf2[]="0123456789";
	int fd;
	if((fd =open("file.hole",O_WRONLY|O_CREAT|O_APPEND,0644))<0)
		exit(1);
	if (write(fd,buf1,10)!=10)
		(1);
	if(lseek(fd,40,SEEK_SET)==-1)
		exit(1);
	if(write(fd,buf2,10)!=10)
		exit(1);
	exit(0);

}
