#include "ch3.h"
int main(int argc,char **argv)
{
	int n,from,to;
	char buf[1024];
	if(argc !=3) {
		printf("usage : %s from- file to-file\n",argv[0]);
		exit(1);
	}
	if((from = open (argv[1],O_RDONLY))<0)
		exit (1);

	if((to = open(argv[2], O_WRONLY|O_CREAT|O_APPEND,0644))<0)
		exit(1);
	while((n = read(from,buf,sizeof(buf)))>0)
		write(to,buf,n);
	close(from);
	close(to);
}
