/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_test_SIGSEGV.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldubuche <laura.dubuche@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 11:31:31 by ldubuche          #+#    #+#             */
/*   Updated: 2022/01/09 15:29:16 by ldubuche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int	test_sigsegv(void)
{
	char	*s1;

	s1 = ft_sigsegv("bonjour");
	if (strcmp(s1, "bonjour") == 0)
		return (0);
	else
		return (-1);
}
