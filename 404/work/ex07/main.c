
					#include <stdio.h>
					#include <stdlib.h>
					#include <string.h>

					#define TEST(EXP, RES) printf(#EXP " (" #RES " vs %d) -> %d\n", (EXP), ((EXP)) == (RES))
					#define TEST_STR(EXP, RES) printf(#EXP " (" #RES " vs \"%s\") -> %d\n", (EXP), strcmp(((EXP)), (RES)) == 0)

					int		ft_find_next_prime(int nb);;
				
int main()
{
int res, exp;
res = ft_find_next_prime(-1), exp = 2;
printf("next(-1) (2 vs %d) -> %d\n", res, res == exp);
res = ft_find_next_prime(-2), exp = 2;
printf("next(-2) (2 vs %d) -> %d\n", res, res == exp);
res = ft_find_next_prime(0), exp = 2;
printf("next(0) (2 vs %d) -> %d\n", res, res == exp);
res = ft_find_next_prime(1), exp = 2;
printf("next(1) (2 vs %d) -> %d\n", res, res == exp);
res = ft_find_next_prime(14), exp = 17;
printf("next(14) (17 vs %d) -> %d\n", res, res == exp);
res = ft_find_next_prime(2), exp = 2;
printf("next(2) (2 vs %d) -> %d\n", res, res == exp);
res = ft_find_next_prime(20), exp = 23;
printf("next(20) (23 vs %d) -> %d\n", res, res == exp);
res = ft_find_next_prime(3), exp = 3;
printf("next(3) (3 vs %d) -> %d\n", res, res == exp);
res = ft_find_next_prime(4), exp = 5;
printf("next(4) (5 vs %d) -> %d\n", res, res == exp);
res = ft_find_next_prime(5), exp = 5;
printf("next(5) (5 vs %d) -> %d\n", res, res == exp);
res = ft_find_next_prime(6), exp = 7;
printf("next(6) (7 vs %d) -> %d\n", res, res == exp);
res = ft_find_next_prime(8), exp = 11;
printf("next(8) (11 vs %d) -> %d\n", res, res == exp);



return 0;
}
