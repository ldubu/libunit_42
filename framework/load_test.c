#include "../libft42/libft.h"
#include "framework.h"


void	load_test(t_unit_test **testlist, char *test_name,
	 int (*test_function)(void))
{
	t_unit_test	*test;

	test = (t_unit_test *) malloc (sizeof(t_unit_test)); 
	test->name = (char *) malloc(sizeof(char) * (ft_strlen(test_name) + 1));
	if (!test->name)
		return ;
	ft_strlcpy(test->name, test_name, ft_strlen(test_name)+1);
	test->f = test_function;
	test->next = NULL;
	ft_lstadd_back(testlist, test);
}