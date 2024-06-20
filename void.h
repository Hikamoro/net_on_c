#include <stdio.h>

void f(int len1){
        for (int i = 0;i<len1;i++){
            if (i == 0){
                printf("#");
            }else if(i == len1-1){
                printf(" #");
            }else{
                printf("  ");
            }
        }
    }