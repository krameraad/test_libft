#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <bsd/string.h>

char	wackycase(unsigned int i, char c)
{
	if (i % 2)
	{
		if (c >= 'A' && c <= 'Z')
			c += 32;
		return (c);
	}
	else if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

int main()
{
	char *src1 = "HELLO! how are you, I'm doing fine actually. I was wondering when you were going to talk about that 'thing'. You know. That thing you were supposed to tell me.";
	char *src2 = "a";
	char *dst = ft_strmapi(src1, wackycase);

	printf("%s", dst);
	return 0;
}
