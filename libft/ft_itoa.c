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

static long long	ft_charnum(unsigned int n, int *i)
{
	long long	d;

	d = 1;
	while (n / d > 9)
	{
		*i = *i + 1;
		d *= 10;
	}
	return (d);
}

char	*ft_itoa(int n)
{
	int				i;
	long long		d;
	int				sign;
	char			*s;
	unsigned int	num;

	i = 0;
	sign = 0;
	if (n < 0 && sign++ >= 0)
		num = -n;
	else
		num = n;
	d = ft_charnum(num, &i);
	s = (char *) malloc(sizeof(char) * (i + sign + 2));
	if (s == NULL)
		return (s);
	if (sign == 1)
		s[0] = '-';
	while (d > 0)
	{
		s[sign++] = ((num % (d * 10)) / d) + 48;
		d /= 10;
	}
	s[sign] = '\0';
	return (s);
}
