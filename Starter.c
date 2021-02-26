#include <stdlib.h>
#include <stdio.h>
#include "Executor.h"

int main(int argc, const char* argv[]){
    //Error check if user does not enter an initial seed #
    if(argc != 2){
        printf("wrong # of args \n");
        exit(0);
    }
    int seed = atoi(argv[1]);                           //user entered, determines the random numbers
    srand(seed);
    printf("With seed: %d\n", seed);                    //prints seed
    double running_ratio = get_running_ratio();         //gets running ratio from Executor.c
    printf("Running ratio: %f\n", running_ratio);       //prints running ratio
}
