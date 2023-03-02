/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jialiew <jialiew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 15:39:21 by jialiew           #+#    #+#             */
/*   Updated: 2023/03/01 22:29:34 by jialiew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>

int		error_msg(int j, int k);
void	ft_putstr(char *str);
int		ft_atoi(char *str);
void	ft_putnbr(int nb);
int		ft_strlen(char *c);
int		operators(char *op);
int		addition(int i, int k);
int		subtraction(int i, int k);
int		multiplication(int i, int k);
int		modulo(int i, int k);
int		division(int i, int k);

#endif
