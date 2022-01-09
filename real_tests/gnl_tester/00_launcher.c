/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lberrada <lberrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 11:20:26 by ldubuche          #+#    #+#             */
/*   Updated: 2022/01/09 18:11:27 by lberrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gnl_tester.h"

int	gnl_launcher(void)
{
	t_unit_test	*testlist;

	load_test(&testlist, "Multiple lines", &multiple_lines);
	load_test(&testlist, "Caractere special", &special_line);
	load_test(&testlist, "Tres grande ligne", &big_line);
	load_test(&testlist, "Fichier vide", &test_empty);
	load_test(&testlist, "Premiere ligne vide", &test_first_empty);
	load_test(&testlist, "Multiples new lines", &multiple_nl);
	load_test(&testlist, "No new lines", &no_nl_line);
	load_test(&testlist, "One new line", &one_nl);
	load_test(&testlist, "Multiple call", &multiple_call);
	load_test(&testlist, "Basic test", &basic_test);
	load_test(&testlist, "Basic test end nl", &basic_test_end_nl);
	load_test(&testlist, "Test 0", &test_0);
	launch_test(&testlist, "GNL_FUNCTION");
	return (1);
}
int	test_0(void)