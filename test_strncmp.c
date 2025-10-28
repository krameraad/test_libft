#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <bsd/string.h>

int main()
{
	// char *a = "200";
	// char *b = "0";
	// printf("%d\n", ft_strncmp())
	printf("%d", ft_strncmp("test\200", "test\0", 6));
	return 0;
}
