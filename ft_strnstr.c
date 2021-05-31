/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woopark <woopark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 12:53:17 by woopark           #+#    #+#             */
/*   Updated: 2021/05/20 14:57:57 by woopark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	len_n;
	size_t	count;

	if (needle[0] == 0)
		return ((char *)haystack);
	len_n = ft_strlen(needle);
	i = 0;
	while (i < len && haystack[i])
	{
		count = 0;
		while (i + count < len && count < len_n)
		{
			if (haystack[i + count] != needle[count])
				break ;
			count++;
		}
		if (count == len_n)
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}
