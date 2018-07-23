#include <stdio.h>
#include <math.h>

int main () {

	//declare initial matrix
	int matrix1[2][2] = {
		{2, 3},
		{4,5}
	};

	//inteagers to print initial matrix
	int i;
	int j;	
	
	//Print original matrix
	printf("Initial Matrix: \n");
	for (i=0; i<2; i++){
		for (j=0; j<2; j++){
			printf("%d\n",matrix1[i][j]);
		}
		printf("\n");
	}
	
	//find determinant
	int a = matrix1[0][0];
	int b = matrix1[0][1];
	int c = matrix1[1][0];
	int d = matrix1[1][1];

	int denominator = a*d-b*c;
	signed double determinant = 1/denominator;
	printf("Determinant: %lf\n",determinant);

	return 0;

	//
}
# Practice-Stuff
