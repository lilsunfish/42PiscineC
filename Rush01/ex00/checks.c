/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   part1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pradoste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/25 19:04:34 by pradoste          #+#    #+#             */
/*   Updated: 2018/03/25 19:14:27 by rastle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku_head.h"

void    FindUnassignedLocation(int **board, int row, int col)
{
    while (row < 9)
    {
        while (col < 9)
        {
            if (board[row][col] == '.')
                return (1);
            col++;
        }
        row++;
    }
    return (0);
}

int     check_row(int **board, int row, int num)
{
    col = '0';
    while (col < 9)
    {
        if (board[row][col] == num)
            return (1);
        col++;
    }
    return (0);
}

int     check_col(int **board, int col, int num)
{
    row  = '0';
    while (row < 9)
    {
        if (board[row][col] == num)
            return (1);
        row++;
    }
    return (0);
}

int     check_box(char **board, int col, int row, int num)
{
    int box_row;
    int box_col;

    box_row = row - row % 3;
    box_col = col - col % 3;
    while (box_row < 3)
    {
        while (box_col < 3)
        {
            if (board[box_row][box_col] == num)
                return (1);
            box_col++;
        }
        box_row++;
    }
    return (0);
}

void    safe_place(int **board, int row, int col, int num)
{
    if (check_row(board, row, num) == 0)
        return (0);
    if (check_column(board, col, num) == 0)
        return (0);
    if (check_box(board, col, row, num) == 0)
        return (0);
    else
        return (1);
}
