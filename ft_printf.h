/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 19:42:07 by adesgran          #+#    #+#             */
/*   Updated: 2021/12/14 13:41:21 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		print_i(va_list args);
int		print_d(va_list args);
int		print_c(va_list args);
int		print_s(va_list args);
int		print_x(va_list args);
int		print_upx(va_list args);
int		print_p(va_list args);
int		print_u(va_list args);
int		ft_printf(const char *s, ...);
void	ft_putchar_fd(char c, int fd);
int		ft_strlen(char *s);
void	ft_putstr_fd(char *s, int fd);

#endif
