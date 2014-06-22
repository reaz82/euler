/* Problem 1 on Project Euler */

#include <stdio.h>

int main(void) {
	int i; 
	int sum;
	int multiple;
	int target;
	target = 200000;
	multiple = 0;
	sum = 0;
	i = 0;
	do { /* first time around i = sum = multiple = 0 */
		sum = sum + multiple;
		i = i + 1; 
		multiple = i * 3;
		/*printf("Multiple: %d, Running Sum: %d\n", multiple, sum);*/
	} while (multiple < target); 
	
	multiple = 0; 
	i = 1;
	do { /* first time around i = multiple = 0 */
		sum = sum + multiple;  
		do {
			multiple = i * 5;
			i = i + 1;
		} while (multiple % 3 == 0);
		/*printf("Multiple: %d, Running Sum: %d\n", multiple, sum);*/
	} while (multiple < target);
	printf("Sum = %d\n", sum);
	return 0;
}
