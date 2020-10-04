#include"ch2.h"
#include<errno.h>
#include<unstd.h>
int main()
{
	struct utsname uts;
	char hostname[MAXHOSTNAMELEN];
	size_t size=MAXHOSTNAMELEN;
	if(gethostname(hostname,size)!=0)
		err_exit("could not get hostname");
	printf("hostname=%s\n",hostname);
	if(uname(&uts<0)
		err_exit("could not get host infomation");
	printf("system is %s hardware\n",uts.sysname,uts.machine);
	printf("nodename is %s\n",uts.nodename);
	printf("release is %s,version is %s\n",uts.release,uta.version);
	exit(0);
}
