/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_test_end_nl.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldubuche <laura.dubuche@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:50:42 by ldubuche          #+#    #+#             */
/*   Updated: 2022/01/09 17:38:19 by ldubuche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../get_next_line.h"

int	test_compare(int fd, char *valeur_attendue); // ajouter header basic test dans .h

int	basic_test(void)
{
	int	res;
	int	fd;

	fd = open("Files/basic_test_end_nl.txt", O_RDONLY);
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
