/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   15_fichier_sh.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldubuche <laura.dubuche@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:50:42 by ldubuche          #+#    #+#             */
/*   Updated: 2022/01/09 20:55:24 by ldubuche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gnl_tester.h"

int	fichier_sh(void)
{	
	int	res;
	int	fd;

	fd = open(PATH_NAME"ls.sh", O_RDONLY);
	if (fd <= 0)
		write(1, "fail to open file\n", 19);
	res = test_compare(fd, "ls -a -l *");
	if (res == -1)
		return (-1);
	return (0);
}
