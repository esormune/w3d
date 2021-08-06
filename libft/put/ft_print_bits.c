/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_bits.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esormune <esormune@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 14:49:20 by esormune          #+#    #+#             */
/*   Updated: 2021/04/29 03:45:56 by esormune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	print_bits(unsigned char octet)
{
	char	*str;

	str = ft_itoa_base(octet, 2);
	if (!(str))
		return ;
	ft_putstr(str);
}
