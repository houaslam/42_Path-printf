/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 16:07:08 by houaslam          #+#    #+#             */
/*   Updated: 2022/11/11 14:13:00 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

void	ft_pr_char(int c, int *i);
void	ft_pr_str(char *str, int *i);
void	ft_pr_nb(int nb, int *i);
void	ft_pr_un(unsigned int nb, int *i);
void	ft_pr_hex(int c, unsigned int nb, int *i);
void	ft_pr_ad(unsigned long long nb, int *i);
int		ft_printf(const char *str, ...);
void	ft_pr_hexad(unsigned long long nb, int *i);

#endif