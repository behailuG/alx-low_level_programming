#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int last_digit=n % 10;
	if( last_digit > 0 )
		printf( last_digit + "\%s is positive\n");
	elsif( last_digit == 0 )
		printf( last_digit + "\%s is zero\n");
	else
		printf( last_digit _ "\%s is negative\n");
	return (0);
}
