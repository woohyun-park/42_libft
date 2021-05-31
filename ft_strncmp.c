/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woopark <woopark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 13:01:08 by woopark           #+#    #+#             */
/*   Updated: 2021/05/20 13:03:48 by woopark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t num)
{
	const unsigned char *str1_new;
	const unsigned char *str2_new;
	size_t				i;

	str1_new = (const unsigned char *)str1;
	str2_new = (const unsigned char *)str2;
	if (num == 0)
		return (0);
	i = 0;
	while (str1_new[i] && str2_new[i] && i < num)
	{
		if (str1_new[i] != str2_new[i])
			return (str1_new[i] - str2_new[i]);
		i++;
	}
	return (i == num ? 0 : str1_new[i] - str2_new[i]);
}
