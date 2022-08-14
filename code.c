// md abdul aziz zisan
// 14.08.2022

#include <stdio.h>
int main() {
      // URI 2753
      int i;
      for(i = 97; (char)i != 'z' + 1; i++)
          printf("%d e %c\n",i, (char)i);    
      return 0;
}
