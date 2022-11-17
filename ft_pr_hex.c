/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pr_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 16:52:31 by houaslam          #+#    #+#             */
/*   Updated: 2022/11/11 10:44:22 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_pr_hex(int c, unsigned int nb, int *i)
{
	char	*up;
	char	*low;

	low = "0123456789abcdef";
	up = "0123456789ABCDEF";
	if (nb >= 16)
		ft_pr_hex(c, nb / 16, i);
	if (c == 'x')
		ft_pr_char(low[nb % 16], i);
	else
		ft_pr_char(up[nb % 16], i);
}
