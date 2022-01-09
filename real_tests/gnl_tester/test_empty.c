/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_empty.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lberrada <lberrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:51:04 by lberrada          #+#    #+#             */
/*   Updated: 2022/01/09 17:41:05 by lberrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gnl_tester.h"

int	test_empty(void)
{
	int	res;
	int	fd;

	write(1, "Test empty file\n", 17);
	fd = open("Files/empty_line.txt", O_RDONLY);
	if (fd <= 0)
		write(1, "fail to open file\n", 19);
	printf("fd = %d\n", fd);
	res = test_compare(fd, NULL);
	return (res);
}
