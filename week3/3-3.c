#include "ch2.h"

int main(int argc,char *argv[])
{
       FILE *fp;
       char buf[100];
       memset(buf,0,sizeof(buf));
       int ret;
       int num,i;
       if((fp=fopen("./test2.txt","w"))==NULL)
	  perror("open failed!\n");
      // ret = fgets(buf,sizeof(buf),stdin);
      for(i=1;i<argc;i++)
      {
      	buf[i]=argv[i];
      }
      ret=i;
       printf("content is %s\n",buf);
       num=fwrite(buf,1,sizeof(buf),fp);
       printf("totally write %d chars!\n",num);
       fclose(fp);
       return 0;
       

}
