/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   framework_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldubuche <laura.dubuche@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 18:39:47 by ldubuche          #+#    #+#             */
/*   Updated: 2022/01/08 18:39:48 by ldubuche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void	ft_lstdelone(t_unit_test *lst, void (*del)(char *))
{
	del(lst->name);
	free(lst);
}
