#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <bsd/string.h>

#define TEST(x) printf("%s\n", ft_itoa(x));

int	main(void)
{
	TEST(0);
	TEST(1);
	TEST(5);
	TEST(42);
	TEST(203);
	TEST(679);
	TEST(-1);
	TEST(-5);
	TEST(-42);
	TEST(-203);
	TEST(-679);
	TEST(2147483647);
	TEST(-2147483648);
	return (0);
}
