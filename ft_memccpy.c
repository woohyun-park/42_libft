/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woopark <woopark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 11:07:03 by woopark           #+#    #+#             */
/*   Updated: 2021/05/20 12:19:43 by woopark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*dst_new;
	const unsigned char	*src_new;
	size_t				i;

	dst_new = (unsigned char *)dst;
	src_new = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dst_new[i] = src_new[i];
		if (src_new[i] == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
