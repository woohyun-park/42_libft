/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woopark <woopark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 15:15:01 by woopark           #+#    #+#             */
/*   Updated: 2021/05/20 12:15:01 by woopark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*dst_new;
	const unsigned char *src_new;
	size_t				i;

	dst_new = (unsigned char *)dst;
	src_new = (const unsigned char *)src;
	if (dst == 0 && src == 0)
		return (dst);
	i = 0;
	while (i < n)
	{
		dst_new[i] = src_new[i];
		i++;
	}
	return (dst);
}
