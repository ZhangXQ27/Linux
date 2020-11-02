#include "ch3.h"
int main(int argc,char* argv)
{
	int fd;
	fd=open("./test.txt",O_CREAT|O_WRONLY,0644);
	char b;
	printf("text first word!\n");
	b=getchar();
	write(fd,&b,1);
	sleep(10);
	lseek(fd,10,SEEK_SET);
	b=getchar();
	write(fd,&b,1);
	return 0;
}
