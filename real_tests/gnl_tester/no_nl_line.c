/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   no_nl_line.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lberrada <lberrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:50:42 by ldubuche          #+#    #+#             */
/*   Updated: 2022/01/09 17:26:33 by lberrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gnl_tester.h"

int	no_nl_line(void)
{
	int	res;
	int	fd;

	fd = open("Files/no_nl_line.txt", O_RDONLY);
	if (fd <= 0)
		write(1, "fail to open file\n", 19);
	res = test_compare(fd, "At suscipit aperiam et cupiditate dolores aut quam \
	 odit non numquam nulla ut nesciunt omnis est placeat provident.");
	if (res == -1)
		return (-1);
	res = test_compare(fd, NULL);
	if (res == -1)
		return (-1);
	return (0);
}
