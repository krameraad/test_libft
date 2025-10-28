#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <bsd/string.h>

#define TEST(x, y) printf("%s\n", ft_strjoin(x, y));

int	main(void)
{
	TEST("hello", "hey");
	TEST("hey", "hello");
	TEST("", "hello");
	TEST("hello", "");
	TEST("", "");
	TEST(NULL, "");
	TEST("", NULL);
	TEST(NULL, NULL);
	return (0);
}
