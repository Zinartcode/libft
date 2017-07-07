/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azinnatu <azinnatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/21 19:30:47 by azinnatu          #+#    #+#             */
/*   Updated: 2017/06/21 19:33:02 by azinnatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memalloc(size_t size)
{
	void *mem;

	mem = malloc(size);
	if (!mem)
		return (NULL);
	ft_memset(mem, 0, size);
	return (mem);
}
