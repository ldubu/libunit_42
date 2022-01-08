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

static int	ft_isin(char c, const char *set)
{
	while (*set)
		if (*set++ == c)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_s;
	int		size;
	int		i;

	i = 0;
	size = ft_strlen(s1);
	size--;
	while (size > 0 && ft_isin(s1[size], set))
		size--;
	size++;
	while (*s1 && size > 0 && ft_isin(*s1++, set))
		size--;
	new_s = (char *) malloc(sizeof(char) * (size + 1));
	if (!new_s)
		return (NULL);
	s1--;
	while (size-- > 0)
		new_s[i++] = *s1++;
	new_s[i] = '\0';
	return (new_s);
}
