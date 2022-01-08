#include "framework.h"

void	ft_lstadd_back(t_unit_test **alst, t_unit_test *new)
{
	t_unit_test	*temp;

	temp = NULL;
	temp = (t_unit_test *) ft_lstlast(*alst);
	if (temp)
		temp->next = new;
	else
		*alst = new;
}

t_unit_test	*ft_lstlast(t_unit_test *lst)
{
	if (lst)
		while (lst->next)
			lst = lst->next;
	return (lst);
}
