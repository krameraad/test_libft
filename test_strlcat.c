#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <bsd/string.h>

#define YELLOW "\e[33m"
#define DEFAULT "\e[39m"

#define NORMAL "\e[0m"
#define BOLD "\e[1m"
#define DIM "\e[2m"
#define HEADER "\e[94m\e[1;4m"
#define TEST(x, y, z) printf(NORMAL "input:\t\t\"%s\", \"%s\", %zu\n", x, y, z); \
strlcpy(str2, x, z); \
printf(BOLD "got:\t\t%zu\n", ft_strlcat(str2, y, z)); \
printf(NORMAL YELLOW "str: \"%s\"\n" DEFAULT, str2); \
strlcpy(str1, x, z); \
printf(DIM "expected:\t%zu\n", strlcat(str1, y, z)); \
printf(NORMAL YELLOW "str: \"%s\"\n" DEFAULT, str1); \
printf("\n");

int	main(void)
{
	char	str1[100];
	char	str2[100];

	printf(HEADER "## ft_strlcat\n\n");

	TEST("lorem", "ipsum", 50UL);
	TEST("lorem", "ipsum", 3UL);
	TEST("lorem", "ipsum", 8UL);
	TEST("lorem", "", 50UL);
	TEST("", "", 50UL);
	return (0);
}
