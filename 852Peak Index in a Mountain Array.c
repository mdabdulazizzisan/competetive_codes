#include <stdio.h>
int main(){
    int a[100000], length = 0;
    while(scanf("%d ",&a[length]) != EOF)
        length++;
    int startPoint = 0, endPoint = length - 1, middlePoint;

    while(startPoint + 1 != endPoint){
        middlePoint = (startPoint + endPoint) / 2;
        if(a[middlePoint] > a[middlePoint + 1]){
            endPoint = middlePoint;
        }
        else if(a[middlePoint] < a[middlePoint + 1])
            startPoint = middlePoint;
    }
    if(a[startPoint] > a[endPoint])
        printf("%d\n", a[startPoint]);
    else
        printf("%d\n", a[endPoint]);
    return 0;
}
