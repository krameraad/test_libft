#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <bsd/string.h>

#define TEST(x, y, z) printf("%s\n", ft_substr(x, y, z));

int	main(void)
{
	TEST("12345678", 0, 50);
	TEST("12345678", 2, 50);
	TEST("12345678", 0, 5);
	TEST("12345678", 2, 5);
	TEST("12345678", 2, 0);
	TEST("12345678", 50, 50);
	return (0);
}
