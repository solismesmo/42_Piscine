/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: livieira <livieira@student.42.fr>          +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2023/07/21 17:05:33 by livieira          #+#    #+#             */
/*   Updated: 2023/07/21 17:05:33 by livieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define SIZE_INT 4
#define SIZE_INT_POINTER 4


struct s_data
{
	int **col_rows;
	int *size;
};

int	generate_array(int up, int down, struct s_data *ret);
int	generate_array_l1(int down, struct s_data *ret);
int	generate_array_l2(int down, struct s_data *ret);
int	generate_array_l3(int down, struct s_data *ret);
int	generate_array_l4(int down, struct s_data *ret);

void	initialize_array(int size, int ini[][4], int **array);
int	*pray(int row_nr, struct s_data *rows, struct s_data cols[],
		int matriz[4][4]);
void	initialize_colup(char *str_param, int *var_ini[]);
void	initialize_coldown(char *str_param, int *var_ini[]);
void	initialize_rowleft(char *str_param, int *var_ini[]);
void	initialize_rowright(char *str_param, int *var_ini[]);

void	clear_menory(struct s_data *col_base);
void	print_array(int matriz[4][4]);
void	calculate_col(int *col_up, int *col_down, struct s_data *col_base);
void	calculate_row(int *row_left, int *row_right, struct s_data col_base[4],
			int matriz[4][4]);

int	main(int argc, char *argv[])
{
	int matriz[4][4] = {{-1, -1, -1, -1}, {-1, -1, -1, -1}, {-1, -1, -1, -1},
		{-1, -1, -1, -1}};
	int row_left[4] = {-1, -1, -1, -1};
	int row_right[4] = {-1, -1, -1, -1};
	int col_up[4] = {-1, -1, -1, -1};
	int col_down[4] = {-1, -1, -1, -1};

	struct s_data col_base[4];

	if (argc != 1)
	{
		return (-2);
	}

	initialize_colup(argv, &col_up);
	initialize_coldown(argv, &col_down);
	initialize_rowleft(argv, &row_left);
	initialize_rowright(argv, &row_right);

	calculate_col(col_up, col_down, &col_base);
	calculate_row(row_left, row_right, col_base, matriz);

	clear_menory(&col_base);
	print_array(&matriz);
	return (0);
}

void	initialize_colup(char *str_param, int *var_ini[])
{
	int count;
	int ind;

	count = 0;
	ind = 0;
	while (str_param[count] != '\0')
	{
		if (str_param[count] != ' ')
		{
			ind++;
			if (ind == 0)
				var_ini[ind] = (int)str_param[count];
			if (ind == 1)
				var_ini[ind] = (int)str_param[count];
			if (ind == 2)
				var_ini[ind] = (int)str_param[count];
			if (ind == 3)
				var_ini[ind] = (int)str_param[count];
		}
		count++;
	}
}

void	initialize_coldown(char *str_param, int *var_ini[])
{
	int count;
	int ind;

	count = 0;
	ind = 0;
	while (str_param[count] != '\0')
	{
		if (str_param[count] != ' ')
		{
			ind++;
			if (ind == 4)
				var_ini[ind] = (int)str_param[count];
			if (ind == 5)
				var_ini[ind] = (int)str_param[count];
			if (ind == 6)
				var_ini[ind] = (int)str_param[count];
			if (ind == 7)
				var_ini[ind] = (int)str_param[count];
		}
		count++;
	}
}

void	initialize_rowleft(char *str_param, int *var_ini[])
{
	int count;
	int ind;

	count = 0;
	ind = 0;
	while (str_param[count] != '\0')
	{
		if (str_param[count] != ' ')
		{
			ind++;
			if (ind == 8)
				var_ini[ind] = (int)str_param[count];
			if (ind == 9)
				var_ini[ind] = (int)str_param[count];
			if (ind == 10)
				var_ini[ind] = (int)str_param[count];
			if (ind == 11)
				var_ini[ind] = (int)str_param[count];
		}
		count++;
	}
}

void	initialize_rowright(char *str_param, int *var_ini[])
{
	int count;
	int ind;

	count = 0;
	ind = 0;
	while (str_param[count] != '\0')
	{
		if (str_param[count] != ' ')
		{
			ind++;
			if (ind == 12)
				var_ini[ind] = (int)str_param[count];
			if (ind == 13)
				var_ini[ind] = (int)str_param[count];
			if (ind == 14)
				var_ini[ind] = (int)str_param[count];
			if (ind == 16)
				var_ini[ind] = (int)str_param[count];
		}
		count++;
	}
}

void	calculate_col(int *col_up, int *col_down, struct s_data *col_base)
{
	int y = 0;
	while (y < 4)
	{
		generate_array(col_up[y], col_down[y], &(col_base[y]));
		y++;
	}
}

void	clear_menory(struct s_data *col_base)
{
	int y = 0;
	while (y < 4)
	{
		free((col_base[y].col_rows));
		y++;
	}
}

void	print_array(int matriz[4][4])
{
	int x = 0;
	int y = 0;
	char cnum = ' ';

	while (x < 4)
	{
		y = 0;
		while (y < 4)
		{
			cnum = (char)matriz[x][y];
			write(1, &cnum, 1);
			write(1, ' ', 1);
			y++;
		}
		write(1, '\n', 1);
		x++;
	}
}

void	calculate_row(int *row_left, int *row_right, struct s_data *col_base,
		int matriz[4][4])
{
	struct s_data	row;
	int *line;
	int x = 0;
	while (x < 4)
	{
		generate_array(row_left[x], row_right[x], &row);
		line = (int *)pray(x, &row, col_base, matriz);
		matriz[x][0] = line[0];
		matriz[x][1] = line[1];
		matriz[x][2] = line[2];
		matriz[x][3] = line[3];
		free(line);
		free(row.col_rows);
		x++;
	}
}

int	generate_array(int up, int down, struct s_data *ret)
{
	int result = 0;
	if (up == 1)
	{
		result = generate_array_l1(down, ret);
	}
	if (up == 2)
	{
		result = generate_array_l2(down, ret);
	}
	if (up == 3)
	{
		result = generate_array_l3(down, ret);
	}
	if (up == 4)
	{
		result = generate_array_l4(down, ret);
	}
	return (result);
}

int	generate_array_l1(int down, struct s_data *ret)
{
	int result = 0;
	int **array;
	if (down == 1)
	{
		write(1, "2 x 4 does not exist", 20);
		write(1, '\n', 1);
		return (-1);
	}
	if (down == 2)
	{
		array = (int **)malloc(2 * SIZE_INT_POINTER);
		ret->size = (int *)malloc(1 * SIZE_INT);
		*(ret->size) = 2;
		int ar_init[2][4] = {{4, 1, 2, 3}, {4, 2, 1, 3}};
		initialize_array(2, ar_init, array);
	}
	if (down == 3)
	{
		array = (int **)malloc(3 * SIZE_INT_POINTER);
		ret->size = (int *)malloc(1 * SIZE_INT);
		*(ret->size) = 3;
		int ar_init[3][4] = {{4, 1, 3, 2}, {4, 2, 3, 1}, {4, 3, 1, 2}};
		initialize_array(3, ar_init, array);
	}
	if (down == 4)
	{
		array = (int **)malloc(1 * SIZE_INT);
		ret->size = (int *)malloc(1 * SIZE_INT);
		*(ret->size) = 1;
		int ar_init[1][4] = {{4, 3, 2, 1}};
		initialize_array(1, ar_init, array);
	}
	ret->col_rows = array;
	return (result);
}

int	generate_array_l2(int down, struct s_data *ret)
{
	int result = 0;
	int **array;
	if (down == 1)
	{
		array = (int **)malloc(2 * SIZE_INT_POINTER);
		ret->size = (int *)malloc(1 * SIZE_INT);
		*(ret->size) = 2;
		int ar_init[2][4] = {{3, 1, 2, 4}, {3, 2, 1, 4}};
		initialize_array(2, ar_init, array);
	}
	if (down == 2)
	{
		array = (int **)malloc(6 * SIZE_INT_POINTER);
		ret->size = (int *)malloc(1 * SIZE_INT);
		*(ret->size) = 6;
		int ar_init[6][4] = {{1, 4, 2, 3}, {2, 4, 1, 3}, {3, 1, 4, 2}, {3, 2, 4,
			1}, {3, 4, 1, 2}, {2, 1, 4, 3}};
		initialize_array(6, ar_init, array);
	}
	if (down == 3)
	{
		array = (int **)malloc(3 * SIZE_INT_POINTER);
		ret->size = (int *)malloc(1 * SIZE_INT);
		*(ret->size) = 3;
		int ar_init[3][4] = {{1, 4, 3, 2}, {2, 4, 3, 1}, {3, 4, 2, 1}};
		initialize_array(3, ar_init, array);
	}
	if (down == 4)
	{
		printf("2 x 4 does not exist");
		return (-1);
	}

	ret->col_rows = array;
	return (result);
}

int	generate_array_l3(int down, struct s_data *ret)
{
	int result = 0;
	int **array;

	if (down == 1)
	{
		array = (int **)malloc(3 * SIZE_INT_POINTER);
		ret->size = (int *)malloc(1 * SIZE_INT);
		*(ret->size) = 3;
		int ar_init[3][4] = {{1, 3, 2, 4}, {2, 1, 3, 4}, {2, 3, 1, 4}};
		initialize_array(3, ar_init, array);
	}
	if (down == 2)
	{
		array = (int **)malloc(3 * SIZE_INT_POINTER);
		ret->size = (int *)malloc(1 * SIZE_INT);
		*(ret->size) = 3;
		int ar_init[3][4] = {{1, 2, 4, 3}, {1, 3, 4, 2}, {2, 3, 4, 1}};
		initialize_array(3, ar_init, array);
	}
	if (down == 3)
	{
		write(1, "3 x 3 does not exist    ", 20);
		write(1, '\n', 1);
		return (-1);
	}
	if (down == 4)
	{
		write(1, "3 x 4 does not exist    ", 20);
		write(1, '\n', 1);
		return (-1);
	}

	ret->col_rows = array;
	return (result);
}

int	generate_array_l4(int down, struct s_data *ret)
{
	int result = 0;
	int **array;
	if (down == 1)
	{
		array = (int **)malloc(1 * SIZE_INT_POINTER);
		ret->size = (int *)malloc(1 * SIZE_INT);
		*(ret->size) = 1;
		int ar_init[1][4] = {{1, 2, 3, 4}};
		initialize_array(1, ar_init, array);
	}
	if (down == 2)
	{
		write(1, "4 x 2 does not exist    ", 20);
		write(1, '\n', 1);
		return (-1);
	}
	if (down == 3)
	{
		write(1, "4 x 3 does not exist    ", 20);
		write(1, '\n', 1);
		return (-1);
	}
	if (down == 4)
	{
		write(1, "4 x 4 does not exist    ", 20);
		write(1, '\n', 1);
		return (-1);
	}
	ret->col_rows = array;
	return (result);
}

void	initialize_array(int size, int ini[][4], int **array)
{
	int count;

	count = 0;
	while (count < size)
	{
		array[count] = (int *)malloc(4 * SIZE_INT);
		array[count][0] = ini[count][0];
		array[count][1] = ini[count][1];
		array[count][2] = ini[count][2];
		array[count][3] = ini[count][3];
		count++;
	}
}

int	*pray(int row_nr, struct s_data *rows, struct s_data cols[],
		int matriz[4][4])
{
	int c_lin = 0;
	int c_col = 0;
	int array_result[6][4] = {{-1, -1, -1, -1}, {-1, -1, -1, -1}, {-1, -1, -1,
		-1}, {-1, -1, -1, -1}, {-1, -1, -1, -1}, {-1, -1, -1, -1}};
	;
	int *result = malloc(4 * SIZE_INT);

	while (c_lin < *(rows->size))
	{
		array_result[c_lin][0] = rows->col_rows[c_lin][0];
		array_result[c_lin][1] = rows->col_rows[c_lin][1];
		array_result[c_lin][2] = rows->col_rows[c_lin][2];
		array_result[c_lin][3] = rows->col_rows[c_lin][3];
		c_lin++;
	}

	c_lin = 0;
	c_col = 0;
	int calc_col = 0;
	int match_col = 0;
	while (c_lin < 6)
	{
		c_col = 0;
		match_col = 0;
		if (array_result[c_lin][0] >= 1)
		{
			while (c_col < 4)
			{
				calc_col = 0;
				while (calc_col < *(cols[c_col].size))
				{
					if (array_result[c_lin][c_col] == cols[c_col].col_rows[calc_col][row_nr])
					{
						if (row_nr == 0)
						{
							match_col++;
						}
						else
						{
							int i_check_col = row_nr - 1;
							int check_col = 0;
							while (i_check_col >= 0)
							{
								if (matriz[i_check_col][c_col] != cols[c_col].col_rows[calc_col][i_check_col])
								{
									check_col--;
								}
								else
								{
									check_col++;
								}
								i_check_col--;
							}
							if (check_col == row_nr)
							{
								match_col++;
							}
						}
					}
					calc_col++;
				}
				c_col++;
			}
			if (match_col < 4)
			{
				array_result[c_lin][0] = -1;
				array_result[c_lin][1] = -1;
				array_result[c_lin][2] = -1;
				array_result[c_lin][3] = -1;
			}
		}
		c_lin++;
	}
	c_lin = 0;
	c_col = 1;
	int qtd_result = 0;
	while (c_lin < 6)
	{
		if (array_result[c_lin][0] >= 1)
		{
			result[0] = array_result[c_lin][0];
			result[1] = array_result[c_lin][1];
			result[2] = array_result[c_lin][2];
			result[3] = array_result[c_lin][3];
			qtd_result++;
		}
		c_lin++;
	}

	if (qtd_result > 1 || qtd_result == 0)
	{
		write(1, "not found  ", 12);
		write(1, &qtd_result, 1);
		write(1, '\n', 1);
		return (-1);
	}
	return (result);
}
