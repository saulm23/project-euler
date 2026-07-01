#include <stdio.h>

int main()
{
	long long sum  = 0;
	for (long i = 1; i <= 510000; i = i + 2)
	{
		//printf("%lld\n", i * i);
		sum = sum + (i * i);
	}
	printf("%lld\n", sum);
	return 0;
}
