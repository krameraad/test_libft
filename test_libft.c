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
#define BOLD_UNDERLINE "\e[1;4m"

#define START_TESTS(x) \
printf(HEADER x "\n\n"); \
unsigned char	tests = 0; \
unsigned char	tests_complete = 0; \
int				result; \
int				expected;

#define FINISH_TESTS \
printf(NORMAL); \
if (tests == tests_complete) printf(GREEN); \
else printf(RED); \
printf(BOLD_UNDERLINE "completion:\t%d/%d", tests_complete, tests);

#define TEST(x) \
tests++; \
result = ft_atoi(x); \
expected = atoi(x); \
printf(NORMAL "input:\t\t\"%s\"\n", x); \
if (result == expected) printf(GREEN), tests_complete++; \
else printf(RED); \
printf(BOLD "result:\t\t%d\n", result); \
printf(DIM "expected:\t%d\n", expected); \
printf(DEFAULT "\n");
void test_atoi()
{
	START_TESTS("ft_atoi");

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
	TEST(" -999999999999  ");
	TEST(" 99999999999");

	FINISH_TESTS;
}
#undef TEST

int	main(void)
{
	test_atoi();
	return (0);
}