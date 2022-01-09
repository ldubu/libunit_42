/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07_test_first_empty.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldubuche <laura.dubuche@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:52:43 by lberrada          #+#    #+#             */
/*   Updated: 2022/01/09 20:59:47 by ldubuche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gnl_tester.h"

int	test_first_empty(void)
{
	int	res;
	int	fd;

	fd = open(PATH_NAME"first_empty_line.txt", O_RDONLY);
	if (fd <= 0)
		write(1, "fail to open file\n", 18);
	res = test_compare(fd, "\n");
	if (res == -1)
		return (-1);
	res = test_compare(fd, "Qu'est-ce que le Lorem Ipsum?\n");
	if (res == -1)
		return (-1);
	close(fd);
	return (res);
}
