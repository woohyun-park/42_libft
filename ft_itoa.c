/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woopark <woopark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 18:24:39 by woopark           #+#    #+#             */
/*   Updated: 2021/05/20 20:11:26 by woopark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_intmax(void)
{
	char *result;

	result = (char *)malloc(12);
	if (result == 0)
		return (NULL);
	result[0] = '-';
	result[1] = '2';
	result[2] = '1';
	result[3] = '4';
	result[4] = '7';
	result[5] = '4';
	result[6] = '8';
	result[7] = '3';
	result[8] = '6';
	result[9] = '4';
	result[10] = '8';
	result[11] = 0;
	return (result);
}

static int		ft_intlen(int n)
{
	int result;

	result = n <= 0 ? 1 : 0;
	while (n != 0)
	{
		n /= 10;
		result++;
	}
	return (result);
}

char			*ft_itoa(int n)
{
	int		len;
	char	*result;
	int		i;
	int		n_new;

	if (n == -2147483648)
		return (ft_intmax());
	len = ft_intlen(n);
	if (!(result = (char *)malloc(ft_intlen(n) + 1)))
		return (NULL);
	result[len] = 0;
	n_new = n < 0 ? -n : n;
	i = len - 1;
	while (i > 0)
	{
		result[i] = n_new % 10 + '0';
		n_new /= 10;
		i--;
	}
	if (n < 0)
		result[0] = '-';
	else
		result[0] = n_new % 10 + '0';
	return (result);
}
