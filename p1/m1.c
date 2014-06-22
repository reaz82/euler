/* Problem 1 on Project Euler */

#include <stdio.h>

int main(void) {
	int i; 
	int sum;
	int target;
	target = 200000;
	sum = 0; 
	for (i=0; i < target; i=i+1) {
		if ((i%3 == 0) || (i%5 == 0)) {
			sum = sum + i;
			/*printf("Number: %d\tRunning Sum: %d\n",i , sum);*/
		}
	}
	printf("Sum = %d\n", sum);
	return 0;
}
