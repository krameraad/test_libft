#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <bsd/string.h>

int main()
{
	char *s = "hi guys and gals";

	printf("%s", ft_strrchr(s, 'x'));
	return 0;
}
