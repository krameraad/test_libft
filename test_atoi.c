#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <bsd/string.h>

int main()
{
	char *s = "  +123 ";
	int n1;
	int n2;

	n1 = atoi(s);
	n2 = ft_atoi(s);

	printf("%d\n", n1);
	printf("%d", n2);
	return (0);
}
