/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delst.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldubuche <laura.dubuche@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 14:49:49 by ldubuche          #+#    #+#             */
/*   Updated: 2022/01/08 18:46:57 by ldubuche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft42/libft.h"
#include "framework.h"

void	ft_delst(char *temp)
{
	if (temp != NULL)
		free(temp);
	temp = NULL;
}
