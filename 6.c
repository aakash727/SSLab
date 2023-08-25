#include<stdio.h>
#include <unistd.h>
int main() {
    char buffer[100];
    int count = 0;
    int bytes_read;
 printf("If 1st character is 'X', Program will halt");
 printf("\n");
 fflush(stdout);
    while ((bytes_read=read(STDIN_FILENO, buffer, sizeof(buffer))) > 0) {
            if (buffer[0] == 'X') {
                printf("Encountered 'X' at 0th index. Stopping...\n");
                break;  
            }
            printf("Output is:-  ");
            fflush(stdout);
            count=count+bytes_read-1;
            write(STDOUT_FILENO, buffer,bytes_read);
    }
     // Print the total count of input characters
    printf("Total count of input characters: %d\n", count);

    return 0;
}


