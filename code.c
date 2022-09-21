#include <stdio.h>
int main(){
    int n;
    printf("input the numbers of elements to enter in the array: ");
    scanf("%d", &n);
    int a[n];
    printf("input %d number of elements in the array: \n", n);
    for(int i = 0; i < n; i++){
        printf("\t element[%d]= ", i);
       scanf("%d", &a[i]);
    }

    printf("the values int the array are: ");
    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\nThe values in the reverse order: ");
    for(int i = n-1; i >= 0; i--){
        printf("%d ", a[i]);
    }
    printf("\n");
}
