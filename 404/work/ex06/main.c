
					#include <stdio.h>
					#include <stdlib.h>
					#include <string.h>

					#define TEST(EXP, RES) printf(#EXP " (" #RES " vs %d) -> %d\n", (EXP), ((EXP)) == (RES))
					#define TEST_STR(EXP, RES) printf(#EXP " (" #RES " vs \"%s\") -> %d\n", (EXP), strcmp(((EXP)), (RES)) == 0)

					int		ft_is_prime(int nb);;
				
int main()
{
int res, exp;
res = ft_is_prime(4), exp = 0;
printf("prime 4? (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_is_prime(2), exp = 1;
printf("prime 2? (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_is_prime(1), exp = 0;
printf("prime 1? (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_is_prime(0), exp = 0;
printf("prime 0? (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_is_prime(7), exp = 1;
printf("prime 7? (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_is_prime(23), exp = 1;
printf("prime 23? (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_is_prime(-5), exp = 0;
printf("prime -5? (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_is_prime(61), exp = 1;
printf("prime 61? (%d vs %d) -> %d\n", res, exp, res == exp);



return 0;
}
