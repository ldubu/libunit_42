/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_test_KO.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldubuche <laura.dubuche@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 10:18:56 by ldubuche          #+#    #+#             */
/*   Updated: 2022/01/09 15:30:02 by ldubuche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int	test_ko(void)
{
	char	*s1;

	s1 = dumb_function("Bonjour je suis Sam", 8);
	if (strcmp(s1, "Bonjour") == 0)
		return (0);
	else
		return (-1);
}
