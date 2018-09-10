
					#include <stdio.h>
					#include <stdlib.h>
					#include <string.h>

					#define TEST(EXP, RES) printf(#EXP " (" #RES " vs %d) -> %d\n", (EXP), ((EXP)) == (RES))
					#define TEST_STR(EXP, RES) printf(#EXP " (" #RES " vs \"%s\") -> %d\n", (EXP), strcmp(((EXP)), (RES)) == 0)

					int		ft_sqrt(int nb);;
				
int main()
{
int res, exp;
res = ft_sqrt(4), exp = 2;
printf("root 4 (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_sqrt(1), exp = 1;
printf("root 1 (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_sqrt(0), exp = 0;
printf("root 0 (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_sqrt(3), exp = 0;
printf("root 3 (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_sqrt(9), exp = 3;
printf("root 9 (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_sqrt(16), exp = 4;
printf("root 16 (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_sqrt(-5), exp = 0;
printf("root -5 (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_sqrt(144), exp = 12;
printf("root 144 (%d vs %d) -> %d\n", res, exp, res == exp);



return 0;
}
