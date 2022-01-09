/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldubuche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 10:37:02 by ldubuche          #+#    #+#             */
/*   Updated: 2021/11/23 11:26:50 by ldubuche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*scpy;
	int		size;
	int		i;

	i = 0;
	size = ft_strlen(s);
	scpy = (char *) malloc(sizeof(char) * (size +1));
	if (!scpy)
		return (NULL);
	while (s[i])
	{
		scpy[i] = f(i, s[i]);
		i++;
	}
	scpy[i] = '\0';
	return (scpy);
}
