/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woopark <woopark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 12:44:36 by woopark           #+#    #+#             */
/*   Updated: 2021/05/04 19:24:25 by woopark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen((char *)s);
	while (i > 0)
	{
		if (s[i] == c)
			return ((char *)s + i);
		i--;
	}
	if (s[i] == c)
		return ((char *)s + i);
	return (NULL);
}
