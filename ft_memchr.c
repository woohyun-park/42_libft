/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woopark <woopark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 11:24:34 by woopark           #+#    #+#             */
/*   Updated: 2021/05/20 14:22:37 by woopark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char		*s_new;
	unsigned char			c_new;
	size_t					i;

	s_new = (const unsigned char *)s;
	c_new = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (s_new[i] == c_new)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}
