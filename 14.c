#include <sys/types.h>
#include <sys/stat.h>
#include <stdint.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/sysmacros.h>
#include<fcntl.h>
#include <unistd.h>
int main(int argc, char*argv[]){
struct stat sd;
int fd=open(argv[1],O_RDONLY);

	if(fd==-1){
		printf("File does not exist");
		return 0;
		}

int val=stat(argv[1],&sd);

       if(val==-1){
		perror("error");
		}
		
      if (S_ISREG(sd.st_mode)) 
		printf("regular file\n");
           	
      else if (S_ISDIR(sd.st_mode)) 
		printf("directory file\n");
	           
      else if (S_ISCHR(sd.st_mode)) 
		printf("Character file\n");
           
      else if (S_ISBLK(sd.st_mode)) 
		printf("Block file\n");
           
      else if (S_ISFIFO(sd.st_mode)) 
		printf("FIFO(PIPE) file\n");
           
      else if (S_ISLNK(sd.st_mode)) 
		printf("Symbolic file\n");
	
      else if (S_ISSOCK(sd.st_mode)) 
		printf("Socket file\n");
      else{
      printf("unknown file");
      }
close(fd);

return 0;
}
