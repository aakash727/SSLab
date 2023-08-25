#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include<stdio.h>
int main()
{
       int fd= creat("Sample_file_for_Prog3.txt", 0666);
       if(fd==-1){
       printf("File not created");
       }
       else
       printf("file discriptor is %d\n",fd);

return 0;
}
