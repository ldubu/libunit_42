/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldubuche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 10:37:02 by ldubuche          #+#    #+#             */
/*   Updated: 2021/11/23 10:37:21 by ldubuche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (!needle[0])
		return ((char *) haystack);
	while (i < len && haystack [i])
	{
		j = 0;
		if (haystack[i] == needle[0])
		{
			while (needle[j] && haystack[i + j] && needle[j] == haystack[i + j]
				&& i + j < len)
				j++;
			if (needle[j] == '\0')
				return ((char *) haystack + i);
		}
		i++;
	}
	return (NULL);
}
