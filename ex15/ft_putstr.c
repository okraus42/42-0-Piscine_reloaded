/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okraus <okraus@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 13:40:09 by okraus            #+#    #+#             */
/*   Updated: 2025/05/19 13:42:01 by okraus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

// #include <unistd.h>

// void	ft_putchar(char c)
// {
// 	(void)write(1, &c, 1);
// }

// int	main(void)
// {
// 	ft_putstr("Hello world!\n");
// 	return (0);
// }
