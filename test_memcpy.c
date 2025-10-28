#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <bsd/string.h>

int main()
{
	char s1[] = "OlehBirukov";
	char *s2 = s1 + 2;

	// printf("%s\n", s1);
	// printf("%s\n", s2);

	ft_memcpy(s1, s2, 8);

	printf("%s\n", s1);
	printf("%s\n", s2);
}
