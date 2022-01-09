/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_output.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldubuche <laura.dubuche@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 18:43:17 by ldubuche          #+#    #+#             */
/*   Updated: 2022/01/09 15:05:29 by ldubuche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft42/libft.h"
#include "framework.h"

int	ft_output(t_unit_test **testlist, int result, char *function_test)
{
	char		*status;
	t_unit_test	*temp;

	if (result == 0)
		status = "OK";
	else if (result == 1)
		status = "KO";
	else if (result == 7)
		status = "SIGBUS";
	else if (result == 11)
		status = "SIGSEGV";
	ft_putstr_fd(function_test, 1);
	ft_putstr_fd(": ", 1);
	ft_putstr_fd((*testlist)->name, 1);
	ft_putstr_fd(" : [", 1);
	ft_putstr_fd(status, 1);
	ft_putstr_fd("]\n", 1);
	temp = *testlist;
	*testlist = (*testlist)->next;
	ft_lstdelone(temp, &ft_delst);
	if (result == 0)
		return (1);
	else
		return (0);
}
