/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buserror.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldubuche <laura.dubuche@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 12:50:39 by ldubuche          #+#    #+#             */
/*   Updated: 2022/01/09 15:35:23 by ldubuche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_buserror(void)
{
	char	*cptr;
	int		*iptr;

	__asm__("pushf\norl $0x40000,(%rsp)\npopf");
	cptr = malloc(sizeof(int) + 1);
	iptr = (int *)++cptr;
	*iptr = 42;
	return (0);
}
