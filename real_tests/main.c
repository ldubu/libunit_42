/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldubuche <laura.dubuche@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:44:27 by lberrada          #+#    #+#             */
/*   Updated: 2022/01/09 20:49:58 by ldubuche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gnl_tester/gnl_tester.h"

int	gnl_launcher(void);

int	main(void)
{
	int	retour;

	retour = gnl_launcher();
	return (retour);
}
