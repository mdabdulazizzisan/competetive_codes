#include <stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	for(int row = 0; row < n; row++){
		for(int col = 0; col < n; col++){
			if(col == row)
				printf("$ ");
			else if(col < row)
				printf("# ");
			else if(col > row)
				printf("@ ");
		}
		printf("\n");
	}
	return 0;
}
