#include <stdio.h>
int main(){
    int n = 5;
    for(int r = 0; r < n; r++){
        for(int c = 0; c < n-r; c++){
            printf(" ");
        }
        for(int c = 0; c <= (2*r); c++){
            printf("*");
        }
        printf("\n");
    }
    for(int r = n; r >= 0; r--){
        for(int c = 0; c < n-r; c++){
            printf(" ");
        }
        for(int c = 0; c <= (2*r); c++){
            printf("*");
        }
        printf("\n");
    }
}
