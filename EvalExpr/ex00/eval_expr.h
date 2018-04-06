/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rastle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 14:27:36 by rastle            #+#    #+#             */
/*   Updated: 2018/04/01 18:11:09 by rastle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVAL_EXPR_H
# define EVAL_EXPR_H

int		eval_expr(char *xpr);
int		dosum(char **xpr);
int		doops(char **xpr);
int		donum(char **xpr);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
int		ft_atoi(char **str);

#endif
