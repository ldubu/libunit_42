/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   09_special_line.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldubuche <laura.dubuche@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:36:29 by lberrada          #+#    #+#             */
/*   Updated: 2022/01/09 20:58:40 by ldubuche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gnl_tester.h"

int	special_line(void)
{
	int	res;
	int	fd;

	fd = open(PATH_NAME"special_line.txt", O_RDONLY);
	if (fd <= 0)
		write(1, "fail to open file\n", 19);
	res = test_compare(fd, "\\");
	if (res == -1)
		return (-1);
	close(fd);
	return (res);
}
