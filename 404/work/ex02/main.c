
					#include <stdio.h>
					#include <stdlib.h>
					#include <string.h>

					#define TEST(EXP, RES) printf(#EXP " (" #RES " vs %d) -> %d\n", (EXP), ((EXP)) == (RES))
					#define TEST_STR(EXP, RES) printf(#EXP " (" #RES " vs \"%s\") -> %d\n", (EXP), strcmp(((EXP)), (RES)) == 0)

					int		ft_iterative_power(int nb, int power);;
				
int main()
{
int res, exp;
res = ft_iterative_power(2, 2), exp = 4;
printf("2^2 (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_iterative_power(2, 1), exp = 2;
printf("2^1 (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_iterative_power(2, 0), exp = 1;
printf("2^0 (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_iterative_power(2, -1), exp = 0;
printf("2^-1 (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_iterative_power(2, 4), exp = 16;
printf("2^4 (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_iterative_power(5, 3), exp = 125;
printf("5^3 (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_iterative_power(3, 5), exp = 243;
printf("3^5 (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_iterative_power(2, 1000000), exp = -1;
printf("2^1000000 (%d vs %d) -> %d\n", res, exp, 1);



return 0;
}
