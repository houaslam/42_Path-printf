/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pr_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 16:00:29 by houaslam          #+#    #+#             */
/*   Updated: 2022/11/11 11:18:01 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_pr_str(char *str, int *i)
{
	int	o;

	o = 0;
	if (!str)
	{
		*i += write(1, "(null)", 6);
		return ;
	}
	while (str[o])
	{
		ft_pr_char(str[o], i);
		o++;
	}
}
