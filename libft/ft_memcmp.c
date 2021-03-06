/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yironmak <yironmak@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 12:00:00 by yironmak          #+#    #+#             */
/*   Updated: 2021/10/12 12:00:00 by yironmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*temp1;
	unsigned char	*temp2;

	i = -1;
	temp1 = (unsigned char *)s1;
	temp2 = (unsigned char *)s2;
	while (++i < n)
		if (temp1[i] != temp2[i])
			return (temp1[i] - temp2[i]);
	return (0);
}
