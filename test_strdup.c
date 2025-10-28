#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <bsd/string.h>

int	main(void)
{
	char *str1 = "123";
	printf("%s\n", ft_strdup("yo whats up"));
	printf("%s\n", str1);
	str1 = ft_strdup("hey guys");
	printf("%s\n", str1);
	return (0);
}
