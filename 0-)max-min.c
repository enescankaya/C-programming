//
//  main.c
//  taking min max
//
//  Created by MacBook Pro on 7.12.2021.
//  Copyright © 2021 MacBook Pro. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    int a;
    int b;
    int max;//min de yazablirsin
    printf("d");
    scanf("%d",&a);
    scanf("%d",&b);
    max = (a > b) ? a : b ;//min yazarsan a < b olacak
    printf("%d\n",max);
    return 0;
}
