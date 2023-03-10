#include <stdio.h>
int main()
{
int cents;
cents = atoi(argv[1]);
printf("%d", min(cents,0));
return 0;
}
