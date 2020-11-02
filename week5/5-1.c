#include "ch5.h"

int main(void)
{
	
	char a[BUFSIZ];
	setvbuf(stdout,a,_IONBF,100);
	printf("Hello World");
	while(1);
	return 0;
}
