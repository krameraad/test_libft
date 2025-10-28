#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <bsd/string.h>

int main()
{
	printf("%s\n", (char *)ft_memchr("hi how are you", 'a', 0));
	printf("%s", (char *)memchr("hi how are you", 'a', 0));

	int tab[7] = {-49, 49, 1, -1, 0, -2, 2};
	printf("%s", (char *)memchr(tab, -1, 7));

	// printf("%s", (char *)ft_memchr(str, 'o', 3));
	return (0);
}
