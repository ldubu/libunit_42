/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldubuche <laura.dubuche@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 10:43:44 by ldubuche          #+#    #+#             */
/*   Updated: 2022/01/09 10:44:25 by ldubuche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/framework.h"
#include "../../libft42/libft.h"
#include "test_sigsegv.h"
int ft_strlen_launcher(void)
{
	t_unit_test	*testlist;

	load_test(&testlist, "Test SIGSEGV", &ft_sigsegv);
	launch_test(&testlist, "STRLEN");
	return(1);
}
