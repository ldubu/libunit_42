/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   multiple_nl.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lberrada <lberrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:33:05 by ldubuche          #+#    #+#             */
/*   Updated: 2022/01/09 17:31:26 by lberrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gnl_tester.h"

int	multiple_nl(void)
{
	int	res;
	int	i;
	int	fd;

	fd = open("Files/multiple_nl.txt", O_RDONLY);
	if (fd <= 0)
		write(1, "fail to open file\n", 19);
	i = 0;
	while (i++ < 5)
	{
		res = test_compare(fd, "\n");
		if (res == -1)
			return (-1);
	}
	return (0);
}
