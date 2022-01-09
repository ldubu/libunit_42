/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_compare.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lberrada <lberrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 17:21:35 by lberrada          #+#    #+#             */
/*   Updated: 2022/01/09 18:05:07 by lberrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gnl_tester.h"

int	test_compare(int fd, char *valeur_attendue)
{
	char	*str;

	str = get_next_line(fd);
	if (valeur_attendue == NULL)
	{
		if (str == NULL)
			return (0);
		else
		{
			free(str);
			return (-1);
		}
	}
	if (ft_strncmp(valeur_attendue, str, ft_strlen(str)) == 0)
	{
		free(str);
		return (0);
	}
	else
	{
		free(str);
		return (-1);
	}
}
