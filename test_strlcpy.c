#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <bsd/string.h>

int main(void)
{
	char	str_a[] = "1";
	char	str_b[] = "hello";

	printf("%lu\n", strlcpy(str_a, str_b, 1));
	printf("%s", str_a);

	return (0);
}
