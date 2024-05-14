#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
int main(){
    char buf[100];
    while(1){
    write(1, "$ ", 2);
    memset(buf, 0, sizeof(buf));
    fgets(buf, 100, stdin);
    if (buf[0]==0){
        write(1, "exit\n", 5);
        exit(0);
    }
    printf("You entered: %s", buf);
    }
}
