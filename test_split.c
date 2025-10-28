#include "libft.h"
#include <stdio.h>

#define TEST_SPLIT(x, y)	s = ft_split(x, y);		\
					printf("TEST X: \"%s\"\n", x);	\
					printf("TEST Y: '%c'\n\n", y);	\
					while (*s)						\
					{								\
						printf("%s\n", *s);			\
						s++;						\
					}								\
					printf("%s\n---------------------\n", *s);

int	main(void)
{
	char	**s;

	TEST_SPLIT("----------", '-');
	TEST_SPLIT("lorem-ipsum-dolor-sit-amet,-consectetur-adipiscing-elit.-Sed-non-risus.-Suspendisse", '-');
	TEST_SPLIT("---lorem---ipsum dolor-----sit-amet,-consectetur---adipiscing elit.-Sed-non-risus.-Suspendisse---", '-');
	TEST_SPLIT("lorem-ipsum-dolor-sit-amet,-consectetur-adipiscing-elit.-Sed-non-risus.-Suspendisse-lectus-tortor,-dignissim-sit-amet,-adipiscing-nec,-ultricies-sed,-dolor.-Cras-elementum-ultricies-diam.-Maecenas-ligula-massa,-varius-a,-semper-congue,-euismodnon,-mi.", 'i');
	TEST_SPLIT("lorem-ipsum-dolor-sit-amet,-consectetur-adipiscing-elit.-Sed-non-risus.-Suspendisse-lectus-tortor,-dignissim-sit-amet,-adipiscing-nec,-ultricies-sed,-dolor.-Cras-elementum-ultricies-diam.-Maecenas-ligula-massa,-varius-a,-semper-congue,-euismodnon,-mi.", 'z');
	TEST_SPLIT("", 'z');
	return (0);
}
