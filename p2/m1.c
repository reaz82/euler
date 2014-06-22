/* Problem 2 on Project Euler */

# include <stdio.h> 

int main (void) {
	int y_0;
	int x_m1;
	int x_m2;
	int sum;
	
	sum = 0;
	y_0 = 0; 
	x_m1 = 1;
	x_m2 = 0;
	
	while ( y_0 < 4000000 ) {
		y_0 = x_m1 + x_m2;
		x_m2 = x_m1;
		x_m1 = y_0;
		if (y_0 % 2 == 0) {
			sum = sum + y_0;
		}
	}
	printf("\n Sum: %d ", sum);
	return 0;
}
