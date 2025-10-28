#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <bsd/string.h>

char	test_tolower(unsigned int i, char c)
{
	i = 0;
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

int main()
{
	printf("%s", ft_strmapi("HELLO! how are you", test_tolower));
	return 0;
}
