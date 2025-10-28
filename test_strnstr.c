#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <bsd/string.h>

int	main(void)
{
	char	*s1;

	s1 = "012345";
	printf("libc:\n");
	printf("%s\n", strnstr(s1, "01", 1));
	printf("%s\n", strnstr(s1, "234", 4));
	printf("%s\n", strnstr(s1, "456", 7));
	printf("%s\n", strnstr(s1, "", 0));

	printf("\nlibft:\n");
	printf("%s\n", ft_strnstr(s1, "01", 1));
	printf("%s\n", ft_strnstr(s1, "234", 4));
	printf("%s\n", ft_strnstr(s1, "456", 7));
	printf("%s\n", ft_strnstr(s1, "", 0));
	return (0);
}
