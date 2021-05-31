/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woopark <woopark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 15:41:22 by woopark           #+#    #+#             */
/*   Updated: 2021/05/06 16:46:38 by woopark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dst_new;
	const unsigned char *src_new;
	size_t				i;

	if (dst == src || len == 0)
		return (dst);
	dst_new = (unsigned char *)dst;
	src_new = (const unsigned char *)src;
	i = 0;
	if (dst < src)
		while (i < len)
		{
			dst_new[i] = src_new[i];
			i++;
		}
	else
		while (i < len)
		{
			dst_new[len - i - 1] = src_new[len - i - 1];
			i++;
		}
	return (dst);
}
