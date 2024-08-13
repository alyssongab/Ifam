#include <stdio.h>

int main() {
	
	int mat[6][6];
	
	for(int i = 0; i < 6; i++) {
		
		for(int j = 0; j < 6; j++) {
			
			if(i == 0 || i == 5) {
				mat[i][j] = 1;
			}
			if (i > 0 && i < 5) {
				if (j == 0 || j == 5) {
				mat[i][j] = 1;
				}
				else if(j > 0 && j < 5) {
					
				}
			}
		}
	}
	
	return 0;
}

1 1 1 1 1 1
1 2 2 2 2 1
1 2 3 3 2 1
1 2 3 3 2 1
1 2 2 2 2 1
1 1 1 1 1 1 