/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azinnatu <azinnatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/24 22:56:59 by azinnatu          #+#    #+#             */
/*   Updated: 2017/07/05 20:04:08 by azinnatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *lit, size_t len)
{
	size_t	len2;

	len2 = ft_strlen(lit);
	if (!len2)
		return (char *)big;
	while (*big != '\0' && len >= len2)
	{
		if (!ft_memcmp(big, lit, len2))
			return (char *)big;
		big++;
		len--;
	}
	return (NULL);
}
