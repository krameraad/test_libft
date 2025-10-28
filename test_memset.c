#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <bsd/string.h>

int main()
{
	char str[] = "Hello, world!";
	int arr[] = {1, 2, 3, 4, 5};

	ft_memset(str + 3, '0', 5);
	printf("%s", str);

	return 0;
}
