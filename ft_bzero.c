/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woopark <woopark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 14:55:28 by woopark           #+#    #+#             */
/*   Updated: 2021/05/20 11:50:12 by woopark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*s_new;
	size_t			i;

	s_new = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		s_new[i] = 0;
		i++;
	}
}
