/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_test_OK.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldubuche <laura.dubuche@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 09:51:24 by ldubuche          #+#    #+#             */
/*   Updated: 2022/01/09 15:34:01 by ldubuche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int	test_ok(void)
{
	char	*s1;

	s1 = dumb_function("Bonjour\0", 8);
	if (strcmp(s1, "Bonjour") == 0)
		return (0);
	else
		return (-1);
}
