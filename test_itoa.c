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
#define TEST(x, y) printf(NORMAL "input:\t\t%d\n", x); \
printf(BOLD "got:\t\t%s\n", ft_itoa(x)); \
printf(DIM "expected:\t%s\n", y); \
printf("\n");

int	main(void)
{
	printf(HEADER "## ft_itoa\n\n");
	TEST(0, "0");
	TEST(1, "1");
	TEST(5, "5");
	TEST(42, "42");
	TEST(203, "203");
	TEST(679, "679");
	TEST(-1, "-1");
	TEST(-5, "-5");
	TEST(-42, "-42");
	TEST(-203, "-203");
	TEST(-679, "-679");
	TEST(2147483647, "2147483647");
	TEST((-__INT_MAX__ - 1), "-2147483648");
	return (0);
}
