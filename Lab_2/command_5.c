#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    if (argc <= 1){
        perror("Error: no arguments\n");
        exit(EXIT_FAILURE);
    }

    for(int i=0; i<argc; i++){
        if(argv[i][0] == '-'){
            printf("%s\n", argv[i]);
        }
    }
    return 0;

}