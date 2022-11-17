/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 18:30:39 by houaslam          #+#    #+#             */
/*   Updated: 2022/11/11 16:26:20 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_spec(int c, va_list list, int *i)
{
	if (c == 'c')
		ft_pr_char(va_arg(list, int), i);
	else if (c == 's')
		ft_pr_str(va_arg(list, char *), i);
	else if (c == 'p')
		ft_pr_ad(va_arg(list, unsigned long long), i);
	else if (c == 'i' || c == 'd')
		ft_pr_nb(va_arg(list, int), i);
	else if (c == 'u')
		ft_pr_un(va_arg(list, unsigned int), i);
	else if (c == 'x' || c == 'X')
		ft_pr_hex(c, va_arg(list, unsigned long long), i);
	else if (c == '%')
		ft_pr_char('%', i);
	else
		ft_pr_char(c, i);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		o;
	va_list	list;

	va_start(list, str);
	i = 0;
	o = 0;
	while (str[o])
	{
		if (str[o] == '%')
		{
			o++;
			ft_spec(str[o], list, &i);
		}
		else
			ft_pr_char(str[o], &i);
		if (str[o])
			o++;
	}
	return (i);
}
