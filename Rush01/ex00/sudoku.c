/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pradoste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/25 14:48:51 by pradoste          #+#    #+#             */
/*   Updated: 2018/03/25 19:14:50 by rastle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku_head.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	printBoard(char **board)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 9)
	{
		while (j < 9)
		{
			ft_putchar(board[i][j]);
			if (j < 8)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		j = 0;
		i++;
	}
}

char	**allocate_board(char **argv)
{
	char **board;
	int i;
	int j;

	i = 0;
	board = (char **)malloc(sizeof(char *) * 9);
	while (i < 9)
	{
		board[i] = (char *)malloc(sizeof(char) * 9);
		j = 0;
		while (j < 9)
		{
			board[i][j] = (argv[i + 1][j]);
			j++;
		}
		i++;
	}
	return (board);
}

void	solve(int **board)
{
	int row;
	int col;
	int num;

	if (!FindUnassignedLocation(board, &row, &col))
		return (1);
	num = 1;
	while (num <= 9)	
	{
		if (safe_place(board, row, col, num))
		{
			board[row][col] = num;
			if (solve(board))
				return(1);
			board[row][col]
		}
		num++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int **board;

	if (argc != 10)
	{
		write(1, "Error!\n,"  7);
		return (0)
	}
	board = allocate_board(argv);
	if board == 0
		{
			return (0);
		}
	if (solve(board, 0, 0))
		printBoard(board);
	else
		write(1, "Error!\n", 7)
			return (0);
}
