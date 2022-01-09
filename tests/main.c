/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldubuche <laura.dubuche@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 11:38:42 by ldubuche          #+#    #+#             */
/*   Updated: 2022/01/09 15:34:42 by ldubuche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testeur.h"

int	main(void)
{
	dumb_launcher();
	sigsegv_launcher();
	buserror_launcher();
	return (0);
}
