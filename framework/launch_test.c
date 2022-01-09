/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldubuche <laura.dubuche@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 18:16:54 by ldubuche          #+#    #+#             */
/*   Updated: 2022/01/09 10:25:22 by ldubuche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "framework.h"

int	launch_test(t_unit_test **testlist, char *function_name)
{
	int		a;
	pid_t	c_pid;
	int		result;

	a = -1;
	while (*testlist)
	{
		c_pid = fork();
		if (c_pid == -1)
		{
			perror("fork");
			exit(EXIT_FAILURE);
		}
		if (c_pid == 0)
		{
			if ((*testlist)->f() == -1)
				exit(1);
			exit((*testlist)->f());
		}
		else
		{
			wait(&a);
			result = read_signal(a);
			ft_output(testlist, result, function_name);
			wait(NULL);
		}
	}
	exit(EXIT_SUCCESS);
}
