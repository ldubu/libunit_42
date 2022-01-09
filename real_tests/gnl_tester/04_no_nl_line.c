/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_no_nl_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldubuche <laura.dubuche@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:50:42 by ldubuche          #+#    #+#             */
/*   Updated: 2022/01/09 19:57:28 by ldubuche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gnl_tester.h"

int	no_nl_line(void)
{
	int	res;
	int	fd;

	fd = open(PATH_NAME"no_nl_line.txt", O_RDONLY);
	if (fd <= 0)
		write(1, "fail to open file\n", 19);
	res = test_compare(fd, "At suscipit aperiam et cupiditate dolores aut quam \
odit non numquam nulla ut nesciunt omnis est placeat provident.");
	if (res == -1)
		return (-1);
	return (0);
}
