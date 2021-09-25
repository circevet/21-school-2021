/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <mmicheli@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 10:25:57 by mmicheli          #+#    #+#             */
/*   Updated: 2021/09/10 10:51:43 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putch(char a);

void	ft_print_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_putch(*tab + '0');
		i++;
	}
}