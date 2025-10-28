#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <bsd/string.h>

int main()
{
	char *s = ft_calloc(4, 1);
	strcpy(s, "123");
	printf("%s\n", s);

	// int *arr = ft_calloc(3, sizeof(int));
	// arr[0] = 1;
	// arr[1] = 1;
	// printf("%d %d %d", arr[0], arr[1], arr[2]);
}
