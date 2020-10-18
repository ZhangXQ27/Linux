#include "ch2.h"

int main(int argc,char *argv[])
{
       FILE *fp;
       int fd;
      // char buf[100];
      // memset(buf,0,sizeof(buf));
       int ret;
       int num=0,i;
       fd=open("./test3.txt",O_RDWR);
      // ret = fgets(buf,sizeof(buf),stdin);
      fp=fdopen(fd,"w+");
      fprintf(fp,"test data is %s\n","hello world!");
       fclose(fp);
       return 0;
       

}
