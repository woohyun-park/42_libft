/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woopark <woopark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 15:39:28 by woopark           #+#    #+#             */
/*   Updated: 2021/05/20 20:08:11 by woopark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_malloc_tmp(char const *s, int *count, char c, int i)
{
	char	*result;

	*count = 0;
	while (s[i + *count] && s[i + *count] != c)
		(*count)++;
	result = (char *)malloc(*count + 1);
	result[*count] = 0;
	return (result);
}

static int	ft_count_tmp(char const *s, char c)
{
	int	i;
	int count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			while (s[i] && s[i] != c)
				i++;
			count++;
		}
		else
			i++;
	}
	return (count);
}

char		**ft_split(char const *s, char c)
{
	size_t		i;
	int			count;
	int			count_r;
	char		**result;
	char		*temp;

	count_r = 0;
	if (!(result = (char **)malloc(sizeof(char *) * (ft_count_tmp(s, c) + 1))))
		return (NULL);
	i = 0;
	while (i < ft_strlen(s))
	{
		if (s[i] == c)
			i++;
		else
		{
			if (!(temp = ft_malloc_tmp(s, &count, c, i)))
				return (NULL);
			result[count_r++] = ft_memcpy(temp, s + i, count);
			i += count;
		}
	}
	result[count_r] = 0;
	return (result);
}
