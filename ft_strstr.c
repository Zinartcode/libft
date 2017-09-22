/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azinnatu <azinnatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/24 19:29:21 by azinnatu          #+#    #+#             */
/*   Updated: 2017/07/05 19:58:05 by azinnatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int l1;
	int l2;

	l1 = ft_strlen(big);
	l2 = ft_strlen(little);
	if (!l2)
		return (char *)big;
	while (l1 >= l2)
	{
		l1--;
		if (!ft_memcmp(big, little, l2))
			return (char *)big;
		big++;
	}
	return (0);
}
