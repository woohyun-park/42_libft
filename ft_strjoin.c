/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woopark <woopark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 16:12:50 by woopark           #+#    #+#             */
/*   Updated: 2021/05/20 20:01:30 by woopark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len1;
	int		len2;
	char	*result;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if (!(result = malloc(len1 + len2 + 1)))
		return (NULL);
	ft_strlcpy(result, s1, len1 + 1);
	ft_strlcat(result + len1, s2, len2 + 1);
	return (result);
}
