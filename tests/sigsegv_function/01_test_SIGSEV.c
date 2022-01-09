#include "test_sigsegv.h"

int	test_sigsegv(void)
{
	char	*s1;
	
	s1 = dumb_function("bonjour");
	if (strcmp(s1, "bonjour") == 0)
		return (0);
	else
		return (-1);
}