/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmattie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/04 13:53:10 by cmattie           #+#    #+#             */
/*   Updated: 2019/08/04 14:26:34 by cmattie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	position(int i, int j, int width, int lenght)
{
	if ((i == 0) && (j == 0))
	{
		ft_putchar('A');
	}
	else if ((i == lenght - 1) && j == 0 || i == 0 && j == width - 1)
	{
		ft_putchar('C');
	}
	else if ((i == lenght - 1) && (j == width - 1))
	{
		ft_putchar('A');
	}
	else if ((i == 0 || (i == lenght - 1)) && j > 0)
	{
		ft_putchar('B');
	}
	else if (i != 0 && (j == 0 || j == width - 1))
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < y)
	{
		while (j < x)
		{
			position(i, j, x, y);
			j++;
		}
		ft_putchar('\n');
		j = 0;
		i++;
	}
}
