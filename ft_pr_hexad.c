/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pr_hexad.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 10:45:06 by houaslam          #+#    #+#             */
/*   Updated: 2022/11/11 11:00:31 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_pr_hexad(unsigned long long nb, int *i)
{
	char	*low;

	low = "0123456789abcdef";
	if (nb >= 16)
		ft_pr_hexad(nb / 16, i);
	ft_pr_char(low[nb % 16], i);
}
