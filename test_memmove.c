#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <bsd/string.h>

int main()
{
	char s1[] = "12345";
	char *s2 = s1 + 2;

	ft_memmove(s2, NULL, 1);

	printf("%s\n", s1);
	printf("%s\n", s2);
}
