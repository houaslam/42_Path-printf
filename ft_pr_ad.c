/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pr_ad.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 17:41:26 by houaslam          #+#    #+#             */
/*   Updated: 2022/11/11 11:00:19 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_pr_ad(unsigned long long nb, int *i)
{
	ft_pr_str("0x", i);
	ft_pr_hexad(nb, i);
}
