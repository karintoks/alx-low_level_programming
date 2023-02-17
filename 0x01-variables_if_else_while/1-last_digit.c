#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - style
*Return: 0 success
*/
int main(void)
{
int n, lastsd;
srand(time(0));
n = rand() - RAND_MAX / 2;
lastsd = n % 10;
if (lastsd > 5)
{
printf("last digit of %d is %d and is greater than 5\n", n, lastsd);
}
else if (lastsd == 0)
{
printf("last digit of %d is %d and is 0\n", n, lastsd);
}
else if (lastsd < 6 && lastsd != 0)
{
printf("last digit of %d is %d and is less than 6 and not 0\n", n, lastsd);
}
return (0);
}
