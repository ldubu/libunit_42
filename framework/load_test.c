/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldubuche <laura.dubuche@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 18:44:34 by ldubuche          #+#    #+#             */
/*   Updated: 2022/01/09 21:05:33 by ldubuche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
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
