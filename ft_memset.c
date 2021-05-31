/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woopark <woopark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 14:55:12 by woopark           #+#    #+#             */
/*   Updated: 2021/05/20 11:49:55 by woopark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*b_new;
	size_t			i;

	b_new = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		b_new[i] = c;
		i++;
	}
	return (b);
}
