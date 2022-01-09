/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   multiple_nl.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldubuche <laura.dubuche@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:33:05 by ldubuche          #+#    #+#             */
/*   Updated: 2022/01/09 16:45:03 by ldubuche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../get_next_line.h"
int test_compare(int fd, char *valeur_attendue); // ajouter header test_compare et multiple nl dans .h
int	multiple_nl(void)
{
	int res;
	int	i;

	write(1, "Test empty file\n", 17);
	int   	 fd = open("Files/multiple_nl.txt", O_RDONLY);
	if (fd <= 0)
		write(1, "fail to open file\n", 19);
	printf("fd = %d\n", fd);
	i = 0;
	while (i++ < 5)
	{
		res = test_compare(fd, "\n");
		if (res == -1)
			return (-1);
	}
	return (0);
}