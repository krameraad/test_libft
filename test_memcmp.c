#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <bsd/string.h>

int main()
{
	char s1[] = {0, 0, 127, 0};
	char s2[] = {0, 0, 42, 0};

	printf("%d", ft_memcmp(s1, s2, 4));
	return 0;
}
