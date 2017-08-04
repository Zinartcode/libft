/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azinnatu <azinnatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/18 20:33:10 by azinnatu          #+#    #+#             */
/*   Updated: 2017/07/02 15:25:37 by azinnatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n)
{
	char	*str;
	size_t	len;

	len = ft_lenght(n);
	str = (char *)malloc((len + 1) * sizeof(*str));
	if (!str)
		return (NULL);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	str[len] = '\0';
	while (n >= 10)
	{
		str[len - 1] = (n % 10) + '0';
		n /= 10;
		len--;
	}
	str[len - 1] = n + '0';
	return (str);
}
