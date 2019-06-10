/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thorker <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 17:57:42 by thorker           #+#    #+#             */
/*   Updated: 2019/01/21 16:56:53 by thorker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	if (c == '\0')
	{
		while (*(s + i) != '\0')
			i++;
		return ((char*)(s + i));
	}
	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
			return ((char*)(s + i));
		i++;
	}
	return (0);
}
