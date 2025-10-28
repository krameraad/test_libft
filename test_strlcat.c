#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <bsd/string.h>

int	main(void)
{
	char	dest[] = "rrrrrr\0\0\0\0a\0\0a\0";

	// dest = (char *)malloc(sizeof(*dest) * 15);
	// ft_memset(dest, 0, 15);
	// ft_memset(dest, 'r', 6);
	// dest[11] = 'a';
	// dest[0] = '\0';
	// dest[11] = 'a';
	// dest[14] = 'a';
	printf("%s\n", dest);
	printf("%zu\n", ft_strlcat(dest, "lorem ipsum dolor sit amet", 15));
	printf("%s\n", dest);
	return (0);
}
