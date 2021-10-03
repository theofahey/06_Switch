//
//  arraytest.c
//  Systems
//
//  Created by Theodore Fahey on 10/2/21.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "arraytest.h"
int main(){
    int a[10];
    a[0] = 0.3;
    int i;
    srand(time(NULL));
    printf("First array: \n");
    for (i = 1; i < 10; i++){
        int x = rand();
        a[i] = x;
    }
    for (i = 0; i < 10; i++){
        printf("%d \n", a[i]);
    }
    int b[10];
    int *a1 = &a;
    int *b1 = &b;
    for (i = 0; i < 10; i++){
        *(b1 +i ) = *(a1+9-i);
    }
    printf("Second Array: \n");
    for (i = 0; i < 10; i++){
        printf("%d \n", b[i]);
    }
}
