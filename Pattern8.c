#include <stdio.h>  
  
int main(void) {  
  int n,m;  
  scanf("%d",&n);  
  m=n;  
  for(int i=1;i<=m;i++)  
  {  
    for(int j=1;j<=m;j++)  
    {  
       if(i==j || j==(m-i+1))  
       {
       	 if(i == (n+1)/2 && j == (n+1)/2)
       	 	printf("?");
       	 else  
         	printf("@");  
       }  
       else  
       {  
         printf(" ");  
       }  
    }  
    printf("\n");  
  }  
  return 0;  
} 
