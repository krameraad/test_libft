#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <bsd/string.h>

#define NORMAL "\e[0m"
#define BOLD "\e[1m"
#define DIM "\e[2m"
#define HEADER "\e[94m\e[4m"
#define TEST(x) printf(NORMAL "input:\t\t%s\n", x); \
printf(BOLD "got:\t\t%d\n", ft_atoi(x)); \
printf(DIM "expected:\t%d\n", atoi(x)); \
printf("\n");

int	main(void)
{
	printf(HEADER "## ft_atoi\n\n");
	TEST("0");
	TEST("1");
	TEST("b 5");
	TEST("   42   ");
	TEST(" 20-3  ");
	TEST("+679");
	TEST("-1");
	TEST("-+5");
	TEST("+-42");
	TEST("-2a03");
	TEST("-679");
	TEST(" \t2147483647");
	TEST("\f-2147483648  ");
	TEST(" -2147483648  ");
	TEST(" -9999999999  ");
	TEST(" 99999999999");
	return (0);
}