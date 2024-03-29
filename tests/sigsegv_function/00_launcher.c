/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldubuche <laura.dubuche@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 10:43:44 by ldubuche          #+#    #+#             */
/*   Updated: 2022/01/09 15:28:13 by ldubuche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int	sigsegv_launcher(void)
{
	t_unit_test	*testlist;

	load_test(&testlist, "Test SIGSEGV", &test_sigsegv);
	launch_test(&testlist, "SIGSEGV function");
	return (1);
}
