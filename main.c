#include <stdio.h>
#include "hello.h"

int main(int argc, char** argv){

    int life = hello();
    printf("\nHello world: %d\n", life);
    
    return 0;
}