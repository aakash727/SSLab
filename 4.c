       #include <sys/types.h>
       #include <sys/stat.h>
       #include <fcntl.h>
       #include<stdio.h>
	int main(){
       int fd= open("3.c", O_RDWR|O_CREAT|O_EXCL);
       if(fd==-1)
       printf("file not created\n");
       
       else 
       printf("fd of file is %d \n" ,fd);
	}
