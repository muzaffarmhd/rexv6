#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
int forke(void){
    int pid = fork();
    if (pid<0){
        fprintf(stdout, "There was an error");
    }
    return pid;
}
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
        if (buf[0]=='c' && buf[1]=='d'){
            buf[strlen(buf)-1]=0;
            if (chdir(buf+3)<0){
                fprintf(stdout,"Cannot cd into %s\n",buf+3);
            }
        }
        if (forke()==0){
            buf[strlen(buf)-1]=0;
            printf("I assure you i'll run your command %s but i'll quit for now\n", buf);
            exit(0);
        } 
        wait(0);
    }
}


