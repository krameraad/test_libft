#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <bsd/string.h>

#define YELLOW "\e[33m"
#define GREEN "\e[32m"
#define RED "\e[31m"
#define DEFAULT "\e[39m"

#define NORMAL "\e[0m"
#define BOLD "\e[1m"
#define DIM "\e[2m"
#define HEADER "\e[94m\e[1;4m"

#define TEST(x) \
result = ft_atoi(x); \
expected = atoi(x); \
printf(NORMAL "input:\t\t%s\n", x); \
if (result == expected) printf(GREEN);
else printf(RED);
printf(BOLD "result:\t%d\n", result); \
printf(DIM "expected:\t%d\n", expected); \
printf(DEFAULT "\n");
void test_atoi()
{
	int	result;
	int	expected;

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
}
#undef TEST

int	main(void)
{
	test_atoi();
	return (0);
}