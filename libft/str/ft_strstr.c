/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esormune <esormune@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/16 13:15:10 by esormune          #+#    #+#             */
/*   Updated: 2021/04/29 04:06:12 by esormune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		x;
	char	*hs;

	i = 0;
	x = 0;
	hs = (char *)haystack;
	if (needle[x] == '\0')
		return (hs);
	while (hs[i] != '\0')
	{
		x = 0;
		while (hs[i + x] == needle[x] && hs[i + x] != '\0')
		{
			if (needle[x + 1] == '\0')
				return (&hs[i]);
			x++;
		}
		i++;
	}
	return (NULL);
}
