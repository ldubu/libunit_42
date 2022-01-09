/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   one_nl.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldubuche <laura.dubuche@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:50:42 by ldubuche          #+#    #+#             */
/*   Updated: 2022/01/09 17:00:58 by ldubuche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../get_next_line.h"

int	test_compare(int fd, char *valeur_attendue); // ajouter header one nl dans .h

int	one_nl(void)
{
	int	res;
	int	fd;

	fd = open("Files/one_nl.txt", O_RDONLY);
	if (fd <= 0)
		write(1, "fail to open file\n", 19);
	res = test_compare(fd, "\n");
	if (res == -1)
		return (-1);
	res = test_compare(fd, NULL);
	if (res == -1)
		return (-1);
	return (0);
}
