#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/** 
  * if the number is greater than 0: is positive
  * if the number is 0: is zero
  * if the number is less than 0: is negative
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

    if (n == 0) { 
        printf("is zero");
                }
        
    else if (n > 0) {
        printf(" is positive");
                    }
    else {
            printf("is negative");
            }
    
	return 0;
}