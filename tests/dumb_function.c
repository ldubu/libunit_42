/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dumb_function.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldubuche <laura.dubuche@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 09:45:28 by ldubuche          #+#    #+#             */
/*   Updated: 2022/01/09 10:38:37 by ldubuche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dumb_function.h"

char	*dumb_function(char *str)
{
	char 	*s;
	int 	i;

	s = "Bonjour";
	while (*str)
	{
		if (s[i] != *str)
			s[i] = *str;
		i++;
		str++;
	}
	return (s);
}