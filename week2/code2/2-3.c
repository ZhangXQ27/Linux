#include"ch2.h"
int main()
{
	int ret;
	char buf[101]={'\0'};
	int fd ;
	fd=open("./test.data",O_CREAT|O_TRUNC|O_RDWR,0644);
	printf("new file description is %d\n",fd);
       	printf("%d:2-2 is running!\n",getpid());
	printf("2-2 is running!\n");
	ret=write(1,"hello World!\n",13);
	printf("ret =%d\n",ret);

	sleep(10);
	printf("please input data <=100:\n");
	fgets(buf,100,stdin);
	ret=write(fd,buf,sizeof(buf));
	exit(0);
		
}
