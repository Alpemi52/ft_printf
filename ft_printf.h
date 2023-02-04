/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuftuog <amuftuog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:24:25 by amuftuog          #+#    #+#             */
/*   Updated: 2023/02/02 00:49:50 by amuftuog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *s, ...);
int		ft_putstr(char *str);
int		ft_putchar(char c);
int		ft_putnbr(int nb);
int		ft_u(unsigned int u);
int		ft_x(unsigned int x, int b);
int		ft_p(unsigned long p);

#endif
