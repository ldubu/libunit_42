/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldubuche <laura.dubuche@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 11:20:26 by ldubuche          #+#    #+#             */
/*   Updated: 2022/01/09 15:29:46 by ldubuche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int	dumb_launcher(void)
{
	t_unit_test	*testlist;

	load_test(&testlist, "Test OK", &test_ok);
	load_test(&testlist, "Test KO", &test_ko);
	launch_test(&testlist, "DUMB_FUNCTION");
	return (1);
}
