/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldubuche <laura.dubuche@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 18:16:54 by ldubuche          #+#    #+#             */
/*   Updated: 2022/01/09 15:45:41 by ldubuche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "framework.h"

int	launch_test(t_unit_test **testlist, char *function_name)
{
	int		a;
	pid_t	c_pid;
	int		test_success;
	int		test_nbr;

	a = -1;
	test_nbr = 0;
	test_success = 0;
	while (*testlist)
	{
		test_nbr++;
		c_pid = fork();
		if (c_pid == 0)
		{
			if ((*testlist)->f() == -1)
				exit(1);
			exit((*testlist)->f());
		}
		else
		{
			wait(&a);
			test_success += ft_output(testlist, read_signal(a), function_name);
		}
	}
	return (ft_affiche(test_success, test_nbr));
}

int	ft_affiche(int success, int nbr)
{
	ft_putstr_fd("\n", 1);
	ft_putnbr_fd(success, 1);
	ft_putstr_fd("/", 1);
	ft_putnbr_fd(nbr, 1);
	ft_putstr_fd(" test succeed\n\n", 1);
	if (nbr - success == 0)
		return (0);
	else
		return (-1);
}
