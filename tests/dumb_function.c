/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dumb_function.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldubuche <laura.dubuche@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 09:45:28 by ldubuche          #+#    #+#             */
/*   Updated: 2022/01/09 15:24:30 by ldubuche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testeur.h"

char	*dumb_function(char *str, int len)
{
	char	*s;
	int		i;

	s = (char *) malloc(sizeof(char) * len);
	i = 0;
	while (*str)
		s[i++] = *str++;
	return (s);
}
