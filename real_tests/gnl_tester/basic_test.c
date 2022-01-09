/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lberrada <lberrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:50:42 by ldubuche          #+#    #+#             */
/*   Updated: 2022/01/09 18:10:20 by lberrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gnl_tester.h"

int	basic_test(void)
{
	int	res;
	int	fd;

	fd = open("Files/basic_test.txt", O_RDONLY);
	if (fd <= 0)
		write(1, "fail to open file\n", 19);
	res = test_compare(fd, "Bonjour,\n");
	if (res == -1)
		return (-1);
	res = test_compare(fd, "Je test un gnl\n");
	if (res == -1)
		return (-1);
	res = test_compare(fd, "En revoir.\n");
	if (res == -1)
		return (-1);
	res = test_compare(fd, NULL);
	if (res == -1)
		return (-1);
	return (0);
}
