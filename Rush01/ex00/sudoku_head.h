/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_head.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rastle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/25 19:02:01 by rastle            #+#    #+#             */
/*   Updated: 2018/03/25 19:17:23 by rastle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_H
# define SUDOKU_H
# include <stdlib.h>
# include <unistd.h>

void    find_location(int **board, int row, int col);
int     check_row(int **board, int row, int num);
int     check_col(int **board, int col, int num);
int     check_box(char **board, int col, int row, int num);
void    safe_place(int **board, int row, int col, int num);

#endif
