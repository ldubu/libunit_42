/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldubuche <laura.dubuche@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 12:45:58 by ldubuche          #+#    #+#             */
/*   Updated: 2022/01/09 15:33:26 by ldubuche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int	buserror_launcher(void)
{
	t_unit_test	*testlist;

	load_test(&testlist, "Test BUSERROR", &test_buserror);
	launch_test(&testlist, "BUS_FONCTION");
	return (1);
}
