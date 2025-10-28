#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <bsd/string.h>

void	test_tolower(unsigned int i, char *c)
{
	i = 0;
	if (*c >= 'A' && *c <= 'Z')
		*c += 32;
}

int main()
{
	char s[] = "HELLO! how are you";
	ft_striteri(s, test_tolower);
	printf("%s", s);
	return 0;
}
