/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sigsegv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldubuche <laura.dubuche@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 10:41:52 by ldubuche          #+#    #+#             */
/*   Updated: 2022/01/09 15:24:20 by ldubuche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testeur.h"

char	*ft_sigsegv(char *str)
{
	char	*s;
	int		i;

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
