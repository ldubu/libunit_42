/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_test_KO.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldubuche <laura.dubuche@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 10:18:56 by ldubuche          #+#    #+#             */
/*   Updated: 2022/01/09 10:36:54 by ldubuche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dumb_function.h"

int	test_ko(void)
{
	char	*s1;
	
	s1 = dumb_function("Bonjo");
	if (strcmp(s1, "Bonjo") == 0)
		return (0);
	else
		return (-1);
}