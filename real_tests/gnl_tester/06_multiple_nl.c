/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_multiple_nl.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldubuche <laura.dubuche@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:33:05 by ldubuche          #+#    #+#             */
/*   Updated: 2022/01/09 20:01:43 by ldubuche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gnl_tester.h"

int	multiple_nl(void)
{
	int	res;
	int	i;
	int	fd;

	fd = open(PATH_NAME"multiple_nl.txt", O_RDONLY);
	if (fd <= 0)
		write(1, "fail to open file\n", 19);
	i = 0;
	while (i++ < 4)
	{
		res = test_compare(fd, "\n");
		if (res == -1)
			return (-1);
	}
	close(fd);
	return (0);
}
