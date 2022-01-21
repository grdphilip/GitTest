#include <stdio.h>

int main(void){
    printf("Hello world ");

    int x = 10;
    int y = 20;

    float z = (float) x / (float) y;
    printf("%.50f\n", z);

    if (y<x) {
        printf("x is less than y\n");
    }
    else {
        printf("x is not less than y");
    }

}

 