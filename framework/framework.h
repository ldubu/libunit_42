#ifndef FRAMEWORK_H
# define FRAMEWORK_H

# include <unistd.h>
# include <signal.h>
# include <stdio.h>

typedef struct unit_test
{
	char				*name;
	int					(*f)(void);
	struct unit_test	*next;
}	t_unit_test;


void	load_test(t_unit_test **testlist, char *test_name,
	 int (*test_function)(void));
void	ft_lstadd_back(t_unit_test **alst, t_unit_test *new);
t_unit_test	*ft_lstlast(t_unit_test *lst);

#endif