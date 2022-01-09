/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_one_nl.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldubuche <laura.dubuche@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:50:42 by ldubuche          #+#    #+#             */
/*   Updated: 2022/01/09 20:00:59 by ldubuche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gnl_tester.h"

int	one_nl(void)
{	
	int	res;
	int	fd;

	fd = open(PATH_NAME"one_nl.txt", O_RDONLY);
	if (fd <= 0)
		write(1, "fail to open file\n", 19);
	res = test_compare(fd, "\n");
	if (res == -1)
		return (-1);
	close(fd);
	return (0);
}
