/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   11_test_0.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldubuche <laura.dubuche@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:50:42 by ldubuche          #+#    #+#             */
/*   Updated: 2022/01/09 20:04:09 by ldubuche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gnl_tester.h"

int	test_0(void)
{
	int	res;
	int	fd;

	fd = open(PATH_NAME"test_0.txt", O_RDONLY);
	if (fd <= 0)
		write(1, "fail to open file\n", 19);
	res = test_compare(fd, "\\0");
	if (res == -1)
		return (-1);
	close(fd);
	return (0);
}
