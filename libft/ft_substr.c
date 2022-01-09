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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_s;
	size_t	i;
	size_t	size;

	size = ft_strlen(s);
	if (size < start)
	{
		new_s = (char *) malloc(sizeof(char));
		if (!new_s)
			return (NULL);
		new_s[0] = '\0';
		return (new_s);
	}
	if (len > size - start)
		len = size - start + 1;
	new_s = malloc(sizeof(char) * (len + 1));
	if (!new_s)
		return (NULL);
	i = 0;
	while (s[start] && len-- > 0)
		new_s[i++] = s[start++];
	new_s[i] = '\0';
	return (new_s);
}
