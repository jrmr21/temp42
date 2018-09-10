
					#include <stdio.h>
					#include <stdlib.h>
					#include <string.h>

					#define TEST(EXP, RES) printf(#EXP " (" #RES " vs %d) -> %d\n", (EXP), ((EXP)) == (RES))
					#define TEST_STR(EXP, RES) printf(#EXP " (" #RES " vs \"%s\") -> %d\n", (EXP), strcmp(((EXP)), (RES)) == 0)

					int		ft_fibonacci(int index);;
				
int main()
{
printf("%d,%d,%d,%d, %d,%d,%d,%d, %d,%d,%d,%d",
	ft_fibonacci(0),
	ft_fibonacci(1),
	ft_fibonacci(2),
	ft_fibonacci(3),
	ft_fibonacci(4),
	ft_fibonacci(5),
	ft_fibonacci(6),
	ft_fibonacci(7),
	ft_fibonacci(8),
	ft_fibonacci(9),
	ft_fibonacci(10),
	ft_fibonacci(11));



return 0;
}
