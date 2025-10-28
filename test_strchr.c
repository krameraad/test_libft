#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <bsd/string.h>

int main()
{
	char *s = "hi guys";

	printf("%s", ft_strchr(s, 'g' + 256));
	return 0;
}
