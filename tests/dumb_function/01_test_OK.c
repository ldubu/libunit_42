/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_test_OK.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldubuche <laura.dubuche@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 09:51:24 by ldubuche          #+#    #+#             */
/*   Updated: 2022/01/09 10:37:05 by ldubuche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dumb_function.h"

int	test_ok(void)
{
	char	*s1;
	
	s1 = dumb_function("Bonjour");
	if (strcmp(s1, "Bonjour"))
		return (0);
	else
		return (-1);
}